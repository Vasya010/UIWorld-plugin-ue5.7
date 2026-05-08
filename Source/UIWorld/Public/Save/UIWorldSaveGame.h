#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "UIWorldSaveGame.generated.h"

UCLASS(BlueprintType)
class UIWORLD_API UUIWorldSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|Save")
	FString SavedLevelName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|Save")
	FDateTime SavedAtUtc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UIWorld|Save")
	int32 SaveVersion = 1;
};
