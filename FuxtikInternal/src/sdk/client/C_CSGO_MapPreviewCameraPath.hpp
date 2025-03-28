#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
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
    // Size: 0x5b0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_CSGO_MapPreviewCameraPath : public client::C_BaseEntity
    {
    public:
        float m_flZFar; // 0x548        
        float m_flZNear; // 0x54c        
        bool m_bLoop; // 0x550        
        bool m_bVerticalFOV; // 0x551        
        bool m_bConstantSpeed; // 0x552        
        [[maybe_unused]] std::uint8_t pad_0x553[0x1]; // 0x553
        float m_flDuration; // 0x554        
        [[maybe_unused]] std::uint8_t pad_0x558[0x40]; // 0x558
        float m_flPathLength; // 0x598        
        float m_flPathDuration; // 0x59c        
        [[maybe_unused]] std::uint8_t pad_0x5a0[0x10];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CSGO_MapPreviewCameraPath because it is not a standard-layout class
    static_assert(sizeof(C_CSGO_MapPreviewCameraPath) == 0x5b0);
};
