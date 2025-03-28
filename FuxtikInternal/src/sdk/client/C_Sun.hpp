#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Standard-layout class: false
    // Size: 0xd28
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByName "m_clrRender"
    // static metadata: MNetworkExcludeByName "CGameSceneNode::m_vecOrigin"
    // static metadata: MNetworkIncludeByUserGroup "Origin"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_angRotation"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hParent"
    // static metadata: MNetworkIncludeByName "m_spawnflags"
    // static metadata: MNetworkVarNames "Vector m_vDirection"
    // static metadata: MNetworkVarNames "string_t m_iszEffectName"
    // static metadata: MNetworkVarNames "string_t m_iszSSEffectName"
    // static metadata: MNetworkVarNames "Color m_clrOverlay"
    // static metadata: MNetworkVarNames "bool m_bOn"
    // static metadata: MNetworkVarNames "bool m_bmaxColor"
    // static metadata: MNetworkVarNames "float32 m_flSize"
    // static metadata: MNetworkVarNames "float32 m_flHazeScale"
    // static metadata: MNetworkVarNames "float32 m_flRotation"
    // static metadata: MNetworkVarNames "float32 m_flHDRColorScale"
    // static metadata: MNetworkVarNames "float32 m_flAlphaHaze"
    // static metadata: MNetworkVarNames "float32 m_flAlphaScale"
    // static metadata: MNetworkVarNames "float32 m_flAlphaHdr"
    // static metadata: MNetworkVarNames "float32 m_flFarZScale"
    #pragma pack(push, 1)
    class C_Sun : public client::C_BaseModelEntity
    {
    public:
        client::ParticleIndex_t m_fxSSSunFlareEffectIndex; // 0xcc8        
        client::ParticleIndex_t m_fxSunFlareEffectIndex; // 0xccc        
        float m_fdistNormalize; // 0xcd0        
        Vector m_vSunPos; // 0xcd4        
        // metadata: MNetworkEnable
        Vector m_vDirection; // 0xce0        
        [[maybe_unused]] std::uint8_t pad_0xcec[0x4]; // 0xcec
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszEffectName; // 0xcf0        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszSSEffectName; // 0xcf8        
        // metadata: MNetworkEnable
        Color m_clrOverlay; // 0xd00        
        // metadata: MNetworkEnable
        bool m_bOn; // 0xd04        
        // metadata: MNetworkEnable
        bool m_bmaxColor; // 0xd05        
        [[maybe_unused]] std::uint8_t pad_0xd06[0x2]; // 0xd06
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "10"
        float m_flSize; // 0xd08        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "10"
        float m_flHazeScale; // 0xd0c        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "-360,000000"
        // metadata: MNetworkMaxValue "360,000000"
        float m_flRotation; // 0xd10        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnHDRScaleChanged"
        float m_flHDRColorScale; // 0xd14        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "2,000000"
        float m_flAlphaHaze; // 0xd18        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "2,000000"
        float m_flAlphaScale; // 0xd1c        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "2,000000"
        float m_flAlphaHdr; // 0xd20        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "1,000000"
        float m_flFarZScale; // 0xd24        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Sun because it is not a standard-layout class
    static_assert(sizeof(C_Sun) == 0xd28);
};
