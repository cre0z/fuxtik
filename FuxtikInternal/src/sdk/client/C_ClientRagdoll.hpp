#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/client/GameTime_t.hpp"
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
    // Size: 0xf68
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_ClientRagdoll : public client::CBaseAnimGraph
    {
    public:
        bool m_bFadeOut; // 0xed0        
        bool m_bImportant; // 0xed1        
        [[maybe_unused]] std::uint8_t pad_0xed2[0x2]; // 0xed2
        client::GameTime_t m_flEffectTime; // 0xed4        
        client::GameTime_t m_gibDespawnTime; // 0xed8        
        int32_t m_iCurrentFriction; // 0xedc        
        int32_t m_iMinFriction; // 0xee0        
        int32_t m_iMaxFriction; // 0xee4        
        int32_t m_iFrictionAnimState; // 0xee8        
        bool m_bReleaseRagdoll; // 0xeec        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0xeed        
        bool m_bFadingOut; // 0xeee        
        [[maybe_unused]] std::uint8_t pad_0xeef[0x1]; // 0xeef
        float m_flScaleEnd[10]; // 0xef0        
        client::GameTime_t m_flScaleTimeStart[10]; // 0xf18        
        client::GameTime_t m_flScaleTimeEnd[10]; // 0xf40        
        
        // Datamap fields:
        // Color m_clrRender; // 0xa7b
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ClientRagdoll because it is not a standard-layout class
    static_assert(sizeof(C_ClientRagdoll) == 0xf68);
};
