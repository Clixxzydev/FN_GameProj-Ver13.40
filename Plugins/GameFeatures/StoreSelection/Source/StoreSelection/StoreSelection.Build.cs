using UnrealBuildTool;

public class StoreSelection : ModuleRules {
    public StoreSelection(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Account",
            "AmbientAudio",
            "AnimGraphRuntime",
            "AnimationBudgetAllocator",
            "AnimationCore",
            "AnimationSharing",
            "AssetRegistry",
            "AudioMixer",
            "BlueprintContext",
            "Chaos",
            "CinematicCamera",
            "ClientPilot",
            "ClothingSystemRuntimeInterface",
            "CommonDialogueRuntime",
            "CommonInput",
            "CommonUI",
            "Core",
            "CoreUObject",
            "Curie",
            "DataAssetDirectory",
            "DeveloperSettings",
            "Engine",
            "EpicCMSUIFramework",
            "EpicGameplayStatsRuntime",
            "FoleySound",
            "Foliage",
            "FortniteGame",
            "FortniteUI",
            "GameSubCatalog",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            "Gauntlet",
            "HeadMountedDisplay",
            "Hotfix",
            "InputCore",
            "JsonUtilities",
            "Landscape",
            "LauncherSocialDefaults",
            "LauncherSocialTypes",
            "LevelSequence",
            "LiveLinkInterface",
            "Lobby",
            "McpProfileSys",
            "MediaAssets",
            "MediaUtils",
            "MeshNetwork",
            "ModularGameplay",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "Niagara",
            "NiagaraAnimNotifies",
            "NiagaraCore",
            "NiagaraShader",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "Overlay",
            "Paper2D",
            "Party",
            "PhysXVehicles",
            "PhysicsCore",
            "PlayspaceSystem",
            "PropertyPath",
            "Rejoin",
            "ReplicationGraph",
            "SidecarSys",
            "SignificanceManager",
            "Slate",
            "SlateCore",
            "SocialUMG",
            "SolarisUi",
            "SubtitlesWidgets",
            "UMG",
            "Water",
            "WebBrowser",
        });
    }
}
