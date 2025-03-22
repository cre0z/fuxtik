#include <chrono>
#include <ctime>

#include "menu.h"
#include "../config/config.h"
#include "../base.h"
#include "../features/visual/visuals.h"

#include "../../ext/kiero/kiero.h"
#include "../../ext/imgui/imgui.h"
#include "../../ext/imgui/imgui_impl_win32.h"
#include "../../ext/imgui/imgui_impl_dx11.h"

void Menu::CreateImGuiStyle()
{
    ImGuiStyle& style = ImGui::GetStyle();
    style.WindowMinSize = ImVec2(160, 20);
    style.FramePadding = ImVec2(4, 2);
    style.ItemSpacing = ImVec2(6, 2);
    style.ItemInnerSpacing = ImVec2(6, 4);
    style.Alpha = 0.95f;
    style.WindowRounding = 4.0f;
    style.FrameRounding = 2.0f;
    style.IndentSpacing = 6.0f;
    style.ItemInnerSpacing = ImVec2(2, 4);
    style.ColumnsMinSpacing = 50.0f;
    style.GrabMinSize = 14.0f;
    style.GrabRounding = 16.0f;
    style.ScrollbarSize = 12.0f;
    style.ScrollbarRounding = 16.0f;

    style.Colors[ImGuiCol_Text] = ImVec4(0.86f, 0.93f, 0.89f, 0.78f);
    style.Colors[ImGuiCol_TextDisabled] = ImVec4(0.86f, 0.93f, 0.89f, 0.28f);
    style.Colors[ImGuiCol_WindowBg] = ImVec4(0.13f, 0.14f, 0.17f, 1.00f);
    style.Colors[ImGuiCol_Border] = ImVec4(0.31f, 0.31f, 1.00f, 0.00f);
    style.Colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    style.Colors[ImGuiCol_FrameBg] = ImVec4(0.20f, 0.22f, 0.27f, 1.00f);
    style.Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.92f, 0.18f, 0.29f, 0.78f);
    style.Colors[ImGuiCol_FrameBgActive] = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
    style.Colors[ImGuiCol_TitleBg] = ImVec4(0.20f, 0.22f, 0.27f, 1.00f);
    style.Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.20f, 0.22f, 0.27f, 0.75f);
    style.Colors[ImGuiCol_TitleBgActive] = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
    style.Colors[ImGuiCol_MenuBarBg] = ImVec4(0.20f, 0.22f, 0.27f, 0.47f);
    style.Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.20f, 0.22f, 0.27f, 1.00f);
    style.Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.09f, 0.15f, 0.16f, 1.00f);
    style.Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.92f, 0.18f, 0.29f, 0.78f);
    style.Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
    style.Colors[ImGuiCol_CheckMark] = ImVec4(0.71f, 0.22f, 0.27f, 1.00f);
    style.Colors[ImGuiCol_SliderGrab] = ImVec4(0.47f, 0.77f, 0.83f, 0.14f);
    style.Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
    style.Colors[ImGuiCol_Button] = ImVec4(0.47f, 0.77f, 0.83f, 0.14f);
    style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.92f, 0.18f, 0.29f, 0.86f);
    style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
    style.Colors[ImGuiCol_Header] = ImVec4(0.92f, 0.18f, 0.29f, 0.76f);
    style.Colors[ImGuiCol_HeaderHovered] = ImVec4(0.92f, 0.18f, 0.29f, 0.86f);
    style.Colors[ImGuiCol_HeaderActive] = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
    style.Colors[ImGuiCol_Separator] = ImVec4(0.14f, 0.16f, 0.19f, 1.00f);
    style.Colors[ImGuiCol_SeparatorHovered] = ImVec4(0.92f, 0.18f, 0.29f, 0.78f);
    style.Colors[ImGuiCol_SeparatorActive] = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
    style.Colors[ImGuiCol_ResizeGrip] = ImVec4(0.47f, 0.77f, 0.83f, 0.04f);
    style.Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.92f, 0.18f, 0.29f, 0.78f);
    style.Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
    style.Colors[ImGuiCol_PlotLines] = ImVec4(0.86f, 0.93f, 0.89f, 0.63f);
    style.Colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
    style.Colors[ImGuiCol_PlotHistogram] = ImVec4(0.86f, 0.93f, 0.89f, 0.63f);
    style.Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.92f, 0.18f, 0.29f, 1.00f);
    style.Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.92f, 0.18f, 0.29f, 0.43f);
    style.Colors[ImGuiCol_PopupBg] = ImVec4(0.20f, 0.22f, 0.27f, 0.9f);
    style.Colors[ImGuiCol_ModalWindowDarkening] = ImVec4(0.20f, 0.22f, 0.27f, 0.73f);
    
    // TODO: Change font to Ruda Bold
    /*
    ImFontConfig font;
    font.FontDataOwnedByAtlas = false;
    io.Fonts->AddFontFromMemoryTTF((void*)ruda_bold, sizeof(ruda_bold), 18.5f, &font);
    */
}

void Menu::CreateWatermark()
{
    auto start = std::chrono::system_clock::now();
    auto end = std::chrono::system_clock::now();
    char timestr[30];
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    ctime_s(timestr, sizeof(timestr), &end_time);

    ImGui::SetNextWindowPos({ 15, 45 });
    ImGui::SetNextWindowSize({ 296, 50 });

    ImGui::Begin("Watermark", NULL,
        ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground);

    ImGui::Text("Fuxtick v0.1 | %s", timestr);
    ImGui::End();
}

void Menu::CreateMenu()
{
    ImGui::SetNextWindowSize(ImVec2(Menu::WIDTH, Menu::HEIGHT));
    ImGui::Begin("Fuxtick v0.1 | creozthagreatest", NULL, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);
    Base::PreventClickthrough = false;
    if (ImGui::IsItemHovered() || ImGui::IsWindowHovered())
    {
        Base::PreventClickthrough = true;
    }
    
    ImGui::SameLine();
    if (ImGui::Button("Main", ImVec2(150, 30)))
    {
        Menu::currentTab = TAB_MAIN;
    }

    ImGui::SameLine();
    if (ImGui::Button("Aimbot", ImVec2(150, 30)))
    {
        Menu::currentTab = TAB_AIMBOT;
    }

    ImGui::SameLine();
    if (ImGui::Button("Visuals", ImVec2(150, 30)))
    {
        Menu::currentTab = TAB_VISUALS;
    }

    ImGui::SameLine();
    if (ImGui::Button("Misc", ImVec2(150, 30)))
    {
        Menu::currentTab = TAB_MISC;
    }

    ImGui::SameLine();
    if (ImGui::Button("Info", ImVec2(150, 30)))
    {
        Menu::currentTab = TAB_INFO;
    }

    ImGui::Separator();

    switch (Menu::currentTab)
    {
    case TAB_MAIN:
        ImGui::Text("Welcome to Fuxtick v0.1!");
        if (ImGui::Button("Panic mode!"))
        {
            Base::Shutdown();
            return;
        }
        if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled))
        {
            ImGui::SetTooltip("Ends hook and allows reinjection.");
        }
        break;
    case TAB_VISUALS:
        ImGui::Checkbox("ESP", &Config::Visuals::ESP);
        if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled))
        {
            ImGui::SetTooltip("Enables ESP.");
        }
        break;
    case TAB_MISC:
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
        break;
    default:
        break;
    }

    ImGui::End();
}