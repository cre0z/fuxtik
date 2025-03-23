#include <chrono>
#include <ctime>
#include <sstream>
#include <iomanip>
#include <string>

#include "menu.h"
#include "../config.h"
#include "../base.h"
#include "../features/visual/visuals.h"

#include "../../ext/kiero/kiero.h"
#include "../../ext/imgui/imgui.h"
#include "../../ext/imgui/imgui_impl_win32.h"
#include "../../ext/imgui/imgui_impl_dx11.h"

namespace Menu {

    constexpr float WINDOW_MIN_WIDTH = 160.0f;
    constexpr float WINDOW_MIN_HEIGHT = 20.0f;

    void CreateImGuiStyle()
    {
        ImGuiStyle& style = ImGui::GetStyle();
        style.WindowMinSize = ImVec2(WINDOW_MIN_WIDTH, WINDOW_MIN_HEIGHT);
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

        // Optional: Configure font (e.g., Ruda Bold) if desired.
        /*
        ImFontConfig fontConfig;
        fontConfig.FontDataOwnedByAtlas = false;
        io.Fonts->AddFontFromMemoryTTF((void*)ruda_bold, sizeof(ruda_bold), 18.5f, &fontConfig);
        */
    }

    std::string GetCurrentTimeString()
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

    void CreateWatermark()
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

    Tab currentTab = Tab::Main;

    void RenderTabButtons()
    {
        auto renderTabButton = [](const char* label, Tab tab) {
            if (ImGui::Button(label, ImVec2(150, 30)))
            {
                currentTab = tab;
            }
            ImGui::SameLine();
            };

        renderTabButton("Main", Tab::Main);
        renderTabButton("Aim", Tab::Aim);
        renderTabButton("Visuals", Tab::Visuals);
        renderTabButton("Misc", Tab::Misc);
        renderTabButton("Info", Tab::Info);
        ImGui::NewLine();
        ImGui::Separator();
    }

    void RenderMainTab()
    {
        ImGui::Text("Welcome to Fuxtick " STR_VERSION "!");
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

    void RenderAimTab()
    {
        ImGui::Checkbox("Triggerbot", &Config::Aim::TriggerBot);
        ImGui::Text("Aimbot settings go here.");
    }

    void RenderVisualsTab()
    {
        ImGui::Checkbox("ESP", &Config::Visuals::ESP);
        if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled))
        {
            ImGui::SetTooltip("Enables ESP.");
        }
    }

    void RenderMiscTab()
    {
        ImGui::Checkbox("Watermark", &Config::ShowWatermark);
        ImGui::Checkbox("Bunnyhop", &Config::Misc::Bhop);
        if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled))
        {
            ImGui::SetTooltip("Enables bunnyhopping.");
        }
        ImGui::Separator();
        ImGui::Checkbox("Hitsound", &Config::Misc::Hitsound);
        if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled))
        {
            ImGui::SetTooltip("Play a sound when you hit a player.");
        }
    }

    void RenderInfoTab()
    {
        ImGui::Text("Info tab content goes here.");
    }

    void CreateMenu()
    {
        ImGui::SetNextWindowSize(ImVec2(Menu::WIDTH, Menu::HEIGHT));
        ImGui::Begin("Fuxtick " STR_VERSION " | " STR_AUTHORS, nullptr,
            ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);

        Base::preventClickthrough = ImGui::IsItemHovered() || ImGui::IsWindowHovered();

        RenderTabButtons();

        switch (currentTab)
        {
        case Tab::Main:
            RenderMainTab();
            break;
        case Tab::Aim:
            RenderAimTab();
            break;
        case Tab::Visuals:
            RenderVisualsTab();
            break;
        case Tab::Misc:
            RenderMiscTab();
            break;
        case Tab::Info:
            RenderInfoTab();
            break;
        default:
            break;
        }

        ImGui::End();
    }

} // namespace Menu
