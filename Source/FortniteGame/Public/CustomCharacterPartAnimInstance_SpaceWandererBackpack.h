#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomCharacterPartAnimInstance.h"
#include "CustomCharacterPartAnimInstance_SpaceWandererBackpack.generated.h"

UCLASS(Blueprintable, NonTransient)
class UCustomCharacterPartAnimInstance_SpaceWandererBackpack : public UCustomCharacterPartAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator SpinnerRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float JumpAlpha;
    
    UCustomCharacterPartAnimInstance_SpaceWandererBackpack();
};

