#pragma once
#include "source2sdk/smartprops/ApplyColorMode_t.hpp"
#include "source2sdk/smartprops/CSmartPropOperation.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x70
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Tint Color Random"
    // static metadata: MPropertyDescription "Set the color tint to a random selection from within the defined gradient."
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropOperation_RandomColorTintColor : public smartprops::CSmartPropOperation
    {
    public:
        // metadata: MPropertyDescription "Specifies how the selected color should be applied."
        smartprops::ApplyColorMode_t m_Mode; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x54[0x4]; // 0x54
        // metadata: MPropertyDescription "Defines a color gradient from which a random color will be piked."
        CColorGradient m_Gradient; // 0x58        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_RandomColorTintColor because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_RandomColorTintColor) == 0x70);
};
