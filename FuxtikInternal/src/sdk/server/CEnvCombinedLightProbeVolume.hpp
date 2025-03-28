#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x15c8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "Color m_Entity_Color"
    // static metadata: MNetworkVarNames "float m_Entity_flBrightness"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hCubemapTexture"
    // static metadata: MNetworkVarNames "bool m_Entity_bCustomCubemapTexture"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeTexture"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightIndicesTexture"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightScalarsTexture"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightShadowsTexture"
    // static metadata: MNetworkVarNames "Vector m_Entity_vBoxMins"
    // static metadata: MNetworkVarNames "Vector m_Entity_vBoxMaxs"
    // static metadata: MNetworkVarNames "bool m_Entity_bMoveable"
    // static metadata: MNetworkVarNames "int m_Entity_nHandshake"
    // static metadata: MNetworkVarNames "int m_Entity_nEnvCubeMapArrayIndex"
    // static metadata: MNetworkVarNames "int m_Entity_nPriority"
    // static metadata: MNetworkVarNames "bool m_Entity_bStartDisabled"
    // static metadata: MNetworkVarNames "float m_Entity_flEdgeFadeDist"
    // static metadata: MNetworkVarNames "Vector m_Entity_vEdgeFadeDists"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeSizeX"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeSizeY"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeSizeZ"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeAtlasX"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeAtlasY"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeAtlasZ"
    // static metadata: MNetworkVarNames "bool m_Entity_bEnabled"
    #pragma pack(push, 1)
    class CEnvCombinedLightProbeVolume : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4c0[0x1060]; // 0x4c0
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "StateChanged"
        Color m_Entity_Color; // 0x1520        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "StateChanged"
        float m_Entity_flBrightness; // 0x1524        
        // metadata: MNetworkEnable
        // m_Entity_hCubemapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hCubemapTexture;
        char m_Entity_hCubemapTexture[0x8]; // 0x1528        
        // metadata: MNetworkEnable
        bool m_Entity_bCustomCubemapTexture; // 0x1530        
        [[maybe_unused]] std::uint8_t pad_0x1531[0x7]; // 0x1531
        // metadata: MNetworkEnable
        // m_Entity_hLightProbeTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture;
        char m_Entity_hLightProbeTexture[0x8]; // 0x1538        
        // metadata: MNetworkEnable
        // m_Entity_hLightProbeDirectLightIndicesTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightIndicesTexture;
        char m_Entity_hLightProbeDirectLightIndicesTexture[0x8]; // 0x1540        
        // metadata: MNetworkEnable
        // m_Entity_hLightProbeDirectLightScalarsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightScalarsTexture;
        char m_Entity_hLightProbeDirectLightScalarsTexture[0x8]; // 0x1548        
        // metadata: MNetworkEnable
        // m_Entity_hLightProbeDirectLightShadowsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightShadowsTexture;
        char m_Entity_hLightProbeDirectLightShadowsTexture[0x8]; // 0x1550        
        // metadata: MNetworkEnable
        Vector m_Entity_vBoxMins; // 0x1558        
        // metadata: MNetworkEnable
        Vector m_Entity_vBoxMaxs; // 0x1564        
        // metadata: MNetworkEnable
        bool m_Entity_bMoveable; // 0x1570        
        [[maybe_unused]] std::uint8_t pad_0x1571[0x3]; // 0x1571
        // metadata: MNetworkEnable
        int32_t m_Entity_nHandshake; // 0x1574        
        // metadata: MNetworkEnable
        int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x1578        
        // metadata: MNetworkEnable
        int32_t m_Entity_nPriority; // 0x157c        
        // metadata: MNetworkEnable
        bool m_Entity_bStartDisabled; // 0x1580        
        [[maybe_unused]] std::uint8_t pad_0x1581[0x3]; // 0x1581
        // metadata: MNetworkEnable
        float m_Entity_flEdgeFadeDist; // 0x1584        
        // metadata: MNetworkEnable
        Vector m_Entity_vEdgeFadeDists; // 0x1588        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeSizeX; // 0x1594        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeSizeY; // 0x1598        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeSizeZ; // 0x159c        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeAtlasX; // 0x15a0        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeAtlasY; // 0x15a4        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeAtlasZ; // 0x15a8        
        [[maybe_unused]] std::uint8_t pad_0x15ac[0x15]; // 0x15ac
        // metadata: MNetworkEnable
        bool m_Entity_bEnabled; // 0x15c1        
        [[maybe_unused]] std::uint8_t pad_0x15c2[0x6];
        
        // Datamap fields:
        // void m_Entity_pEnvMap; // 0x15b0
        // void m_Entity_pLightProbeVolume; // 0x15b8
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvCombinedLightProbeVolume because it is not a standard-layout class
    static_assert(sizeof(CEnvCombinedLightProbeVolume) == 0x15c8);
};
