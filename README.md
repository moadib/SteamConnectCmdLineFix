# SteamConnectCmdLineFix

This module allows to use Steam session invites in UE4 project

## What's wrong?

**FOnlineSessionSteam::CheckPendingSessionInvite** tries to parse *"+connect <ip>"*, while **FOnlineSessionSteam::GetSteamConnectionString** generates *"-SteamConnectIP=<ip>"*

## How to use

Download repository to project Source folder

Add "SteamConnectCmdLineFix" to ExtraModuleNames in TargetRules
```cpp
ExtraModuleNames.AddRange(new string[] { ..., "SteamConnectCmdLineFix" });
```
