#pragma once
#include "CoreMinimal.h"
#include "OnMainTabSelectedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMainTabSelectedDelegate, FName, TabName);

