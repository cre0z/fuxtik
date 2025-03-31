#include "cheats.h"
#include "../base.h"
#include "../config/config.h"
#include "visual/visuals.h"
#include "misc/bhop.h"
#include "aim/triggerbot.h"
#include "aim/aimbot.h"
#include "offsets.h"
#include <cstddef>
#include <Windows.h>

uintptr_t Cheats::client = (uintptr_t)GetModuleHandle("client.dll");
uintptr_t Cheats::engine = (uintptr_t)GetModuleHandle("engine2.dll");

bool Cheats::isInGame()
{
	uintptr_t engPtr = *(uintptr_t*)(Cheats::engine + Offsets::dwNetworkGameClient);
	int gameState = *(int*)(engPtr + Offsets::dwNetworkGameClient_signOnState);

	if (gameState == 6)
		return true;

	return false;
}