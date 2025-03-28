#pragma once
#include "source2sdk/animlib/CNmPoseNode__CDefinition.hpp"
#include "source2sdk/animlib/CNmTransitionNode__TransitionOptions_t.hpp"
#include "source2sdk/animlib/NmEasingOperation_t.hpp"
#include "source2sdk/animlib/NmPercent_t.hpp"
#include "source2sdk/animlib/NmRootMotionBlendMode_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x30
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmTransitionNode__CDefinition : public animlib::CNmPoseNode__CDefinition
    {
    public:
        int16_t m_targetCNmStateNodeIdx; // 0x10        
        int16_t m_durationOverrideNodeIdx; // 0x12        
        int16_t m_syncEventOffsetOverrideNodeIdx; // 0x14        
        int16_t m_startBoneMaskNodeIdx; // 0x16        
        float m_flDuration; // 0x18        
        animlib::NmPercent_t m_boneMaskBlendInTimePercentage; // 0x1c        
        float m_syncEventOffset; // 0x20        
        animlib::CNmTransitionNode__TransitionOptions_t m_transitionOptions; // 0x24        
        [[maybe_unused]] std::uint8_t pad_0x25[0x1]; // 0x25
        int16_t m_targetSyncIDNodeIdx; // 0x26        
        animlib::NmEasingOperation_t m_blendWeightEasing; // 0x28        
        animlib::NmRootMotionBlendMode_t m_rootMotionBlend; // 0x29        
        [[maybe_unused]] std::uint8_t pad_0x2a[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmTransitionNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmTransitionNode__CDefinition) == 0x30);
};
