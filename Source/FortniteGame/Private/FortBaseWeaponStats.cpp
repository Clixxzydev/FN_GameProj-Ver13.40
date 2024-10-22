#include "FortBaseWeaponStats.h"

FFortBaseWeaponStats::FFortBaseWeaponStats() {
    BaseLevel = 0;
    DmgPB = 1;
    DmgMid = 1;
    DmgLong = 1;
    DmgMaxRange = 1;
    EnvDmgPB = 1;
    EnvDmgMid = 1;
    EnvDmgLong = 1;
    EnvDmgMaxRange = 1;
    ImpactDmgPB = 1;
    ImpactDmgMid = 1;
    ImpactDmgLong = 1;
    ImpactDmgMaxRange = 1;
    bForceControl = false;
    RngPB = 1;
    RngMid = 1;
    RngLong = 1;
    RngMax = 1;
    DmgScaleTable = NULL;
    DmgScale = 1;
    EnvDmgScaleTable = NULL;
    EnvDmgScale = 1;
    ImpactDmgScaleTable = NULL;
    ImpactDmgScale = 1;
    DamageZone_Light = 1;
    DamageZone_Normal = 1;
    DamageZone_Critical = 1;
    DamageZone_Vulnerability = 1;
    KnockbackMagnitude = 1;
    MidRangeKnockbackMagnitude = 1;
    LongRangeKnockbackMagnitude = 1;
    KnockbackZAngle = 1;
    StunTime = 1;
    StunScale = 1;
    Durability = NULL;
    DurabilityScale = 1;
    DurabilityPerUse = 1;
    FullChargeDurabilityPerUse = 1;
    DiceCritChance = 1;
    DiceCritDamageMultiplier = 1;
    ReloadTime = 1;
    ReloadScale = 1;
    ReloadType = EFortWeaponReloadType::ReloadWholeClip;
    bAllowReloadInterrupt = false;
    bReloadInterruptIsImmediate = false;
    NumIndividualBulletsToReload = 0;
    ClipSize = 0;
    ClipScale = 1;
    InitialClips = 0;
    CartridgePerFire = 0;
    AmmoCostPerFire = 0;
    MaxAmmoCostPerFire = 0;
    MinChargeTime = 1;
    MaxChargeTime = 1;
    ChargeDownTime = 1;
    bAutoDischarge = false;
    MaxChargeTimeUntilDischarge = 1;
    MinChargeDamageMultiplier = 1;
    MaxChargeDamageMultiplier = 1;
    ChargeDamageMultiplierCurve = NULL;
    EquipAnimRate = 1;
    QuickBarSlotCooldownDuration = 1;
}

