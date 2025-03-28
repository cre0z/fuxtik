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
    // Size: 0xe8
    // Has VTable
    #pragma pack(push, 1)
    class CBtActionMoveTo : public server::CBtNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x58[0x8]; // 0x58
        CUtlString m_szDestinationInputKey; // 0x60        
        CUtlString m_szHidingSpotInputKey; // 0x68        
        CUtlString m_szThreatInputKey; // 0x70        
        Vector m_vecDestination; // 0x78        
        bool m_bAutoLookAdjust; // 0x84        
        bool m_bComputePath; // 0x85        
        [[maybe_unused]] std::uint8_t pad_0x86[0x2]; // 0x86
        float m_flDamagingAreasPenaltyCost; // 0x88        
        [[maybe_unused]] std::uint8_t pad_0x8c[0x4]; // 0x8c
        server::CountdownTimer m_CheckApproximateCornersTimer; // 0x90        
        server::CountdownTimer m_CheckHighPriorityItem; // 0xa8        
        server::CountdownTimer m_RepathTimer; // 0xc0        
        float m_flArrivalEpsilon; // 0xd8        
        float m_flAdditionalArrivalEpsilon2D; // 0xdc        
        float m_flHidingSpotCheckDistanceThreshold; // 0xe0        
        float m_flNearestAreaDistanceThreshold; // 0xe4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBtActionMoveTo because it is not a standard-layout class
    static_assert(sizeof(CBtActionMoveTo) == 0xe8);
};
