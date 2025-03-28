#pragma once
#include "source2sdk/client/C_BarnLight.hpp"
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
    // Size: 0xf18
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bShowLight"
    #pragma pack(push, 1)
    class C_RectLight : public client::C_BarnLight
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        bool m_bShowLight; // 0xf10        
        [[maybe_unused]] std::uint8_t pad_0xf11[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_RectLight because it is not a standard-layout class
    static_assert(sizeof(C_RectLight) == 0xf18);
};
