#pragma once
#include "source2sdk/client/CCollisionProperty.hpp"
#include "source2sdk/client/CGlowProperty.hpp"
#include "source2sdk/client/CHitboxComponent.hpp"
#include "source2sdk/client/CNetworkViewOffsetVector.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/EntityRenderAttribute_t.hpp"
#include "source2sdk/client/RenderFx_t.hpp"
#include "source2sdk/client/RenderMode_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CClientAlphaProperty;
};

namespace source2sdk::client
{
    class CRenderComponent;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xcc8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CRenderComponent::Storage_t m_CRenderComponent"
    // static metadata: MNetworkVarNames "CHitboxComponent::Storage_t m_CHitboxComponent"
    // static metadata: MNetworkVarNames "RenderMode_t m_nRenderMode"
    // static metadata: MNetworkVarNames "RenderFx_t m_nRenderFX"
    // static metadata: MNetworkVarNames "Color m_clrRender"
    // static metadata: MNetworkVarNames "EntityRenderAttribute_t m_vecRenderAttributes"
    // static metadata: MNetworkVarNames "bool m_bRenderToCubemaps"
    // static metadata: MNetworkVarNames "CCollisionProperty m_Collision"
    // static metadata: MNetworkVarNames "CGlowProperty m_Glow"
    // static metadata: MNetworkVarNames "float m_flGlowBackfaceMult"
    // static metadata: MNetworkVarNames "float32 m_fadeMinDist"
    // static metadata: MNetworkVarNames "float32 m_fadeMaxDist"
    // static metadata: MNetworkVarNames "float32 m_flFadeScale"
    // static metadata: MNetworkVarNames "float32 m_flShadowStrength"
    // static metadata: MNetworkVarNames "uint8 m_nObjectCulling"
    // static metadata: MNetworkVarNames "int m_nAddDecal"
    // static metadata: MNetworkVarNames "Vector m_vDecalPosition"
    // static metadata: MNetworkVarNames "Vector m_vDecalForwardAxis"
    // static metadata: MNetworkVarNames "float m_flDecalHealBloodRate"
    // static metadata: MNetworkVarNames "float m_flDecalHealHeightRate"
    // static metadata: MNetworkVarNames "CHandle< C_BaseModelEntity > m_ConfigEntitiesToPropagateMaterialDecalsTo"
    #pragma pack(push, 1)
    class C_BaseModelEntity : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x548[0x4d0]; // 0x548
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CRenderComponent"
        // metadata: MNetworkAlias "CRenderComponent"
        // metadata: MNetworkTypeAlias "CRenderComponent"
        client::CRenderComponent* m_CRenderComponent; // 0xa18        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CHitboxComponent"
        // metadata: MNetworkAlias "CHitboxComponent"
        // metadata: MNetworkTypeAlias "CHitboxComponent"
        client::CHitboxComponent m_CHitboxComponent; // 0xa20        
        [[maybe_unused]] std::uint8_t pad_0xa48[0x20]; // 0xa48
        bool m_bInitModelEffects; // 0xa68        
        bool m_bIsStaticProp; // 0xa69        
        [[maybe_unused]] std::uint8_t pad_0xa6a[0x2]; // 0xa6a
        int32_t m_nLastAddDecal; // 0xa6c        
        int32_t m_nDecalsAdded; // 0xa70        
        int32_t m_iOldHealth; // 0xa74        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRenderModeChanged"
        client::RenderMode_t m_nRenderMode; // 0xa78        
        // metadata: MNetworkEnable
        client::RenderFx_t m_nRenderFX; // 0xa79        
        bool m_bAllowFadeInView; // 0xa7a        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnColorChanged"
        Color m_clrRender; // 0xa7b        
        [[maybe_unused]] std::uint8_t pad_0xa7f[0x1]; // 0xa7f
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRenderAttributesChanged"
        // m_vecRenderAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::EntityRenderAttribute_t> m_vecRenderAttributes;
        char m_vecRenderAttributes[0x50]; // 0xa80        
        [[maybe_unused]] std::uint8_t pad_0xad0[0x18]; // 0xad0
        // metadata: MNetworkEnable
        bool m_bRenderToCubemaps; // 0xae8        
        [[maybe_unused]] std::uint8_t pad_0xae9[0x7]; // 0xae9
        // metadata: MNetworkEnable
        client::CCollisionProperty m_Collision; // 0xaf0        
        // metadata: MNetworkEnable
        client::CGlowProperty m_Glow; // 0xba0        
        // metadata: MNetworkEnable
        float m_flGlowBackfaceMult; // 0xbf8        
        // metadata: MNetworkEnable
        float m_fadeMinDist; // 0xbfc        
        // metadata: MNetworkEnable
        float m_fadeMaxDist; // 0xc00        
        // metadata: MNetworkEnable
        float m_flFadeScale; // 0xc04        
        // metadata: MNetworkEnable
        float m_flShadowStrength; // 0xc08        
        // metadata: MNetworkEnable
        uint8_t m_nObjectCulling; // 0xc0c        
        [[maybe_unused]] std::uint8_t pad_0xc0d[0x3]; // 0xc0d
        // metadata: MNetworkEnable
        int32_t m_nAddDecal; // 0xc10        
        // metadata: MNetworkEnable
        Vector m_vDecalPosition; // 0xc14        
        // metadata: MNetworkEnable
        Vector m_vDecalForwardAxis; // 0xc20        
        // metadata: MNetworkEnable
        float m_flDecalHealBloodRate; // 0xc2c        
        // metadata: MNetworkEnable
        float m_flDecalHealHeightRate; // 0xc30        
        [[maybe_unused]] std::uint8_t pad_0xc34[0x4]; // 0xc34
        // metadata: MNetworkEnable
        // m_ConfigEntitiesToPropagateMaterialDecalsTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_BaseModelEntity>> m_ConfigEntitiesToPropagateMaterialDecalsTo;
        char m_ConfigEntitiesToPropagateMaterialDecalsTo[0x18]; // 0xc38        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkUserGroup "Player"
        // metadata: MNetworkChangeCallback "OnViewOffsetChanged"
        client::CNetworkViewOffsetVector m_vecViewOffset; // 0xc50        
        [[maybe_unused]] std::uint8_t pad_0xc78[0x8]; // 0xc78
        client::CClientAlphaProperty* m_pClientAlphaProperty; // 0xc80        
        Color m_ClientOverrideTint; // 0xc88        
        bool m_bUseClientOverrideTint; // 0xc8c        
        [[maybe_unused]] std::uint8_t pad_0xc8d[0x3b];
        
        // Datamap fields:
        // int32_t InputAlpha; // 0x0
        // Color InputColor; // 0x0
        // int32_t InputSkin; // 0x0
        // CUtlString add_attribute; // 0x7fffffff
        // void m_Ropes; // 0xa48
        // Color rendercolor32; // 0x7fffffff
        // Color rendercolor; // 0x7fffffff
        // int32_t renderamt; // 0x7fffffff
        // Vector mins; // 0x7fffffff
        // Vector maxs; // 0x7fffffff
        // const char * skin; // 0x7fffffff
        // CUtlString bodygroups; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseModelEntity because it is not a standard-layout class
    static_assert(sizeof(C_BaseModelEntity) == 0xcc8);
};
