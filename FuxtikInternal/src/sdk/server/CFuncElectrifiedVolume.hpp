#pragma once
#include "source2sdk/server/CFuncBrush.hpp"
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
    // Size: 0x768
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "string_t m_EffectName"
    #pragma pack(push, 1)
    class CFuncElectrifiedVolume : public server::CFuncBrush
    {
    public:
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_EffectName; // 0x730        
        CUtlSymbolLarge m_EffectInterpenetrateName; // 0x738        
        CUtlSymbolLarge m_EffectZapName; // 0x740        
        CUtlSymbolLarge m_iszEffectSource; // 0x748        
        [[maybe_unused]] std::uint8_t pad_0x750[0x18];
        
        // Datamap fields:
        // void InputDisable; // 0x0
        // void InputEnable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncElectrifiedVolume because it is not a standard-layout class
    static_assert(sizeof(CFuncElectrifiedVolume) == 0x768);
};
