#include "cheats.h"
#include <cstddef>
#include <Windows.h>

uintptr_t Cheats::client = (uintptr_t)GetModuleHandle("client.dll");