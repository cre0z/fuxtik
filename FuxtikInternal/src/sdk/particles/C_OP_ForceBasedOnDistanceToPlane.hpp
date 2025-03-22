#pragma once
#include "source2sdk/particles/CParticleFunctionForce.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x200
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_ForceBasedOnDistanceToPlane : public particles::CParticleFunctionForce
    {
    public:
        // metadata: MPropertyFriendlyName "min distance from plane"
        float m_flMinDist; // 0x1c8        
        // metadata: MPropertyFriendlyName "force at min distance"
        // metadata: MVectorIsCoordinate
        Vector m_vecForceAtMinDist; // 0x1cc        
        // metadata: MPropertyFriendlyName "max distance from plane"
        float m_flMaxDist; // 0x1d8        
        // metadata: MPropertyFriendlyName "force at max distance"
        // metadata: MVectorIsCoordinate
        Vector m_vecForceAtMaxDist; // 0x1dc        
        // metadata: MPropertyFriendlyName "plane normal"
        // metadata: MVectorIsCoordinate
        Vector m_vecPlaneNormal; // 0x1e8        
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1f4        
        // metadata: MPropertyFriendlyName "exponent"
        float m_flExponent; // 0x1f8        
        [[maybe_unused]] std::uint8_t pad_0x1fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_ForceBasedOnDistanceToPlane because it is not a standard-layout class
    static_assert(sizeof(C_OP_ForceBasedOnDistanceToPlane) == 0x200);
};
