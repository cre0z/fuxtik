#pragma once
#include "source2sdk/server/CAttributeContainer.hpp"
#include "source2sdk/server/CBaseFlex.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc70
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CAttributeContainer m_AttributeManager"
    // static metadata: MNetworkVarNames "uint32 m_OriginalOwnerXuidLow"
    // static metadata: MNetworkVarNames "uint32 m_OriginalOwnerXuidHigh"
    // static metadata: MNetworkVarNames "int m_nFallbackPaintKit"
    // static metadata: MNetworkVarNames "int m_nFallbackSeed"
    // static metadata: MNetworkVarNames "float m_flFallbackWear"
    // static metadata: MNetworkVarNames "int m_nFallbackStatTrak"
    #pragma pack(push, 1)
    class CEconEntity : public server::CBaseFlex
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x978[0x10]; // 0x978
        // metadata: MNetworkEnable
        server::CAttributeContainer m_AttributeManager; // 0x988        
        // metadata: MNetworkEnable
        uint32_t m_OriginalOwnerXuidLow; // 0xc50        
        // metadata: MNetworkEnable
        uint32_t m_OriginalOwnerXuidHigh; // 0xc54        
        // metadata: MNetworkEnable
        int32_t m_nFallbackPaintKit; // 0xc58        
        // metadata: MNetworkEnable
        int32_t m_nFallbackSeed; // 0xc5c        
        // metadata: MNetworkEnable
        float m_flFallbackWear; // 0xc60        
        // metadata: MNetworkEnable
        int32_t m_nFallbackStatTrak; // 0xc64        
        // m_hOldProvidee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOldProvidee;
        char m_hOldProvidee[0x4]; // 0xc68        
        int32_t m_iOldOwnerClass; // 0xc6c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEconEntity because it is not a standard-layout class
    static_assert(sizeof(CEconEntity) == 0xc70);
};
