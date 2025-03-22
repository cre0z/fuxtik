#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x2
    // Standard-layout class: true
    // Size: 0x38
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "uint16 m_nItemDefIndex"
    // static metadata: MNetworkVarNames "uint16 m_nCount"
    #pragma pack(push, 1)
    struct WeaponPurchaseCount_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        uint16_t m_nItemDefIndex; // 0x30        
        // metadata: MNetworkEnable
        uint16_t m_nCount; // 0x32        
        [[maybe_unused]] std::uint8_t pad_0x34[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(WeaponPurchaseCount_t, m_nItemDefIndex) == 0x30);
    static_assert(offsetof(WeaponPurchaseCount_t, m_nCount) == 0x32);
    
    static_assert(sizeof(WeaponPurchaseCount_t) == 0x38);
};
