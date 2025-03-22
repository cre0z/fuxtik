#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 20
    // Alignment: 4
    // Size: 0x4
    enum class CSWeaponType : std::uint32_t
    {
        WEAPONTYPE_KNIFE = 0x0,
        WEAPONTYPE_PISTOL = 0x1,
        WEAPONTYPE_SUBMACHINEGUN = 0x2,
        WEAPONTYPE_RIFLE = 0x3,
        WEAPONTYPE_SHOTGUN = 0x4,
        WEAPONTYPE_SNIPER_RIFLE = 0x5,
        WEAPONTYPE_MACHINEGUN = 0x6,
        WEAPONTYPE_C4 = 0x7,
        WEAPONTYPE_TASER = 0x8,
        WEAPONTYPE_GRENADE = 0x9,
        WEAPONTYPE_EQUIPMENT = 0xa,
        WEAPONTYPE_STACKABLEITEM = 0xb,
        WEAPONTYPE_FISTS = 0xc,
        WEAPONTYPE_BREACHCHARGE = 0xd,
        WEAPONTYPE_BUMPMINE = 0xe,
        WEAPONTYPE_TABLET = 0xf,
        WEAPONTYPE_MELEE = 0x10,
        WEAPONTYPE_SHIELD = 0x11,
        WEAPONTYPE_ZONE_REPULSOR = 0x12,
        WEAPONTYPE_UNKNOWN = 0x13,
    };
};
