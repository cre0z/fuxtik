#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/server/CBaseCSGrenadeProjectile.hpp"
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
    // Size: 0x2d78
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nSmokeEffectTickBegin"
    // static metadata: MNetworkVarNames "bool m_bDidSmokeEffect"
    // static metadata: MNetworkVarNames "int m_nRandomSeed"
    // static metadata: MNetworkVarNames "Vector m_vSmokeColor"
    // static metadata: MNetworkVarNames "Vector m_vSmokeDetonationPos"
    // static metadata: MNetworkVarNames "CUtlVector<uint8> m_VoxelFrameData"
    #pragma pack(push, 1)
    class CSmokeGrenadeProjectile : public server::CBaseCSGrenadeProjectile
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xa90[0x18]; // 0xa90
        // metadata: MNetworkEnable
        int32_t m_nSmokeEffectTickBegin; // 0xaa8        
        // metadata: MNetworkEnable
        bool m_bDidSmokeEffect; // 0xaac        
        [[maybe_unused]] std::uint8_t pad_0xaad[0x3]; // 0xaad
        // metadata: MNetworkEnable
        int32_t m_nRandomSeed; // 0xab0        
        // metadata: MNetworkEnable
        Vector m_vSmokeColor; // 0xab4        
        // metadata: MNetworkEnable
        Vector m_vSmokeDetonationPos; // 0xac0        
        [[maybe_unused]] std::uint8_t pad_0xacc[0x4]; // 0xacc
        // metadata: MNetworkEnable
        // m_VoxelFrameData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint8_t> m_VoxelFrameData;
        char m_VoxelFrameData[0x18]; // 0xad0        
        client::GameTime_t m_flLastBounce; // 0xae8        
        client::GameTime_t m_fllastSimulationTime; // 0xaec        
        [[maybe_unused]] std::uint8_t pad_0xaf0[0x2280]; // 0xaf0
        bool m_bExplodeFromInferno; // 0x2d70        
        [[maybe_unused]] std::uint8_t pad_0x2d71[0x7];
        
        // Datamap fields:
        // void CSmokeGrenadeProjectileThink_Detonate; // 0x0
        // void CSmokeGrenadeProjectileThink_Update; // 0x0
        // void CSmokeGrenadeProjectileThink_Remove; // 0x0
        // void CSmokeGrenadeProjectileThink_BuildingSmokeVolume; // 0x0
        // void InitializeSpawnFromWorld; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmokeGrenadeProjectile because it is not a standard-layout class
    static_assert(sizeof(CSmokeGrenadeProjectile) == 0x2d78);
};
