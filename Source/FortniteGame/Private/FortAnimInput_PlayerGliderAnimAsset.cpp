#include "FortAnimInput_PlayerGliderAnimAsset.h"

FFortAnimInput_PlayerGliderAnimAsset::FFortAnimInput_PlayerGliderAnimAsset() {
    Default_Base_BS = NULL;
    Default_BodyAdditive_MaleMedium_BS = NULL;
    Default_BodyAdditive_MaleLarge_BS = NULL;
    Default_BodyAdditive_FemaleSmall_BS = NULL;
    Default_BodyAdditive_FemaleMedium_BS = NULL;
    Default_BodyAdditive_FemaleLarge_BS = NULL;
    Default_TurnAdditive_MaleMedium_BS = NULL;
    Default_TurnAdditive_MaleLarge_BS = NULL;
    Default_TurnAdditive_FemaleSmall_BS = NULL;
    Default_TurnAdditive_FemaleMedium_BS = NULL;
    Default_TurnAdditive_FemaleLarge_BS = NULL;
    Into_Base_BS = NULL;
    Into_BodyAdditive_MaleMedium_BS = NULL;
    Into_BodyAdditive_MaleLarge_BS = NULL;
    Into_BodyAdditive_FemaleSmall_BS = NULL;
    Into_BodyAdditive_FemaleMedium_BS = NULL;
    Into_BodyAdditive_FemaleLarge_BS = NULL;
    Into_TurnAdditive_MaleMedium_BS = NULL;
    Into_TurnAdditive_MaleLarge_BS = NULL;
    Into_TurnAdditive_FemaleSmall_BS = NULL;
    Into_TurnAdditive_FemaleMedium_BS = NULL;
    Into_TurnAdditive_FemaleLarge_BS = NULL;
    Lean_MaleMedium_BS = NULL;
    Lean_MaleLarge_BS = NULL;
    Lean_FemaleSmall_BS = NULL;
    Lean_FemaleMedium_BS = NULL;
    Lean_FemaleLarge_BS = NULL;
    LeanAdditive_Center_MaleMedium_Pose = NULL;
    LeanAdditive_Center_MaleLarge_Pose = NULL;
    LeanAdditive_Center_FemaleSmall_Pose = NULL;
    LeanAdditive_Center_FemaleMedium_Pose = NULL;
    LeanAdditive_Center_FemaleLarge_Pose = NULL;
    LeanAdditive_Into_BS = NULL;
    LeanAdditive_ForwardInto_Anim = NULL;
    LeanAdditive_ForwardInto_FromDeploy_Anim = NULL;
    LeanAdditive_BackInto_Anim = NULL;
    LeanAdditive_LeftInto_Anim = NULL;
    LeanAdditive_RightInto_Anim = NULL;
    LeanAdditive_ForwardOut_Anim = NULL;
    LeanAdditive_BackOut_Anim = NULL;
    LeanAdditive_LeftOut_Anim = NULL;
    LeanAdditive_RightOut_Anim = NULL;
    ToGlide_BS = NULL;
    ToGlide_Lean_BS = NULL;
    ToDive_BS = NULL;
    ToDive_Lean_BS = NULL;
    Dive_WeaponR_Additive_BS = NULL;
    Glide_WeaponR_Additive_Anim = NULL;
    GenericAdditive_Male_BS = NULL;
    GenericAdditive_Female_BS = NULL;
    RootModPitchMin = 1;
    RootModPitchMax = 1;
    RootModYOffsetMin = 1;
    RootModYOffsetMax = 1;
    PlayerGliderType = EGliderType::HangGlider;
    bEnableSpringMods = false;
    bAllowPlayerDeployRootMod = false;
    bUseSurfStyle = false;
}

