using UnrealBuildTool;

public class SolarisUi : ModuleRules {
    public SolarisUi(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "MovieScene",
            "MovieSceneTracks",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
