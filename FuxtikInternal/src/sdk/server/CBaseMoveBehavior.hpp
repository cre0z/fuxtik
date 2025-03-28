#pragma once
#include "source2sdk/server/CPathKeyFrame.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CPathKeyFrame;
};

namespace source2sdk::server
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x560
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CBaseMoveBehavior : public server::CPathKeyFrame
    {
    public:
        int32_t m_iPositionInterpolator; // 0x520        
        int32_t m_iRotationInterpolator; // 0x524        
        float m_flAnimStartTime; // 0x528        
        float m_flAnimEndTime; // 0x52c        
        float m_flAverageSpeedAcrossFrame; // 0x530        
        [[maybe_unused]] std::uint8_t pad_0x534[0x4]; // 0x534
        server::CPathKeyFrame* m_pCurrentKeyFrame; // 0x538        
        server::CPathKeyFrame* m_pTargetKeyFrame; // 0x540        
        server::CPathKeyFrame* m_pPreKeyFrame; // 0x548        
        server::CPathKeyFrame* m_pPostKeyFrame; // 0x550        
        float m_flTimeIntoFrame; // 0x558        
        int32_t m_iDirection; // 0x55c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseMoveBehavior because it is not a standard-layout class
    static_assert(sizeof(CBaseMoveBehavior) == 0x560);
};
