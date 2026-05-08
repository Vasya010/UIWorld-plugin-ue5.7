#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UIWorldSaveManager.generated.h"

UCLASS(BlueprintType, Blueprintable)
class UIWORLD_API UUIWorldSaveManager : public UObject
{
	GENERATED_BODY()

public:
	UUIWorldSaveManager();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|Save")
	FString SaveSlotName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|Save")
	int32 UserIndex;

	UFUNCTION(BlueprintCallable, Category = "UIWorld|Save")
	bool HasSave() const;

	UFUNCTION(BlueprintCallable, Category = "UIWorld|Save")
	bool SaveLevelProgress(const FString& LevelName);

	UFUNCTION(BlueprintCallable, Category = "UIWorld|Save")
	bool LoadSavedLevelName(FString& OutLevelName) const;

	UFUNCTION(BlueprintCallable, Category = "UIWorld|Save")
	bool DeleteSave();
};
