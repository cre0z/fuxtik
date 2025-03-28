#pragma once
#include "source2sdk/server/CModelPointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x7e8
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
    class CPlayerSprayDecal : public server::CModelPointEntity
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nUniqueID; // 0x710        
        // metadata: MNetworkEnable
        uint32_t m_unAccountID; // 0x714        
        // metadata: MNetworkEnable
        uint32_t m_unTraceID; // 0x718        
        // metadata: MNetworkEnable
        uint32_t m_rtGcTime; // 0x71c        
        // metadata: MNetworkEnable
        Vector m_vecEndPos; // 0x720        
        // metadata: MNetworkEnable
        Vector m_vecStart; // 0x72c        
        // metadata: MNetworkEnable
        Vector m_vecLeft; // 0x738        
        // metadata: MNetworkEnable
        Vector m_vecNormal; // 0x744        
        // metadata: MNetworkEnable
        int32_t m_nPlayer; // 0x750        
        // metadata: MNetworkEnable
        int32_t m_nEntity; // 0x754        
        // metadata: MNetworkEnable
        int32_t m_nHitbox; // 0x758        
        // metadata: MNetworkEnable
        float m_flCreationTime; // 0x75c        
        // metadata: MNetworkEnable
        int32_t m_nTintID; // 0x760        
        // metadata: MNetworkEnable
        uint8_t m_nVersion; // 0x764        
        // metadata: MNetworkEnable
        uint8_t m_ubSignature[128]; // 0x765        
        [[maybe_unused]] std::uint8_t pad_0x7e5[0x3];
        
        // Static fields:
        static CUtlVector<server::CPlayerSprayDecal*> &Get_s_arrFEPlayerDecals() {return *reinterpret_cast<CUtlVector<server::CPlayerSprayDecal*>*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CPlayerSprayDecal")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPlayerSprayDecal because it is not a standard-layout class
    static_assert(sizeof(CPlayerSprayDecal) == 0x7e8);
};
