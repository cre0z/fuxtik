#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/C_RopeKeyframe__CPhysicsDelegate.hpp"
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
    // Size: 0x10b0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByUserGroup "Origin"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hParent"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
    // static metadata: MNetworkIncludeByName "m_nMinCPULevel"
    // static metadata: MNetworkIncludeByName "m_nMaxCPULevel"
    // static metadata: MNetworkIncludeByName "m_nMinGPULevel"
    // static metadata: MNetworkIncludeByName "m_nMaxGPULevel"
    // static metadata: MNetworkVarNames "float32 m_flScrollSpeed"
    // static metadata: MNetworkVarNames "uint16 m_RopeFlags"
    // static metadata: MNetworkVarNames "HMaterialStrong m_iRopeMaterialModelIndex"
    // static metadata: MNetworkVarNames "uint8 m_nSegments"
    // static metadata: MNetworkVarNames "CHandle< C_BaseEntity> m_hStartPoint"
    // static metadata: MNetworkVarNames "CHandle< C_BaseEntity> m_hEndPoint"
    // static metadata: MNetworkVarNames "AttachmentHandle_t m_iStartAttachment"
    // static metadata: MNetworkVarNames "AttachmentHandle_t m_iEndAttachment"
    // static metadata: MNetworkVarNames "uint8 m_Subdiv"
    // static metadata: MNetworkVarNames "int16 m_RopeLength"
    // static metadata: MNetworkVarNames "int16 m_Slack"
    // static metadata: MNetworkVarNames "float32 m_TextureScale"
    // static metadata: MNetworkVarNames "uint8 m_fLockedPoints"
    // static metadata: MNetworkVarNames "uint8 m_nChangeCount"
    // static metadata: MNetworkVarNames "float32 m_Width"
    // static metadata: MNetworkVarNames "bool m_bConstrainBetweenEndpoints"
    #pragma pack(push, 1)
    class C_RopeKeyframe : public client::C_BaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xcc8[0x8]; // 0xcc8
        // m_LinksTouchingSomething has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CBitVec<10> m_LinksTouchingSomething;
        char m_LinksTouchingSomething[0x4]; // 0xcd0        
        int32_t m_nLinksTouchingSomething; // 0xcd4        
        bool m_bApplyWind; // 0xcd8        
        [[maybe_unused]] std::uint8_t pad_0xcd9[0x3]; // 0xcd9
        int32_t m_fPrevLockedPoints; // 0xcdc        
        int32_t m_iForcePointMoveCounter; // 0xce0        
        bool m_bPrevEndPointPos[2]; // 0xce4        
        [[maybe_unused]] std::uint8_t pad_0xce6[0x2]; // 0xce6
        Vector m_vPrevEndPointPos[2]; // 0xce8        
        float m_flCurScroll; // 0xd00        
        // metadata: MNetworkEnable
        float m_flScrollSpeed; // 0xd04        
        // metadata: MNetworkEnable
        uint16_t m_RopeFlags; // 0xd08        
        [[maybe_unused]] std::uint8_t pad_0xd0a[0x6]; // 0xd0a
        // metadata: MNetworkEnable
        // m_iRopeMaterialModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_iRopeMaterialModelIndex;
        char m_iRopeMaterialModelIndex[0x8]; // 0xd10        
        [[maybe_unused]] std::uint8_t pad_0xd18[0x270]; // 0xd18
        Vector m_LightValues[10]; // 0xf88        
        // metadata: MNetworkEnable
        uint8_t m_nSegments; // 0x1000        
        [[maybe_unused]] std::uint8_t pad_0x1001[0x3]; // 0x1001
        // metadata: MNetworkEnable
        // m_hStartPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hStartPoint;
        char m_hStartPoint[0x4]; // 0x1004        
        // metadata: MNetworkEnable
        // m_hEndPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hEndPoint;
        char m_hEndPoint[0x4]; // 0x1008        
        // metadata: MNetworkEnable
        modellib::AttachmentHandle_t m_iStartAttachment; // 0x100c        
        // metadata: MNetworkEnable
        modellib::AttachmentHandle_t m_iEndAttachment; // 0x100d        
        // metadata: MNetworkEnable
        uint8_t m_Subdiv; // 0x100e        
        [[maybe_unused]] std::uint8_t pad_0x100f[0x1]; // 0x100f
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RecomputeSprings"
        int16_t m_RopeLength; // 0x1010        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RecomputeSprings"
        int16_t m_Slack; // 0x1012        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "10"
        // metadata: MNetworkMinValue "0,100000"
        // metadata: MNetworkMaxValue "10,000000"
        float m_TextureScale; // 0x1014        
        // metadata: MNetworkEnable
        uint8_t m_fLockedPoints; // 0x1018        
        // metadata: MNetworkEnable
        uint8_t m_nChangeCount; // 0x1019        
        [[maybe_unused]] std::uint8_t pad_0x101a[0x2]; // 0x101a
        // metadata: MNetworkEnable
        float m_Width; // 0x101c        
        client::C_RopeKeyframe__CPhysicsDelegate m_PhysicsDelegate; // 0x1020        
        // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
        char m_hMaterial[0x8]; // 0x1030        
        int32_t m_TextureHeight; // 0x1038        
        Vector m_vecImpulse; // 0x103c        
        Vector m_vecPreviousImpulse; // 0x1048        
        float m_flCurrentGustTimer; // 0x1054        
        float m_flCurrentGustLifetime; // 0x1058        
        float m_flTimeToNextGust; // 0x105c        
        Vector m_vWindDir; // 0x1060        
        Vector m_vColorMod; // 0x106c        
        Vector m_vCachedEndPointAttachmentPos[2]; // 0x1078        
        QAngle m_vCachedEndPointAttachmentAngle[2]; // 0x1090        
        // metadata: MNetworkEnable
        bool m_bConstrainBetweenEndpoints; // 0x10a8        
        // start of bitfield block at 0x10a9
        uint8_t m_bEndPointAttachmentPositionsDirty: 1;
        uint8_t m_bEndPointAttachmentAnglesDirty: 1;
        uint8_t m_bNewDataThisFrame: 1;
        uint8_t m_bPhysicsInitted: 1;
        // end of bitfield block // 4 bits
        [[maybe_unused]] std::uint8_t pad_0x10aa[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_RopeKeyframe because it is not a standard-layout class
    static_assert(sizeof(C_RopeKeyframe) == 0x10b0);
};
