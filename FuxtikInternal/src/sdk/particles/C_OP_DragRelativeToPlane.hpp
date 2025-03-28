#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
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
    // Size: 0xad0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_DragRelativeToPlane : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "dampening"
        particleslib::CParticleCollectionFloatInput m_flDragAtPlane; // 0x1b8        
        // metadata: MPropertyFriendlyName "falloff"
        particleslib::CParticleCollectionFloatInput m_flFalloff; // 0x310        
        // metadata: MPropertyFriendlyName "dampen on only one side of plane"
        bool m_bDirectional; // 0x468        
        [[maybe_unused]] std::uint8_t pad_0x469[0x7]; // 0x469
        // metadata: MPropertyFriendlyName "plane normal"
        // metadata: MVectorIsCoordinate
        particleslib::CParticleCollectionVecInput m_vecPlaneNormal; // 0x470        
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0xac8        
        [[maybe_unused]] std::uint8_t pad_0xacc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_DragRelativeToPlane because it is not a standard-layout class
    static_assert(sizeof(C_OP_DragRelativeToPlane) == 0xad0);
};
