#pragma once
#include "source2sdk/server/CPointEntity.hpp"
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
    // Size: 0x4d0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPointGamestatsCounter : public server::CPointEntity
    {
    public:
        CUtlSymbolLarge m_strStatisticName; // 0x4c0        
        bool m_bDisabled; // 0x4c8        
        [[maybe_unused]] std::uint8_t pad_0x4c9[0x7];
        
        // Datamap fields:
        // CUtlSymbolLarge InputSetName; // 0x0
        // float InputIncrement; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointGamestatsCounter because it is not a standard-layout class
    static_assert(sizeof(CPointGamestatsCounter) == 0x4d0);
};
