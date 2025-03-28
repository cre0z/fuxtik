#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xdd8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "HMaterialStrong m_hSpriteMaterial"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hAttachedToEntity"
    // static metadata: MNetworkVarNames "AttachmentHandle_t m_nAttachment"
    // static metadata: MNetworkVarNames "float32 m_flSpriteFramerate"
    // static metadata: MNetworkVarNames "float32 m_flFrame"
    // static metadata: MNetworkVarNames "uint32 m_nBrightness"
    // static metadata: MNetworkVarNames "float32 m_flBrightnessDuration"
    // static metadata: MNetworkVarNames "float32 m_flSpriteScale"
    // static metadata: MNetworkVarNames "float32 m_flScaleDuration"
    // static metadata: MNetworkVarNames "bool m_bWorldSpaceScale"
    // static metadata: MNetworkVarNames "float32 m_flGlowProxySize"
    // static metadata: MNetworkVarNames "float32 m_flHDRColorScale"
    #pragma pack(push, 1)
    class C_Sprite : public client::C_BaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        // m_hSpriteMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hSpriteMaterial;
        char m_hSpriteMaterial[0x8]; // 0xcc8        
        // metadata: MNetworkEnable
        // m_hAttachedToEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAttachedToEntity;
        char m_hAttachedToEntity[0x4]; // 0xcd0        
        // metadata: MNetworkEnable
        modellib::AttachmentHandle_t m_nAttachment; // 0xcd4        
        [[maybe_unused]] std::uint8_t pad_0xcd5[0x3]; // 0xcd5
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "60,000000"
        // metadata: MNetworkEncodeFlags "2"
        float m_flSpriteFramerate; // 0xcd8        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "20"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "256,000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_flFrame; // 0xcdc        
        client::GameTime_t m_flDieTime; // 0xce0        
        [[maybe_unused]] std::uint8_t pad_0xce4[0xc]; // 0xce4
        // metadata: MNetworkEnable
        uint32_t m_nBrightness; // 0xcf0        
        // metadata: MNetworkEnable
        float m_flBrightnessDuration; // 0xcf4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSpriteScaleChanged"
        float m_flSpriteScale; // 0xcf8        
        // metadata: MNetworkEnable
        float m_flScaleDuration; // 0xcfc        
        // metadata: MNetworkEnable
        bool m_bWorldSpaceScale; // 0xd00        
        [[maybe_unused]] std::uint8_t pad_0xd01[0x3]; // 0xd01
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "6"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "64,000000"
        // metadata: MNetworkEncodeFlags "2"
        float m_flGlowProxySize; // 0xd04        
        // metadata: MNetworkEnable
        float m_flHDRColorScale; // 0xd08        
        client::GameTime_t m_flLastTime; // 0xd0c        
        float m_flMaxFrame; // 0xd10        
        float m_flStartScale; // 0xd14        
        float m_flDestScale; // 0xd18        
        client::GameTime_t m_flScaleTimeStart; // 0xd1c        
        int32_t m_nStartBrightness; // 0xd20        
        int32_t m_nDestBrightness; // 0xd24        
        client::GameTime_t m_flBrightnessTimeStart; // 0xd28        
        [[maybe_unused]] std::uint8_t pad_0xd2c[0x4]; // 0xd2c
        // m_hOldSpriteMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CWeakHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hOldSpriteMaterial;
        char m_hOldSpriteMaterial[0x8]; // 0xd30        
        [[maybe_unused]] std::uint8_t pad_0xd38[0x98]; // 0xd38
        int32_t m_nSpriteWidth; // 0xdd0        
        int32_t m_nSpriteHeight; // 0xdd4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Sprite because it is not a standard-layout class
    static_assert(sizeof(C_Sprite) == 0xdd8);
};
