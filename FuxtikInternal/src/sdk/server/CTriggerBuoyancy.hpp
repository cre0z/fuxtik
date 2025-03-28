#pragma once
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/CBuoyancyHelper.hpp"
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
    // Size: 0x908
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float m_flFluidDensity"
    #pragma pack(push, 1)
    class CTriggerBuoyancy : public server::CBaseTrigger
    {
    public:
        server::CBuoyancyHelper m_BuoyancyHelper; // 0x8e0        
        // metadata: MNetworkEnable
        float m_flFluidDensity; // 0x900        
        [[maybe_unused]] std::uint8_t pad_0x904[0x4];
        
        // Datamap fields:
        // float InputSetFluidDensity; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerBuoyancy because it is not a standard-layout class
    static_assert(sizeof(CTriggerBuoyancy) == 0x908);
};
