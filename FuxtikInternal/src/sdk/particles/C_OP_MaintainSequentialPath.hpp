#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/CPathParameters.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x210
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_MaintainSequentialPath : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "maximum distance"
        float m_fMaxDistance; // 0x1b8        
        // metadata: MPropertyFriendlyName "particles to map from start to end"
        float m_flNumToAssign; // 0x1bc        
        // metadata: MPropertyFriendlyName "cohesion strength"
        float m_flCohesionStrength; // 0x1c0        
        // metadata: MPropertyFriendlyName "control point movement tolerance"
        float m_flTolerance; // 0x1c4        
        // metadata: MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
        bool m_bLoop; // 0x1c8        
        // metadata: MPropertyFriendlyName "use existing particle count"
        bool m_bUseParticleCount; // 0x1c9        
        [[maybe_unused]] std::uint8_t pad_0x1ca[0x6]; // 0x1ca
        particles::CPathParameters m_PathParams; // 0x1d0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_MaintainSequentialPath because it is not a standard-layout class
    static_assert(sizeof(C_OP_MaintainSequentialPath) == 0x210);
};
