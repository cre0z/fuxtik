#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
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
    // Size: 0x930
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CTriggerDetectExplosion : public server::CBaseTrigger
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x8e0[0x28]; // 0x8e0
        entity2::CEntityIOOutput m_OnDetectedExplosion; // 0x908        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerDetectExplosion because it is not a standard-layout class
    static_assert(sizeof(CTriggerDetectExplosion) == 0x930);
};
