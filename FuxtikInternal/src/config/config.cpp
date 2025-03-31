#include "config.h"
#include <Windows.h>
#include "../../ext/imgui/imgui.h"

bool Config::ShowWatermark = true;
bool Config::DeathmatchMode = false;

int Config::Keybinds::TriggerMenu = VK_INSERT;

bool Config::Aim::Aimbot = false;
float Config::Aim::AimbotFOV = 1.0f;
float Config::Aim::AimbotSmoothing = 50.0f;
int Config::Aim::AimbotTargetBone = 6;
bool Config::Aim::RCS = false;
bool Config::Aim::TriggerBot = false;
int Config::Aim::TriggerBotDelay = 150.0f;

bool Config::Visuals::ESP = false;
bool Config::Visuals::BonesESP = false;

bool Config::Misc::Bhop = false;
bool Config::Misc::Hitsound = false;
bool Config::Misc::Hitmarker = false;
ImColor Config::Misc::HitmarkerColor = ImColor(255, 255, 255);
