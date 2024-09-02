#include "FortAnimInput_ShoppingCart.h"

FFortAnimInput_ShoppingCart::FFortAnimInput_ShoppingCart() {
    bIsUsingShoppingCart = false;
    bIsUsingVehicle = false;
    CoastState = ECoastState::Idle;
    bIsCoastStatePedaling = false;
    bIsCoastStateCoasting = false;
    bIsCoastStateDismount = false;
    bIsCoastStateIdle = false;
    bIsInAir = false;
    bIsCoasting = false;
    bIsPedaling = false;
    bIsReadyToPedal = false;
    IsReadyToPedal = 1;
    bWantsToCoast = false;
    bIsCoastIdling = false;
    bIsStartCoasting = false;
    bIsEndCoasting = false;
    bIsDismountingFromCoast = false;
    bIsCoastingOrDismountingFromCoast = false;
    bIsStandingInPlace = false;
    bIsSprinting = false;
    bIsSprintingAndMovingForward = false;
    bIsMovingForwardNotSprinting = false;
    bIsBraking = false;
    bIsReversing = false;
    bIsMoving = false;
    bIsMovingForward = false;
    bIsMovingBackwards = false;
    bIsMovingOrTurningInPlace = false;
    bIsInAirSteady = false;
    bIsOnSlope = false;
    bAimFWD = false;
    bAimBWD = false;
    bAimLFT = false;
    bAimRGT = false;
    ForwardVelocity = 1;
    ForwardSpeedKmH = 1;
    CurrentBrakeForce = 1;
    RunForwardAlpha = 1;
    bIsAcceleratingForward = false;
    bIsAccelBreakingOrReversing = false;
    SteerAngle = 1;
    SteerAngleInterpSpeed = 1;
    CoastSteerAngleInterpSpeed = 1;
    IsReadyToPedalInterpSpeed = 1;
    StandingInPlaceSteerAngle = 1;
    SlopePitchDegreeAngle = 1;
    SlopeRollDegreeAngle = 1;
    PawnToVehicleDeltaYawAngleDegrees = 1;
    AimCardDirDeadZoneAngleDegrees = 1;
    AimCardDirAngleOffsetDegrees = 1;
    AimFWDDeltaAngleDegrees = 1;
    AimBWDDeltaAngleDegrees = 1;
    AimLFTDeltaAngleDegrees = 1;
    AimRGTDeltaAngleDegrees = 1;
    LastCardDirIndex = 0;
}
