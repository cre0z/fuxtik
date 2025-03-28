#pragma once
#include "source2sdk/mathlib_extended/AABB_t.hpp"
#include "source2sdk/modellib/CMaterialDrawDescriptor.hpp"
#include "source2sdk/modellib/CMeshletDescriptor.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x78
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSceneObjectData
    {
    public:
        Vector m_vMinBounds; // 0x0        
        Vector m_vMaxBounds; // 0xc        
        // m_drawCalls has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::CMaterialDrawDescriptor> m_drawCalls;
        char m_drawCalls[0x18]; // 0x18        
        // m_drawBounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<mathlib_extended::AABB_t> m_drawBounds;
        char m_drawBounds[0x18]; // 0x30        
        // m_meshlets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::CMeshletDescriptor> m_meshlets;
        char m_meshlets[0x18]; // 0x48        
        Vector4D m_vTintColor; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x70[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSceneObjectData, m_vMinBounds) == 0x0);
    static_assert(offsetof(CSceneObjectData, m_vMaxBounds) == 0xc);
    static_assert(offsetof(CSceneObjectData, m_drawCalls) == 0x18);
    static_assert(offsetof(CSceneObjectData, m_drawBounds) == 0x30);
    static_assert(offsetof(CSceneObjectData, m_meshlets) == 0x48);
    static_assert(offsetof(CSceneObjectData, m_vTintColor) == 0x60);
    
    static_assert(sizeof(CSceneObjectData) == 0x78);
};
