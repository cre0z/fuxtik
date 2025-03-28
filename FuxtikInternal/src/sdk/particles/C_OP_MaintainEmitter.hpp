#pragma once
#include "source2sdk/particles/CParticleFunctionEmitter.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
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
    // Size: 0x5e0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_MaintainEmitter : public particles::CParticleFunctionEmitter
    {
    public:
        // metadata: MPropertyFriendlyName "count to maintain"
        particleslib::CParticleCollectionFloatInput m_nParticlesToMaintain; // 0x1c0        
        // metadata: MPropertyFriendlyName "emission start time"
        float m_flStartTime; // 0x318        
        [[maybe_unused]] std::uint8_t pad_0x31c[0x4]; // 0x31c
        // metadata: MPropertyFriendlyName "emission duration"
        particleslib::CParticleCollectionFloatInput m_flEmissionDuration; // 0x320        
        // metadata: MPropertyFriendlyName "emission rate"
        float m_flEmissionRate; // 0x478        
        // metadata: MPropertyFriendlyName "control point with snapshot data"
        int32_t m_nSnapshotControlPoint; // 0x47c        
        // metadata: MPropertyFriendlyName "group emission times for new particles"
        bool m_bEmitInstantaneously; // 0x480        
        // metadata: MPropertyFriendlyName "perform final emit on stop"
        bool m_bFinalEmitOnStop; // 0x481        
        [[maybe_unused]] std::uint8_t pad_0x482[0x6]; // 0x482
        // metadata: MPropertyFriendlyName "total count scale"
        particleslib::CParticleCollectionFloatInput m_flScale; // 0x488        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_MaintainEmitter because it is not a standard-layout class
    static_assert(sizeof(C_OP_MaintainEmitter) == 0x5e0);
};
