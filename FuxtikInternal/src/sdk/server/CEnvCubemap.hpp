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
    // Size: 0x5a8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hCubemapTexture"
    // static metadata: MNetworkVarNames "bool m_Entity_bCustomCubemapTexture"
    // static metadata: MNetworkVarNames "float m_Entity_flInfluenceRadius"
    // static metadata: MNetworkVarNames "Vector m_Entity_vBoxProjectMins"
    // static metadata: MNetworkVarNames "Vector m_Entity_vBoxProjectMaxs"
    // static metadata: MNetworkVarNames "bool m_Entity_bMoveable"
    // static metadata: MNetworkVarNames "int m_Entity_nHandshake"
    // static metadata: MNetworkVarNames "int m_Entity_nEnvCubeMapArrayIndex"
    // static metadata: MNetworkVarNames "int m_Entity_nPriority"
    // static metadata: MNetworkVarNames "float m_Entity_flEdgeFadeDist"
    // static metadata: MNetworkVarNames "Vector m_Entity_vEdgeFadeDists"
    // static metadata: MNetworkVarNames "float m_Entity_flDiffuseScale"
    // static metadata: MNetworkVarNames "bool m_Entity_bStartDisabled"
    // static metadata: MNetworkVarNames "bool m_Entity_bDefaultEnvMap"
    // static metadata: MNetworkVarNames "bool m_Entity_bDefaultSpecEnvMap"
    // static metadata: MNetworkVarNames "bool m_Entity_bIndoorCubeMap"
    // static metadata: MNetworkVarNames "bool m_Entity_bCopyDiffuseFromDefaultCubemap"
    // static metadata: MNetworkVarNames "bool m_Entity_bEnabled"
    #pragma pack(push, 1)
    class CEnvCubemap : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4c0[0x80]; // 0x4c0
        // metadata: MNetworkEnable
        // m_Entity_hCubemapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hCubemapTexture;
        char m_Entity_hCubemapTexture[0x8]; // 0x540        
        // metadata: MNetworkEnable
        bool m_Entity_bCustomCubemapTexture; // 0x548        
        [[maybe_unused]] std::uint8_t pad_0x549[0x3]; // 0x549
        // metadata: MNetworkEnable
        float m_Entity_flInfluenceRadius; // 0x54c        
        // metadata: MNetworkEnable
        Vector m_Entity_vBoxProjectMins; // 0x550        
        // metadata: MNetworkEnable
        Vector m_Entity_vBoxProjectMaxs; // 0x55c        
        // metadata: MNetworkEnable
        bool m_Entity_bMoveable; // 0x568        
        [[maybe_unused]] std::uint8_t pad_0x569[0x3]; // 0x569
        // metadata: MNetworkEnable
        int32_t m_Entity_nHandshake; // 0x56c        
        // metadata: MNetworkEnable
        int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x570        
        // metadata: MNetworkEnable
        int32_t m_Entity_nPriority; // 0x574        
        // metadata: MNetworkEnable
        float m_Entity_flEdgeFadeDist; // 0x578        
        // metadata: MNetworkEnable
        Vector m_Entity_vEdgeFadeDists; // 0x57c        
        // metadata: MNetworkEnable
        float m_Entity_flDiffuseScale; // 0x588        
        // metadata: MNetworkEnable
        bool m_Entity_bStartDisabled; // 0x58c        
        // metadata: MNetworkEnable
        bool m_Entity_bDefaultEnvMap; // 0x58d        
        // metadata: MNetworkEnable
        bool m_Entity_bDefaultSpecEnvMap; // 0x58e        
        // metadata: MNetworkEnable
        bool m_Entity_bIndoorCubeMap; // 0x58f        
        // metadata: MNetworkEnable
        bool m_Entity_bCopyDiffuseFromDefaultCubemap; // 0x590        
        [[maybe_unused]] std::uint8_t pad_0x591[0xf]; // 0x591
        // metadata: MNetworkEnable
        bool m_Entity_bEnabled; // 0x5a0        
        [[maybe_unused]] std::uint8_t pad_0x5a1[0x7];
        
        // Datamap fields:
        // void m_Entity_pSceneObject; // 0x598
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvCubemap because it is not a standard-layout class
    static_assert(sizeof(CEnvCubemap) == 0x5a8);
};
