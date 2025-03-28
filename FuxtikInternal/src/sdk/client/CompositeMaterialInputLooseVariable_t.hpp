#pragma once
#include "source2sdk/client/CompositeMaterialInputLooseVariableType_t.hpp"
#include "source2sdk/client/CompositeMaterialInputTextureType_t.hpp"
#include "source2sdk/client/CompositeMaterialVarSystemVar_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x280
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyElementNameFn
    #pragma pack(push, 1)
    struct CompositeMaterialInputLooseVariable_t
    {
    public:
        // metadata: MPropertyFriendlyName "Name"
        // metadata: MPropertyAttrStateCallback
        CUtlString m_strName; // 0x0        
        // metadata: MPropertyAutoRebuildOnChange
        // metadata: MPropertyFriendlyName "Expose Externally"
        bool m_bExposeExternally; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x09[0x7]; // 0x9
        // metadata: MPropertyFriendlyName "Exposed Friendly Name"
        // metadata: MPropertyAttrStateCallback
        CUtlString m_strExposedFriendlyName; // 0x10        
        // metadata: MPropertyFriendlyName "Exposed Friendly Group"
        // metadata: MPropertyAttrStateCallback
        CUtlString m_strExposedFriendlyGroupName; // 0x18        
        // metadata: MPropertyFriendlyName "Exposed Fixed Range"
        // metadata: MPropertyAttrStateCallback
        bool m_bExposedVariableIsFixedRange; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x21[0x7]; // 0x21
        // metadata: MPropertyFriendlyName "Exposed SetVisible When True"
        // metadata: MPropertyAttrStateCallback
        CUtlString m_strExposedVisibleWhenTrue; // 0x28        
        // metadata: MPropertyFriendlyName "Exposed SetHidden When True"
        // metadata: MPropertyAttrStateCallback
        CUtlString m_strExposedHiddenWhenTrue; // 0x30        
        // metadata: MPropertyAutoRebuildOnChange
        // metadata: MPropertyFriendlyName "Type"
        client::CompositeMaterialInputLooseVariableType_t m_nVariableType; // 0x38        
        // metadata: MPropertyFriendlyName "Value"
        // metadata: MPropertyAttrStateCallback
        bool m_bValueBoolean; // 0x3c        
        [[maybe_unused]] std::uint8_t pad_0x3d[0x3]; // 0x3d
        // metadata: MPropertyFriendlyName "X Value"
        // metadata: MPropertyAttrStateCallback
        // metadata: MPropertyAttributeRange "0 255"
        int32_t m_nValueIntX; // 0x40        
        // metadata: MPropertyFriendlyName "Y Value"
        // metadata: MPropertyAttrStateCallback
        // metadata: MPropertyAttributeRange "0 255"
        int32_t m_nValueIntY; // 0x44        
        // metadata: MPropertyFriendlyName "Z Value"
        // metadata: MPropertyAttrStateCallback
        // metadata: MPropertyAttributeRange "0 255"
        int32_t m_nValueIntZ; // 0x48        
        // metadata: MPropertyFriendlyName "W Value"
        // metadata: MPropertyAttrStateCallback
        // metadata: MPropertyAttributeRange "0 255"
        int32_t m_nValueIntW; // 0x4c        
        // metadata: MPropertyFriendlyName "Specify Min/Max"
        // metadata: MPropertyAttrStateCallback
        bool m_bHasFloatBounds; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x51[0x3]; // 0x51
        // metadata: MPropertyFriendlyName "X Value"
        // metadata: MPropertyAttrStateCallback
        // metadata: MPropertyAttributeRange "0.0 1.0"
        float m_flValueFloatX; // 0x54        
        // metadata: MPropertyFriendlyName "X Min"
        // metadata: MPropertyAttrStateCallback
        float m_flValueFloatX_Min; // 0x58        
        // metadata: MPropertyFriendlyName "X Max"
        // metadata: MPropertyAttrStateCallback
        float m_flValueFloatX_Max; // 0x5c        
        // metadata: MPropertyFriendlyName "Y Value"
        // metadata: MPropertyAttrStateCallback
        // metadata: MPropertyAttributeRange "0.0 1.0"
        float m_flValueFloatY; // 0x60        
        // metadata: MPropertyFriendlyName "Y Min"
        // metadata: MPropertyAttrStateCallback
        float m_flValueFloatY_Min; // 0x64        
        // metadata: MPropertyFriendlyName "Y Max"
        // metadata: MPropertyAttrStateCallback
        float m_flValueFloatY_Max; // 0x68        
        // metadata: MPropertyFriendlyName "Z Value"
        // metadata: MPropertyAttrStateCallback
        // metadata: MPropertyAttributeRange "0.0 1.0"
        float m_flValueFloatZ; // 0x6c        
        // metadata: MPropertyFriendlyName "Z Min"
        // metadata: MPropertyAttrStateCallback
        float m_flValueFloatZ_Min; // 0x70        
        // metadata: MPropertyFriendlyName "Z Max"
        // metadata: MPropertyAttrStateCallback
        float m_flValueFloatZ_Max; // 0x74        
        // metadata: MPropertyFriendlyName "W Value"
        // metadata: MPropertyAttrStateCallback
        // metadata: MPropertyAttributeRange "0.0 1.0"
        float m_flValueFloatW; // 0x78        
        // metadata: MPropertyFriendlyName "W Min"
        // metadata: MPropertyAttrStateCallback
        float m_flValueFloatW_Min; // 0x7c        
        // metadata: MPropertyFriendlyName "W Max"
        // metadata: MPropertyAttrStateCallback
        float m_flValueFloatW_Max; // 0x80        
        // metadata: MPropertyFriendlyName "Value"
        // metadata: MPropertyAttrStateCallback
        Color m_cValueColor4; // 0x84        
        // metadata: MPropertyFriendlyName "Value"
        // metadata: MPropertyAttrStateCallback
        client::CompositeMaterialVarSystemVar_t m_nValueSystemVar; // 0x88        
        [[maybe_unused]] std::uint8_t pad_0x8c[0x4]; // 0x8c
        // metadata: MPropertyFriendlyName "Material"
        // metadata: MPropertyAttributeEditor "AssetBrowse( vmat )"
        // metadata: MPropertyAttrStateCallback
        CResourceName m_strResourceMaterial; // 0x90        
        // metadata: MPropertyFriendlyName "Texture"
        // metadata: MPropertyAttributeEditor "AssetBrowse( jpg, png, psd, tga )"
        // metadata: MPropertyAttrStateCallback
        CUtlString m_strTextureContentAssetPath; // 0x170        
        // metadata: MPropertyHideField
        CResourceName m_strTextureRuntimeResourcePath; // 0x178        
        // metadata: MPropertyHideField
        CUtlString m_strTextureCompilationVtexTemplate; // 0x258        
        // metadata: MPropertyFriendlyName "Texture Type"
        // metadata: MPropertyAttrStateCallback
        client::CompositeMaterialInputTextureType_t m_nTextureType; // 0x260        
        [[maybe_unused]] std::uint8_t pad_0x264[0x4]; // 0x264
        // metadata: MPropertyFriendlyName "String"
        // metadata: MPropertyAttrStateCallback
        CUtlString m_strString; // 0x268        
        // metadata: MPropertyFriendlyName "Layout XML"
        // metadata: MPropertyAttrStateCallback
        CUtlString m_strPanoramaPanelPath; // 0x270        
        // metadata: MPropertyFriendlyName "Render Resolution"
        // metadata: MPropertyAttrStateCallback
        int32_t m_nPanoramaRenderRes; // 0x278        
        [[maybe_unused]] std::uint8_t pad_0x27c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_strName) == 0x0);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_bExposeExternally) == 0x8);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_strExposedFriendlyName) == 0x10);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_strExposedFriendlyGroupName) == 0x18);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_bExposedVariableIsFixedRange) == 0x20);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_strExposedVisibleWhenTrue) == 0x28);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_strExposedHiddenWhenTrue) == 0x30);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_nVariableType) == 0x38);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_bValueBoolean) == 0x3c);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_nValueIntX) == 0x40);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_nValueIntY) == 0x44);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_nValueIntZ) == 0x48);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_nValueIntW) == 0x4c);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_bHasFloatBounds) == 0x50);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_flValueFloatX) == 0x54);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_flValueFloatX_Min) == 0x58);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_flValueFloatX_Max) == 0x5c);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_flValueFloatY) == 0x60);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_flValueFloatY_Min) == 0x64);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_flValueFloatY_Max) == 0x68);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_flValueFloatZ) == 0x6c);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_flValueFloatZ_Min) == 0x70);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_flValueFloatZ_Max) == 0x74);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_flValueFloatW) == 0x78);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_flValueFloatW_Min) == 0x7c);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_flValueFloatW_Max) == 0x80);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_cValueColor4) == 0x84);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_nValueSystemVar) == 0x88);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_strResourceMaterial) == 0x90);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_strTextureContentAssetPath) == 0x170);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_strTextureRuntimeResourcePath) == 0x178);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_strTextureCompilationVtexTemplate) == 0x258);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_nTextureType) == 0x260);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_strString) == 0x268);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_strPanoramaPanelPath) == 0x270);
    static_assert(offsetof(CompositeMaterialInputLooseVariable_t, m_nPanoramaRenderRes) == 0x278);
    
    static_assert(sizeof(CompositeMaterialInputLooseVariable_t) == 0x280);
};
