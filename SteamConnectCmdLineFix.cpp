#include "SteamConnectCmdLineFix.h"

#include <CoreMinimal.h>
#include <Misc/CommandLine.h>

IMPLEMENT_GAME_MODULE(FSteamConnectCmdLineFixModule, SteamConnectCmdLineFix);

void FSteamConnectCmdLineFixModule::StartupModule()
{
#if !UE_SERVER
	// FOnlineSessionSteam::CheckPendingSessionInvite tries to parse "+connect <ip>", while FOnlineSessionSteam::GetSteamConnectionString generates "-SteamConnectIP=<ip>"
	FString ConnectIP;
	if (FParse::Value(FCommandLine::Get(), TEXT("SteamConnectIP="), ConnectIP))
	{
		FCommandLine::Append(*FString::Printf(TEXT(" +connect %s"), *ConnectIP));
	}
#endif
}

