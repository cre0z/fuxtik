#pragma once
#include "source2sdk/client/C_CSWeaponBase.hpp"
#include "source2sdk/client/PlayerAnimEvent_t.hpp"
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
    // Size: 0x1a80
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bPlayingUninterruptableAct"
    // static metadata: MNetworkVarNames "PlayerAnimEvent_t m_nUninterruptableActivity"
    #pragma pack(push, 1)
    class C_Fists : public client::C_CSWeaponBase
    {
    public:
        // metadata: MNetworkEnable
        bool m_bPlayingUninterruptableAct; // 0x1a70        
        [[maybe_unused]] std::uint8_t pad_0x1a71[0x3]; // 0x1a71
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnUninterruptChanged"
        client::PlayerAnimEvent_t m_nUninterruptableActivity; // 0x1a74        
        [[maybe_unused]] std::uint8_t pad_0x1a78[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Fists because it is not a standard-layout class
    static_assert(sizeof(C_Fists) == 0x1a80);
};
