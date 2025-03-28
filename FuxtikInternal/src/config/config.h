#pragma once

#include "../../ext/imgui/imgui.h"

#define STR_VERSION "v1.0"
#define STR_AUTHORS "creozthagreatest notbonzo"

namespace Config
{
	extern bool ShowWatermark;
	extern bool DeathmatchMode;

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

	namespace Aim
	{
		extern bool TriggerBot;
	}
}