#pragma once
#include "source2sdk/client/PlayerAnimEvent_t.hpp"
#include "source2sdk/server/CCSWeaponBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBasePlayerWeapon;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xeb0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bPlayingUninterruptableAct"
    // static metadata: MNetworkVarNames "PlayerAnimEvent_t m_nUninterruptableActivity"
    #pragma pack(push, 1)
    class CFists : public server::CCSWeaponBase
    {
    public:
        // metadata: MNetworkEnable
        bool m_bPlayingUninterruptableAct; // 0xe98        
        [[maybe_unused]] std::uint8_t pad_0xe99[0x3]; // 0xe99
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnUninterruptChanged"
        client::PlayerAnimEvent_t m_nUninterruptableActivity; // 0xe9c        
        bool m_bRestorePrevWep; // 0xea0        
        [[maybe_unused]] std::uint8_t pad_0xea1[0x3]; // 0xea1
        // m_hWeaponBeforePrevious has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerWeapon> m_hWeaponBeforePrevious;
        char m_hWeaponBeforePrevious[0x4]; // 0xea4        
        // m_hWeaponPrevious has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerWeapon> m_hWeaponPrevious;
        char m_hWeaponPrevious[0x4]; // 0xea8        
        bool m_bDelayedHardPunchIncoming; // 0xeac        
        bool m_bDestroyAfterTaunt; // 0xead        
        [[maybe_unused]] std::uint8_t pad_0xeae[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFists because it is not a standard-layout class
    static_assert(sizeof(CFists) == 0xeb0);
};
