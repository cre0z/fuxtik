#pragma once
#include <d3d11.h>

namespace Menu
{
	constexpr int WIDTH = 900;
	constexpr int HEIGHT = 450;

    constexpr float WINDOW_MIN_WIDTH = 160.0f;
    constexpr float WINDOW_MIN_HEIGHT = 20.0f;

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