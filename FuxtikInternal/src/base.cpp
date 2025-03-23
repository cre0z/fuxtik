#include "base.h"
#include "../ext/kiero/kiero.h"
#include "../ext/imgui/imgui.h"
#include "../ext/imgui/imgui_impl_win32.h"
#include "../ext/imgui/imgui_impl_dx11.h"
#include "config.h"
#include "features/visual/visuals.h"
#include "features/misc/bhop.h"
#include "features/offsets.h"
#include "menu/menu.h"

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

namespace Base {

	Present_t oPresent = nullptr;
	WNDPROC oWndProc = nullptr;

	HANDLE module = nullptr;
	HWND window = nullptr;
	ID3D11Device* device = nullptr;
	ID3D11DeviceContext* context = nullptr;
	IDXGISwapChain* swapChain = nullptr;
	ID3D11RenderTargetView* mainRenderTargetView = nullptr;

	bool isInitialized = false;
	bool shouldDetach = false;
	bool preventClickthrough = false;

	bool showMenu = false;

	static void InitImGui()
	{
		ImGui::CreateContext();
		ImGuiIO& io = ImGui::GetIO();
		io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
		ImGui_ImplWin32_Init(window);
		ImGui_ImplDX11_Init(device, context);
	}

	void Init(IDXGISwapChain* pSwapChain)
	{
		device->GetImmediateContext(&context);
		swapChain = pSwapChain;
		DXGI_SWAP_CHAIN_DESC sd;
		pSwapChain->GetDesc(&sd);
		window = sd.OutputWindow;
		ID3D11Texture2D* pBackBuffer;
		pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
		device->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
		pBackBuffer->Release();
		oWndProc = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)WndProc);
		
		InitImGui();
		Menu::CreateImGuiStyle();

		isInitialized = true;
	}

	void Shutdown()
	{
		shouldDetach = true;
	}

	void Detach(IDXGISwapChain* pSwapChain)
	{
		ImGui_ImplDX11_Shutdown();
		ImGui_ImplWin32_Shutdown();
		ImGui::DestroyContext();

		kiero::shutdown();
		device->Release();
		context->Release();
		pSwapChain->Release();

		oWndProc = (WNDPROC)SetWindowLongPtr(
			window,
			GWLP_WNDPROC,
			(LONG_PTR)(oWndProc));

		HANDLE hThread = CreateThread(nullptr, 0, [](LPVOID hMod) -> DWORD {
			Sleep(100);
			FreeLibraryAndExitThread((HMODULE)hMod, 0);
			return 0;
			}, module, 0, nullptr);

		if (hThread) CloseHandle(hThread);
	}

	HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
	{
		if (!isInitialized)
		{
			if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&device)))
			{
				Init(pSwapChain);
			}
			else
			{
				return oPresent(pSwapChain, SyncInterval, Flags);
			}
		}

		if (GetAsyncKeyState(Config::Keybinds::TriggerMenu) & 1)
		{
			showMenu = !showMenu;
		}

		ImGui_ImplDX11_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();

		if (Config::ShowWatermark)
		{
			Menu::CreateWatermark();
		}

		if (showMenu)
		{
			Menu::CreateMenu();
		}

		if (shouldDetach)
		{
			Detach(pSwapChain);
			return oPresent(pSwapChain, SyncInterval, Flags);
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

		context->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
		ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

		return oPresent(pSwapChain, SyncInterval, Flags);
	}

	LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
	{
		if (ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
		{
			return true;
		}

		/*
		// Clicking on anything in the menu will pass through to the game too.
		// This should work... but it doesn't.
		if (PreventClickthrough) {
			return false;
		}
		*/

		return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
	}
}