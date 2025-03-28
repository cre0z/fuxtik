#pragma once
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
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
    // Size: 0x338
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderSound : public particles::CParticleFunctionRenderer
    {
    public:
        // metadata: MPropertyFriendlyName "duration scale"
        float m_flDurationScale; // 0x208        
        // metadata: MPropertyFriendlyName "decibel level scale"
        float m_flSndLvlScale; // 0x20c        
        // metadata: MPropertyFriendlyName "pitch scale"
        float m_flPitchScale; // 0x210        
        // metadata: MPropertyFriendlyName "volume scale"
        float m_flVolumeScale; // 0x214        
        // metadata: MPropertyFriendlyName "decibel level field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nSndLvlField; // 0x218        
        // metadata: MPropertyFriendlyName "duration field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nDurationField; // 0x21c        
        // metadata: MPropertyFriendlyName "pitch field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nPitchField; // 0x220        
        // metadata: MPropertyFriendlyName "volume field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nVolumeField; // 0x224        
        // metadata: MPropertyFriendlyName "sound channel"
        // metadata: MPropertyAttributeChoiceName "sound_channel"
        int32_t m_nChannel; // 0x228        
        // metadata: MPropertyFriendlyName "sound control point number"
        int32_t m_nCPReference; // 0x22c        
        // metadata: MPropertyFriendlyName "sound"
        // metadata: MPropertyAttributeEditor "SoundPicker()"
        char m_pszSoundName[256]; // 0x230        
        // metadata: MPropertyFriendlyName "suppress stop event"
        bool m_bSuppressStopSoundEvent; // 0x330        
        [[maybe_unused]] std::uint8_t pad_0x331[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderSound because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderSound) == 0x338);
};
