#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    struct PhysicsRagdollPose_t;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xed0
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
    class CBaseAnimGraph : public client::C_BaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xcc8[0x78]; // 0xcc8
        // metadata: MNetworkEnable
        bool m_bInitiallyPopulateInterpHistory; // 0xd40        
        [[maybe_unused]] std::uint8_t pad_0xd41[0x1]; // 0xd41
        bool m_bSuppressAnimEventSounds; // 0xd42        
        [[maybe_unused]] std::uint8_t pad_0xd43[0xd]; // 0xd43
        // metadata: MNetworkEnable
        bool m_bAnimGraphUpdateEnabled; // 0xd50        
        [[maybe_unused]] std::uint8_t pad_0xd51[0x3]; // 0xd51
        float m_flMaxSlopeDistance; // 0xd54        
        Vector m_vLastSlopeCheckPos; // 0xd58        
        bool m_bAnimationUpdateScheduled; // 0xd64        
        [[maybe_unused]] std::uint8_t pad_0xd65[0x3]; // 0xd65
        // metadata: MNetworkEnable
        Vector m_vecForce; // 0xd68        
        // metadata: MNetworkEnable
        int32_t m_nForceBone; // 0xd74        
        client::CBaseAnimGraph* m_pClientsideRagdoll; // 0xd78        
        bool m_bBuiltRagdoll; // 0xd80        
        [[maybe_unused]] std::uint8_t pad_0xd81[0x17]; // 0xd81
        // metadata: MNetworkEnable
        client::PhysicsRagdollPose_t* m_pRagdollPose; // 0xd98        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
        bool m_bRagdollClientSide; // 0xda0        
        [[maybe_unused]] std::uint8_t pad_0xda1[0xf]; // 0xda1
        bool m_bHasAnimatedMaterialAttributes; // 0xdb0        
        [[maybe_unused]] std::uint8_t pad_0xdb1[0x11f];
        
        // Datamap fields:
        // void m_pMainGraphController; // 0xd38
        // float InputSetPlaybackRate; // 0x0
        // CUtlSymbolLarge InputSetBodyGroup; // 0x0
        // bool InputDisableAnimEventSounds; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
    static_assert(sizeof(CBaseAnimGraph) == 0xed0);
};
