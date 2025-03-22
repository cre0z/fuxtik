#pragma once
#include "source2sdk/client/C_BaseFire.hpp"
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/client/TimedEvent.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CFireOverlay;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5c0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkOverride "m_flScale"
    // static metadata: MNetworkOverride "m_flScaleTime"
    // static metadata: MNetworkVarNames "int32 m_nFlameModelIndex"
    // static metadata: MNetworkVarNames "int32 m_nFlameFromAboveModelIndex"
    #pragma pack(push, 1)
    class C_FireSmoke : public client::C_BaseFire
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nFlameModelIndex; // 0x558        
        // metadata: MNetworkEnable
        int32_t m_nFlameFromAboveModelIndex; // 0x55c        
        float m_flScaleRegister; // 0x560        
        float m_flScaleStart; // 0x564        
        float m_flScaleEnd; // 0x568        
        client::GameTime_t m_flScaleTimeStart; // 0x56c        
        client::GameTime_t m_flScaleTimeEnd; // 0x570        
        float m_flChildFlameSpread; // 0x574        
        [[maybe_unused]] std::uint8_t pad_0x578[0x10]; // 0x578
        float m_flClipPerc; // 0x588        
        bool m_bClipTested; // 0x58c        
        bool m_bFadingOut; // 0x58d        
        [[maybe_unused]] std::uint8_t pad_0x58e[0x2]; // 0x58e
        client::TimedEvent m_tParticleSpawn; // 0x590        
        client::CFireOverlay* m_pFireOverlay; // 0x598        
        [[maybe_unused]] std::uint8_t pad_0x5a0[0x20];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_FireSmoke because it is not a standard-layout class
    static_assert(sizeof(C_FireSmoke) == 0x5c0);
};
