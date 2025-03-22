#pragma once
#include "source2sdk/server/CPhysConstraint.hpp"
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
    // Size: 0x568
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPhysWheelConstraint : public server::CPhysConstraint
    {
    public:
        float m_flSuspensionFrequency; // 0x538        
        float m_flSuspensionDampingRatio; // 0x53c        
        float m_flSuspensionHeightOffset; // 0x540        
        bool m_bEnableSuspensionLimit; // 0x544        
        [[maybe_unused]] std::uint8_t pad_0x545[0x3]; // 0x545
        float m_flMinSuspensionOffset; // 0x548        
        float m_flMaxSuspensionOffset; // 0x54c        
        bool m_bEnableSteeringLimit; // 0x550        
        [[maybe_unused]] std::uint8_t pad_0x551[0x3]; // 0x551
        float m_flMinSteeringAngle; // 0x554        
        float m_flMaxSteeringAngle; // 0x558        
        float m_flSteeringAxisFriction; // 0x55c        
        float m_flSpinAxisFriction; // 0x560        
        [[maybe_unused]] std::uint8_t pad_0x564[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysWheelConstraint because it is not a standard-layout class
    static_assert(sizeof(CPhysWheelConstraint) == 0x568);
};
