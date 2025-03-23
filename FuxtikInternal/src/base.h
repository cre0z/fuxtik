#pragma once
#include <Windows.h>
#include <d3d11.h>
#include <cstdbool>


namespace Base
{
	using Present_t = HRESULT(__stdcall*)(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
	using WNDPROC_t = LRESULT(CALLBACK*)(HWND, UINT, WPARAM, LPARAM);

	extern Present_t oPresent;
	extern WNDPROC_t oWndProc;

	extern HANDLE module;
	extern HWND window;
	extern ID3D11Device* device;
	extern ID3D11DeviceContext* context;
	extern IDXGISwapChain* swapChain;
	extern ID3D11RenderTargetView* mainRenderTargetView;

	extern bool isInitialized;
	extern bool shouldDetach;
	extern bool preventClickthrough;

	extern bool showMenu;

	void Init(IDXGISwapChain* pSwapChain);
	void Shutdown();
	void Detach(IDXGISwapChain* pSwapChain);

	HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
	LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
}
