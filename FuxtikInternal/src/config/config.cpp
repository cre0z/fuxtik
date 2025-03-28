#include "config.h"
#include <Windows.h>
#include "../../ext/imgui/imgui.h"

bool Config::ShowWatermark = true;
bool Config::DeathmatchMode = false;

int Config::Keybinds::TriggerMenu = VK_INSERT;

bool Config::Visuals::ESP = false;
bool Config::Misc::Bhop = false;
bool Config::Misc::Hitsound = false;
bool Config::Misc::Hitmarker = false;
ImColor Config::Misc::HitmarkerColor = ImColor(255, 255, 255);
bool Config::Aim::TriggerBot = false;