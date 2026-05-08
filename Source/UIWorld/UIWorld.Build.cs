using System.IO;
using UnrealBuildTool;

public class UIWorld : ModuleRules
{
	public UIWorld(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"UMG",
			"MediaAssets",
			"DLSSBlueprint",
			"StreamlineDLSSGBlueprint"
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"Slate",
			"SlateCore",
			"MoviePlayer",
			"RenderCore",
			"OnlineSubsystem",
			"OnlineSubsystemUtils",
			"Sockets"
		});

		PrivateDefinitions.Add("ZONEFALL_API=UIWORLD_API");
		PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Public", "UI"));
	}
}

