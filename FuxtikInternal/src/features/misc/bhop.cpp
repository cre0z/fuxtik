#include <Windows.h>
#include <thread>
#include "bhop.h"
#include "../offsets.h"

void Cheats::Misc::Bhop()
{
	if (GetAsyncKeyState(VK_SPACE)) {
		*reinterpret_cast<std::uintptr_t*>(Cheats::client + Offsets::Buttons::Jump) = 65537;
		std::this_thread::sleep_for(std::chrono::milliseconds(1));
		*reinterpret_cast<std::uintptr_t*>(client + Offsets::Buttons::Jump) = 256;
	}
}
