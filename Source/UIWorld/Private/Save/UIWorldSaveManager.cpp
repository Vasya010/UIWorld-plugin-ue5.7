#include "Save/UIWorldSaveManager.h"

#include "Kismet/GameplayStatics.h"
#include "Save/UIWorldSaveGame.h"

UUIWorldSaveManager::UUIWorldSaveManager()
	: SaveSlotName(TEXT("UIWorld_Main_Save"))
	, UserIndex(0)
{
}

bool UUIWorldSaveManager::HasSave() const
{
	if (SaveSlotName.IsEmpty())
	{
		return false;
	}

	return UGameplayStatics::DoesSaveGameExist(SaveSlotName, UserIndex);
}

bool UUIWorldSaveManager::SaveLevelProgress(const FString& LevelName)
{
	if (SaveSlotName.IsEmpty() || LevelName.IsEmpty())
	{
		return false;
	}

	UUIWorldSaveGame* SaveObject = Cast<UUIWorldSaveGame>(UGameplayStatics::CreateSaveGameObject(UUIWorldSaveGame::StaticClass()));
	if (!SaveObject)
	{
		return false;
	}

	SaveObject->SavedLevelName = LevelName;
	SaveObject->SavedAtUtc = FDateTime::UtcNow();
	return UGameplayStatics::SaveGameToSlot(SaveObject, SaveSlotName, UserIndex);
}

bool UUIWorldSaveManager::LoadSavedLevelName(FString& OutLevelName) const
{
	OutLevelName.Reset();
	if (!HasSave())
	{
		return false;
	}

	USaveGame* LoadedGame = UGameplayStatics::LoadGameFromSlot(SaveSlotName, UserIndex);
	UUIWorldSaveGame* SaveObject = Cast<UUIWorldSaveGame>(LoadedGame);
	if (!SaveObject || SaveObject->SavedLevelName.IsEmpty())
	{
		return false;
	}

	OutLevelName = SaveObject->SavedLevelName;
	return true;
}

bool UUIWorldSaveManager::DeleteSave()
{
	if (SaveSlotName.IsEmpty())
	{
		return false;
	}
	return UGameplayStatics::DeleteGameInSlot(SaveSlotName, UserIndex);
}
