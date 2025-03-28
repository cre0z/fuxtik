#pragma once
#include "source2sdk/client/C_BaseClientUIEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CPointOffScreenIndicatorUi;
};

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0xf30
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bIgnoreInput"
    // static metadata: MNetworkVarNames "bool m_bLit"
    // static metadata: MNetworkVarNames "bool m_bFollowPlayerAcrossTeleport"
    // static metadata: MNetworkVarNames "float m_flWidth"
    // static metadata: MNetworkVarNames "float m_flHeight"
    // static metadata: MNetworkVarNames "float m_flDPI"
    // static metadata: MNetworkVarNames "float m_flInteractDistance"
    // static metadata: MNetworkVarNames "float m_flDepthOffset"
    // static metadata: MNetworkVarNames "uint32 m_unOwnerContext"
    // static metadata: MNetworkVarNames "uint32 m_unHorizontalAlign"
    // static metadata: MNetworkVarNames "uint32 m_unVerticalAlign"
    // static metadata: MNetworkVarNames "uint32 m_unOrientation"
    // static metadata: MNetworkVarNames "bool m_bAllowInteractionFromAllSceneWorlds"
    // static metadata: MNetworkVarNames "string_t m_vecCSSClasses"
    // static metadata: MNetworkVarNames "bool m_bOpaque"
    // static metadata: MNetworkVarNames "bool m_bNoDepth"
    // static metadata: MNetworkVarNames "bool m_bRenderBackface"
    // static metadata: MNetworkVarNames "bool m_bUseOffScreenIndicator"
    // static metadata: MNetworkVarNames "bool m_bExcludeFromSaveGames"
    // static metadata: MNetworkVarNames "bool m_bGrabbable"
    // static metadata: MNetworkVarNames "bool m_bOnlyRenderToTexture"
    // static metadata: MNetworkVarNames "bool m_bDisableMipGen"
    // static metadata: MNetworkVarNames "int32 m_nExplicitImageLayout"
    #pragma pack(push, 1)
    class C_PointClientUIWorldPanel : public client::C_BaseClientUIEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xcf8[0x8]; // 0xcf8
        bool m_bForceRecreateNextUpdate; // 0xd00        
        bool m_bMoveViewToPlayerNextThink; // 0xd01        
        bool m_bCheckCSSClasses; // 0xd02        
        [[maybe_unused]] std::uint8_t pad_0xd03[0xd]; // 0xd03
        CTransform m_anchorDeltaTransform; // 0xd10        
        [[maybe_unused]] std::uint8_t pad_0xd30[0x178]; // 0xd30
        client::CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xea8        
        [[maybe_unused]] std::uint8_t pad_0xeb0[0x20]; // 0xeb0
        // metadata: MNetworkEnable
        bool m_bIgnoreInput; // 0xed0        
        // metadata: MNetworkEnable
        bool m_bLit; // 0xed1        
        // metadata: MNetworkEnable
        bool m_bFollowPlayerAcrossTeleport; // 0xed2        
        [[maybe_unused]] std::uint8_t pad_0xed3[0x1]; // 0xed3
        // metadata: MNetworkEnable
        float m_flWidth; // 0xed4        
        // metadata: MNetworkEnable
        float m_flHeight; // 0xed8        
        // metadata: MNetworkEnable
        float m_flDPI; // 0xedc        
        // metadata: MNetworkEnable
        float m_flInteractDistance; // 0xee0        
        // metadata: MNetworkEnable
        float m_flDepthOffset; // 0xee4        
        // metadata: MNetworkEnable
        uint32_t m_unOwnerContext; // 0xee8        
        // metadata: MNetworkEnable
        uint32_t m_unHorizontalAlign; // 0xeec        
        // metadata: MNetworkEnable
        uint32_t m_unVerticalAlign; // 0xef0        
        // metadata: MNetworkEnable
        uint32_t m_unOrientation; // 0xef4        
        // metadata: MNetworkEnable
        bool m_bAllowInteractionFromAllSceneWorlds; // 0xef8        
        [[maybe_unused]] std::uint8_t pad_0xef9[0x7]; // 0xef9
        // metadata: MNetworkEnable
        // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
        char m_vecCSSClasses[0x18]; // 0xf00        
        // metadata: MNetworkEnable
        bool m_bOpaque; // 0xf18        
        // metadata: MNetworkEnable
        bool m_bNoDepth; // 0xf19        
        // metadata: MNetworkEnable
        bool m_bRenderBackface; // 0xf1a        
        // metadata: MNetworkEnable
        bool m_bUseOffScreenIndicator; // 0xf1b        
        // metadata: MNetworkEnable
        bool m_bExcludeFromSaveGames; // 0xf1c        
        // metadata: MNetworkEnable
        bool m_bGrabbable; // 0xf1d        
        // metadata: MNetworkEnable
        bool m_bOnlyRenderToTexture; // 0xf1e        
        // metadata: MNetworkEnable
        bool m_bDisableMipGen; // 0xf1f        
        // metadata: MNetworkEnable
        int32_t m_nExplicitImageLayout; // 0xf20        
        [[maybe_unused]] std::uint8_t pad_0xf24[0xc];
        
        // Datamap fields:
        // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0xea0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PointClientUIWorldPanel because it is not a standard-layout class
    static_assert(sizeof(C_PointClientUIWorldPanel) == 0xf30);
};
