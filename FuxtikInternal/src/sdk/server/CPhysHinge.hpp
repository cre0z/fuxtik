#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPhysConstraint.hpp"
#include "source2sdk/server/ConstraintSoundInfo.hpp"
#include "source2sdk/vphysics2/constraint_hingeparams_t.hpp"
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
    // Size: 0x6d8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPhysHinge : public server::CPhysConstraint
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x538[0x8]; // 0x538
        server::ConstraintSoundInfo m_soundInfo; // 0x540        
        entity2::CEntityIOOutput m_NotifyMinLimitReached; // 0x5c8        
        entity2::CEntityIOOutput m_NotifyMaxLimitReached; // 0x5f0        
        bool m_bAtMinLimit; // 0x618        
        bool m_bAtMaxLimit; // 0x619        
        [[maybe_unused]] std::uint8_t pad_0x61a[0x2]; // 0x61a
        vphysics2::constraint_hingeparams_t m_hinge; // 0x61c        
        float m_hingeFriction; // 0x65c        
        float m_systemLoadScale; // 0x660        
        bool m_bIsAxisLocal; // 0x664        
        [[maybe_unused]] std::uint8_t pad_0x665[0x3]; // 0x665
        float m_flMinRotation; // 0x668        
        float m_flMaxRotation; // 0x66c        
        float m_flInitialRotation; // 0x670        
        float m_flMotorFrequency; // 0x674        
        float m_flMotorDampingRatio; // 0x678        
        float m_flAngleSpeed; // 0x67c        
        float m_flAngleSpeedThreshold; // 0x680        
        [[maybe_unused]] std::uint8_t pad_0x684[0x4]; // 0x684
        entity2::CEntityIOOutput m_OnStartMoving; // 0x688        
        entity2::CEntityIOOutput m_OnStopMoving; // 0x6b0        
        
        // Datamap fields:
        // Vector m_hinge.worldPosition; // 0x61c
        // Vector m_hinge.worldAxisDirection; // 0x628
        // float InputSetMotorTargetAngle; // 0x0
        // float InputSetVelocity; // 0x0
        // float InputSetHingeFriction; // 0x0
        // float InputSetMinLimit; // 0x0
        // float InputSetMaxLimit; // 0x0
        // void CPhysHingeSoundThink; // 0x0
        // void CPhysHingeLimitThink; // 0x0
        // void CPhysHingeMoveThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysHinge because it is not a standard-layout class
    static_assert(sizeof(CPhysHinge) == 0x6d8);
};
