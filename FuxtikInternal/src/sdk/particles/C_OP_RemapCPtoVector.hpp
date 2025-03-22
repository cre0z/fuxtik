#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
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
    // Size: 0x208
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RemapCPtoVector : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "input control point number"
        int32_t m_nCPInput; // 0x1b8        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1bc        
        // metadata: MPropertyFriendlyName "local space CP"
        int32_t m_nLocalSpaceCP; // 0x1c0        
        // metadata: MPropertyFriendlyName "input minimum"
        // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
        Vector m_vInputMin; // 0x1c4        
        // metadata: MPropertyFriendlyName "input maximum"
        // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
        Vector m_vInputMax; // 0x1d0        
        // metadata: MPropertyFriendlyName "output minimum"
        // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
        Vector m_vOutputMin; // 0x1dc        
        // metadata: MPropertyFriendlyName "output maximum"
        // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
        Vector m_vOutputMax; // 0x1e8        
        // metadata: MPropertyFriendlyName "emitter lifetime start time (seconds)"
        float m_flStartTime; // 0x1f4        
        // metadata: MPropertyFriendlyName "emitter lifetime end time (seconds)"
        float m_flEndTime; // 0x1f8        
        // metadata: MPropertyFriendlyName "interpolation scale"
        float m_flInterpRate; // 0x1fc        
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0x200        
        // metadata: MPropertyFriendlyName "offset position"
        bool m_bOffset; // 0x204        
        // metadata: MPropertyFriendlyName "accelerate position"
        bool m_bAccelerate; // 0x205        
        [[maybe_unused]] std::uint8_t pad_0x206[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RemapCPtoVector because it is not a standard-layout class
    static_assert(sizeof(C_OP_RemapCPtoVector) == 0x208);
};
