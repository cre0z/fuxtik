#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x218
    // Has VTable
    // Is Abstract
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RemapNamedModelElementOnceTimed : public particles::CParticleFunctionOperator
    {
    public:
        // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_hModel;
        char m_hModel[0x8]; // 0x1b8        
        // metadata: MPropertyFriendlyName "input names"
        // m_inNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_inNames;
        char m_inNames[0x18]; // 0x1c0        
        // metadata: MPropertyFriendlyName "output names"
        // m_outNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_outNames;
        char m_outNames[0x18]; // 0x1d8        
        // metadata: MPropertyFriendlyName "fallback names when the input doesn't match"
        // m_fallbackNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_fallbackNames;
        char m_fallbackNames[0x18]; // 0x1f0        
        // metadata: MPropertyFriendlyName "model from renderer"
        bool m_bModelFromRenderer; // 0x208        
        // metadata: MPropertyFriendlyName "remap time proportional"
        bool m_bProportional; // 0x209        
        [[maybe_unused]] std::uint8_t pad_0x20a[0x2]; // 0x20a
        // metadata: MPropertyFriendlyName "input field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldInput; // 0x20c        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x210        
        // metadata: MPropertyFriendlyName "remap time"
        float m_flRemapTime; // 0x214        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RemapNamedModelElementOnceTimed because it is not a standard-layout class
    static_assert(sizeof(C_OP_RemapNamedModelElementOnceTimed) == 0x218);
};
