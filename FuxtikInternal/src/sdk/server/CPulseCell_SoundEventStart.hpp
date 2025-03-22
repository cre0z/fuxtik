#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseFlow.hpp"
#include "source2sdk/server/SoundEventStartType_t.hpp"
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
    // Size: 0x50
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MCellForDomain "ServerPointEntity"
    // static metadata: MPulseCellMethodBindings
    // static metadata: MPulseCellOutflowHookInfo
    // static metadata: MPropertyFriendlyName "Sound Event"
    // static metadata: MPropertyDescription "Starts a sound event, returns a handle that can be used to stop it."
    #pragma pack(push, 1)
    class CPulseCell_SoundEventStart : public pulse_runtime_lib::CPulseCell_BaseFlow
    {
    public:
        server::SoundEventStartType_t m_Type; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x4c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_SoundEventStart because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_SoundEventStart) == 0x50);
};
