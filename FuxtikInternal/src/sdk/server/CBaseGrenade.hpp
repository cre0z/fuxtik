#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseFlex.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCSPlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa20
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByName "m_fFlags"
    // static metadata: MNetworkIncludeByName "m_vecVelocity"
    // static metadata: MNetworkExcludeByName "m_flexWeight"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
    // static metadata: MNetworkExcludeByName "m_nResetEventsParity"
    // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
    // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
    // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
    // static metadata: MNetworkExcludeByName "m_nNewSequenceParity"
    // static metadata: MNetworkVarNames "bool m_bIsLive"
    // static metadata: MNetworkVarNames "float32 m_DmgRadius"
    // static metadata: MNetworkVarNames "GameTime_t m_flDetonateTime"
    // static metadata: MNetworkVarNames "float32 m_flDamage"
    // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn > m_hThrower"
    #pragma pack(push, 1)
    class CBaseGrenade : public server::CBaseFlex
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x978[0x8]; // 0x978
        entity2::CEntityIOOutput m_OnPlayerPickup; // 0x980        
        entity2::CEntityIOOutput m_OnExplode; // 0x9a8        
        bool m_bHasWarnedAI; // 0x9d0        
        bool m_bIsSmokeGrenade; // 0x9d1        
        // metadata: MNetworkEnable
        bool m_bIsLive; // 0x9d2        
        [[maybe_unused]] std::uint8_t pad_0x9d3[0x1]; // 0x9d3
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "10"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "1024,000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_DmgRadius; // 0x9d4        
        // metadata: MNetworkEnable
        client::GameTime_t m_flDetonateTime; // 0x9d8        
        float m_flWarnAITime; // 0x9dc        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "10"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "256,000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_flDamage; // 0x9e0        
        [[maybe_unused]] std::uint8_t pad_0x9e4[0x4]; // 0x9e4
        CUtlSymbolLarge m_iszBounceSound; // 0x9e8        
        CUtlString m_ExplosionSound; // 0x9f0        
        [[maybe_unused]] std::uint8_t pad_0x9f8[0x4]; // 0x9f8
        // metadata: MNetworkEnable
        // m_hThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCSPlayerPawn> m_hThrower;
        char m_hThrower[0x4]; // 0x9fc        
        [[maybe_unused]] std::uint8_t pad_0xa00[0x14]; // 0xa00
        client::GameTime_t m_flNextAttack; // 0xa14        
        // m_hOriginalThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCSPlayerPawn> m_hOriginalThrower;
        char m_hOriginalThrower[0x4]; // 0xa18        
        [[maybe_unused]] std::uint8_t pad_0xa1c[0x4];
        
        // Datamap fields:
        // int32_t m_nExplosionType; // 0x9f8
        // void CBaseGrenadeSmoke; // 0x0
        // void CBaseGrenadeBounceTouch; // 0x0
        // void CBaseGrenadeSlideTouch; // 0x0
        // void CBaseGrenadeExplodeTouch; // 0x0
        // void CBaseGrenadeDetonateUse; // 0x0
        // void CBaseGrenadeDangerSoundThink; // 0x0
        // void CBaseGrenadePreDetonate; // 0x0
        // void CBaseGrenadeDetonate; // 0x0
        // void CBaseGrenadeTumbleThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseGrenade because it is not a standard-layout class
    static_assert(sizeof(CBaseGrenade) == 0xa20);
};
