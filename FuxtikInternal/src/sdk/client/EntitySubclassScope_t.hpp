#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class EntitySubclassScope_t : std::uint32_t
    {
        SUBCLASS_SCOPE_NONE = 0xffffffff,
        // MPropertyFriendlyName "Precipitation"
        // MEntitySubclassScopeFile
        SUBCLASS_SCOPE_PRECIPITATION = 0x0,
        // MPropertyFriendlyName "PlayerWeapon"
        // MEntitySubclassScopeFile
        SUBCLASS_SCOPE_PLAYER_WEAPONS = 0x1,
        SUBCLASS_SCOPE_COUNT = 0x2,
    };
};
