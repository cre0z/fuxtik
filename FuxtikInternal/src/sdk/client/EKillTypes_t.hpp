#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 8
    // Alignment: 1
    // Size: 0x1
    enum class EKillTypes_t : std::uint8_t
    {
        KILL_NONE = 0,
        KILL_DEFAULT = 1,
        KILL_HEADSHOT = 2,
        KILL_BLAST = 3,
        KILL_BURN = 4,
        KILL_SLASH = 5,
        KILL_SHOCK = 6,
        KILLTYPE_COUNT = 7,
    };
};
