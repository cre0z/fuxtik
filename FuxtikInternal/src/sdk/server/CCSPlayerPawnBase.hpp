#pragma once
#include "source2sdk/client/CSPlayerState.hpp"
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/server/CBasePlayerPawn.hpp"
#include "source2sdk/server/CTouchExpansionComponent.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCSPlayerController;
};

namespace source2sdk::server
{
    class CCSPlayer_PingServices;
};

namespace source2sdk::server
{
    class CPlayer_ViewModelServices;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd10
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CTouchExpansionComponent::Storage_t m_CTouchExpansionComponent"
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByName "m_flexWeight"
    // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
    // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
    // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
    // static metadata: MNetworkVarNames "CCSPlayer_PingServices * m_pPingServices"
    // static metadata: MNetworkVarNames "CPlayer_ViewModelServices * m_pViewModelServices"
    // static metadata: MNetworkVarNames "CSPlayerState m_iPlayerState"
    // static metadata: MNetworkVarNames "GameTime_t m_fImmuneToGunGameDamageTime"
    // static metadata: MNetworkVarNames "bool m_bGunGameImmunity"
    // static metadata: MNetworkVarNames "float m_fMolotovDamageTime"
    // static metadata: MNetworkVarNames "bool m_bHasMovedSinceSpawn"
    // static metadata: MNetworkVarNames "float m_flFlashDuration"
    // static metadata: MNetworkVarNames "float m_flFlashMaxAlpha"
    // static metadata: MNetworkVarNames "float m_flProgressBarStartTime"
    // static metadata: MNetworkVarNames "int m_iProgressBarDuration"
    // static metadata: MNetworkVarNames "QAngle m_angEyeAngles"
    // static metadata: MNetworkVarNames "CHandle< CCSPlayerController> m_hOriginalController"
    #pragma pack(push, 1)
    class CCSPlayerPawnBase : public server::CBasePlayerPawn
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xba0[0x10]; // 0xba0
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CTouchExpansionComponent"
        // metadata: MNetworkAlias "CTouchExpansionComponent"
        // metadata: MNetworkTypeAlias "CTouchExpansionComponent"
        server::CTouchExpansionComponent m_CTouchExpansionComponent; // 0xbb0        
        // metadata: MNetworkEnable
        server::CCSPlayer_PingServices* m_pPingServices; // 0xc00        
        // metadata: MNetworkEnable
        server::CPlayer_ViewModelServices* m_pViewModelServices; // 0xc08        
        client::GameTime_t m_blindUntilTime; // 0xc10        
        client::GameTime_t m_blindStartTime; // 0xc14        
        // metadata: MNetworkEnable
        client::CSPlayerState m_iPlayerState; // 0xc18        
        [[maybe_unused]] std::uint8_t pad_0xc1c[0xac]; // 0xc1c
        bool m_bRespawning; // 0xcc8        
        [[maybe_unused]] std::uint8_t pad_0xcc9[0x3]; // 0xcc9
        // metadata: MNetworkEnable
        client::GameTime_t m_fImmuneToGunGameDamageTime; // 0xccc        
        // metadata: MNetworkEnable
        bool m_bGunGameImmunity; // 0xcd0        
        [[maybe_unused]] std::uint8_t pad_0xcd1[0x3]; // 0xcd1
        // metadata: MNetworkEnable
        float m_fMolotovDamageTime; // 0xcd4        
        // metadata: MNetworkEnable
        bool m_bHasMovedSinceSpawn; // 0xcd8        
        [[maybe_unused]] std::uint8_t pad_0xcd9[0x3]; // 0xcd9
        int32_t m_iNumSpawns; // 0xcdc        
        [[maybe_unused]] std::uint8_t pad_0xce0[0x4]; // 0xce0
        float m_flIdleTimeSinceLastAction; // 0xce4        
        float m_fNextRadarUpdateTime; // 0xce8        
        // metadata: MNetworkEnable
        float m_flFlashDuration; // 0xcec        
        // metadata: MNetworkEnable
        float m_flFlashMaxAlpha; // 0xcf0        
        // metadata: MNetworkEnable
        float m_flProgressBarStartTime; // 0xcf4        
        // metadata: MNetworkEnable
        int32_t m_iProgressBarDuration; // 0xcf8        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle_precise"
        // metadata: MNetworkPriority "32"
        QAngle m_angEyeAngles; // 0xcfc        
        bool m_wasNotKilledNaturally; // 0xd08        
        bool m_bCommittingSuicideOnTeamChange; // 0xd09        
        [[maybe_unused]] std::uint8_t pad_0xd0a[0x2]; // 0xd0a
        // metadata: MNetworkEnable
        // m_hOriginalController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCSPlayerController> m_hOriginalController;
        char m_hOriginalController[0x4]; // 0xd0c        
        
        // Datamap fields:
        // CHandle< CBaseEntity > original_controller; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayerPawnBase because it is not a standard-layout class
    static_assert(sizeof(CCSPlayerPawnBase) == 0xd10);
};
