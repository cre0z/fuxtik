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
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "attrib_definition_index_t m_iAttributeDefinitionIndex"
    // static metadata: MNetworkVarNames "float m_flValue"
    // static metadata: MNetworkVarNames "float m_flInitialValue"
    // static metadata: MNetworkVarNames "int m_nRefundableCurrency"
    // static metadata: MNetworkVarNames "bool m_bSetBonus"
    #pragma pack(push, 1)
    class CEconItemAttribute
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        uint16_t m_iAttributeDefinitionIndex; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x32[0x2]; // 0x32
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_iRawValue32"
        float m_flValue; // 0x34        
        // metadata: MNetworkEnable
        float m_flInitialValue; // 0x38        
        // metadata: MNetworkEnable
        int32_t m_nRefundableCurrency; // 0x3c        
        // metadata: MNetworkEnable
        bool m_bSetBonus; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x41[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CEconItemAttribute, m_iAttributeDefinitionIndex) == 0x30);
    static_assert(offsetof(CEconItemAttribute, m_flValue) == 0x34);
    static_assert(offsetof(CEconItemAttribute, m_flInitialValue) == 0x38);
    static_assert(offsetof(CEconItemAttribute, m_nRefundableCurrency) == 0x3c);
    static_assert(offsetof(CEconItemAttribute, m_bSetBonus) == 0x40);
    
    static_assert(sizeof(CEconItemAttribute) == 0x48);
};
