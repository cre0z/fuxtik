#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class ChickenActivity : std::uint32_t
    {
        IDLE = 0x0,
        SQUAT = 0x1,
        WALK = 0x2,
        RUN = 0x3,
        GLIDE = 0x4,
        LAND = 0x5,
        PANIC = 0x6,
    };
};
