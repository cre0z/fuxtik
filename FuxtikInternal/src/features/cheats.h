#pragma once

#include <Windows.h>
#include <cstddef>

namespace Cheats
{
	extern uintptr_t client;
	extern uintptr_t engine;

	bool isInGame();
}