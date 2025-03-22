#pragma once
#include "source2sdk/client/C_BaseCSGrenadeProjectile.hpp"
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
    // Size: 0x12f0
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
    class C_SmokeGrenadeProjectile : public client::C_BaseCSGrenadeProjectile
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1150[0x8]; // 0x1150
        // metadata: MNetworkEnable
        int32_t m_nSmokeEffectTickBegin; // 0x1158        
        // metadata: MNetworkEnable
        bool m_bDidSmokeEffect; // 0x115c        
        [[maybe_unused]] std::uint8_t pad_0x115d[0x3]; // 0x115d
        // metadata: MNetworkEnable
        int32_t m_nRandomSeed; // 0x1160        
        // metadata: MNetworkEnable
        Vector m_vSmokeColor; // 0x1164        
        // metadata: MNetworkEnable
        Vector m_vSmokeDetonationPos; // 0x1170        
        [[maybe_unused]] std::uint8_t pad_0x117c[0x4]; // 0x117c
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSimulationChanged"
        // m_VoxelFrameData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint8_t> m_VoxelFrameData;
        char m_VoxelFrameData[0x18]; // 0x1180        
        bool m_bSmokeVolumeDataReceived; // 0x1198        
        bool m_bSmokeEffectSpawned; // 0x1199        
        [[maybe_unused]] std::uint8_t pad_0x119a[0x156];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_SmokeGrenadeProjectile because it is not a standard-layout class
    static_assert(sizeof(C_SmokeGrenadeProjectile) == 0x12f0);
};
