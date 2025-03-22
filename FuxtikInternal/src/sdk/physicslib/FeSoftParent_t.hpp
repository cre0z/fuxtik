#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeSoftParent_t
    {
    public:
        int32_t nParent; // 0x0        
        float flAlpha; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeSoftParent_t, nParent) == 0x0);
    static_assert(offsetof(FeSoftParent_t, flAlpha) == 0x4);
    
    static_assert(sizeof(FeSoftParent_t) == 0x8);
};
