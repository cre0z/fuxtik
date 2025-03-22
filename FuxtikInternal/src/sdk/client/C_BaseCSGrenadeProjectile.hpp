#pragma once
#include "source2sdk/client/C_BaseGrenade.hpp"
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSnapshot.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x1150
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "Vector m_vInitialPosition"
    // static metadata: MNetworkVarNames "Vector m_vInitialVelocity"
    // static metadata: MNetworkVarNames "int m_nBounces"
    // static metadata: MNetworkVarNames "HParticleSystemDefinitionStrong m_nExplodeEffectIndex"
    // static metadata: MNetworkVarNames "int m_nExplodeEffectTickBegin"
    // static metadata: MNetworkVarNames "Vector m_vecExplodeEffectOrigin"
    #pragma pack(push, 1)
    class C_BaseCSGrenadeProjectile : public client::C_BaseGrenade
    {
    public:
        // metadata: MNetworkEnable
        Vector m_vInitialPosition; // 0x10b8        
        // metadata: MNetworkEnable
        Vector m_vInitialVelocity; // 0x10c4        
        // metadata: MNetworkEnable
        int32_t m_nBounces; // 0x10d0        
        [[maybe_unused]] std::uint8_t pad_0x10d4[0x4]; // 0x10d4
        // metadata: MNetworkEnable
        // m_nExplodeEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nExplodeEffectIndex;
        char m_nExplodeEffectIndex[0x8]; // 0x10d8        
        // metadata: MNetworkEnable
        int32_t m_nExplodeEffectTickBegin; // 0x10e0        
        // metadata: MNetworkEnable
        Vector m_vecExplodeEffectOrigin; // 0x10e4        
        client::GameTime_t m_flSpawnTime; // 0x10f0        
        Vector vecLastTrailLinePos; // 0x10f4        
        client::GameTime_t flNextTrailLineTime; // 0x1100        
        bool m_bExplodeEffectBegan; // 0x1104        
        bool m_bCanCreateGrenadeTrail; // 0x1105        
        [[maybe_unused]] std::uint8_t pad_0x1106[0x2]; // 0x1106
        client::ParticleIndex_t m_nSnapshotTrajectoryEffectIndex; // 0x1108        
        [[maybe_unused]] std::uint8_t pad_0x110c[0x4]; // 0x110c
        // m_hSnapshotTrajectoryParticleSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hSnapshotTrajectoryParticleSnapshot;
        char m_hSnapshotTrajectoryParticleSnapshot[0x8]; // 0x1110        
        // m_arrTrajectoryTrailPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_arrTrajectoryTrailPoints;
        char m_arrTrajectoryTrailPoints[0x18]; // 0x1118        
        // m_arrTrajectoryTrailPointCreationTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_arrTrajectoryTrailPointCreationTimes;
        char m_arrTrajectoryTrailPointCreationTimes[0x18]; // 0x1130        
        float m_flTrajectoryTrailEffectCreationTime; // 0x1148        
        [[maybe_unused]] std::uint8_t pad_0x114c[0x4];
        
        // Static fields:
        static float &Get_s_flThinkInterval() {return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseCSGrenadeProjectile")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseCSGrenadeProjectile because it is not a standard-layout class
    static_assert(sizeof(C_BaseCSGrenadeProjectile) == 0x1150);
};
