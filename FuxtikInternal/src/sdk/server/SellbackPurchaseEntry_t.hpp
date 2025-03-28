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
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x48
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "item_definition_index_t m_unDefIdx"
    // static metadata: MNetworkVarNames "int m_nCost"
    // static metadata: MNetworkVarNames "int m_nPrevArmor"
    // static metadata: MNetworkVarNames "bool m_bPrevHelmet"
    // static metadata: MNetworkVarNames "CEntityHandle m_hItem"
    #pragma pack(push, 1)
    struct SellbackPurchaseEntry_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        uint16_t m_unDefIdx; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x32[0x2]; // 0x32
        // metadata: MNetworkEnable
        int32_t m_nCost; // 0x34        
        // metadata: MNetworkEnable
        int32_t m_nPrevArmor; // 0x38        
        // metadata: MNetworkEnable
        bool m_bPrevHelmet; // 0x3c        
        [[maybe_unused]] std::uint8_t pad_0x3d[0x3]; // 0x3d
        // metadata: MNetworkEnable
        CEntityHandle m_hItem; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x44[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(SellbackPurchaseEntry_t, m_unDefIdx) == 0x30);
    static_assert(offsetof(SellbackPurchaseEntry_t, m_nCost) == 0x34);
    static_assert(offsetof(SellbackPurchaseEntry_t, m_nPrevArmor) == 0x38);
    static_assert(offsetof(SellbackPurchaseEntry_t, m_bPrevHelmet) == 0x3c);
    static_assert(offsetof(SellbackPurchaseEntry_t, m_hItem) == 0x40);
    
    static_assert(sizeof(SellbackPurchaseEntry_t) == 0x48);
};
