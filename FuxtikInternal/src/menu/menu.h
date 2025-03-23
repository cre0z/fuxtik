#pragma once
#include <d3d11.h>

namespace Menu
{
	constexpr int WIDTH = 900;
	constexpr int HEIGHT = 450;

    enum class Tab
    {
        Main,
        Aim,
        Visuals,
        Misc,
        Info
    };

	void CreateImGuiStyle();

	void CreateWatermark();
	void CreateMenu();
}