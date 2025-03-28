#pragma once
#include "source2sdk/client/CompositeMaterialMatchFilterType_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyElementNameFn
    #pragma pack(push, 1)
    struct CompositeMaterialMatchFilter_t
    {
    public:
        // metadata: MPropertyFriendlyName "Match Type"
        client::CompositeMaterialMatchFilterType_t m_nCompositeMaterialMatchFilterType; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // metadata: MPropertyFriendlyName "Name"
        CUtlString m_strMatchFilter; // 0x8        
        // metadata: MPropertyFriendlyName "Value"
        // metadata: MPropertyAttrStateCallback
        CUtlString m_strMatchValue; // 0x10        
        // metadata: MPropertyFriendlyName "Pass when True"
        bool m_bPassWhenTrue; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x19[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CompositeMaterialMatchFilter_t, m_nCompositeMaterialMatchFilterType) == 0x0);
    static_assert(offsetof(CompositeMaterialMatchFilter_t, m_strMatchFilter) == 0x8);
    static_assert(offsetof(CompositeMaterialMatchFilter_t, m_strMatchValue) == 0x10);
    static_assert(offsetof(CompositeMaterialMatchFilter_t, m_bPassWhenTrue) == 0x18);
    
    static_assert(sizeof(CompositeMaterialMatchFilter_t) == 0x20);
};
