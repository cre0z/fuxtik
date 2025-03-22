#include <Windows.h>
#include <d3d11.h>
#include <dxgi.h>
#include <cstdbool>
#include "../ext/kiero/kiero.h"
#include "../ext/imgui/imgui.h"
#include "../ext/imgui/imgui_impl_win32.h"
#include "../ext/imgui/imgui_impl_dx11.h"

#include "base.h"
#include "config/config.h"
#include "features/visual/visuals.h"
#include "features/misc/bhop.h"
#include "features/offsets.h"
#include "menu/menu.h"

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

void InitImGui()
{
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
	ImGui_ImplWin32_Init(Base::window);
	ImGui_ImplDX11_Init(Base::pDevice, Base::pContext);

	Menu::CreateImGuiStyle();
}

LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

	if (ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
	{
		return true;
	}

	/*
	// Clicking on anything in the menu will pass through to the game too.
	// This should work... but it doesn't.
	if (Base::PreventClickthrough) {
		return false;
	}
	*/

	return CallWindowProc(Base::oWndProc, hWnd, uMsg, wParam, lParam);
}

HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	if (!Base::IsInitialized)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)& Base::pDevice)))
		{
			Base::pDevice->GetImmediateContext(&Base::pContext);
			Base::pSwapChain = pSwapChain;
			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);
			Base::window = sd.OutputWindow;
			ID3D11Texture2D* pBackBuffer;
			pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)& pBackBuffer);
			Base::pDevice->CreateRenderTargetView(pBackBuffer, NULL, &Base::mainRenderTargetView);
			pBackBuffer->Release();
			Base::oWndProc = (WNDPROC)SetWindowLongPtr(Base::window, GWLP_WNDPROC, (LONG_PTR)WndProc);
			InitImGui();
			Base::IsInitialized = true;
		}
		else
		{
			return Base::oPresent(pSwapChain, SyncInterval, Flags);
		}
	}

	if (GetAsyncKeyState(Config::Keybinds::TriggerMenu) & 1)
	{
		Base::ShowMenu = !Base::ShowMenu;
	}

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();
	
	if (Config::ShowWatermark)
	{
		Menu::CreateWatermark();
	}

	if (Base::ShowMenu)
	{
		Menu::CreateMenu();
	}

	if (Base::ShouldDetach)
	{
		ImGui::End();
		ImGui::EndFrame();
		ImGui::Render();
		Base::pContext->OMSetRenderTargets(1, &Base::mainRenderTargetView, NULL);
		ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

		kiero::shutdown();
		Base::pDevice->Release();
		Base::pContext->Release();
		pSwapChain->Release();

		Base::oWndProc = (WNDPROC)SetWindowLongPtr(
			Base::window,
			GWLP_WNDPROC,
			(LONG_PTR)(Base::oWndProc));

		return Base::oPresent(pSwapChain, SyncInterval, Flags);
	}

	if (Config::Visuals::ESP)
	{
		Cheats::Visuals::ESP();
	}

	if (Config::Misc::Bhop)
	{
		Cheats::Misc::Bhop();
	}

	ImGui::Render();

	Base::pContext->OMSetRenderTargets(1, &Base::mainRenderTargetView, NULL);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

	return Base::oPresent(pSwapChain, SyncInterval, Flags);
}

DWORD WINAPI MainThread(LPVOID lpReserved)
{
	bool init_hook = false;
	do
	{
		if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
		{
			kiero::bind(8, (void**)& Base::oPresent, hkPresent);
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
		DisableThreadLibraryCalls(hMod);
		CreateThread(nullptr, 0, MainThread, hMod, 0, nullptr);
		break;
	case DLL_PROCESS_DETACH:
		kiero::shutdown();
		break;
	}
	return TRUE;
}