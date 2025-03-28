#pragma once
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
    // Size: 0xcd8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bBombPlantedHere"
    #pragma pack(push, 1)
    class CBombTarget : public client::C_BaseTrigger
    {
    public:
        // metadata: MNetworkEnable
        bool m_bBombPlantedHere; // 0xcd0        
        [[maybe_unused]] std::uint8_t pad_0xcd1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBombTarget because it is not a standard-layout class
    static_assert(sizeof(CBombTarget) == 0xcd8);
};
