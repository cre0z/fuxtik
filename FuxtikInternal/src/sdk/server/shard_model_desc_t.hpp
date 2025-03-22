#pragma once
#include "source2sdk/client/ShardSolid_t.hpp"
#include "source2sdk/client/ShatterPanelMode.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x60
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int32 m_nModelID"
    // static metadata: MNetworkVarNames "HMaterialStrong m_hMaterial"
    // static metadata: MNetworkVarNames "ShardSolid_t m_solid"
    // static metadata: MNetworkVarNames "ShatterPanelMode m_ShatterPanelMode"
    // static metadata: MNetworkVarNames "Vector2D m_vecPanelSize"
    // static metadata: MNetworkVarNames "Vector2D m_vecStressPositionA"
    // static metadata: MNetworkVarNames "Vector2D m_vecStressPositionB"
    // static metadata: MNetworkVarNames "Vector2D m_vecPanelVertices"
    // static metadata: MNetworkVarNames "float m_flGlassHalfThickness"
    // static metadata: MNetworkVarNames "bool m_bHasParent"
    // static metadata: MNetworkVarNames "bool m_bParentFrozen"
    // static metadata: MNetworkVarNames "CUtlStringToken m_SurfacePropStringToken"
    #pragma pack(push, 1)
    struct shard_model_desc_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkEnable
        int32_t m_nModelID; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        // metadata: MNetworkEnable
        // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
        char m_hMaterial[0x8]; // 0x10        
        // metadata: MNetworkEnable
        client::ShardSolid_t m_solid; // 0x18        
        // metadata: MNetworkEnable
        client::ShatterPanelMode m_ShatterPanelMode; // 0x19        
        [[maybe_unused]] std::uint8_t pad_0x1a[0x2]; // 0x1a
        // metadata: MNetworkEnable
        Vector2D m_vecPanelSize; // 0x1c        
        // metadata: MNetworkEnable
        Vector2D m_vecStressPositionA; // 0x24        
        // metadata: MNetworkEnable
        Vector2D m_vecStressPositionB; // 0x2c        
        [[maybe_unused]] std::uint8_t pad_0x34[0x4]; // 0x34
        // metadata: MNetworkEnable
        // m_vecPanelVertices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<Vector2D> m_vecPanelVertices;
        char m_vecPanelVertices[0x18]; // 0x38        
        // metadata: MNetworkEnable
        float m_flGlassHalfThickness; // 0x50        
        // metadata: MNetworkEnable
        bool m_bHasParent; // 0x54        
        // metadata: MNetworkEnable
        bool m_bParentFrozen; // 0x55        
        [[maybe_unused]] std::uint8_t pad_0x56[0x2]; // 0x56
        // metadata: MNetworkEnable
        CUtlStringToken m_SurfacePropStringToken; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x5c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(shard_model_desc_t, m_nModelID) == 0x8);
    static_assert(offsetof(shard_model_desc_t, m_hMaterial) == 0x10);
    static_assert(offsetof(shard_model_desc_t, m_solid) == 0x18);
    static_assert(offsetof(shard_model_desc_t, m_ShatterPanelMode) == 0x19);
    static_assert(offsetof(shard_model_desc_t, m_vecPanelSize) == 0x1c);
    static_assert(offsetof(shard_model_desc_t, m_vecStressPositionA) == 0x24);
    static_assert(offsetof(shard_model_desc_t, m_vecStressPositionB) == 0x2c);
    static_assert(offsetof(shard_model_desc_t, m_vecPanelVertices) == 0x38);
    static_assert(offsetof(shard_model_desc_t, m_flGlassHalfThickness) == 0x50);
    static_assert(offsetof(shard_model_desc_t, m_bHasParent) == 0x54);
    static_assert(offsetof(shard_model_desc_t, m_bParentFrozen) == 0x55);
    static_assert(offsetof(shard_model_desc_t, m_SurfacePropStringToken) == 0x58);
    
    static_assert(sizeof(shard_model_desc_t) == 0x60);
};
