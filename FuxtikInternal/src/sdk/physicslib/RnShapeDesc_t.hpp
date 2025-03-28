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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x10
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct RnShapeDesc_t
    {
    public:
        uint32_t m_nCollisionAttributeIndex; // 0x0        
        uint32_t m_nSurfacePropertyIndex; // 0x4        
        CUtlString m_UserFriendlyName; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(RnShapeDesc_t, m_nCollisionAttributeIndex) == 0x0);
    static_assert(offsetof(RnShapeDesc_t, m_nSurfacePropertyIndex) == 0x4);
    static_assert(offsetof(RnShapeDesc_t, m_UserFriendlyName) == 0x8);
    
    static_assert(sizeof(RnShapeDesc_t) == 0x10);
};
