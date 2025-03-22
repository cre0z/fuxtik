#pragma once
#include "source2sdk/client/C_CSWeaponBaseGun.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x1aa0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float m_flDisplayHealth"
    #pragma pack(push, 1)
    class C_WeaponShield : public client::C_CSWeaponBaseGun
    {
    public:
        // metadata: MNetworkEnable
        float m_flDisplayHealth; // 0x1a90        
        [[maybe_unused]] std::uint8_t pad_0x1a94[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_WeaponShield because it is not a standard-layout class
    static_assert(sizeof(C_WeaponShield) == 0x1aa0);
};
