// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OnlineSessionSettings.h"
#include "Engine/GameInstance.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "EOSGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class EOSLEARNING_API UEOSGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UEOSGameInstance();
	
	virtual void Init() override;

	void Login();
	void OnLoginComplete(int32 LocalUserNum, bool bWasSuccessful, const FUniqueNetId& UserId, const FString& Error);

	UFUNCTION(BlueprintCallable)
	void CreateSession();
	void OnCreateSessionComplete(FName SessionName, bool bWasSuccessful);
	
	UFUNCTION(BlueprintCallable)
	void DestroySession();
	void OnDestroySessionComplete(FName SessionName, bool bWasSuccessful);
	
	UFUNCTION(BlueprintCallable)
	void FindFirstSession();
	void OnFindFirstSessionComplete(bool bWasSuccessful);

	UFUNCTION(BlueprintCallable)
	void FindAllSessions();
	void OnFindAllSessionsComplete(bool bWasSuccessful);

	UFUNCTION(BlueprintCallable)
	void JoinSessionByIndex(int32 SessionIndex);
	
	TSharedPtr<FOnlineSessionSearch> SearchSettings;

	void OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result);

	UFUNCTION(BlueprintCallable)
	void GetAllFriends();
	void OnGetAllFriendsComplete(int32 LocalUserNum, bool bWasSuccessful, const FString& ListName, const FString& ErrorStr);
	
	UFUNCTION(BlueprintCallable)
	void ShowFriendsList();

	UFUNCTION(BlueprintCallable)
	void ShowInviteUI();
	
	TArray<FOnlineSessionSearchResult> Sessions;
	
	UFUNCTION(BlueprintCallable)
	int32 GetNumOfSessions();

	UFUNCTION(BlueprintCallable)
	FString GetSessionID(int32 SessionIndex);

	UFUNCTION(BlueprintCallable)
	FString GetSessionOwnerName(int32 SessionIndex);

	UFUNCTION(BlueprintCallable)
	FString GetPlayerName();

	UFUNCTION(BlueprintCallable)
	int32 GetSessionPing(int32 SessionIndex);

	UFUNCTION(BlueprintCallable)
	int32 GetSessionMaxSlots(int32 SessionIndex);


protected:
	class IOnlineSubsystem* OnlineSubsystem;

	bool bIsLoggedIn;
};
