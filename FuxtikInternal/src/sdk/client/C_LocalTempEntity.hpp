#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/client/GameTime_t.hpp"
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
    // Size: 0xf78
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_LocalTempEntity : public client::CBaseAnimGraph
    {
    public:
        int32_t flags; // 0xed0        
        client::GameTime_t die; // 0xed4        
        float m_flFrameMax; // 0xed8        
        float x; // 0xedc        
        float y; // 0xee0        
        float fadeSpeed; // 0xee4        
        float bounceFactor; // 0xee8        
        int32_t hitSound; // 0xeec        
        int32_t priority; // 0xef0        
        Vector tentOffset; // 0xef4        
        QAngle m_vecTempEntAngVelocity; // 0xf00        
        int32_t tempent_renderamt; // 0xf0c        
        Vector m_vecNormal; // 0xf10        
        float m_flSpriteScale; // 0xf1c        
        int32_t m_nFlickerFrame; // 0xf20        
        float m_flFrameRate; // 0xf24        
        float m_flFrame; // 0xf28        
        [[maybe_unused]] std::uint8_t pad_0xf2c[0x4]; // 0xf2c
        char* m_pszImpactEffect; // 0xf30        
        char* m_pszParticleEffect; // 0xf38        
        bool m_bParticleCollision; // 0xf40        
        [[maybe_unused]] std::uint8_t pad_0xf41[0x3]; // 0xf41
        int32_t m_iLastCollisionFrame; // 0xf44        
        Vector m_vLastCollisionOrigin; // 0xf48        
        Vector m_vecTempEntVelocity; // 0xf54        
        Vector m_vecPrevAbsOrigin; // 0xf60        
        Vector m_vecTempEntAcceleration; // 0xf6c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_LocalTempEntity because it is not a standard-layout class
    static_assert(sizeof(C_LocalTempEntity) == 0xf78);
};
