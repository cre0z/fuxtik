#pragma once
#include "source2sdk/client/IEconItemInterface.hpp"
#include "source2sdk/server/CAttributeList.hpp"
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
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x278
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "item_definition_index_t m_iItemDefinitionIndex"
    // static metadata: MNetworkVarNames "int m_iEntityQuality"
    // static metadata: MNetworkVarNames "uint32 m_iEntityLevel"
    // static metadata: MNetworkVarNames "uint32 m_iItemIDHigh"
    // static metadata: MNetworkVarNames "uint32 m_iItemIDLow"
    // static metadata: MNetworkVarNames "uint32 m_iAccountID"
    // static metadata: MNetworkVarNames "uint32 m_iInventoryPosition"
    // static metadata: MNetworkVarNames "bool m_bInitialized"
    // static metadata: MNetworkVarNames "CAttributeList m_AttributeList"
    // static metadata: MNetworkVarNames "CAttributeList m_NetworkedDynamicAttributes"
    // static metadata: MNetworkVarNames "char m_szCustomName"
    #pragma pack(push, 1)
    class CEconItemView : public client::IEconItemInterface
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x08[0x30]; // 0x8
        // metadata: MNetworkEnable
        uint16_t m_iItemDefinitionIndex; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x3a[0x2]; // 0x3a
        // metadata: MNetworkEnable
        int32_t m_iEntityQuality; // 0x3c        
        // metadata: MNetworkEnable
        uint32_t m_iEntityLevel; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x44[0x4]; // 0x44
        uint64_t m_iItemID; // 0x48        
        // metadata: MNetworkEnable
        uint32_t m_iItemIDHigh; // 0x50        
        // metadata: MNetworkEnable
        uint32_t m_iItemIDLow; // 0x54        
        // metadata: MNetworkEnable
        uint32_t m_iAccountID; // 0x58        
        // metadata: MNetworkEnable
        uint32_t m_iInventoryPosition; // 0x5c        
        [[maybe_unused]] std::uint8_t pad_0x60[0x8]; // 0x60
        // metadata: MNetworkEnable
        bool m_bInitialized; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x69[0x7]; // 0x69
        // metadata: MNetworkEnable
        server::CAttributeList m_AttributeList; // 0x70        
        // metadata: MNetworkEnable
        server::CAttributeList m_NetworkedDynamicAttributes; // 0xd0        
        // metadata: MNetworkEnable
        char m_szCustomName[161]; // 0x130        
        char m_szCustomNameOverride[161]; // 0x1d1        
        [[maybe_unused]] std::uint8_t pad_0x272[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEconItemView because it is not a standard-layout class
    static_assert(sizeof(CEconItemView) == 0x278);
};
