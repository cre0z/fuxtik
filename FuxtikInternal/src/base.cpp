#include "base.h"
#include "../ext/kiero/kiero.h"

Present Base::oPresent;
HWND Base::window = NULL;
WNDPROC Base::oWndProc;
ID3D11Device* Base::pDevice = NULL;
ID3D11DeviceContext* Base::pContext = NULL;
IDXGISwapChain* Base::pSwapChain;
ID3D11RenderTargetView* Base::mainRenderTargetView;

bool Base::IsInitialized = false;
bool Base::ShouldDetach = false;
bool Base::PreventClickthrough = false;

bool Base::ShowMenu = false;

void Base::Init()
{
}

void Base::Shutdown()
{
	Base::ShouldDetach = true;
}