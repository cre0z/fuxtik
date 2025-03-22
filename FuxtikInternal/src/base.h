#pragma once
#include <Windows.h>
#include <d3d11.h>
#include <cstdbool>

typedef HRESULT(__stdcall* Present) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef uintptr_t PTR;

namespace Base
{
	extern Present oPresent;
	extern HWND window;
	extern WNDPROC oWndProc;
	extern ID3D11Device* pDevice;
	extern ID3D11DeviceContext* pContext;
	extern IDXGISwapChain* pSwapChain;
	extern ID3D11RenderTargetView* mainRenderTargetView;

	extern bool IsInitialized;
	extern bool ShouldDetach;
	extern bool PreventClickthrough;

	extern bool ShowMenu;

	void Init();
	void Shutdown();
}
