#include <chrono>
#include <ctime>
#include <sstream>
#include <vector>
#include <iomanip>
#include <string>

#include "menu.h"
#include "../config/config.h"
#include "../base.h"
#include "../features/visual/visuals.h"

#include "../../ext/kiero/kiero.h"
#include "../../ext/imgui/imgui.h"
#include "../../ext/imgui/imgui_impl_win32.h"
#include "../../ext/imgui/imgui_impl_dx11.h"

static Menu::Tab currentTab = Menu::Tab::Main;

void Menu::CreateImGuiStyle()
{
    ImGuiStyle& style = ImGui::GetStyle();
    style.WindowMinSize = ImVec2(Menu::WINDOW_MIN_WIDTH, Menu::WINDOW_MIN_HEIGHT);
    style.FramePadding = ImVec2(4, 2);
    style.ItemSpacing = ImVec2(6, 2);
    style.ItemInnerSpacing = ImVec2(6, 4);
    style.Alpha = 0.95f;
    style.WindowRounding = 4.0f;
    style.FrameRounding = 2.0f;
    style.IndentSpacing = 6.0f;
    style.ColumnsMinSpacing = 50.0f;
    style.GrabMinSize = 14.0f;
    style.GrabRounding = 16.0f;
    style.ScrollbarSize = 12.0f;
    style.ScrollbarRounding = 16.0f;

    auto& colors = style.Colors;
    colors[ImGuiCol_Text] = ImVec4(0.86f, 0.93f, 0.89f, 0.78f);
    colors[ImGuiCol_TextDisabled] = ImVec4(0.86f, 0.93f, 0.89f, 0.28f);
    colors[ImGuiCol_WindowBg] = ImVec4(0.13f, 0.14f, 0.17f, 1.00f);
    colors[ImGuiCol_Border] = ImVec4(0.31f, 0.31f, 1.00f, 0.00f);
    colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_FrameBg] = ImVec4(0.20f, 0.22f, 0.27f, 1.00f);
    colors[ImGuiCol_FrameBgHovered] = ImVec4(0.92f, 0.18f, 0.29f, 0.78f);
    colors[ImGuiCol_FrameBgActive] = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
    colors[ImGuiCol_TitleBg] = ImVec4(0.20f, 0.22f, 0.27f, 1.00f);
    colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.20f, 0.22f, 0.27f, 0.75f);
    colors[ImGuiCol_TitleBgActive] = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
    colors[ImGuiCol_MenuBarBg] = ImVec4(0.20f, 0.22f, 0.27f, 0.47f);
    colors[ImGuiCol_ScrollbarBg] = ImVec4(0.20f, 0.22f, 0.27f, 1.00f);
    colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.09f, 0.15f, 0.16f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.92f, 0.18f, 0.29f, 0.78f);
    colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
    colors[ImGuiCol_CheckMark] = ImVec4(0.71f, 0.22f, 0.27f, 1.00f);
    colors[ImGuiCol_SliderGrab] = ImVec4(0.47f, 0.77f, 0.83f, 0.14f);
    colors[ImGuiCol_SliderGrabActive] = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
    colors[ImGuiCol_Button] = ImVec4(0.47f, 0.77f, 0.83f, 0.14f);
    colors[ImGuiCol_ButtonHovered] = ImVec4(0.92f, 0.18f, 0.29f, 0.86f);
    colors[ImGuiCol_ButtonActive] = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
    colors[ImGuiCol_Header] = ImVec4(0.92f, 0.18f, 0.29f, 0.76f);
    colors[ImGuiCol_HeaderHovered] = ImVec4(0.92f, 0.18f, 0.29f, 0.86f);
    colors[ImGuiCol_HeaderActive] = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
    colors[ImGuiCol_Separator] = ImVec4(0.14f, 0.16f, 0.19f, 1.00f);
    colors[ImGuiCol_SeparatorHovered] = ImVec4(0.92f, 0.18f, 0.29f, 0.78f);
    colors[ImGuiCol_SeparatorActive] = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
    colors[ImGuiCol_ResizeGrip] = ImVec4(0.47f, 0.77f, 0.83f, 0.04f);
    colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.92f, 0.18f, 0.29f, 0.78f);
    colors[ImGuiCol_ResizeGripActive] = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
    colors[ImGuiCol_PlotLines] = ImVec4(0.86f, 0.93f, 0.89f, 0.63f);
    colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
    colors[ImGuiCol_PlotHistogram] = ImVec4(0.86f, 0.93f, 0.89f, 0.63f);
    colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
    colors[ImGuiCol_TextSelectedBg] = ImVec4(0.92f, 0.18f, 0.29f, 0.43f);
    colors[ImGuiCol_PopupBg] = ImVec4(0.20f, 0.22f, 0.27f, 0.9f);
    colors[ImGuiCol_ModalWindowDarkening] = ImVec4(0.20f, 0.22f, 0.27f, 0.73f);
}

static std::string GetCurrentTimeString()
{
    using namespace std::chrono;
    auto now = system_clock::now();
    std::time_t now_c = system_clock::to_time_t(now);
    std::tm localTime{};
#if defined(_MSC_VER)
    localtime_s(&localTime, &now_c);
#else
    localtime_r(&now_c, &localTime);
#endif
    std::ostringstream oss;
    oss << std::put_time(&localTime, "%c");
    return oss.str();
}

void Menu::CreateWatermark()
{
    ImVec2 displaySize = ImGui::GetIO().DisplaySize;
    ImVec2 relativePos(displaySize.x * 0.15f, displaySize.y * 0.1f);

    ImGui::SetNextWindowPos(relativePos);
    ImGui::SetNextWindowSize({ 296, 50 });

    ImGui::Begin("Watermark", nullptr,
        ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize |
        ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground);

    std::string timeStr = GetCurrentTimeString();
    ImGui::Text("Fuxtick " STR_VERSION " | %s", timeStr.c_str());
    ImGui::End();
}

static void RenderTabButtons()
{
    auto renderTabButton = [](const char* label, Menu::Tab tab) {
        if (ImGui::Button(label, ImVec2(150, 30))) {
            currentTab = tab;
        }
        ImGui::SameLine();
        };

    renderTabButton("Main", Menu::Tab::Main);
    renderTabButton("Aim", Menu::Tab::Aim);
    renderTabButton("Visuals", Menu::Tab::Visuals);
    renderTabButton("Misc", Menu::Tab::Misc);
    renderTabButton("Info", Menu::Tab::Info);
    ImGui::NewLine();
    ImGui::Separator();
}

void RenderMainTab()
{
    ImGui::Text("Welcome to Fuxtick " STR_VERSION "!");
    
    ImGui::Separator();

    ImGui::Checkbox("Deathmatch mode", &Config::DeathmatchMode);
    if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled))
    {
        ImGui::SetTooltip("Allows shooting and targetting everyone.");
    }

    ImGui::Separator();

    if (ImGui::Button("Panic mode!"))
    {
        Base::Shutdown();
        return;
    }
    if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled))
    {
        ImGui::SetTooltip("Ends hook and allows reinjection.");
    }
}

std::vector<const char *> boneList = {
    "Head",
    "Body",
    "Left Arm",
    "Right Arm",
    "Left Leg",
    "Right Leg"
};

void RenderAimTab()
{
    ImGui::Checkbox("Aimbot", &Config::Aim::Aimbot);
    if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled))
    {
        ImGui::SetTooltip("Enables Aimbot.");
    }

    ImGui::ListBox("Target bone", &Config::Aim::AimbotTargetBone, boneList.data(), static_cast<int>(boneList.size()));

    ImGui::SliderFloat("FOV", &Config::Aim::AimbotFOV, 0.f, 50.f, "%.2f");
    ImGui::SliderFloat("Smoothing", &Config::Aim::AimbotSmoothing, 0.f, 10.f, "%.2f");

    ImGui::Checkbox("RCS", &Config::Aim::RCS);
    if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled))
    {
        ImGui::SetTooltip("Enables aim punch compensation.");
    }

    ImGui::Separator();

    ImGui::SameLine();
    ImGui::Checkbox("Triggerbot", &Config::Aim::TriggerBot);
    ImGui::SliderInt("Triggerbot Delay", &Config::Aim::TriggerBotDelay, 0, 300);
}

void RenderVisualsTab()
{
    ImGui::Checkbox("ESP", &Config::Visuals::ESP);
    if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled)) {
        ImGui::SetTooltip("Enables ESP.");
    }

    ImGui::Checkbox("Bones ESP", &Config::Visuals::BonesESP);
    if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled)) {
        ImGui::SetTooltip("Show player bones.");
    }
}

void RenderMiscTab()
{
    ImGui::Checkbox("Watermark", &Config::ShowWatermark);
    ImGui::Checkbox("Bunnyhop", &Config::Misc::Bhop);
    if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled)) {
        ImGui::SetTooltip("Enables bunnyhopping.");
    }
    ImGui::Separator();
    ImGui::Checkbox("Hitsound", &Config::Misc::Hitsound);
    if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled)) {
        ImGui::SetTooltip("Play a sound when you hit a player.");
    }
}

void RenderInfoTab()
{
    ImGui::Text("Info tab content goes here.");
}

void Menu::CreateMenu()
{
    ImGui::SetNextWindowSize(ImVec2(WIDTH, HEIGHT));
    ImGui::Begin("Fuxtick " STR_VERSION " | " STR_AUTHORS, nullptr,
        ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);

    Base::preventClickthrough = ImGui::IsItemHovered() || ImGui::IsWindowHovered();

    RenderTabButtons();

    switch (currentTab) {
    case Menu::Tab::Main: RenderMainTab(); break;
    case Menu::Tab::Aim: RenderAimTab(); break;
    case Menu::Tab::Visuals: RenderVisualsTab(); break;
    case Menu::Tab::Misc: RenderMiscTab(); break;
    case Menu::Tab::Info: RenderInfoTab(); break;
    default: break;
    }

    ImGui::End();
}
