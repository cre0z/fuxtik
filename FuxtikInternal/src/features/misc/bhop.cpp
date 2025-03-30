#include <Windows.h>
#include <thread>
#include "bhop.h"
#include "../offsets.h"

void Cheats::Misc::Bhop()
{
	auto localPlayer = *(uintptr_t*)(Cheats::client + Offsets::dwLocalPlayerPawn);
	if (!localPlayer)
		return;

	uint32_t localFlags = *(uint32_t*)(localPlayer + Offsets::m_fFlags);
	if (GetAsyncKeyState(VK_SPACE) && (localFlags & 1)) {
		*reinterpret_cast<std::uintptr_t*>(Cheats::client + Offsets::Buttons::Jump) = 65537;
		std::this_thread::sleep_for(std::chrono::milliseconds(1));
		*reinterpret_cast<std::uintptr_t*>(Cheats::client + Offsets::Buttons::Jump) = 256;
	}
}
