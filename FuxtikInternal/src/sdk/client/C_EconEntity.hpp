#pragma once
#include "source2sdk/client/C_AttributeContainer.hpp"
#include "source2sdk/client/C_BaseFlex.hpp"
#include "source2sdk/client/C_EconEntity__AttachedModelData_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CBaseAnimGraph;
};

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x15b0
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
    class C_EconEntity : public client::C_BaseFlex
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1068[0x10]; // 0x1068
        float m_flFlexDelayTime; // 0x1078        
        [[maybe_unused]] std::uint8_t pad_0x107c[0x4]; // 0x107c
        float32* m_flFlexDelayedWeight; // 0x1080        
        bool m_bAttributesInitialized; // 0x1088        
        [[maybe_unused]] std::uint8_t pad_0x1089[0x7]; // 0x1089
        // metadata: MNetworkEnable
        client::C_AttributeContainer m_AttributeManager; // 0x1090        
        // metadata: MNetworkEnable
        uint32_t m_OriginalOwnerXuidLow; // 0x1538        
        // metadata: MNetworkEnable
        uint32_t m_OriginalOwnerXuidHigh; // 0x153c        
        // metadata: MNetworkEnable
        int32_t m_nFallbackPaintKit; // 0x1540        
        // metadata: MNetworkEnable
        int32_t m_nFallbackSeed; // 0x1544        
        // metadata: MNetworkEnable
        float m_flFallbackWear; // 0x1548        
        // metadata: MNetworkEnable
        int32_t m_nFallbackStatTrak; // 0x154c        
        bool m_bClientside; // 0x1550        
        bool m_bParticleSystemsCreated; // 0x1551        
        [[maybe_unused]] std::uint8_t pad_0x1552[0x6]; // 0x1552
        // m_vecAttachedParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_vecAttachedParticles;
        char m_vecAttachedParticles[0x18]; // 0x1558        
        // m_hViewmodelAttachment has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CBaseAnimGraph> m_hViewmodelAttachment;
        char m_hViewmodelAttachment[0x4]; // 0x1570        
        int32_t m_iOldTeam; // 0x1574        
        bool m_bAttachmentDirty; // 0x1578        
        [[maybe_unused]] std::uint8_t pad_0x1579[0x3]; // 0x1579
        int32_t m_nUnloadedModelIndex; // 0x157c        
        int32_t m_iNumOwnerValidationRetries; // 0x1580        
        [[maybe_unused]] std::uint8_t pad_0x1584[0xc]; // 0x1584
        // m_hOldProvidee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOldProvidee;
        char m_hOldProvidee[0x4]; // 0x1590        
        [[maybe_unused]] std::uint8_t pad_0x1594[0x4]; // 0x1594
        // m_vecAttachedModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::C_EconEntity__AttachedModelData_t> m_vecAttachedModels;
        char m_vecAttachedModels[0x18]; // 0x1598        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EconEntity because it is not a standard-layout class
    static_assert(sizeof(C_EconEntity) == 0x15b0);
};
