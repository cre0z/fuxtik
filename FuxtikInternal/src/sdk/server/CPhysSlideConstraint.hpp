#pragma once
#include "source2sdk/server/CPhysConstraint.hpp"
#include "source2sdk/server/ConstraintSoundInfo.hpp"
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
    // Size: 0x5f0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPhysSlideConstraint : public server::CPhysConstraint
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x538[0x8]; // 0x538
        Vector m_axisEnd; // 0x540        
        float m_slideFriction; // 0x54c        
        float m_systemLoadScale; // 0x550        
        float m_initialOffset; // 0x554        
        bool m_bEnableLinearConstraint; // 0x558        
        bool m_bEnableAngularConstraint; // 0x559        
        [[maybe_unused]] std::uint8_t pad_0x55a[0x2]; // 0x55a
        float m_flMotorFrequency; // 0x55c        
        float m_flMotorDampingRatio; // 0x560        
        bool m_bUseEntityPivot; // 0x564        
        [[maybe_unused]] std::uint8_t pad_0x565[0x3]; // 0x565
        server::ConstraintSoundInfo m_soundInfo; // 0x568        
        
        // Datamap fields:
        // float InputSetOffset; // 0x0
        // float InputSetVelocity; // 0x0
        // float InputSetSlideFriction; // 0x0
        // void CPhysSlideConstraintSoundThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysSlideConstraint because it is not a standard-layout class
    static_assert(sizeof(CPhysSlideConstraint) == 0x5f0);
};
