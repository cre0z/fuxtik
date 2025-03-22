#pragma once
#include "source2sdk/client/C_CSGO_MapPreviewCameraPath.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5d0
    // Has VTable
    // Construct disallowed
    // MConstructibleClassBase
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_CSGO_TeamPreviewCamera : public client::C_CSGO_MapPreviewCameraPath
    {
    public:
        int32_t m_nVariant; // 0x5b0        
        bool m_bDofEnabled; // 0x5b4        
        [[maybe_unused]] std::uint8_t pad_0x5b5[0x3]; // 0x5b5
        float m_flDofNearBlurry; // 0x5b8        
        float m_flDofNearCrisp; // 0x5bc        
        float m_flDofFarCrisp; // 0x5c0        
        float m_flDofFarBlurry; // 0x5c4        
        float m_flDofTiltToGround; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5cc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CSGO_TeamPreviewCamera because it is not a standard-layout class
    static_assert(sizeof(C_CSGO_TeamPreviewCamera) == 0x5d0);
};
