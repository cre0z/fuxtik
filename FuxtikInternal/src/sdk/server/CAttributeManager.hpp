#pragma once
#include "source2sdk/client/attributeprovidertypes_t.hpp"
#include "source2sdk/server/CAttributeManager__cached_attribute_float_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x50
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_iReapplyProvisionParity"
    // static metadata: MNetworkVarNames "EHANDLE m_hOuter"
    // static metadata: MNetworkVarNames "attributeprovidertypes_t m_ProviderType"
    #pragma pack(push, 1)
    class CAttributeManager
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // m_Providers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_Providers;
        char m_Providers[0x18]; // 0x8        
        // metadata: MNetworkEnable
        int32_t m_iReapplyProvisionParity; // 0x20        
        // metadata: MNetworkEnable
        // m_hOuter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOuter;
        char m_hOuter[0x4]; // 0x24        
        bool m_bPreventLoopback; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x29[0x3]; // 0x29
        // metadata: MNetworkEnable
        client::attributeprovidertypes_t m_ProviderType; // 0x2c        
        // m_CachedResults has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CAttributeManager__cached_attribute_float_t> m_CachedResults;
        char m_CachedResults[0x18]; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x48[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAttributeManager, m_Providers) == 0x8);
    static_assert(offsetof(CAttributeManager, m_iReapplyProvisionParity) == 0x20);
    static_assert(offsetof(CAttributeManager, m_hOuter) == 0x24);
    static_assert(offsetof(CAttributeManager, m_bPreventLoopback) == 0x28);
    static_assert(offsetof(CAttributeManager, m_ProviderType) == 0x2c);
    static_assert(offsetof(CAttributeManager, m_CachedResults) == 0x30);
    
    static_assert(sizeof(CAttributeManager) == 0x50);
};
