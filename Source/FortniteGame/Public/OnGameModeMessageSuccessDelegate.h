#pragma once
#include "CoreMinimal.h"
#include "OnGameModeMessageSuccessDelegate.generated.h"

class AFortPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameModeMessageSuccess, AFortPlayerController*, OwnerController);
