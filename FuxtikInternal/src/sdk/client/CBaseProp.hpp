#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
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
    // Size: 0xf10
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CBaseProp : public client::CBaseAnimGraph
    {
    public:
        bool m_bModelOverrodeBlockLOS; // 0xed0        
        [[maybe_unused]] std::uint8_t pad_0xed1[0x3]; // 0xed1
        int32_t m_iShapeType; // 0xed4        
        bool m_bConformToCollisionBounds; // 0xed8        
        [[maybe_unused]] std::uint8_t pad_0xed9[0x3]; // 0xed9
        matrix3x4_t m_mPreferredCatchTransform; // 0xedc        
        [[maybe_unused]] std::uint8_t pad_0xf0c[0x4];
        
        // Datamap fields:
        // void health; // 0x7fffffff
        // CUtlSymbolLarge propdata_override; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseProp because it is not a standard-layout class
    static_assert(sizeof(CBaseProp) == 0xf10);
};
