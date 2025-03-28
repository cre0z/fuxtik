#pragma once
#include "source2sdk/client/CompositeMaterialEditorPoint_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x38
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCompositeMaterialEditorDoc
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        int32_t m_nVersion; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        // m_Points has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CompositeMaterialEditorPoint_t> m_Points;
        char m_Points[0x18]; // 0x10        
        KeyValues3 m_KVthumbnail; // 0x28        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCompositeMaterialEditorDoc, m_nVersion) == 0x8);
    static_assert(offsetof(CCompositeMaterialEditorDoc, m_Points) == 0x10);
    static_assert(offsetof(CCompositeMaterialEditorDoc, m_KVthumbnail) == 0x28);
    
    static_assert(sizeof(CCompositeMaterialEditorDoc) == 0x38);
};
