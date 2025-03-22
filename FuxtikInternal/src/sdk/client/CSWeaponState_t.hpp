#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class CSWeaponState_t : std::uint32_t
    {
        WEAPON_NOT_CARRIED = 0x0,
        WEAPON_IS_CARRIED_BY_PLAYER = 0x1,
        WEAPON_IS_ACTIVE = 0x2,
    };
};
