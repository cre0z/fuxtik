#pragma once
#include "source2sdk/modellib/CRenderSkeleton.hpp"
#include "source2sdk/modellib/CSceneObjectData.hpp"
#include "source2sdk/modellib/DynamicMeshDeformParams_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    class CBaseConstraint;
};

namespace source2sdk::modellib
{
    class CRenderGroom;
};

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x1f8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CRenderMesh
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        // m_sceneObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorFixedGrowable<modellib::CSceneObjectData> m_sceneObjects;
        char m_sceneObjects[0x90]; // 0x10        
        // m_constraints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::CBaseConstraint*> m_constraints;
        char m_constraints[0x18]; // 0xa0        
        modellib::CRenderSkeleton m_skeleton; // 0xb8        
        [[maybe_unused]] std::uint8_t pad_0x108[0xd8]; // 0x108
        modellib::DynamicMeshDeformParams_t m_meshDeformParams; // 0x1e0        
        [[maybe_unused]] std::uint8_t pad_0x1ec[0x4]; // 0x1ec
        modellib::CRenderGroom* m_pGroomData; // 0x1f0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CRenderMesh, m_sceneObjects) == 0x10);
    static_assert(offsetof(CRenderMesh, m_constraints) == 0xa0);
    static_assert(offsetof(CRenderMesh, m_skeleton) == 0xb8);
    static_assert(offsetof(CRenderMesh, m_meshDeformParams) == 0x1e0);
    static_assert(offsetof(CRenderMesh, m_pGroomData) == 0x1f0);
    
    static_assert(sizeof(CRenderMesh) == 0x1f8);
};
