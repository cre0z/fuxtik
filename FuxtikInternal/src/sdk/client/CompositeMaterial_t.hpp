#pragma once
#include "source2sdk/client/GeneratedTextureHandle_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x90
    // 
    // static metadata: MPropertyElementNameFn
    #pragma pack(push, 1)
    struct CompositeMaterial_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MPropertyGroupName "Target Material"
        // metadata: MPropertyAttributeEditor "CompositeMaterialKVInspector"
        KeyValues3 m_TargetKVs; // 0x8        
        // metadata: MPropertyGroupName "Pre-Generated Output Material"
        // metadata: MPropertyAttributeEditor "CompositeMaterialKVInspector"
        KeyValues3 m_PreGenerationKVs; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x28[0x30]; // 0x28
        // metadata: MPropertyGroupName "Generated Composite Material"
        // metadata: MPropertyAttributeEditor "CompositeMaterialKVInspector"
        KeyValues3 m_FinalKVs; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x68[0x8]; // 0x68
        // metadata: MPropertyFriendlyName "Generated Textures"
        // m_vecGeneratedTextures has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::GeneratedTextureHandle_t> m_vecGeneratedTextures;
        char m_vecGeneratedTextures[0x18]; // 0x70        
        [[maybe_unused]] std::uint8_t pad_0x88[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CompositeMaterial_t, m_TargetKVs) == 0x8);
    static_assert(offsetof(CompositeMaterial_t, m_PreGenerationKVs) == 0x18);
    static_assert(offsetof(CompositeMaterial_t, m_FinalKVs) == 0x58);
    static_assert(offsetof(CompositeMaterial_t, m_vecGeneratedTextures) == 0x70);
    
    static_assert(sizeof(CompositeMaterial_t) == 0x90);
};
