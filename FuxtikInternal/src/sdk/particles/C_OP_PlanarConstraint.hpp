#pragma once
#include "source2sdk/particles/CParticleFunctionConstraint.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
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
    // Size: 0x490
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_PlanarConstraint : public particles::CParticleFunctionConstraint
    {
    public:
        // metadata: MPropertyFriendlyName "plane point"
        // metadata: MVectorIsCoordinate
        Vector m_PointOnPlane; // 0x1b8        
        // metadata: MPropertyFriendlyName "plane normal"
        Vector m_PlaneNormal; // 0x1c4        
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1d0        
        // metadata: MPropertyFriendlyName "global origin"
        bool m_bGlobalOrigin; // 0x1d4        
        // metadata: MPropertyFriendlyName "global normal"
        bool m_bGlobalNormal; // 0x1d5        
        [[maybe_unused]] std::uint8_t pad_0x1d6[0x2]; // 0x1d6
        // metadata: MPropertyFriendlyName "radius scale"
        particleslib::CPerParticleFloatInput m_flRadiusScale; // 0x1d8        
        // metadata: MPropertyFriendlyName "falloff distance from control point"
        particleslib::CParticleCollectionFloatInput m_flMaximumDistanceToCP; // 0x330        
        // metadata: MPropertyFriendlyName "use old code"
        bool m_bUseOldCode; // 0x488        
        [[maybe_unused]] std::uint8_t pad_0x489[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_PlanarConstraint because it is not a standard-layout class
    static_assert(sizeof(C_OP_PlanarConstraint) == 0x490);
};
