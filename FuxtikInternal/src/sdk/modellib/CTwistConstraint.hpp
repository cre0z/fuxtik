#pragma once
#include "source2sdk/modellib/CBaseConstraint.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0xa0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CTwistConstraint : public modellib::CBaseConstraint
    {
    public:
        bool m_bInverse; // 0x70        
        [[maybe_unused]] std::uint8_t pad_0x71[0xf]; // 0x71
        Quaternion m_qParentBindRotation; // 0x80        
        Quaternion m_qChildBindRotation; // 0x90        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTwistConstraint because it is not a standard-layout class
    static_assert(sizeof(CTwistConstraint) == 0xa0);
};
