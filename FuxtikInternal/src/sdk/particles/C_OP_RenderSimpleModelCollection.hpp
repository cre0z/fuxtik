#pragma once
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleModelInput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
    // Size: 0x298
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderSimpleModelCollection : public particles::CParticleFunctionRenderer
    {
    public:
        // metadata: MPropertyStartGroup "Orientation"
        // metadata: MPropertyFriendlyName "center mesh"
        // metadata: MPropertySortPriority "750"
        bool m_bCenterOffset; // 0x208        
        [[maybe_unused]] std::uint8_t pad_0x209[0x7]; // 0x209
        // metadata: MPropertyStartGroup "Model"
        // metadata: MPropertyFriendlyName "model"
        // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_hModel;
        char m_hModel[0x8]; // 0x210        
        // metadata: MPropertyFriendlyName "input model override"
        particleslib::CParticleModelInput m_modelInput; // 0x218        
        // metadata: MPropertyFriendlyName "model LOD"
        int32_t m_nLOD; // 0x278        
        // metadata: MPropertyFriendlyName "disable shadows"
        bool m_bDisableShadows; // 0x27c        
        // metadata: MPropertyFriendlyName "disable motion blur"
        bool m_bDisableMotionBlur; // 0x27d        
        // metadata: MPropertyFriendlyName "accept decals"
        bool m_bAcceptsDecals; // 0x27e        
        [[maybe_unused]] std::uint8_t pad_0x27f[0x1]; // 0x27f
        // metadata: MPropertyFriendlyName "angular velocity attribute (improves motion blur)"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nAngularVelocityField; // 0x280        
        [[maybe_unused]] std::uint8_t pad_0x284[0x14];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderSimpleModelCollection because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderSimpleModelCollection) == 0x298);
};
