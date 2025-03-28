#pragma once
#include "source2sdk/server/CBtNode.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb0
    // Has VTable
    #pragma pack(push, 1)
    class CBtActionCombatPositioning : public server::CBtNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x58[0x10]; // 0x58
        CUtlString m_szSensorInputKey; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x70[0x10]; // 0x70
        CUtlString m_szIsAttackingKey; // 0x80        
        server::CountdownTimer m_ActionTimer; // 0x88        
        bool m_bCrouching; // 0xa0        
        [[maybe_unused]] std::uint8_t pad_0xa1[0xf];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBtActionCombatPositioning because it is not a standard-layout class
    static_assert(sizeof(CBtActionCombatPositioning) == 0xb0);
};
