#pragma once
#include "source2sdk/server/CPredictedViewModel.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x968
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkOverride "m_hWeapon"
    // static metadata: MNetworkVarNames "bool m_bShouldIgnoreOffsetAndAccuracy"
    // static metadata: MNetworkVarNames "uint32 m_nWeaponParity"
    #pragma pack(push, 1)
    class CCSGOViewModel : public server::CPredictedViewModel
    {
    public:
        // metadata: MNetworkEnable
        bool m_bShouldIgnoreOffsetAndAccuracy; // 0x930        
        [[maybe_unused]] std::uint8_t pad_0x931[0x3]; // 0x931
        // metadata: MNetworkEnable
        uint32_t m_nWeaponParity; // 0x934        
        uint32_t m_nOldWeaponParity; // 0x938        
        [[maybe_unused]] std::uint8_t pad_0x93c[0x2c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSGOViewModel because it is not a standard-layout class
    static_assert(sizeof(CCSGOViewModel) == 0x968);
};
