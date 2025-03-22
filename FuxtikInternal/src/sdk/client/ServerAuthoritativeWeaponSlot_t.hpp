#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x2
    // Standard-layout class: true
    // Size: 0x30
    #pragma pack(push, 1)
    struct ServerAuthoritativeWeaponSlot_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x28]; // 0x0
        uint16_t unClass; // 0x28        
        uint16_t unSlot; // 0x2a        
        uint16_t unItemDefIdx; // 0x2c        
        [[maybe_unused]] std::uint8_t pad_0x2e[0x2];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ServerAuthoritativeWeaponSlot_t, unClass) == 0x28);
    static_assert(offsetof(ServerAuthoritativeWeaponSlot_t, unSlot) == 0x2a);
    static_assert(offsetof(ServerAuthoritativeWeaponSlot_t, unItemDefIdx) == 0x2c);
    
    static_assert(sizeof(ServerAuthoritativeWeaponSlot_t) == 0x30);
};
