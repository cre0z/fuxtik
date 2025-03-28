#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class IChoreoServices;
};

namespace source2sdk::server
{
    struct PhysicsRagdollPose_t;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x8e8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByName "m_bClientSideRagdoll"
    // static metadata: MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
    // static metadata: MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
    // static metadata: MNetworkVarNames "Vector m_vecForce"
    // static metadata: MNetworkVarNames "int32 m_nForceBone"
    // static metadata: MNetworkVarNames "PhysicsRagdollPose_t* m_pRagdollPose"
    // static metadata: MNetworkVarNames "bool m_bRagdollClientSide"
    #pragma pack(push, 1)
    class CBaseAnimGraph : public server::CBaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x710[0x78]; // 0x710
        // metadata: MNetworkEnable
        bool m_bInitiallyPopulateInterpHistory; // 0x788        
        [[maybe_unused]] std::uint8_t pad_0x789[0x7]; // 0x789
        client::IChoreoServices* m_pChoreoServices; // 0x790        
        // metadata: MNetworkEnable
        bool m_bAnimGraphUpdateEnabled; // 0x798        
        [[maybe_unused]] std::uint8_t pad_0x799[0x3]; // 0x799
        float m_flMaxSlopeDistance; // 0x79c        
        Vector m_vLastSlopeCheckPos; // 0x7a0        
        bool m_bAnimationUpdateScheduled; // 0x7ac        
        [[maybe_unused]] std::uint8_t pad_0x7ad[0x3]; // 0x7ad
        // metadata: MNetworkEnable
        Vector m_vecForce; // 0x7b0        
        // metadata: MNetworkEnable
        int32_t m_nForceBone; // 0x7bc        
        [[maybe_unused]] std::uint8_t pad_0x7c0[0x10]; // 0x7c0
        // metadata: MNetworkEnable
        server::PhysicsRagdollPose_t* m_pRagdollPose; // 0x7d0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
        bool m_bRagdollClientSide; // 0x7d8        
        [[maybe_unused]] std::uint8_t pad_0x7d9[0x10f];
        
        // Datamap fields:
        // void m_pMainGraphController; // 0x780
        // void CBaseAnimGraphChoreoServicesThink; // 0x0
        // float InputSetPlaybackRate; // 0x0
        // CUtlSymbolLarge InputSetBodyGroup; // 0x0
        // void InputBecomeRagdoll; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
    static_assert(sizeof(CBaseAnimGraph) == 0x8e8);
};
