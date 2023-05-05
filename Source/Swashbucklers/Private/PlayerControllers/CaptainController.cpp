// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControllers/CaptainController.h"
#include "GameplayAbilities/SBAttributeSet.h"
#include "Interfaces/PlayerInterface.h"
#include "HUD/CaptainHUD.h"
#include "HUD/InGameMenu.h"
#include "HUD/Announcement.h"
#include "HUD/VictoryScreen.h"
#include "HUD/ClientLobbyMenu.h"
#include "GameInstance/SBGameInstance.h"
#include "GameStates/SBGameState.h"
#include "GameModes/SBGameMode.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "PlayerStates/CaptainState.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"

void ACaptainController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACaptainController, MatchState);
}

void ACaptainController::BeginPlay()
{
	InitializePlayerController();
	HandleClientTransitionBetweenMaps();
	Super::BeginPlay();
	CaptainHUD = CaptainHUD == nullptr ? Cast<ACaptainHUD>(GetHUD()) : CaptainHUD;
	ServerCheckMatchState();
	BindLeaderboardDelegates();

}

void ACaptainController::BindLeaderboardDelegates()
{
	CaptainState = CaptainState == nullptr ? GetPlayerState<ACaptainState>() : CaptainState;
	if (CaptainState)
	{
		//CaptainState->GetAttributeSet()->OnBountyChange.AddUniqueDynamic(this, &ACaptainController::PlayerBountyChange);
		//CaptainState->GetAttributeSet()->O.AddUniqueDynamic(this, &APlayerShip::OnManaChanged);
	}
}

//void ACaptainController::PlayerBountyChange(int32 Bounty, AActor* DestroyedActor)
//{
//	if (HasAuthority())
//	{
//		MulticastPlayerBountyChange(Bounty, DestroyedActor, GetPawn());
//	}
//	else
//	{
//		ServerPlayerBountyChange(Bounty, DestroyedActor, GetPawn());
//	}
//}
//
//void ACaptainController::ServerPlayerBountyChange_Implementation(int32 Bounty, AActor* DestroyedActor, AActor* DestroyingActor)
//{
//	MulticastPlayerBountyChange(Bounty, DestroyedActor, DestroyingActor);
//}
//
//void ACaptainController::MulticastPlayerBountyChange_Implementation(int32 Bounty, AActor* DestroyedActor, AActor* DestroyingActor)
//{
//	IPlayerInterface* DestroyedActorPlayer = Cast<IPlayerInterface>(DestroyedActor);
//	IPlayerInterface* DestroyingActorPlayer = Cast<IPlayerInterface>(DestroyingActor);
//
//	if(DestroyedActorPlayer && DestroyingActorPlayer && DestroyedActorPlayer->GetPlayerCaptainState() && DestroyingActorPlayer->GetPlayerCaptainState())
//	{
//		ACaptainState* DestroyedCapState = DestroyedActorPlayer->GetPlayerCaptainState();
//		ACaptainState* DestroyingCapState = DestroyingActorPlayer->GetPlayerCaptainState();
//		if (DestroyedCapState && DestroyingCapState)
//		{
//			UE_LOG(LogTemp, Warning, TEXT("BountyChange multicast -- Destroyed Actor %s , Instigator Actor %s"), *DestroyedCapState->GetPlayerName(), *DestroyingCapState->GetPlayerName())
//		}
//
//	}
//}

void ACaptainController::InitializePlayerController()
{
	if (!IsLocalController()) return;
	InGameMenuWidget = CreateWidget<UInGameMenu>(this, InGameMenuClass);
	if (InGameMenuWidget)
	{
		InGameMenuWidget->Initialize();
	}

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(PlayerControllerContext, 0);
	}
	
}

void ACaptainController::HandleClientTransitionBetweenMaps()
{
	if (!HasAuthority())
	{
		UWorld* World = GetWorld();
		if (World)
		{
			ASBGameState* SBGameState = World->GetGameState<ASBGameState>();
			if (SBGameState)
			{
				if (SBGameState->GetIsInLobby() && ClientLobbyMenuClass)
				{
					ClientLobbyMenu = CreateWidget<UClientLobbyMenu>(this, ClientLobbyMenuClass);
					if (ClientLobbyMenu)
					{
						ClientLobbyMenu->Setup();
						ClientLobbyMenu->Initialize();
						UpdateTeamsOnClient(SBGameState->PirateTeam, SBGameState->PrivateerTeam);
					}
				}
				else
				{
					FInputModeGameOnly InputModeData;
					SetInputMode(InputModeData);
					bShowMouseCursor = false;
				}
			}
		}
	}
}

//UTexture2D* ACaptainController::GetSteamAvatar() {
//	uint32 Width;
//	uint32 Height;
//
//	if (SteamAPI_Init())
//	{
//		//Getting the PictureID from the SteamAPI and getting the Size with the ID
//		int Picture = SteamFriends()->GetMediumFriendAvatar(SteamUser()->GetSteamID());
//		SteamUtils()->GetImageSize(Picture, &Width, &Height);
//
//
//		if (Width > 0 && Height > 0)
//		{
//			//Creating the buffer "oAvatarRGBA" and then filling it with the RGBA Stream from the Steam Avatar
//			BYTE* oAvatarRGBA = new BYTE[Width * Height * 4];
//
//
//			//Filling the buffer with the RGBA Stream from the Steam Avatar and creating a UTextur2D to parse the RGBA Steam in
//			SteamUtils()->GetImageRGBA(Picture, (uint8*)oAvatarRGBA, 4 * Height * Width * sizeof(char));
//
//			//Swap R and B channels because for some reason the games whack
//			for (uint32 i = 0; i < (Width * Height * 4); i += 4)
//			{
//				uint8 Temp = oAvatarRGBA[i + 0];
//				oAvatarRGBA[i + 0] = oAvatarRGBA[i + 2];
//				oAvatarRGBA[i + 2] = Temp;
//			}
//
//			UTexture2D* Avatar = UTexture2D::CreateTransient(Width, Height, PF_B8G8R8A8);
//
//
//			//MAGIC!
//			uint8* MipData = (uint8*)Avatar->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
//			FMemory::Memcpy(MipData, (void*)oAvatarRGBA, Height * Width * 4);
//			Avatar->PlatformData->Mips[0].BulkData.Unlock();
//
//			//Setting some Parameters for the Texture and finally returning it
//			Avatar->PlatformData->NumSlices = 1;
//			Avatar->NeverStream = true;
//			//Avatar->CompressionSettings = TC_EditorIcon;
//
//			Avatar->UpdateResource();
//
//			return Avatar;
//		}
//		return nullptr;
//	}
//	return nullptr;
//}


void ACaptainController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SetHUDTime();
	CheckTimeSynch(DeltaTime);
	PollInit();

	ASBGameState* SBGameState = GetWorld()->GetGameState<ASBGameState>();

	if (MatchState == MatchState::TreasureSpawned && SBGameState->TreasureLocation != FVector::ZeroVector && bTreasureLocationOnClient == false && !HasAuthority())
	{
		CaptainHUD->UpdateHUDTreasureHasSpawned(SBGameState->TreasureLocation);
		bTreasureLocationOnClient = true;
	}

}

void ACaptainController::PollInit()
{
	if (bControllerInputSet == false)
	{
		SetupInputComponent();
	}
}

void ACaptainController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{

		EnhancedInputComponent->BindAction(InGameMenuAction, ETriggerEvent::Triggered, this, &ACaptainController::OpenInGameMenu);
		EnhancedInputComponent->BindAction(LeaderboardAction, ETriggerEvent::Triggered, this, &ACaptainController::ToggleLeaderboard);
		bControllerInputSet = true;
	}

}

void ACaptainController::OpenInGameMenu()
{
	if (InGameMenuWidget)
	{
		InGameMenuWidget->Setup();
	}
}

void ACaptainController::ToggleLeaderboard()
{
	CaptainHUD = CaptainHUD == nullptr ? Cast<ACaptainHUD>(GetHUD()) : CaptainHUD;
	if (CaptainHUD && CaptainHUD->LeaderboardOverlay)
	{
		CaptainHUD->ToggleLeaderboardOverlay();
	}
}

void ACaptainController::CreateClientLobbyWidget()
{
	if (ClientLobbyMenuClass && IsLocalController())
	{
		ClientLobbyMenu = CreateWidget<UClientLobbyMenu>(this, ClientLobbyMenuClass);
		ClientLobbyMenu->AddToViewport();
	}
}

void ACaptainController::UpdateTeamsOnClient(TArray<FString> PirateTeamNames, TArray<FString> PrivateerTeamNames)
{
	if (ClientLobbyMenu)
	{
		ClientLobbyMenu->UpdateClientLobbyWidget(PirateTeamNames, PrivateerTeamNames);
	}
}

void ACaptainController::OnMatchStateSet(FName State)
{
	MatchState = State;

	if (MatchState == MatchState::InProgress)
	{
		HandleMatchHasStarted();
		CheckIfPlayerOverlayValid();
	}
	if (MatchState == MatchState::WaitingForTreasureToSpawn)
	{
		HandleWaitingForTreasureToSpawn();
		CheckIfPlayerOverlayValid();

	}
	if (MatchState == MatchState::TreasureSpawned)
	{
		HandleTreasureHasSpawned();
		CheckIfPlayerOverlayValid();
	}
	if (MatchState == MatchState::TreasureCaptured)
	{
		HandleTreasureCaptured();
		CheckIfPlayerOverlayValid();
	}

}


void ACaptainController::OnRep_MatchStateSet()
{
	if (MatchState == MatchState::InProgress)
	{
		HandleMatchHasStarted();
		CheckIfPlayerOverlayValid();
	}
	if (MatchState == MatchState::WaitingForTreasureToSpawn)
	{
		HandleWaitingForTreasureToSpawn();
		CheckIfPlayerOverlayValid();
	}
	if (MatchState == MatchState::TreasureSpawned)
	{
		HandleTreasureHasSpawned();
		CheckIfPlayerOverlayValid();
	}
	if (MatchState == MatchState::TreasureCaptured)
	{
		HandleTreasureCaptured();
		CheckIfPlayerOverlayValid();
	}
}

void ACaptainController::CheckIfPlayerOverlayValid()
{
	CaptainHUD = CaptainHUD == nullptr ? Cast<ACaptainHUD>(GetHUD()) : CaptainHUD;
	if (CaptainHUD && !CaptainHUD->IsCaptainOverlayValid())
	{
		HandleMatchHasStarted();
	}
}


void ACaptainController::HandleMatchHasStarted()
{

	CaptainHUD = CaptainHUD == nullptr ? Cast<ACaptainHUD>(GetHUD()) : CaptainHUD;
	if (CaptainHUD)
	{
		CaptainHUD->AddCaptainOverlayToViewport();
		if (CaptainHUD->Announcement)
		{
			CaptainHUD->Announcement->SetVisibility(ESlateVisibility::Hidden);
		}
	}
}

void ACaptainController::HandleWaitingForTreasureToSpawn()
{
	CaptainHUD = CaptainHUD == nullptr ? Cast<ACaptainHUD>(GetHUD()) : CaptainHUD;
	if (CaptainHUD)
	{
		CaptainHUD->UpdateHUDTreasureWaitingToSpawn();
	}
}

void ACaptainController::HandleTreasureHasSpawned()
{
	CaptainHUD = CaptainHUD == nullptr ? Cast<ACaptainHUD>(GetHUD()) : CaptainHUD;
	if (CaptainHUD)
	{
		ASBGameState* SBGameState = GetWorld()->GetGameState<ASBGameState>();
		if (SBGameState && HasAuthority())
		{
			CaptainHUD->UpdateHUDTreasureHasSpawned(SBGameState->TreasureLocation);
		}
	}
}

void ACaptainController::HandleTreasureCaptured()
{
	CaptainHUD = CaptainHUD == nullptr ? Cast<ACaptainHUD>(GetHUD()) : CaptainHUD;
	if (CaptainHUD)
	{
		ASBGameState* SBGameState = GetWorld()->GetGameState<ASBGameState>();
		CaptainState = CaptainState == nullptr ? GetPlayerState<ACaptainState>() : CaptainState;
		if (SBGameState)
		{
			CaptainHUD->UpdateHUDTreasureHasBeenCaptured(SBGameState->TeamCapturingTreasure, CaptainState->GetPlayerTeam());			
		}

		if (!HasAuthority() && bTreasureLocationOnClient == true)
		{
			bTreasureLocationOnClient = false;
		}
	}
}



void ACaptainController::ReturnToMainMenu()
{
	if (GetPawn()->HasAuthority())
	{
		UWorld* World = GetWorld();
		if (World)
		{
			USBGameInstance* GameInstance = GetGameInstance<USBGameInstance>();
			if (GameInstance)
			{
				GameInstance->DestroySession();
			}
			World->ServerTravel("/Game/Core/Maps/MainMenu?listen");
		}
	}
	else
	{
		ClientTravel("/Game/Core/Maps/MainMenu?listen", TRAVEL_Absolute);
	}
}

void ACaptainController::RequestTeamSwitch()
{
	CaptainState = CaptainState == nullptr ? GetPlayerState<ACaptainState>() : CaptainState;
	if (CaptainState)
	{
		ServerRequestSwitchTeam(CaptainState);
	}

}

void ACaptainController::ServerRequestSwitchTeam_Implementation(ACaptainState* StateRequesting)
{
	USBGameInstance* SBGameInstance = GetGameInstance<USBGameInstance>();
	if (SBGameInstance)
	{
		SBGameInstance->SwitchTeams(StateRequesting);
	}
}

void ACaptainController::DisplayVictoryScreen(EBuildingType BuildingType)
{
	if (!GetPawn()->IsLocallyControlled() && bGameOver == true) return;

	if (BuildingType == EBuildingType::EBT_PirateHideout)
	{
		UVictoryScreen* PrivateerVictoryScreen = CreateWidget<UVictoryScreen>(this, PrivateerVictoryScreenClass);
		if (PrivateerVictoryScreen)
		{
			PrivateerVictoryScreen->AddToViewport();
			PrivateerVictoryScreen->PlayVictoryAnimation();
		}
	}
	else if (BuildingType == EBuildingType::EBT_PrivateerHQ)
	{
		UVictoryScreen* PirateVictoryScreen = CreateWidget<UVictoryScreen>(this, PirateVictoryScreenClass);
		if (PirateVictoryScreen)
		{
			PirateVictoryScreen->AddToViewport();
			PirateVictoryScreen->PlayVictoryAnimation();
		}
	}
	bGameOver = true;

	GetWorldTimerManager().SetTimer(ReturnToMainMenuTimer, this, &ACaptainController::ReturnToMainMenu, ReturnToMainMenuDelay);
}

void ACaptainController::SetHUDCountdown(float CountdownTime)
{
	CaptainHUD = CaptainHUD == nullptr ? Cast<ACaptainHUD>(GetHUD()) : CaptainHUD;

	if (CaptainHUD)
	{
		CaptainHUD->UpdateCountdown(CountdownTime);
	}
}

void ACaptainController::SetHUDAnnouncementCountdown(float CountdownTime)
{
	CaptainHUD = CaptainHUD == nullptr ? Cast<ACaptainHUD>(GetHUD()) : CaptainHUD;
	if (CaptainHUD)
	{
		CaptainHUD->UpdateAnnouncement(CountdownTime);
	}
}

void ACaptainController::SetHUDTime()
{
	float TimeLeft = 0.f;
	if (MatchState == MatchState::WaitingToStart) TimeLeft = WarmupTime - GetServerTime() + LevelStartingTime;
	else if (MatchState == MatchState::WaitingForTreasureToSpawn) TimeLeft = WarmupTime + (TreasureSpawnTime * NumberOfCaptures) + TimeTreasureActive - GetServerTime() + LevelStartingTime;
	//UE_LOG(LogTemp, Warning, TEXT("Time left....: %f"), TimeLeft)


	uint32 SecondsLeft = FMath::CeilToInt(TimeLeft);
	if (CountdownInt != SecondsLeft)
	{
		if (MatchState == MatchState::WaitingToStart)
		{
			SetHUDAnnouncementCountdown(SecondsLeft);
		}
		if (MatchState == MatchState::WaitingForTreasureToSpawn)
		{
			SetHUDCountdown(SecondsLeft);
		}
	}

	CountdownInt = SecondsLeft;
}

void ACaptainController::CheckTimeSynch(float DeltaTime)
{
	TimeSyncRunningTime += DeltaTime;

	if (IsLocalController() && TimeSyncRunningTime > TimeSyncFrequency)
	{
		ServerRequestServerTime(GetWorld()->GetTimeSeconds());
		TimeSyncRunningTime = 0.f;
	}
}

float ACaptainController::GetServerTime()
{
	if (HasAuthority())
	{
		return GetWorld()->GetTimeSeconds();
	}
	else
	{
		return GetWorld()->GetTimeSeconds() + ClientServerDelta;
	}
}

void ACaptainController::ReceivedPlayer()
{
	Super::ReceivedPlayer();
	if (IsLocalController())
	{
		ServerRequestServerTime(GetWorld()->GetTimeSeconds());
	}
}


void ACaptainController::ServerCheckMatchState_Implementation()
{
	ASBGameMode* SBGameMode = Cast<ASBGameMode>(UGameplayStatics::GetGameMode(this));
	if (SBGameMode)
	{
		WarmupTime = SBGameMode->WarmupTime;
		TreasureSpawnTime = SBGameMode->TreasureSpawnTime;
		LevelStartingTime = SBGameMode->LevelStartingTime;
		TimeTreasureActive = SBGameMode->TimeTreasureActive;
		MatchState = SBGameMode->GetMatchState();
		NumberOfCaptures = SBGameMode->NumberOfCaptures;
		ClientJoinMidgame(MatchState, WarmupTime, TreasureSpawnTime, LevelStartingTime, TimeTreasureActive, NumberOfCaptures);

		CaptainHUD = CaptainHUD == nullptr ? Cast<ACaptainHUD>(GetHUD()) : CaptainHUD;
		if (CaptainHUD && MatchState == MatchState::WaitingToStart)
		{
			CaptainHUD->AddAnnouncementToViewport();
		}
	}
}

void ACaptainController::ClientJoinMidgame_Implementation(FName StateOfMatch, float Warmup, float TimeToSpawnTreasure, float StartingTime, float ActiveTreasureTime, int32 NumCaps)
{
	MatchState = StateOfMatch;
	WarmupTime = Warmup;
	TreasureSpawnTime = TimeToSpawnTreasure;
	LevelStartingTime = StartingTime;
	TimeTreasureActive = ActiveTreasureTime;
	NumberOfCaptures = NumCaps;
	OnMatchStateSet(MatchState);

	if (!GetHUD()) return;
	CaptainHUD = CaptainHUD == nullptr ? Cast<ACaptainHUD>(GetHUD()) : CaptainHUD;
	if (CaptainHUD && MatchState == MatchState::WaitingToStart)
	{
		CaptainHUD->AddAnnouncementToViewport();
	}

}

void ACaptainController::ServerRequestServerTime_Implementation(float TimeOfClientRequest)
{
	float ServerTimeOfReceipt = GetWorld()->GetTimeSeconds();
	ClientReportServerTime(TimeOfClientRequest, ServerTimeOfReceipt);
}

void ACaptainController::ClientReportServerTime_Implementation(float TimeOfClientRequest, float TimeServerReceivedClientRequest)
{
	float RoundTripTime = GetWorld()->GetTimeSeconds() - TimeOfClientRequest;
	float CurrentServerTime = TimeServerReceivedClientRequest + (0.5f * RoundTripTime);
	ClientServerDelta = CurrentServerTime - GetWorld()->GetTimeSeconds();
}
