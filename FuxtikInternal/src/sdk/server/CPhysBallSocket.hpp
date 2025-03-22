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
    // Size: 0x550
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPhysBallSocket : public server::CPhysConstraint
    {
    public:
        float m_flJointFriction; // 0x538        
        bool m_bEnableSwingLimit; // 0x53c        
        [[maybe_unused]] std::uint8_t pad_0x53d[0x3]; // 0x53d
        float m_flSwingLimit; // 0x540        
        bool m_bEnableTwistLimit; // 0x544        
        [[maybe_unused]] std::uint8_t pad_0x545[0x3]; // 0x545
        float m_flMinTwistAngle; // 0x548        
        float m_flMaxTwistAngle; // 0x54c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysBallSocket because it is not a standard-layout class
    static_assert(sizeof(CPhysBallSocket) == 0x550);
};
