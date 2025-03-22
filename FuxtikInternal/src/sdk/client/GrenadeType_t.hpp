#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 8
    // Alignment: 4
    // Size: 0x4
    enum class GrenadeType_t : std::uint32_t
    {
        GRENADE_TYPE_EXPLOSIVE = 0x0,
        GRENADE_TYPE_FLASH = 0x1,
        GRENADE_TYPE_FIRE = 0x2,
        GRENADE_TYPE_DECOY = 0x3,
        GRENADE_TYPE_SMOKE = 0x4,
        GRENADE_TYPE_SENSOR = 0x5,
        GRENADE_TYPE_SNOWBALL = 0x6,
        GRENADE_TYPE_TOTAL = 0x7,
    };
};
