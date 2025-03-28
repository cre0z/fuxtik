#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
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
    // Size: 0x828
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RemapExternalWindToCP : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "control point to sample wind"
        int32_t m_nCP; // 0x1c0        
        // metadata: MPropertyFriendlyName "output control point"
        int32_t m_nCPOutput; // 0x1c4        
        // metadata: MPropertyFriendlyName "wind scale"
        particleslib::CParticleCollectionVecInput m_vecScale; // 0x1c8        
        // metadata: MPropertyFriendlyName "set magnitude instead of vector"
        bool m_bSetMagnitude; // 0x820        
        [[maybe_unused]] std::uint8_t pad_0x821[0x3]; // 0x821
        // metadata: MPropertyFriendlyName "magnitude output component"
        // metadata: MPropertyAttributeChoiceName "vector_component"
        // metadata: MPropertySuppressExpr "!m_bSetMagnitude"
        int32_t m_nOutVectorField; // 0x824        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RemapExternalWindToCP because it is not a standard-layout class
    static_assert(sizeof(C_OP_RemapExternalWindToCP) == 0x828);
};
