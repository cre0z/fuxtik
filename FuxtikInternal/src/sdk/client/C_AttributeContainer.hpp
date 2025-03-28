#pragma once
#include "source2sdk/client/CAttributeManager.hpp"
#include "source2sdk/client/C_EconItemView.hpp"
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
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4a8
    // Has VTable
    // MNetworkNoBase
    // 
    // static metadata: MNetworkIncludeByName "m_ProviderType"
    // static metadata: MNetworkIncludeByName "m_hOuter"
    // static metadata: MNetworkIncludeByName "m_iReapplyProvisionParity"
    // static metadata: MNetworkIncludeByName "m_Item"
    // static metadata: MNetworkVarNames "CEconItemView m_Item"
    #pragma pack(push, 1)
    class C_AttributeContainer : public client::CAttributeManager
    {
    public:
        // metadata: MNetworkEnable
        client::C_EconItemView m_Item; // 0x50        
        int32_t m_iExternalItemProviderRegisteredToken; // 0x498        
        [[maybe_unused]] std::uint8_t pad_0x49c[0x4]; // 0x49c
        uint64_t m_ullRegisteredAsItemID; // 0x4a0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_AttributeContainer because it is not a standard-layout class
    static_assert(sizeof(C_AttributeContainer) == 0x4a8);
};
