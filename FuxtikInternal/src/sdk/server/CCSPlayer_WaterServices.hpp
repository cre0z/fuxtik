#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/server/CPlayer_WaterServices.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x68
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CCSPlayer_WaterServices : public server::CPlayer_WaterServices
    {
    public:
        float m_NextDrownDamageTime; // 0x40        
        int32_t m_nDrownDmgRate; // 0x44        
        client::GameTime_t m_AirFinishedTime; // 0x48        
        float m_flWaterJumpTime; // 0x4c        
        Vector m_vecWaterJumpVel; // 0x50        
        float m_flSwimSoundTime; // 0x5c        
        [[maybe_unused]] std::uint8_t pad_0x60[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayer_WaterServices because it is not a standard-layout class
    static_assert(sizeof(CCSPlayer_WaterServices) == 0x68);
};
