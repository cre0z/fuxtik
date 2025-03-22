#pragma once

#include "../cheats.h"
#include "../../math/math.h"
#include <cstddef>
#include <cstdint>

#include "../../../ext/imgui/imgui.h"

namespace O
{
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x188CF70;
    constexpr std::ptrdiff_t dwEntityList = 0x1A38800;
    constexpr std::ptrdiff_t dwViewMatrix = 0x1AA45F0;

    constexpr std::ptrdiff_t m_hPlayerPawn = 0x814;
    constexpr std::ptrdiff_t m_iHealth = 0x344;
    constexpr std::ptrdiff_t m_iTeamNum = 0x3E3;
    constexpr std::ptrdiff_t m_vOldOrigin = 0x1324;
}

namespace Cheats
{
    namespace Visuals
    {
        void ESP();
    }
}