#include <Windows.h>
#include <d3d11.h>
#include <dxgi.h>
#include <cstdbool>
#include "base.h"
#include "../ext/kiero/kiero.h"
#include "../ext/imgui/imgui.h"
#include "../ext/imgui/imgui_impl_win32.h"
#include "../ext/imgui/imgui_impl_dx11.h"
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <fcntl.h>
#include <io.h>

DWORD WINAPI InitHooksThread(LPVOID lpReserved)
{
#ifdef _DEBUG
	AllocConsole();
	FILE* file;
	freopen_s(&file, "CONOUT$", "w", stdout);
#endif

	bool init_hook = false;
	do
	{
		if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
		{
			kiero::bind(8, (void**)& Base::oPresent, Base::hkPresent);
			init_hook = true;
		}
	} while (!init_hook);

	return TRUE;
}

BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		srand((unsigned int)time(nullptr));
		Base::module = hMod;
		DisableThreadLibraryCalls(hMod);
		CreateThread(nullptr, 0, InitHooksThread, hMod, 0, nullptr);
		break;
	case DLL_PROCESS_DETACH:
		kiero::shutdown();
		break;
	}
	return TRUE;
}