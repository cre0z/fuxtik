#pragma once
#include <d3d11.h>

namespace Menu
{
	constexpr int WIDTH = 900;
	constexpr int HEIGHT = 450;

	enum tabs {
		TAB_MAIN = 0,
		TAB_AIMBOT = 1,
		TAB_VISUALS = 2,
		TAB_MISC = 3,
		TAB_INFO = 4
	};

	static int currentTab = 0;

	void CreateImGuiStyle();

	void CreateWatermark();
	void CreateMenu();
}