using UnrealBuildTool;

public class SteamConnectCmdLineFix : ModuleRules
{
	public SteamConnectCmdLineFix(ReadOnlyTargetRules Target)
		: base(Target)
	{
		PrivatePCHHeaderFile = "SteamConnectCmdLineFix.h";

		PublicIncludePaths.AddRange(new string[]
		{
			ModuleDirectory,
		});

		PublicDependencyModuleNames.AddRange(new string[] 
		{
			"Core",
			"Engine"
		});
	}
}
