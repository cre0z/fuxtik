#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/client/OnFrame.hpp"
#include "source2sdk/client/ShatterGlassStressType.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CFuncShatterglass;
};

namespace source2sdk::server
{
    class CShatterGlassShardPhysics;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xc0
    // Has VTable
    #pragma pack(push, 1)
    class CShatterGlassShard
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        uint32_t m_hShardHandle; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        // m_vecPanelVertices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector2D> m_vecPanelVertices;
        char m_vecPanelVertices[0x18]; // 0x10        
        Vector2D m_vLocalPanelSpaceOrigin; // 0x28        
        // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_hModel;
        char m_hModel[0x8]; // 0x30        
        // m_hPhysicsEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CShatterGlassShardPhysics> m_hPhysicsEntity;
        char m_hPhysicsEntity[0x4]; // 0x38        
        // m_hParentPanel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CFuncShatterglass> m_hParentPanel;
        char m_hParentPanel[0x4]; // 0x3c        
        uint32_t m_hParentShard; // 0x40        
        client::ShatterGlassStressType m_ShatterStressType; // 0x44        
        [[maybe_unused]] std::uint8_t pad_0x45[0x3]; // 0x45
        Vector m_vecStressVelocity; // 0x48        
        bool m_bCreatedModel; // 0x54        
        [[maybe_unused]] std::uint8_t pad_0x55[0x3]; // 0x55
        float m_flLongestEdge; // 0x58        
        float m_flShortestEdge; // 0x5c        
        float m_flLongestAcross; // 0x60        
        float m_flShortestAcross; // 0x64        
        float m_flSumOfAllEdges; // 0x68        
        float m_flArea; // 0x6c        
        client::OnFrame m_nOnFrameEdge; // 0x70        
        [[maybe_unused]] std::uint8_t pad_0x71[0x3]; // 0x71
        int32_t m_nParentPanelsNthShard; // 0x74        
        int32_t m_nSubShardGeneration; // 0x78        
        Vector2D m_vecAverageVertPosition; // 0x7c        
        bool m_bAverageVertPositionIsValid; // 0x84        
        [[maybe_unused]] std::uint8_t pad_0x85[0x3]; // 0x85
        Vector2D m_vecPanelSpaceStressPositionA; // 0x88        
        Vector2D m_vecPanelSpaceStressPositionB; // 0x90        
        bool m_bStressPositionAIsValid; // 0x98        
        bool m_bStressPositionBIsValid; // 0x99        
        bool m_bFlaggedForRemoval; // 0x9a        
        [[maybe_unused]] std::uint8_t pad_0x9b[0x1]; // 0x9b
        client::GameTime_t m_flPhysicsEntitySpawnedAtTime; // 0x9c        
        bool m_bShatterRateLimited; // 0xa0        
        [[maybe_unused]] std::uint8_t pad_0xa1[0x3]; // 0xa1
        // m_hEntityHittingMe has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEntityHittingMe;
        char m_hEntityHittingMe[0x4]; // 0xa4        
        // m_vecNeighbors has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_vecNeighbors;
        char m_vecNeighbors[0x18]; // 0xa8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CShatterGlassShard, m_hShardHandle) == 0x8);
    static_assert(offsetof(CShatterGlassShard, m_vecPanelVertices) == 0x10);
    static_assert(offsetof(CShatterGlassShard, m_vLocalPanelSpaceOrigin) == 0x28);
    static_assert(offsetof(CShatterGlassShard, m_hModel) == 0x30);
    static_assert(offsetof(CShatterGlassShard, m_hPhysicsEntity) == 0x38);
    static_assert(offsetof(CShatterGlassShard, m_hParentPanel) == 0x3c);
    static_assert(offsetof(CShatterGlassShard, m_hParentShard) == 0x40);
    static_assert(offsetof(CShatterGlassShard, m_ShatterStressType) == 0x44);
    static_assert(offsetof(CShatterGlassShard, m_vecStressVelocity) == 0x48);
    static_assert(offsetof(CShatterGlassShard, m_bCreatedModel) == 0x54);
    static_assert(offsetof(CShatterGlassShard, m_flLongestEdge) == 0x58);
    static_assert(offsetof(CShatterGlassShard, m_flShortestEdge) == 0x5c);
    static_assert(offsetof(CShatterGlassShard, m_flLongestAcross) == 0x60);
    static_assert(offsetof(CShatterGlassShard, m_flShortestAcross) == 0x64);
    static_assert(offsetof(CShatterGlassShard, m_flSumOfAllEdges) == 0x68);
    static_assert(offsetof(CShatterGlassShard, m_flArea) == 0x6c);
    static_assert(offsetof(CShatterGlassShard, m_nOnFrameEdge) == 0x70);
    static_assert(offsetof(CShatterGlassShard, m_nParentPanelsNthShard) == 0x74);
    static_assert(offsetof(CShatterGlassShard, m_nSubShardGeneration) == 0x78);
    static_assert(offsetof(CShatterGlassShard, m_vecAverageVertPosition) == 0x7c);
    static_assert(offsetof(CShatterGlassShard, m_bAverageVertPositionIsValid) == 0x84);
    static_assert(offsetof(CShatterGlassShard, m_vecPanelSpaceStressPositionA) == 0x88);
    static_assert(offsetof(CShatterGlassShard, m_vecPanelSpaceStressPositionB) == 0x90);
    static_assert(offsetof(CShatterGlassShard, m_bStressPositionAIsValid) == 0x98);
    static_assert(offsetof(CShatterGlassShard, m_bStressPositionBIsValid) == 0x99);
    static_assert(offsetof(CShatterGlassShard, m_bFlaggedForRemoval) == 0x9a);
    static_assert(offsetof(CShatterGlassShard, m_flPhysicsEntitySpawnedAtTime) == 0x9c);
    static_assert(offsetof(CShatterGlassShard, m_bShatterRateLimited) == 0xa0);
    static_assert(offsetof(CShatterGlassShard, m_hEntityHittingMe) == 0xa4);
    static_assert(offsetof(CShatterGlassShard, m_vecNeighbors) == 0xa8);
    
    static_assert(sizeof(CShatterGlassShard) == 0xc0);
};
