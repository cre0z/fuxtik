#pragma once
#include "source2sdk/client/C_RetakeGameRules.hpp"
#include "source2sdk/client/C_TeamplayRules.hpp"
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CCSGameModeRules;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x8ed8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bFreezePeriod"
    // static metadata: MNetworkVarNames "bool m_bWarmupPeriod"
    // static metadata: MNetworkVarNames "GameTime_t m_fWarmupPeriodEnd"
    // static metadata: MNetworkVarNames "GameTime_t m_fWarmupPeriodStart"
    // static metadata: MNetworkVarNames "bool m_bServerPaused"
    // static metadata: MNetworkVarNames "bool m_bTerroristTimeOutActive"
    // static metadata: MNetworkVarNames "bool m_bCTTimeOutActive"
    // static metadata: MNetworkVarNames "float m_flTerroristTimeOutRemaining"
    // static metadata: MNetworkVarNames "float m_flCTTimeOutRemaining"
    // static metadata: MNetworkVarNames "int m_nTerroristTimeOuts"
    // static metadata: MNetworkVarNames "int m_nCTTimeOuts"
    // static metadata: MNetworkVarNames "bool m_bTechnicalTimeOut"
    // static metadata: MNetworkVarNames "bool m_bMatchWaitingForResume"
    // static metadata: MNetworkVarNames "int m_iRoundTime"
    // static metadata: MNetworkVarNames "float m_fMatchStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_fRoundStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flRestartRoundTime"
    // static metadata: MNetworkVarNames "bool m_bGameRestart"
    // static metadata: MNetworkVarNames "float m_flGameStartTime"
    // static metadata: MNetworkVarNames "float m_timeUntilNextPhaseStarts"
    // static metadata: MNetworkVarNames "int m_gamePhase"
    // static metadata: MNetworkVarNames "int m_totalRoundsPlayed"
    // static metadata: MNetworkVarNames "int m_nRoundsPlayedThisPhase"
    // static metadata: MNetworkVarNames "int m_nOvertimePlaying"
    // static metadata: MNetworkVarNames "int m_iHostagesRemaining"
    // static metadata: MNetworkVarNames "bool m_bAnyHostageReached"
    // static metadata: MNetworkVarNames "bool m_bMapHasBombTarget"
    // static metadata: MNetworkVarNames "bool m_bMapHasRescueZone"
    // static metadata: MNetworkVarNames "bool m_bMapHasBuyZone"
    // static metadata: MNetworkVarNames "bool m_bIsQueuedMatchmaking"
    // static metadata: MNetworkVarNames "int m_nQueuedMatchmakingMode"
    // static metadata: MNetworkVarNames "bool m_bIsValveDS"
    // static metadata: MNetworkVarNames "bool m_bLogoMap"
    // static metadata: MNetworkVarNames "bool m_bPlayAllStepSoundsOnServer"
    // static metadata: MNetworkVarNames "int m_iSpectatorSlotCount"
    // static metadata: MNetworkVarNames "int m_MatchDevice"
    // static metadata: MNetworkVarNames "bool m_bHasMatchStarted"
    // static metadata: MNetworkVarNames "int m_nNextMapInMapgroup"
    // static metadata: MNetworkVarNames "char m_szTournamentEventName"
    // static metadata: MNetworkVarNames "char m_szTournamentEventStage"
    // static metadata: MNetworkVarNames "char m_szMatchStatTxt"
    // static metadata: MNetworkVarNames "char m_szTournamentPredictionsTxt"
    // static metadata: MNetworkVarNames "int m_nTournamentPredictionsPct"
    // static metadata: MNetworkVarNames "GameTime_t m_flCMMItemDropRevealStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flCMMItemDropRevealEndTime"
    // static metadata: MNetworkVarNames "bool m_bIsDroppingItems"
    // static metadata: MNetworkVarNames "bool m_bIsQuestEligible"
    // static metadata: MNetworkVarNames "bool m_bIsHltvActive"
    // static metadata: MNetworkVarNames "uint16 m_arrProhibitedItemIndices"
    // static metadata: MNetworkVarNames "uint32 m_arrTournamentActiveCasterAccounts"
    // static metadata: MNetworkVarNames "int m_numBestOfMaps"
    // static metadata: MNetworkVarNames "int m_nHalloweenMaskListSeed"
    // static metadata: MNetworkVarNames "bool m_bBombDropped"
    // static metadata: MNetworkVarNames "bool m_bBombPlanted"
    // static metadata: MNetworkVarNames "int m_iRoundWinStatus"
    // static metadata: MNetworkVarNames "int m_eRoundWinReason"
    // static metadata: MNetworkVarNames "bool m_bTCantBuy"
    // static metadata: MNetworkVarNames "bool m_bCTCantBuy"
    // static metadata: MNetworkVarNames "int m_iMatchStats_RoundResults"
    // static metadata: MNetworkVarNames "int m_iMatchStats_PlayersAlive_CT"
    // static metadata: MNetworkVarNames "int m_iMatchStats_PlayersAlive_T"
    // static metadata: MNetworkVarNames "float m_TeamRespawnWaveTimes"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextRespawnWave"
    // static metadata: MNetworkVarNames "int m_nServerQuestID"
    // static metadata: MNetworkVarNames "Vector m_vMinimapMins"
    // static metadata: MNetworkVarNames "Vector m_vMinimapMaxs"
    // static metadata: MNetworkVarNames "float m_MinimapVerticalSectionHeights"
    // static metadata: MNetworkVarNames "int m_nEndMatchMapGroupVoteTypes"
    // static metadata: MNetworkVarNames "int m_nEndMatchMapGroupVoteOptions"
    // static metadata: MNetworkVarNames "int m_nEndMatchMapVoteWinner"
    // static metadata: MNetworkVarNames "int m_iNumConsecutiveCTLoses"
    // static metadata: MNetworkVarNames "int m_iNumConsecutiveTerroristLoses"
    // static metadata: MNetworkVarNames "int m_nMatchAbortedEarlyReason"
    // static metadata: MNetworkVarNames "CCSGameModeRules * m_pGameModeRules"
    // static metadata: MNetworkVarNames "CRetakeGameRules m_RetakeRules"
    // static metadata: MNetworkVarNames "uint8 m_nMatchEndCount"
    // static metadata: MNetworkVarNames "int m_nTTeamIntroVariant"
    // static metadata: MNetworkVarNames "int m_nCTTeamIntroVariant"
    // static metadata: MNetworkVarNames "bool m_bTeamIntroPeriod"
    // static metadata: MNetworkVarNames "int m_iRoundEndWinnerTeam"
    // static metadata: MNetworkVarNames "int m_eRoundEndReason"
    // static metadata: MNetworkVarNames "bool m_bRoundEndShowTimerDefend"
    // static metadata: MNetworkVarNames "int m_iRoundEndTimerTime"
    // static metadata: MNetworkVarNames "CUtlString m_sRoundEndFunFactToken"
    // static metadata: MNetworkVarNames "CPlayerSlot m_iRoundEndFunFactPlayerSlot"
    // static metadata: MNetworkVarNames "int m_iRoundEndFunFactData1"
    // static metadata: MNetworkVarNames "int m_iRoundEndFunFactData2"
    // static metadata: MNetworkVarNames "int m_iRoundEndFunFactData3"
    // static metadata: MNetworkVarNames "CUtlString m_sRoundEndMessage"
    // static metadata: MNetworkVarNames "int m_iRoundEndPlayerCount"
    // static metadata: MNetworkVarNames "bool m_bRoundEndNoMusic"
    // static metadata: MNetworkVarNames "int m_iRoundEndLegacy"
    // static metadata: MNetworkVarNames "uint8 m_nRoundEndCount"
    // static metadata: MNetworkVarNames "int m_iRoundStartRoundNumber"
    // static metadata: MNetworkVarNames "uint8 m_nRoundStartCount"
    #pragma pack(push, 1)
    class C_CSGameRules : public client::C_TeamplayRules
    {
    public:
        // metadata: MNetworkEnable
        bool m_bFreezePeriod; // 0x40        
        // metadata: MNetworkEnable
        bool m_bWarmupPeriod; // 0x41        
        [[maybe_unused]] std::uint8_t pad_0x42[0x2]; // 0x42
        // metadata: MNetworkEnable
        client::GameTime_t m_fWarmupPeriodEnd; // 0x44        
        // metadata: MNetworkEnable
        client::GameTime_t m_fWarmupPeriodStart; // 0x48        
        // metadata: MNetworkEnable
        bool m_bServerPaused; // 0x4c        
        // metadata: MNetworkEnable
        bool m_bTerroristTimeOutActive; // 0x4d        
        // metadata: MNetworkEnable
        bool m_bCTTimeOutActive; // 0x4e        
        [[maybe_unused]] std::uint8_t pad_0x4f[0x1]; // 0x4f
        // metadata: MNetworkEnable
        float m_flTerroristTimeOutRemaining; // 0x50        
        // metadata: MNetworkEnable
        float m_flCTTimeOutRemaining; // 0x54        
        // metadata: MNetworkEnable
        int32_t m_nTerroristTimeOuts; // 0x58        
        // metadata: MNetworkEnable
        int32_t m_nCTTimeOuts; // 0x5c        
        // metadata: MNetworkEnable
        bool m_bTechnicalTimeOut; // 0x60        
        // metadata: MNetworkEnable
        bool m_bMatchWaitingForResume; // 0x61        
        [[maybe_unused]] std::uint8_t pad_0x62[0x2]; // 0x62
        // metadata: MNetworkEnable
        int32_t m_iRoundTime; // 0x64        
        // metadata: MNetworkEnable
        float m_fMatchStartTime; // 0x68        
        // metadata: MNetworkEnable
        client::GameTime_t m_fRoundStartTime; // 0x6c        
        // metadata: MNetworkEnable
        client::GameTime_t m_flRestartRoundTime; // 0x70        
        // metadata: MNetworkEnable
        bool m_bGameRestart; // 0x74        
        [[maybe_unused]] std::uint8_t pad_0x75[0x3]; // 0x75
        // metadata: MNetworkEnable
        float m_flGameStartTime; // 0x78        
        // metadata: MNetworkEnable
        float m_timeUntilNextPhaseStarts; // 0x7c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnGamePhaseChanged"
        int32_t m_gamePhase; // 0x80        
        // metadata: MNetworkEnable
        int32_t m_totalRoundsPlayed; // 0x84        
        // metadata: MNetworkEnable
        int32_t m_nRoundsPlayedThisPhase; // 0x88        
        // metadata: MNetworkEnable
        int32_t m_nOvertimePlaying; // 0x8c        
        // metadata: MNetworkEnable
        int32_t m_iHostagesRemaining; // 0x90        
        // metadata: MNetworkEnable
        bool m_bAnyHostageReached; // 0x94        
        // metadata: MNetworkEnable
        bool m_bMapHasBombTarget; // 0x95        
        // metadata: MNetworkEnable
        bool m_bMapHasRescueZone; // 0x96        
        // metadata: MNetworkEnable
        bool m_bMapHasBuyZone; // 0x97        
        // metadata: MNetworkEnable
        bool m_bIsQueuedMatchmaking; // 0x98        
        [[maybe_unused]] std::uint8_t pad_0x99[0x3]; // 0x99
        // metadata: MNetworkEnable
        int32_t m_nQueuedMatchmakingMode; // 0x9c        
        // metadata: MNetworkEnable
        bool m_bIsValveDS; // 0xa0        
        // metadata: MNetworkEnable
        bool m_bLogoMap; // 0xa1        
        // metadata: MNetworkEnable
        bool m_bPlayAllStepSoundsOnServer; // 0xa2        
        [[maybe_unused]] std::uint8_t pad_0xa3[0x1]; // 0xa3
        // metadata: MNetworkEnable
        int32_t m_iSpectatorSlotCount; // 0xa4        
        // metadata: MNetworkEnable
        int32_t m_MatchDevice; // 0xa8        
        // metadata: MNetworkEnable
        bool m_bHasMatchStarted; // 0xac        
        [[maybe_unused]] std::uint8_t pad_0xad[0x3]; // 0xad
        // metadata: MNetworkEnable
        int32_t m_nNextMapInMapgroup; // 0xb0        
        // metadata: MNetworkEnable
        char m_szTournamentEventName[512]; // 0xb4        
        // metadata: MNetworkEnable
        char m_szTournamentEventStage[512]; // 0x2b4        
        // metadata: MNetworkEnable
        char m_szMatchStatTxt[512]; // 0x4b4        
        // metadata: MNetworkEnable
        char m_szTournamentPredictionsTxt[512]; // 0x6b4        
        // metadata: MNetworkEnable
        int32_t m_nTournamentPredictionsPct; // 0x8b4        
        // metadata: MNetworkEnable
        client::GameTime_t m_flCMMItemDropRevealStartTime; // 0x8b8        
        // metadata: MNetworkEnable
        client::GameTime_t m_flCMMItemDropRevealEndTime; // 0x8bc        
        // metadata: MNetworkEnable
        bool m_bIsDroppingItems; // 0x8c0        
        // metadata: MNetworkEnable
        bool m_bIsQuestEligible; // 0x8c1        
        // metadata: MNetworkEnable
        bool m_bIsHltvActive; // 0x8c2        
        [[maybe_unused]] std::uint8_t pad_0x8c3[0x1]; // 0x8c3
        // metadata: MNetworkEnable
        uint16_t m_arrProhibitedItemIndices[100]; // 0x8c4        
        // metadata: MNetworkEnable
        uint32_t m_arrTournamentActiveCasterAccounts[4]; // 0x98c        
        // metadata: MNetworkEnable
        int32_t m_numBestOfMaps; // 0x99c        
        // metadata: MNetworkEnable
        int32_t m_nHalloweenMaskListSeed; // 0x9a0        
        // metadata: MNetworkEnable
        bool m_bBombDropped; // 0x9a4        
        // metadata: MNetworkEnable
        bool m_bBombPlanted; // 0x9a5        
        [[maybe_unused]] std::uint8_t pad_0x9a6[0x2]; // 0x9a6
        // metadata: MNetworkEnable
        int32_t m_iRoundWinStatus; // 0x9a8        
        // metadata: MNetworkEnable
        int32_t m_eRoundWinReason; // 0x9ac        
        // metadata: MNetworkEnable
        bool m_bTCantBuy; // 0x9b0        
        // metadata: MNetworkEnable
        bool m_bCTCantBuy; // 0x9b1        
        [[maybe_unused]] std::uint8_t pad_0x9b2[0x2]; // 0x9b2
        // metadata: MNetworkEnable
        int32_t m_iMatchStats_RoundResults[30]; // 0x9b4        
        // metadata: MNetworkEnable
        int32_t m_iMatchStats_PlayersAlive_CT[30]; // 0xa2c        
        // metadata: MNetworkEnable
        int32_t m_iMatchStats_PlayersAlive_T[30]; // 0xaa4        
        // metadata: MNetworkEnable
        float m_TeamRespawnWaveTimes[32]; // 0xb1c        
        // metadata: MNetworkEnable
        client::GameTime_t m_flNextRespawnWave[32]; // 0xb9c        
        // metadata: MNetworkEnable
        int32_t m_nServerQuestID; // 0xc1c        
        // metadata: MNetworkEnable
        Vector m_vMinimapMins; // 0xc20        
        // metadata: MNetworkEnable
        Vector m_vMinimapMaxs; // 0xc2c        
        // metadata: MNetworkEnable
        float m_MinimapVerticalSectionHeights[8]; // 0xc38        
        bool m_bSpawnedTerrorHuntHeavy; // 0xc58        
        [[maybe_unused]] std::uint8_t pad_0xc59[0x3]; // 0xc59
        // metadata: MNetworkEnable
        int32_t m_nEndMatchMapGroupVoteTypes[10]; // 0xc5c        
        // metadata: MNetworkEnable
        int32_t m_nEndMatchMapGroupVoteOptions[10]; // 0xc84        
        // metadata: MNetworkEnable
        int32_t m_nEndMatchMapVoteWinner; // 0xcac        
        // metadata: MNetworkEnable
        int32_t m_iNumConsecutiveCTLoses; // 0xcb0        
        // metadata: MNetworkEnable
        int32_t m_iNumConsecutiveTerroristLoses; // 0xcb4        
        [[maybe_unused]] std::uint8_t pad_0xcb8[0x18]; // 0xcb8
        bool m_bMarkClientStopRecordAtRoundEnd; // 0xcd0        
        [[maybe_unused]] std::uint8_t pad_0xcd1[0x57]; // 0xcd1
        // metadata: MNetworkEnable
        int32_t m_nMatchAbortedEarlyReason; // 0xd28        
        bool m_bHasTriggeredRoundStartMusic; // 0xd2c        
        bool m_bSwitchingTeamsAtRoundReset; // 0xd2d        
        [[maybe_unused]] std::uint8_t pad_0xd2e[0x1a]; // 0xd2e
        // metadata: MNetworkEnable
        // metadata: MNetworkPolymorphic
        client::CCSGameModeRules* m_pGameModeRules; // 0xd48        
        // metadata: MNetworkEnable
        client::C_RetakeGameRules m_RetakeRules; // 0xd50        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnMatchEndCountChanged"
        uint8_t m_nMatchEndCount; // 0xe68        
        [[maybe_unused]] std::uint8_t pad_0xe69[0x3]; // 0xe69
        // metadata: MNetworkEnable
        int32_t m_nTTeamIntroVariant; // 0xe6c        
        // metadata: MNetworkEnable
        int32_t m_nCTTeamIntroVariant; // 0xe70        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnTeamIntroPeriodChanged"
        bool m_bTeamIntroPeriod; // 0xe74        
        [[maybe_unused]] std::uint8_t pad_0xe75[0x3]; // 0xe75
        // metadata: MNetworkEnable
        int32_t m_iRoundEndWinnerTeam; // 0xe78        
        // metadata: MNetworkEnable
        int32_t m_eRoundEndReason; // 0xe7c        
        // metadata: MNetworkEnable
        bool m_bRoundEndShowTimerDefend; // 0xe80        
        [[maybe_unused]] std::uint8_t pad_0xe81[0x3]; // 0xe81
        // metadata: MNetworkEnable
        int32_t m_iRoundEndTimerTime; // 0xe84        
        // metadata: MNetworkEnable
        CUtlString m_sRoundEndFunFactToken; // 0xe88        
        // metadata: MNetworkEnable
        CPlayerSlot m_iRoundEndFunFactPlayerSlot; // 0xe90        
        // metadata: MNetworkEnable
        int32_t m_iRoundEndFunFactData1; // 0xe94        
        // metadata: MNetworkEnable
        int32_t m_iRoundEndFunFactData2; // 0xe98        
        // metadata: MNetworkEnable
        int32_t m_iRoundEndFunFactData3; // 0xe9c        
        // metadata: MNetworkEnable
        CUtlString m_sRoundEndMessage; // 0xea0        
        // metadata: MNetworkEnable
        int32_t m_iRoundEndPlayerCount; // 0xea8        
        // metadata: MNetworkEnable
        bool m_bRoundEndNoMusic; // 0xeac        
        [[maybe_unused]] std::uint8_t pad_0xead[0x3]; // 0xead
        // metadata: MNetworkEnable
        int32_t m_iRoundEndLegacy; // 0xeb0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRoundEndCountChanged"
        uint8_t m_nRoundEndCount; // 0xeb4        
        [[maybe_unused]] std::uint8_t pad_0xeb5[0x3]; // 0xeb5
        // metadata: MNetworkEnable
        int32_t m_iRoundStartRoundNumber; // 0xeb8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRoundStartCountChanged"
        uint8_t m_nRoundStartCount; // 0xebc        
        [[maybe_unused]] std::uint8_t pad_0xebd[0x400b]; // 0xebd
        double m_flLastPerfSampleTime; // 0x4ec8        
        [[maybe_unused]] std::uint8_t pad_0x4ed0[0x4008];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CSGameRules because it is not a standard-layout class
    static_assert(sizeof(C_CSGameRules) == 0x8ed8);
};
