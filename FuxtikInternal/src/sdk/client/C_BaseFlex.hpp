#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/client/C_BaseFlex__Emphasized_Phoneme.hpp"
#include "source2sdk/client/SceneEventId_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
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
    // Size: 0x1068
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float32 m_flexWeight"
    // static metadata: MNetworkVarNames "bool m_blinktoggle"
    #pragma pack(push, 1)
    class C_BaseFlex : public client::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xed0[0x10]; // 0xed0
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "12"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "1,000000"
        // metadata: MNetworkEncodeFlags "1"
        // m_flexWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<float> m_flexWeight;
        char m_flexWeight[0x18]; // 0xee0        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        // metadata: MNetworkChangeCallback "OnViewTargetChanged"
        Vector m_vLookTargetPosition; // 0xef8        
        [[maybe_unused]] std::uint8_t pad_0xf04[0xc]; // 0xf04
        // metadata: MNetworkEnable
        bool m_blinktoggle; // 0xf10        
        [[maybe_unused]] std::uint8_t pad_0xf11[0x5f]; // 0xf11
        int32_t m_nLastFlexUpdateFrameCount; // 0xf70        
        Vector m_CachedViewTarget; // 0xf74        
        client::SceneEventId_t m_nNextSceneEventId; // 0xf80        
        int32_t m_iBlink; // 0xf84        
        float m_blinktime; // 0xf88        
        bool m_prevblinktoggle; // 0xf8c        
        [[maybe_unused]] std::uint8_t pad_0xf8d[0x3]; // 0xf8d
        int32_t m_iJawOpen; // 0xf90        
        float m_flJawOpenAmount; // 0xf94        
        float m_flBlinkAmount; // 0xf98        
        modellib::AttachmentHandle_t m_iMouthAttachment; // 0xf9c        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0xf9d        
        bool m_bResetFlexWeightsOnModelChange; // 0xf9e        
        [[maybe_unused]] std::uint8_t pad_0xf9f[0x19]; // 0xf9f
        int32_t m_nEyeOcclusionRendererBone; // 0xfb8        
        matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xfbc        
        Vector m_vEyeOcclusionRendererHalfExtent; // 0xfec        
        [[maybe_unused]] std::uint8_t pad_0xff8[0x10]; // 0xff8
        client::C_BaseFlex__Emphasized_Phoneme m_PhonemeClasses[3]; // 0x1008        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseFlex because it is not a standard-layout class
    static_assert(sizeof(C_BaseFlex) == 0x1068);
};
