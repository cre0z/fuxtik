#include "base.h"
#include "../ext/kiero/kiero.h"
#include "../ext/imgui/imgui.h"
#include "../ext/imgui/imgui_impl_win32.h"
#include "../ext/imgui/imgui_impl_dx11.h"
#include "config/config.h"
#include "features/visual/visuals.h"
#include "features/misc/bhop.h"
#include "features/aim/triggerbot.h"
#include "features/aim/aimbot.h"
#include "features/offsets.h"
#include "menu/menu.h"

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

Base::Present_t Base::oPresent = nullptr;
WNDPROC Base::oWndProc = nullptr;

HANDLE Base::module = nullptr;
HWND Base::window = nullptr;
ID3D11Device* Base::device = nullptr;
ID3D11DeviceContext* Base::context = nullptr;
IDXGISwapChain* Base::swapChain = nullptr;
ID3D11RenderTargetView* Base::mainRenderTargetView = nullptr;

bool Base::isInitialized = false;
bool Base::shouldDetach = false;
bool Base::preventClickthrough = false;

bool Base::showMenu = false;

static void InitImGui()
{
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
	ImGui_ImplWin32_Init(Base::window);
	ImGui_ImplDX11_Init(Base::device, Base::context);
}

void Base::Init(IDXGISwapChain* pSwapChain)
{
	Base::device->GetImmediateContext(&Base::context);
	Base::swapChain = pSwapChain;
	DXGI_SWAP_CHAIN_DESC sd;
	pSwapChain->GetDesc(&sd);
	Base::window = sd.OutputWindow;
	ID3D11Texture2D* pBackBuffer = nullptr;
	pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
	if (!pBackBuffer) {
		MessageBoxA(nullptr, "Failed to get swapchain buffer!\nShutting down", "Fuxtik", MB_OK | MB_ICONWARNING);
		Base::Shutdown();
	}
	Base::device->CreateRenderTargetView(pBackBuffer, NULL, &Base::mainRenderTargetView);
	pBackBuffer->Release();
	Base::oWndProc = (WNDPROC)SetWindowLongPtr(Base::window, GWLP_WNDPROC, (LONG_PTR)Base::WndProc);
		
	InitImGui();
	Menu::CreateImGuiStyle();

	Base::isInitialized = true;
}

void Base::Shutdown()
{
	Base::shouldDetach = true;
}

void Base::Detach(IDXGISwapChain* pSwapChain)
{
	FreeConsole();

	ImGui_ImplDX11_Shutdown();
	ImGui_ImplWin32_Shutdown();
	ImGui::DestroyContext();

	kiero::shutdown();
	Base::device->Release();
	Base::context->Release();
	pSwapChain->Release();

	Base::oWndProc = (WNDPROC)SetWindowLongPtr(
		Base::window,
		GWLP_WNDPROC,
		(LONG_PTR)(Base::oWndProc));

	HANDLE hThread = CreateThread(nullptr, 0, [](LPVOID hMod) -> DWORD {
		Sleep(100);
		FreeLibraryAndExitThread((HMODULE)hMod, 0);
		return 0;
		}, Base::module, 0, nullptr);

	if (hThread) CloseHandle(hThread);
}

HRESULT __stdcall Base::hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	if (!Base::isInitialized)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&Base::device)))
		{
			Base::Init(pSwapChain);
		}
		else
		{
			return oPresent(pSwapChain, SyncInterval, Flags);
		}
	}

	if (GetAsyncKeyState(Config::Keybinds::TriggerMenu) & 1)
	{
		Base::showMenu = !Base::showMenu;
	}

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	if (Config::ShowWatermark)
	{
		Menu::CreateWatermark();
	}

	if (Base::showMenu)
	{
		Menu::CreateMenu();
	}

	if (shouldDetach)
	{
		Detach(pSwapChain);
		return oPresent(pSwapChain, SyncInterval, Flags);
	}

	if (Config::Aim::Aimbot)
	{
		Cheats::Aim::Aimbot();
	}

	if (Config::Aim::TriggerBot)
	{
		Cheats::Aim::Triggerbot();
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

LRESULT __stdcall Base::WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
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

	return CallWindowProc(Base::oWndProc, hWnd, uMsg, wParam, lParam);
}