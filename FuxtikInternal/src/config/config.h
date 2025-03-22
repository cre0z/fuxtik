#pragma once

#include "../../ext/imgui/imgui.h"

namespace Config
{
	extern bool ShowWatermark;

	namespace Keybinds
	{
		extern int TriggerMenu;
	}

	namespace Visuals
	{
		extern bool ESP;
	}

	namespace Misc
	{
		extern bool Bhop;
		extern bool Hitsound;
		extern bool Hitmarker;
		extern ImColor HitmarkerColor;
	}
}