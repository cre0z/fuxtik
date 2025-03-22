#pragma once
#include "source2sdk/client/C4LightEffect_t.hpp"
#include "source2sdk/client/C_CSWeaponBase.hpp"
#include "source2sdk/client/EntitySpottedState_t.hpp"
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x1ad0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bStartedArming"
    // static metadata: MNetworkVarNames "GameTime_t m_fArmedTime"
    // static metadata: MNetworkVarNames "bool m_bBombPlacedAnimation"
    // static metadata: MNetworkVarNames "bool m_bIsPlantingViaUse"
    // static metadata: MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
    #pragma pack(push, 1)
    class C_C4 : public client::C_CSWeaponBase
    {
    public:
        char m_szScreenText[32]; // 0x1a70        
        client::ParticleIndex_t m_activeLightParticleIndex; // 0x1a90        
        client::C4LightEffect_t m_eActiveLightEffect; // 0x1a94        
        // metadata: MNetworkEnable
        bool m_bStartedArming; // 0x1a98        
        [[maybe_unused]] std::uint8_t pad_0x1a99[0x3]; // 0x1a99
        // metadata: MNetworkEnable
        client::GameTime_t m_fArmedTime; // 0x1a9c        
        // metadata: MNetworkEnable
        bool m_bBombPlacedAnimation; // 0x1aa0        
        // metadata: MNetworkEnable
        bool m_bIsPlantingViaUse; // 0x1aa1        
        [[maybe_unused]] std::uint8_t pad_0x1aa2[0x6]; // 0x1aa2
        // metadata: MNetworkEnable
        client::EntitySpottedState_t m_entitySpottedState; // 0x1aa8        
        int32_t m_nSpotRules; // 0x1ac0        
        bool m_bPlayedArmingBeeps[7]; // 0x1ac4        
        bool m_bBombPlanted; // 0x1acb        
        [[maybe_unused]] std::uint8_t pad_0x1acc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_C4 because it is not a standard-layout class
    static_assert(sizeof(C_C4) == 0x1ad0);
};
