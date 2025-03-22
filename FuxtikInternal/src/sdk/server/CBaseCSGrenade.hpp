#pragma once
#include "source2sdk/client/GameTick_t.hpp"
#include "source2sdk/client/GameTime_t.hpp"
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
    class CCSWeaponBase;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xed0
    // Has VTable
    // Construct disallowed
    // MConstructibleClassBase
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bRedraw"
    // static metadata: MNetworkVarNames "bool m_bIsHeldByPlayer"
    // static metadata: MNetworkVarNames "bool m_bPinPulled"
    // static metadata: MNetworkVarNames "bool m_bJumpThrow"
    // static metadata: MNetworkVarNames "bool m_bThrowAnimating"
    // static metadata: MNetworkVarNames "GameTime_t m_fThrowTime"
    // static metadata: MNetworkVarNames "float m_flThrowStrength"
    // static metadata: MNetworkVarNames "float m_flThrowStrengthApproach"
    // static metadata: MNetworkVarNames "GameTime_t m_fDropTime"
    // static metadata: MNetworkVarNames "GameTime_t m_fPinPullTime"
    // static metadata: MNetworkVarNames "bool m_bJustPulledPin"
    // static metadata: MNetworkVarNames "GameTick_t m_nNextHoldTick"
    // static metadata: MNetworkVarNames "float m_flNextHoldFrac"
    // static metadata: MNetworkVarNames "CHandle< CCSWeaponBase> m_hSwitchToWeaponAfterThrow"
    #pragma pack(push, 1)
    class CBaseCSGrenade : public server::CCSWeaponBase
    {
    public:
        // metadata: MNetworkEnable
        bool m_bRedraw; // 0xe98        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnGrenadeStateChanged"
        bool m_bIsHeldByPlayer; // 0xe99        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnGrenadeStateChanged"
        bool m_bPinPulled; // 0xe9a        
        // metadata: MNetworkEnable
        bool m_bJumpThrow; // 0xe9b        
        // metadata: MNetworkEnable
        bool m_bThrowAnimating; // 0xe9c        
        [[maybe_unused]] std::uint8_t pad_0xe9d[0x3]; // 0xe9d
        // metadata: MNetworkEnable
        client::GameTime_t m_fThrowTime; // 0xea0        
        // metadata: MNetworkEnable
        float m_flThrowStrength; // 0xea4        
        // metadata: MNetworkEnable
        float m_flThrowStrengthApproach; // 0xea8        
        // metadata: MNetworkEnable
        client::GameTime_t m_fDropTime; // 0xeac        
        // metadata: MNetworkEnable
        client::GameTime_t m_fPinPullTime; // 0xeb0        
        // metadata: MNetworkEnable
        bool m_bJustPulledPin; // 0xeb4        
        [[maybe_unused]] std::uint8_t pad_0xeb5[0x3]; // 0xeb5
        // metadata: MNetworkEnable
        client::GameTick_t m_nNextHoldTick; // 0xeb8        
        // metadata: MNetworkEnable
        float m_flNextHoldFrac; // 0xebc        
        // metadata: MNetworkEnable
        // m_hSwitchToWeaponAfterThrow has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCSWeaponBase> m_hSwitchToWeaponAfterThrow;
        char m_hSwitchToWeaponAfterThrow[0x4]; // 0xec0        
        [[maybe_unused]] std::uint8_t pad_0xec4[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseCSGrenade because it is not a standard-layout class
    static_assert(sizeof(CBaseCSGrenade) == 0xed0);
};
