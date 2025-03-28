#pragma once
#include "source2sdk/client/CBuoyancyHelper.hpp"
#include "source2sdk/client/C_BaseTrigger.hpp"
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
    // Size: 0xcf8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float m_flFluidDensity"
    #pragma pack(push, 1)
    class C_TriggerBuoyancy : public client::C_BaseTrigger
    {
    public:
        client::CBuoyancyHelper m_BuoyancyHelper; // 0xcd0        
        // metadata: MNetworkEnable
        float m_flFluidDensity; // 0xcf0        
        [[maybe_unused]] std::uint8_t pad_0xcf4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_TriggerBuoyancy because it is not a standard-layout class
    static_assert(sizeof(C_TriggerBuoyancy) == 0xcf8);
};
