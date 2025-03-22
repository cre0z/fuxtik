#pragma once
#include "source2sdk/client/CPlayerSprayDecalRenderHelper.hpp"
#include "source2sdk/client/C_ModelPointEntity.hpp"
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
    // Standard-layout class: false
    // Size: 0xdd8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nUniqueID"
    // static metadata: MNetworkVarNames "uint32 m_unAccountID"
    // static metadata: MNetworkVarNames "uint32 m_unTraceID"
    // static metadata: MNetworkVarNames "uint32 m_rtGcTime"
    // static metadata: MNetworkVarNames "Vector m_vecEndPos"
    // static metadata: MNetworkVarNames "Vector m_vecStart"
    // static metadata: MNetworkVarNames "Vector m_vecLeft"
    // static metadata: MNetworkVarNames "Vector m_vecNormal"
    // static metadata: MNetworkVarNames "int m_nPlayer"
    // static metadata: MNetworkVarNames "int m_nEntity"
    // static metadata: MNetworkVarNames "int m_nHitbox"
    // static metadata: MNetworkVarNames "float m_flCreationTime"
    // static metadata: MNetworkVarNames "int m_nTintID"
    // static metadata: MNetworkVarNames "uint8 m_nVersion"
    // static metadata: MNetworkVarNames "uint8 m_ubSignature"
    #pragma pack(push, 1)
    class C_PlayerSprayDecal : public client::C_ModelPointEntity
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nUniqueID; // 0xcc8        
        // metadata: MNetworkEnable
        uint32_t m_unAccountID; // 0xccc        
        // metadata: MNetworkEnable
        uint32_t m_unTraceID; // 0xcd0        
        // metadata: MNetworkEnable
        uint32_t m_rtGcTime; // 0xcd4        
        // metadata: MNetworkEnable
        Vector m_vecEndPos; // 0xcd8        
        // metadata: MNetworkEnable
        Vector m_vecStart; // 0xce4        
        // metadata: MNetworkEnable
        Vector m_vecLeft; // 0xcf0        
        // metadata: MNetworkEnable
        Vector m_vecNormal; // 0xcfc        
        // metadata: MNetworkEnable
        int32_t m_nPlayer; // 0xd08        
        // metadata: MNetworkEnable
        int32_t m_nEntity; // 0xd0c        
        // metadata: MNetworkEnable
        int32_t m_nHitbox; // 0xd10        
        // metadata: MNetworkEnable
        float m_flCreationTime; // 0xd14        
        // metadata: MNetworkEnable
        int32_t m_nTintID; // 0xd18        
        // metadata: MNetworkEnable
        uint8_t m_nVersion; // 0xd1c        
        // metadata: MNetworkEnable
        uint8_t m_ubSignature[128]; // 0xd1d        
        [[maybe_unused]] std::uint8_t pad_0xd9d[0xb]; // 0xd9d
        client::CPlayerSprayDecalRenderHelper m_SprayRenderHelper; // 0xda8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PlayerSprayDecal because it is not a standard-layout class
    static_assert(sizeof(C_PlayerSprayDecal) == 0xdd8);
};
