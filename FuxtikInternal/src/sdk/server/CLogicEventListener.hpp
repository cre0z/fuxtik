#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
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
    // Size: 0x508
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CLogicEventListener : public server::CLogicalEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4c0[0x10]; // 0x4c0
        CUtlString m_strEventName; // 0x4d0        
        bool m_bIsEnabled; // 0x4d8        
        [[maybe_unused]] std::uint8_t pad_0x4d9[0x3]; // 0x4d9
        int32_t m_nTeam; // 0x4dc        
        entity2::CEntityIOOutput m_OnEventFired; // 0x4e0        
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicEventListener because it is not a standard-layout class
    static_assert(sizeof(CLogicEventListener) == 0x508);
};
