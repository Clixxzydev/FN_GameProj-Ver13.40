#pragma once
#include "CoreMinimal.h"
#include "ConvertEventDelegate.generated.h"

class AFortPlayerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FConvertEvent, AFortPlayerPawn*, InstigatorPawn);

