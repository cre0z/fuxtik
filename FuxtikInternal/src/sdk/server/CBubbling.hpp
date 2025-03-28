#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
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
    // Size: 0x720
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CBubbling : public server::CBaseModelEntity
    {
    public:
        int32_t m_density; // 0x710        
        int32_t m_frequency; // 0x714        
        int32_t m_state; // 0x718        
        [[maybe_unused]] std::uint8_t pad_0x71c[0x4];
        
        // Datamap fields:
        // float m_flSpeed; // 0x324
        // void CBubblingFizzThink; // 0x0
        // void InputActivate; // 0x0
        // void InputDeactivate; // 0x0
        // void InputToggle; // 0x0
        // int32_t InputSetCurrent; // 0x0
        // int32_t InputSetDensity; // 0x0
        // int32_t InputSetFrequency; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBubbling because it is not a standard-layout class
    static_assert(sizeof(CBubbling) == 0x720);
};
