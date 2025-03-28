#pragma once
#include "source2sdk/smartprops/CSmartPropAttributeApplyColorMode.hpp"
#include "source2sdk/smartprops/CSmartPropOperation.hpp"
#include "source2sdk/smartprops/ColorChoice_t.hpp"
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
    // Size: 0xa8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Tint Color Choice"
    // static metadata: MPropertyDescription "Set the color tint to one color out of a pre-selected set of colors."
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropOperation_SetTintColor : public smartprops::CSmartPropOperation
    {
    public:
        // metadata: MPropertyDescription "Specifies how the selected color should be applied."
        smartprops::CSmartPropAttributeApplyColorMode m_Mode; // 0x50        
        // metadata: MPropertyDescription "List of possible colors which may be selected"
        // m_ColorChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<smartprops::ColorChoice_t> m_ColorChoices;
        char m_ColorChoices[0x18]; // 0x90        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_SetTintColor because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_SetTintColor) == 0xa8);
};
