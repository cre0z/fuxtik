#pragma once
#include "source2sdk/navlib/Extent.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/IntervalTimer.hpp"
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
    // Size: 0x1390
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "Vector m_firePositions"
    // static metadata: MNetworkVarNames "Vector m_fireParentPositions"
    // static metadata: MNetworkVarNames "bool m_bFireIsBurning"
    // static metadata: MNetworkVarNames "Vector m_BurnNormal"
    // static metadata: MNetworkVarNames "int m_fireCount"
    // static metadata: MNetworkVarNames "int m_nInfernoType"
    // static metadata: MNetworkVarNames "int m_nFireEffectTickBegin"
    // static metadata: MNetworkVarNames "float m_nFireLifetime"
    // static metadata: MNetworkVarNames "bool m_bInPostEffectTime"
    #pragma pack(push, 1)
    class CInferno : public server::CBaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x710[0x10]; // 0x710
        // metadata: MNetworkEnable
        Vector m_firePositions[64]; // 0x720        
        // metadata: MNetworkEnable
        Vector m_fireParentPositions[64]; // 0xa20        
        // metadata: MNetworkEnable
        bool m_bFireIsBurning[64]; // 0xd20        
        // metadata: MNetworkEnable
        Vector m_BurnNormal[64]; // 0xd60        
        // metadata: MNetworkEnable
        int32_t m_fireCount; // 0x1060        
        // metadata: MNetworkEnable
        int32_t m_nInfernoType; // 0x1064        
        // metadata: MNetworkEnable
        int32_t m_nFireEffectTickBegin; // 0x1068        
        // metadata: MNetworkEnable
        float m_nFireLifetime; // 0x106c        
        // metadata: MNetworkEnable
        bool m_bInPostEffectTime; // 0x1070        
        [[maybe_unused]] std::uint8_t pad_0x1071[0x3]; // 0x1071
        int32_t m_nFiresExtinguishCount; // 0x1074        
        bool m_bWasCreatedInSmoke; // 0x1078        
        [[maybe_unused]] std::uint8_t pad_0x1079[0x207]; // 0x1079
        navlib::Extent m_extent; // 0x1280        
        server::CountdownTimer m_damageTimer; // 0x1298        
        server::CountdownTimer m_damageRampTimer; // 0x12b0        
        Vector m_splashVelocity; // 0x12c8        
        Vector m_InitialSplashVelocity; // 0x12d4        
        Vector m_startPos; // 0x12e0        
        Vector m_vecOriginalSpawnLocation; // 0x12ec        
        server::IntervalTimer m_activeTimer; // 0x12f8        
        int32_t m_fireSpawnOffset; // 0x1308        
        int32_t m_nMaxFlames; // 0x130c        
        int32_t m_nSpreadCount; // 0x1310        
        [[maybe_unused]] std::uint8_t pad_0x1314[0x4]; // 0x1314
        server::CountdownTimer m_BookkeepingTimer; // 0x1318        
        server::CountdownTimer m_NextSpreadTimer; // 0x1330        
        uint16_t m_nSourceItemDefIndex; // 0x1348        
        [[maybe_unused]] std::uint8_t pad_0x134a[0x46];
        
        // Static fields:
        static float &Get_InfernoFire_Radius() {return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->GetStaticFields()[0]->m_pInstance);};
        static float &Get_InfernoFire_LOSHeight() {return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->GetStaticFields()[1]->m_pInstance);};
        static float &Get_InfernoFire_CylinderHeight() {return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->GetStaticFields()[2]->m_pInstance);};
        static float &Get_InfernoFire_FullHeight() {return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->GetStaticFields()[3]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInferno because it is not a standard-layout class
    static_assert(sizeof(CInferno) == 0x1390);
};
