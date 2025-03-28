#pragma once
#include "source2sdk/client/CBasePlayerController.hpp"
#include "source2sdk/client/EKillTypes_t.hpp"
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/client/QuestProgress__Reason.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CCSPlayerController_ActionTrackingServices;
};

namespace source2sdk::client
{
    class CCSPlayerController_DamageServices;
};

namespace source2sdk::client
{
    class CCSPlayerController_InGameMoneyServices;
};

namespace source2sdk::client
{
    class CCSPlayerController_InventoryServices;
};

namespace source2sdk::client
{
    class C_CSObserverPawn;
};

namespace source2sdk::client
{
    class C_CSPlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x848
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
    class CCSPlayerController : public client::CBasePlayerController
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x6f0[0x10]; // 0x6f0
        // metadata: MNetworkEnable
        client::CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x700        
        // metadata: MNetworkEnable
        client::CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x708        
        // metadata: MNetworkEnable
        client::CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x710        
        // metadata: MNetworkEnable
        client::CCSPlayerController_DamageServices* m_pDamageServices; // 0x718        
        // metadata: MNetworkEnable
        uint32_t m_iPing; // 0x720        
        // metadata: MNetworkEnable
        bool m_bHasCommunicationAbuseMute; // 0x724        
        [[maybe_unused]] std::uint8_t pad_0x725[0x3]; // 0x725
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_szCrosshairCodes; // 0x728        
        // metadata: MNetworkEnable
        uint8_t m_iPendingTeamNum; // 0x730        
        [[maybe_unused]] std::uint8_t pad_0x731[0x3]; // 0x731
        // metadata: MNetworkEnable
        client::GameTime_t m_flForceTeamTime; // 0x734        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnCompTeammateColorChanged"
        int32_t m_iCompTeammateColor; // 0x738        
        // metadata: MNetworkEnable
        bool m_bEverPlayedOnTeam; // 0x73c        
        [[maybe_unused]] std::uint8_t pad_0x73d[0x3]; // 0x73d
        client::GameTime_t m_flPreviousForceJoinTeamTime; // 0x740        
        [[maybe_unused]] std::uint8_t pad_0x744[0x4]; // 0x744
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_szClan; // 0x748        
        CUtlString m_sSanitizedPlayerName; // 0x750        
        // metadata: MNetworkEnable
        int32_t m_iCoachingTeam; // 0x758        
        [[maybe_unused]] std::uint8_t pad_0x75c[0x4]; // 0x75c
        // metadata: MNetworkEnable
        uint64_t m_nPlayerDominated; // 0x760        
        // metadata: MNetworkEnable
        uint64_t m_nPlayerDominatingMe; // 0x768        
        // metadata: MNetworkEnable
        int32_t m_iCompetitiveRanking; // 0x770        
        // metadata: MNetworkEnable
        int32_t m_iCompetitiveWins; // 0x774        
        // metadata: MNetworkEnable
        int8_t m_iCompetitiveRankType; // 0x778        
        [[maybe_unused]] std::uint8_t pad_0x779[0x3]; // 0x779
        // metadata: MNetworkEnable
        int32_t m_iCompetitiveRankingPredicted_Win; // 0x77c        
        // metadata: MNetworkEnable
        int32_t m_iCompetitiveRankingPredicted_Loss; // 0x780        
        // metadata: MNetworkEnable
        int32_t m_iCompetitiveRankingPredicted_Tie; // 0x784        
        // metadata: MNetworkEnable
        int32_t m_nEndMatchNextMapVote; // 0x788        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint16_t m_unActiveQuestId; // 0x78c        
        [[maybe_unused]] std::uint8_t pad_0x78e[0x2]; // 0x78e
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::QuestProgress__Reason m_nQuestProgressReason; // 0x790        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint32_t m_unPlayerTvControlFlags; // 0x794        
        [[maybe_unused]] std::uint8_t pad_0x798[0x28]; // 0x798
        int32_t m_iDraftIndex; // 0x7c0        
        uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x7c4        
        uint32_t m_uiAbandonRecordedReason; // 0x7c8        
        bool m_bCannotBeKicked; // 0x7cc        
        bool m_bEverFullyConnected; // 0x7cd        
        bool m_bAbandonAllowsSurrender; // 0x7ce        
        bool m_bAbandonOffersInstantSurrender; // 0x7cf        
        bool m_bDisconnection1MinWarningPrinted; // 0x7d0        
        bool m_bScoreReported; // 0x7d1        
        [[maybe_unused]] std::uint8_t pad_0x7d2[0x2]; // 0x7d2
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        int32_t m_nDisconnectionTick; // 0x7d4        
        [[maybe_unused]] std::uint8_t pad_0x7d8[0x8]; // 0x7d8
        // metadata: MNetworkEnable
        bool m_bControllingBot; // 0x7e0        
        // metadata: MNetworkEnable
        bool m_bHasControlledBotThisRound; // 0x7e1        
        bool m_bHasBeenControlledByPlayerThisRound; // 0x7e2        
        [[maybe_unused]] std::uint8_t pad_0x7e3[0x1]; // 0x7e3
        int32_t m_nBotsControlledThisRound; // 0x7e4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bCanControlObservedBot; // 0x7e8        
        [[maybe_unused]] std::uint8_t pad_0x7e9[0x3]; // 0x7e9
        // metadata: MNetworkEnable
        // m_hPlayerPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CSPlayerPawn> m_hPlayerPawn;
        char m_hPlayerPawn[0x4]; // 0x7ec        
        // metadata: MNetworkEnable
        // m_hObserverPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CSObserverPawn> m_hObserverPawn;
        char m_hObserverPawn[0x4]; // 0x7f0        
        // metadata: MNetworkEnable
        bool m_bPawnIsAlive; // 0x7f4        
        [[maybe_unused]] std::uint8_t pad_0x7f5[0x3]; // 0x7f5
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
        uint32_t m_iPawnHealth; // 0x7f8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
        int32_t m_iPawnArmor; // 0x7fc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
        bool m_bPawnHasDefuser; // 0x800        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
        bool m_bPawnHasHelmet; // 0x801        
        // metadata: MNetworkEnable
        uint16_t m_nPawnCharacterDefIndex; // 0x802        
        // metadata: MNetworkEnable
        int32_t m_iPawnLifetimeStart; // 0x804        
        // metadata: MNetworkEnable
        int32_t m_iPawnLifetimeEnd; // 0x808        
        // metadata: MNetworkEnable
        int32_t m_iPawnBotDifficulty; // 0x80c        
        // metadata: MNetworkEnable
        // m_hOriginalControllerOfCurrentPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CCSPlayerController> m_hOriginalControllerOfCurrentPawn;
        char m_hOriginalControllerOfCurrentPawn[0x4]; // 0x810        
        // metadata: MNetworkEnable
        int32_t m_iScore; // 0x814        
        // metadata: MNetworkEnable
        // m_vecKills has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<client::EKillTypes_t> m_vecKills;
        char m_vecKills[0x18]; // 0x818        
        // metadata: MNetworkEnable
        bool m_bMvpNoMusic; // 0x830        
        [[maybe_unused]] std::uint8_t pad_0x831[0x3]; // 0x831
        // metadata: MNetworkEnable
        int32_t m_eMvpReason; // 0x834        
        // metadata: MNetworkEnable
        int32_t m_iMusicKitID; // 0x838        
        // metadata: MNetworkEnable
        int32_t m_iMusicKitMVPs; // 0x83c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnMVPCountChanged"
        int32_t m_iMVPs; // 0x840        
        bool m_bIsPlayerNameDirty; // 0x844        
        [[maybe_unused]] std::uint8_t pad_0x845[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayerController because it is not a standard-layout class
    static_assert(sizeof(CCSPlayerController) == 0x848);
};
