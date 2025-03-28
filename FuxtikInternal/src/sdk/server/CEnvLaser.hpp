#pragma once
#include "source2sdk/server/CBeam.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CSprite;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x7d8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CEnvLaser : public server::CBeam
    {
    public:
        CUtlSymbolLarge m_iszLaserTarget; // 0x7b0        
        server::CSprite* m_pSprite; // 0x7b8        
        CUtlSymbolLarge m_iszSpriteName; // 0x7c0        
        Vector m_firePosition; // 0x7c8        
        float m_flStartFrame; // 0x7d4        
        
        // Datamap fields:
        // void CEnvLaserStrikeThink; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // void InputToggle; // 0x0
        // float width; // 0x7fffffff
        // int32_t NoiseAmplitude; // 0x7fffffff
        // int32_t TextureScroll; // 0x7fffffff
        // CUtlString texture; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvLaser because it is not a standard-layout class
    static_assert(sizeof(CEnvLaser) == 0x7d8);
};
