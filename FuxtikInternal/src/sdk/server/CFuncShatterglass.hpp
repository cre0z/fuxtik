#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x868
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CFuncShatterglass : public server::CBaseModelEntity
    {
    public:
        // m_hGlassMaterialDamaged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hGlassMaterialDamaged;
        char m_hGlassMaterialDamaged[0x8]; // 0x710        
        // m_hGlassMaterialUndamaged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hGlassMaterialUndamaged;
        char m_hGlassMaterialUndamaged[0x8]; // 0x718        
        // m_hConcreteMaterialEdgeFace has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hConcreteMaterialEdgeFace;
        char m_hConcreteMaterialEdgeFace[0x8]; // 0x720        
        // m_hConcreteMaterialEdgeCaps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hConcreteMaterialEdgeCaps;
        char m_hConcreteMaterialEdgeCaps[0x8]; // 0x728        
        // m_hConcreteMaterialEdgeFins has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hConcreteMaterialEdgeFins;
        char m_hConcreteMaterialEdgeFins[0x8]; // 0x730        
        matrix3x4_t m_matPanelTransform; // 0x738        
        matrix3x4_t m_matPanelTransformWsTemp; // 0x768        
        // m_vecShatterGlassShards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_vecShatterGlassShards;
        char m_vecShatterGlassShards[0x18]; // 0x798        
        Vector2D m_PanelSize; // 0x7b0        
        Vector m_vecPanelNormalWs; // 0x7b8        
        int32_t m_nNumShardsEverCreated; // 0x7c4        
        client::GameTime_t m_flLastShatterSoundEmitTime; // 0x7c8        
        client::GameTime_t m_flLastCleanupTime; // 0x7cc        
        client::GameTime_t m_flInitAtTime; // 0x7d0        
        float m_flGlassThickness; // 0x7d4        
        float m_flSpawnInvulnerability; // 0x7d8        
        bool m_bBreakSilent; // 0x7dc        
        bool m_bBreakShardless; // 0x7dd        
        bool m_bBroken; // 0x7de        
        bool m_bHasRateLimitedShards; // 0x7df        
        bool m_bGlassNavIgnore; // 0x7e0        
        bool m_bGlassInFrame; // 0x7e1        
        bool m_bStartBroken; // 0x7e2        
        uint8_t m_iInitialDamageType; // 0x7e3        
        [[maybe_unused]] std::uint8_t pad_0x7e4[0x4]; // 0x7e4
        CUtlSymbolLarge m_szDamagePositioningEntityName01; // 0x7e8        
        CUtlSymbolLarge m_szDamagePositioningEntityName02; // 0x7f0        
        CUtlSymbolLarge m_szDamagePositioningEntityName03; // 0x7f8        
        CUtlSymbolLarge m_szDamagePositioningEntityName04; // 0x800        
        // m_vInitialDamagePositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_vInitialDamagePositions;
        char m_vInitialDamagePositions[0x18]; // 0x808        
        // m_vExtraDamagePositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_vExtraDamagePositions;
        char m_vExtraDamagePositions[0x18]; // 0x820        
        entity2::CEntityIOOutput m_OnBroken; // 0x838        
        [[maybe_unused]] std::uint8_t pad_0x860[0x1]; // 0x860
        uint8_t m_iSurfaceType; // 0x861        
        [[maybe_unused]] std::uint8_t pad_0x862[0x6];
        
        // Datamap fields:
        // void CFuncShatterglassGlassThink; // 0x0
        // void InputHit; // 0x0
        // void InputShatter; // 0x0
        // void InputRestore; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncShatterglass because it is not a standard-layout class
    static_assert(sizeof(CFuncShatterglass) == 0x868);
};
