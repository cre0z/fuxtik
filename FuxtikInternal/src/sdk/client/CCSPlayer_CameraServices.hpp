#pragma once
#include "source2sdk/client/CCSPlayerBase_CameraServices.hpp"
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
    // Size: 0x230
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CCSPlayer_CameraServices : public client::CCSPlayerBase_CameraServices
    {
    public:
        float m_flDeathCamTilt; // 0x228        
        [[maybe_unused]] std::uint8_t pad_0x22c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayer_CameraServices because it is not a standard-layout class
    static_assert(sizeof(CCSPlayer_CameraServices) == 0x230);
};
