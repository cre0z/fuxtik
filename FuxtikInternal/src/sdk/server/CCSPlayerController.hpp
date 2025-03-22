#pragma once
#include "source2sdk/client/EKillTypes_t.hpp"
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/client/QuestProgress__Reason.hpp"
#include "source2sdk/server/CBasePlayerController.hpp"
#include "source2sdk/server/IntervalTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCSObserverPawn;
};

namespace source2sdk::server
{
    class CCSPlayerController_ActionTrackingServices;
};

namespace source2sdk::server
{
    class CCSPlayerController_DamageServices;
};

namespace source2sdk::server
{
    class CCSPlayerController_InGameMoneyServices;
};

namespace source2sdk::server
{
    class CCSPlayerController_InventoryServices;
};

namespace source2sdk::server
{
    class CCSPlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xfa70
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkUserGroupProxy "CCSPlayerController"
    // static metadata: MNetworkUserGroupProxy "CCSPlayerController"
    // static metadata: MNetworkUserGroupProxy "CCSPlayerController"
    // static metadata: MNetworkVarNames "CCSPlayerController_InGameMoneyServices * m_pInGameMoneyServices"
    // static metadata: MNetworkVarNames "CCSPlayerController_InventoryServices * m_pInventoryServices"
    // static metadata: MNetworkVarNames "CCSPlayerController_ActionTrackingServices * m_pActionTrackingServices"
    // static metadata: MNetworkVarNames "CCSPlayerController_DamageServices * m_pDamageServices"
    // static metadata: MNetworkVarNames "uint32 m_iPing"
    // static metadata: MNetworkVarNames "bool m_bHasCommunicationAbuseMute"
    // static metadata: MNetworkVarNames "string_t m_szCrosshairCodes"
    // static metadata: MNetworkVarNames "uint8 m_iPendingTeamNum"
    // static metadata: MNetworkVarNames "GameTime_t m_flForceTeamTime"
    // static metadata: MNetworkVarNames "int m_iCompTeammateColor"
    // static metadata: MNetworkVarNames "bool m_bEverPlayedOnTeam"
    // static metadata: MNetworkVarNames "string_t m_szClan"
    // static metadata: MNetworkVarNames "int m_iCoachingTeam"
    // static metadata: MNetworkVarNames "uint64 m_nPlayerDominated"
    // static metadata: MNetworkVarNames "uint64 m_nPlayerDominatingMe"
    // static metadata: MNetworkVarNames "int m_iCompetitiveRanking"
    // static metadata: MNetworkVarNames "int m_iCompetitiveWins"
    // static metadata: MNetworkVarNames "int8 m_iCompetitiveRankType"
    // static metadata: MNetworkVarNames "int m_iCompetitiveRankingPredicted_Win"
    // static metadata: MNetworkVarNames "int m_iCompetitiveRankingPredicted_Loss"
    // static metadata: MNetworkVarNames "int m_iCompetitiveRankingPredicted_Tie"
    // static metadata: MNetworkVarNames "int m_nEndMatchNextMapVote"
    // static metadata: MNetworkVarNames "uint16 m_unActiveQuestId"
    // static metadata: MNetworkVarNames "QuestProgress::Reason m_nQuestProgressReason"
    // static metadata: MNetworkVarNames "uint32 m_unPlayerTvControlFlags"
    // static metadata: MNetworkVarNames "int m_nDisconnectionTick"
    // static metadata: MNetworkVarNames "bool m_bControllingBot"
    // static metadata: MNetworkVarNames "bool m_bHasControlledBotThisRound"
    // static metadata: MNetworkVarNames "bool m_bCanControlObservedBot"
    // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_hPlayerPawn"
    // static metadata: MNetworkVarNames "CHandle< CCSObserverPawn> m_hObserverPawn"
    // static metadata: MNetworkVarNames "bool m_bPawnIsAlive"
    // static metadata: MNetworkVarNames "uint32 m_iPawnHealth"
    // static metadata: MNetworkVarNames "int m_iPawnArmor"
    // static metadata: MNetworkVarNames "bool m_bPawnHasDefuser"
    // static metadata: MNetworkVarNames "bool m_bPawnHasHelmet"
    // static metadata: MNetworkVarNames "item_definition_index_t m_nPawnCharacterDefIndex"
    // static metadata: MNetworkVarNames "int m_iPawnLifetimeStart"
    // static metadata: MNetworkVarNames "int m_iPawnLifetimeEnd"
    // static metadata: MNetworkVarNames "int m_iPawnBotDifficulty"
    // static metadata: MNetworkVarNames "CHandle< CCSPlayerController> m_hOriginalControllerOfCurrentPawn"
    // static metadata: MNetworkVarNames "int32 m_iScore"
    // static metadata: MNetworkVarNames "EKillTypes_t m_vecKills"
    // static metadata: MNetworkVarNames "bool m_bMvpNoMusic"
    // static metadata: MNetworkVarNames "int m_eMvpReason"
    // static metadata: MNetworkVarNames "int m_iMusicKitID"
    // static metadata: MNetworkVarNames "int m_iMusicKitMVPs"
    // static metadata: MNetworkVarNames "int m_iMVPs"
    #pragma pack(push, 1)
    class CCSPlayerController : public server::CBasePlayerController
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x758[0x10]; // 0x758
        // metadata: MNetworkEnable
        server::CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x768        
        // metadata: MNetworkEnable
        server::CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x770        
        // metadata: MNetworkEnable
        server::CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x778        
        // metadata: MNetworkEnable
        server::CCSPlayerController_DamageServices* m_pDamageServices; // 0x780        
        // metadata: MNetworkEnable
        uint32_t m_iPing; // 0x788        
        // metadata: MNetworkEnable
        bool m_bHasCommunicationAbuseMute; // 0x78c        
        [[maybe_unused]] std::uint8_t pad_0x78d[0x3]; // 0x78d
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_szCrosshairCodes; // 0x790        
        // metadata: MNetworkEnable
        uint8_t m_iPendingTeamNum; // 0x798        
        [[maybe_unused]] std::uint8_t pad_0x799[0x3]; // 0x799
        // metadata: MNetworkEnable
        client::GameTime_t m_flForceTeamTime; // 0x79c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnCompTeammateColorChanged"
        int32_t m_iCompTeammateColor; // 0x7a0        
        // metadata: MNetworkEnable
        bool m_bEverPlayedOnTeam; // 0x7a4        
        bool m_bAttemptedToGetColor; // 0x7a5        
        [[maybe_unused]] std::uint8_t pad_0x7a6[0x2]; // 0x7a6
        int32_t m_iTeammatePreferredColor; // 0x7a8        
        bool m_bTeamChanged; // 0x7ac        
        bool m_bInSwitchTeam; // 0x7ad        
        bool m_bHasSeenJoinGame; // 0x7ae        
        bool m_bJustBecameSpectator; // 0x7af        
        bool m_bSwitchTeamsOnNextRoundReset; // 0x7b0        
        bool m_bRemoveAllItemsOnNextRoundReset; // 0x7b1        
        [[maybe_unused]] std::uint8_t pad_0x7b2[0x6]; // 0x7b2
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_szClan; // 0x7b8        
        char m_szClanName[32]; // 0x7c0        
        // metadata: MNetworkEnable
        int32_t m_iCoachingTeam; // 0x7e0        
        [[maybe_unused]] std::uint8_t pad_0x7e4[0x4]; // 0x7e4
        // metadata: MNetworkEnable
        uint64_t m_nPlayerDominated; // 0x7e8        
        // metadata: MNetworkEnable
        uint64_t m_nPlayerDominatingMe; // 0x7f0        
        // metadata: MNetworkEnable
        int32_t m_iCompetitiveRanking; // 0x7f8        
        // metadata: MNetworkEnable
        int32_t m_iCompetitiveWins; // 0x7fc        
        // metadata: MNetworkEnable
        int8_t m_iCompetitiveRankType; // 0x800        
        [[maybe_unused]] std::uint8_t pad_0x801[0x3]; // 0x801
        // metadata: MNetworkEnable
        int32_t m_iCompetitiveRankingPredicted_Win; // 0x804        
        // metadata: MNetworkEnable
        int32_t m_iCompetitiveRankingPredicted_Loss; // 0x808        
        // metadata: MNetworkEnable
        int32_t m_iCompetitiveRankingPredicted_Tie; // 0x80c        
        // metadata: MNetworkEnable
        int32_t m_nEndMatchNextMapVote; // 0x810        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint16_t m_unActiveQuestId; // 0x814        
        [[maybe_unused]] std::uint8_t pad_0x816[0x2]; // 0x816
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::QuestProgress__Reason m_nQuestProgressReason; // 0x818        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint32_t m_unPlayerTvControlFlags; // 0x81c        
        [[maybe_unused]] std::uint8_t pad_0x820[0x28]; // 0x820
        int32_t m_iDraftIndex; // 0x848        
        uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x84c        
        uint32_t m_uiAbandonRecordedReason; // 0x850        
        bool m_bCannotBeKicked; // 0x854        
        bool m_bEverFullyConnected; // 0x855        
        bool m_bAbandonAllowsSurrender; // 0x856        
        bool m_bAbandonOffersInstantSurrender; // 0x857        
        bool m_bDisconnection1MinWarningPrinted; // 0x858        
        bool m_bScoreReported; // 0x859        
        [[maybe_unused]] std::uint8_t pad_0x85a[0x2]; // 0x85a
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        int32_t m_nDisconnectionTick; // 0x85c        
        [[maybe_unused]] std::uint8_t pad_0x860[0x8]; // 0x860
        // metadata: MNetworkEnable
        bool m_bControllingBot; // 0x868        
        // metadata: MNetworkEnable
        bool m_bHasControlledBotThisRound; // 0x869        
        bool m_bHasBeenControlledByPlayerThisRound; // 0x86a        
        [[maybe_unused]] std::uint8_t pad_0x86b[0x1]; // 0x86b
        int32_t m_nBotsControlledThisRound; // 0x86c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bCanControlObservedBot; // 0x870        
        [[maybe_unused]] std::uint8_t pad_0x871[0x3]; // 0x871
        // metadata: MNetworkEnable
        // m_hPlayerPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCSPlayerPawn> m_hPlayerPawn;
        char m_hPlayerPawn[0x4]; // 0x874        
        // metadata: MNetworkEnable
        // m_hObserverPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCSObserverPawn> m_hObserverPawn;
        char m_hObserverPawn[0x4]; // 0x878        
        int32_t m_DesiredObserverMode; // 0x87c        
        CEntityHandle m_hDesiredObserverTarget; // 0x880        
        // metadata: MNetworkEnable
        bool m_bPawnIsAlive; // 0x884        
        [[maybe_unused]] std::uint8_t pad_0x885[0x3]; // 0x885
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
        uint32_t m_iPawnHealth; // 0x888        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
        int32_t m_iPawnArmor; // 0x88c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
        bool m_bPawnHasDefuser; // 0x890        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
        bool m_bPawnHasHelmet; // 0x891        
        // metadata: MNetworkEnable
        uint16_t m_nPawnCharacterDefIndex; // 0x892        
        // metadata: MNetworkEnable
        int32_t m_iPawnLifetimeStart; // 0x894        
        // metadata: MNetworkEnable
        int32_t m_iPawnLifetimeEnd; // 0x898        
        // metadata: MNetworkEnable
        int32_t m_iPawnBotDifficulty; // 0x89c        
        // metadata: MNetworkEnable
        // m_hOriginalControllerOfCurrentPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCSPlayerController> m_hOriginalControllerOfCurrentPawn;
        char m_hOriginalControllerOfCurrentPawn[0x4]; // 0x8a0        
        // metadata: MNetworkEnable
        int32_t m_iScore; // 0x8a4        
        int32_t m_iRoundScore; // 0x8a8        
        int32_t m_iRoundsWon; // 0x8ac        
        // metadata: MNetworkEnable
        // m_vecKills has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<client::EKillTypes_t> m_vecKills;
        char m_vecKills[0x18]; // 0x8b0        
        // metadata: MNetworkEnable
        bool m_bMvpNoMusic; // 0x8c8        
        [[maybe_unused]] std::uint8_t pad_0x8c9[0x3]; // 0x8c9
        // metadata: MNetworkEnable
        int32_t m_eMvpReason; // 0x8cc        
        // metadata: MNetworkEnable
        int32_t m_iMusicKitID; // 0x8d0        
        // metadata: MNetworkEnable
        int32_t m_iMusicKitMVPs; // 0x8d4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnMVPCountChanged"
        int32_t m_iMVPs; // 0x8d8        
        int32_t m_nUpdateCounter; // 0x8dc        
        float m_flSmoothedPing; // 0x8e0        
        [[maybe_unused]] std::uint8_t pad_0x8e4[0xf0a4]; // 0x8e4
        server::IntervalTimer m_lastHeldVoteTimer; // 0xf988        
        [[maybe_unused]] std::uint8_t pad_0xf998[0x8]; // 0xf998
        bool m_bShowHints; // 0xf9a0        
        [[maybe_unused]] std::uint8_t pad_0xf9a1[0x3]; // 0xf9a1
        int32_t m_iNextTimeCheck; // 0xf9a4        
        bool m_bJustDidTeamKill; // 0xf9a8        
        bool m_bPunishForTeamKill; // 0xf9a9        
        bool m_bGaveTeamDamageWarning; // 0xf9aa        
        bool m_bGaveTeamDamageWarningThisRound; // 0xf9ab        
        [[maybe_unused]] std::uint8_t pad_0xf9ac[0x4]; // 0xf9ac
        double m_dblLastReceivedPacketPlatFloatTime; // 0xf9b0        
        client::GameTime_t m_LastTeamDamageWarningTime; // 0xf9b8        
        client::GameTime_t m_LastTimePlayerWasDisconnectedForPawnsRemove; // 0xf9bc        
        uint32_t m_nSuspiciousHitCount; // 0xf9c0        
        uint32_t m_nNonSuspiciousHitStreak; // 0xf9c4        
        [[maybe_unused]] std::uint8_t pad_0xf9c8[0xa8];
        
        // Datamap fields:
        // void CCSPlayerControllerPlayerForceTeamThink; // 0x0
        // void CCSPlayerControllerResetForceTeamThink; // 0x0
        // void CCSPlayerControllerResourceDataThink; // 0x0
        // void CCSPlayerControllerInventoryUpdateThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayerController because it is not a standard-layout class
    static_assert(sizeof(CCSPlayerController) == 0xfa70);
};
