#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/server/CRetakeGameRules.hpp"
#include "source2sdk/server/CTeamplayRules.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CCSGameModeRules;
};

namespace source2sdk::server
{
    class SpawnPoint;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x15828
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
    class CCSGameRules : public server::CTeamplayRules
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x8]; // 0xc0
        // metadata: MNetworkEnable
        bool m_bFreezePeriod; // 0xc8        
        // metadata: MNetworkEnable
        bool m_bWarmupPeriod; // 0xc9        
        [[maybe_unused]] std::uint8_t pad_0xca[0x2]; // 0xca
        // metadata: MNetworkEnable
        client::GameTime_t m_fWarmupPeriodEnd; // 0xcc        
        // metadata: MNetworkEnable
        client::GameTime_t m_fWarmupPeriodStart; // 0xd0        
        // metadata: MNetworkEnable
        bool m_bServerPaused; // 0xd4        
        // metadata: MNetworkEnable
        bool m_bTerroristTimeOutActive; // 0xd5        
        // metadata: MNetworkEnable
        bool m_bCTTimeOutActive; // 0xd6        
        [[maybe_unused]] std::uint8_t pad_0xd7[0x1]; // 0xd7
        // metadata: MNetworkEnable
        float m_flTerroristTimeOutRemaining; // 0xd8        
        // metadata: MNetworkEnable
        float m_flCTTimeOutRemaining; // 0xdc        
        // metadata: MNetworkEnable
        int32_t m_nTerroristTimeOuts; // 0xe0        
        // metadata: MNetworkEnable
        int32_t m_nCTTimeOuts; // 0xe4        
        // metadata: MNetworkEnable
        bool m_bTechnicalTimeOut; // 0xe8        
        // metadata: MNetworkEnable
        bool m_bMatchWaitingForResume; // 0xe9        
        [[maybe_unused]] std::uint8_t pad_0xea[0x2]; // 0xea
        // metadata: MNetworkEnable
        int32_t m_iRoundTime; // 0xec        
        // metadata: MNetworkEnable
        float m_fMatchStartTime; // 0xf0        
        // metadata: MNetworkEnable
        client::GameTime_t m_fRoundStartTime; // 0xf4        
        // metadata: MNetworkEnable
        client::GameTime_t m_flRestartRoundTime; // 0xf8        
        // metadata: MNetworkEnable
        bool m_bGameRestart; // 0xfc        
        [[maybe_unused]] std::uint8_t pad_0xfd[0x3]; // 0xfd
        // metadata: MNetworkEnable
        float m_flGameStartTime; // 0x100        
        // metadata: MNetworkEnable
        float m_timeUntilNextPhaseStarts; // 0x104        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnGamePhaseChanged"
        int32_t m_gamePhase; // 0x108        
        // metadata: MNetworkEnable
        int32_t m_totalRoundsPlayed; // 0x10c        
        // metadata: MNetworkEnable
        int32_t m_nRoundsPlayedThisPhase; // 0x110        
        // metadata: MNetworkEnable
        int32_t m_nOvertimePlaying; // 0x114        
        // metadata: MNetworkEnable
        int32_t m_iHostagesRemaining; // 0x118        
        // metadata: MNetworkEnable
        bool m_bAnyHostageReached; // 0x11c        
        // metadata: MNetworkEnable
        bool m_bMapHasBombTarget; // 0x11d        
        // metadata: MNetworkEnable
        bool m_bMapHasRescueZone; // 0x11e        
        // metadata: MNetworkEnable
        bool m_bMapHasBuyZone; // 0x11f        
        // metadata: MNetworkEnable
        bool m_bIsQueuedMatchmaking; // 0x120        
        [[maybe_unused]] std::uint8_t pad_0x121[0x3]; // 0x121
        // metadata: MNetworkEnable
        int32_t m_nQueuedMatchmakingMode; // 0x124        
        // metadata: MNetworkEnable
        bool m_bIsValveDS; // 0x128        
        // metadata: MNetworkEnable
        bool m_bLogoMap; // 0x129        
        // metadata: MNetworkEnable
        bool m_bPlayAllStepSoundsOnServer; // 0x12a        
        [[maybe_unused]] std::uint8_t pad_0x12b[0x1]; // 0x12b
        // metadata: MNetworkEnable
        int32_t m_iSpectatorSlotCount; // 0x12c        
        // metadata: MNetworkEnable
        int32_t m_MatchDevice; // 0x130        
        // metadata: MNetworkEnable
        bool m_bHasMatchStarted; // 0x134        
        [[maybe_unused]] std::uint8_t pad_0x135[0x3]; // 0x135
        // metadata: MNetworkEnable
        int32_t m_nNextMapInMapgroup; // 0x138        
        // metadata: MNetworkEnable
        char m_szTournamentEventName[512]; // 0x13c        
        // metadata: MNetworkEnable
        char m_szTournamentEventStage[512]; // 0x33c        
        // metadata: MNetworkEnable
        char m_szMatchStatTxt[512]; // 0x53c        
        // metadata: MNetworkEnable
        char m_szTournamentPredictionsTxt[512]; // 0x73c        
        // metadata: MNetworkEnable
        int32_t m_nTournamentPredictionsPct; // 0x93c        
        // metadata: MNetworkEnable
        client::GameTime_t m_flCMMItemDropRevealStartTime; // 0x940        
        // metadata: MNetworkEnable
        client::GameTime_t m_flCMMItemDropRevealEndTime; // 0x944        
        // metadata: MNetworkEnable
        bool m_bIsDroppingItems; // 0x948        
        // metadata: MNetworkEnable
        bool m_bIsQuestEligible; // 0x949        
        // metadata: MNetworkEnable
        bool m_bIsHltvActive; // 0x94a        
        [[maybe_unused]] std::uint8_t pad_0x94b[0x1]; // 0x94b
        // metadata: MNetworkEnable
        uint16_t m_arrProhibitedItemIndices[100]; // 0x94c        
        // metadata: MNetworkEnable
        uint32_t m_arrTournamentActiveCasterAccounts[4]; // 0xa14        
        // metadata: MNetworkEnable
        int32_t m_numBestOfMaps; // 0xa24        
        // metadata: MNetworkEnable
        int32_t m_nHalloweenMaskListSeed; // 0xa28        
        // metadata: MNetworkEnable
        bool m_bBombDropped; // 0xa2c        
        // metadata: MNetworkEnable
        bool m_bBombPlanted; // 0xa2d        
        [[maybe_unused]] std::uint8_t pad_0xa2e[0x2]; // 0xa2e
        // metadata: MNetworkEnable
        int32_t m_iRoundWinStatus; // 0xa30        
        // metadata: MNetworkEnable
        int32_t m_eRoundWinReason; // 0xa34        
        // metadata: MNetworkEnable
        bool m_bTCantBuy; // 0xa38        
        // metadata: MNetworkEnable
        bool m_bCTCantBuy; // 0xa39        
        [[maybe_unused]] std::uint8_t pad_0xa3a[0x2]; // 0xa3a
        // metadata: MNetworkEnable
        int32_t m_iMatchStats_RoundResults[30]; // 0xa3c        
        // metadata: MNetworkEnable
        int32_t m_iMatchStats_PlayersAlive_CT[30]; // 0xab4        
        // metadata: MNetworkEnable
        int32_t m_iMatchStats_PlayersAlive_T[30]; // 0xb2c        
        // metadata: MNetworkEnable
        float m_TeamRespawnWaveTimes[32]; // 0xba4        
        // metadata: MNetworkEnable
        client::GameTime_t m_flNextRespawnWave[32]; // 0xc24        
        // metadata: MNetworkEnable
        int32_t m_nServerQuestID; // 0xca4        
        // metadata: MNetworkEnable
        Vector m_vMinimapMins; // 0xca8        
        // metadata: MNetworkEnable
        Vector m_vMinimapMaxs; // 0xcb4        
        // metadata: MNetworkEnable
        float m_MinimapVerticalSectionHeights[8]; // 0xcc0        
        bool m_bSpawnedTerrorHuntHeavy; // 0xce0        
        [[maybe_unused]] std::uint8_t pad_0xce1[0x3]; // 0xce1
        // metadata: MNetworkEnable
        int32_t m_nEndMatchMapGroupVoteTypes[10]; // 0xce4        
        // metadata: MNetworkEnable
        int32_t m_nEndMatchMapGroupVoteOptions[10]; // 0xd0c        
        // metadata: MNetworkEnable
        int32_t m_nEndMatchMapVoteWinner; // 0xd34        
        // metadata: MNetworkEnable
        int32_t m_iNumConsecutiveCTLoses; // 0xd38        
        // metadata: MNetworkEnable
        int32_t m_iNumConsecutiveTerroristLoses; // 0xd3c        
        [[maybe_unused]] std::uint8_t pad_0xd40[0x18]; // 0xd40
        bool m_bHasHostageBeenTouched; // 0xd58        
        [[maybe_unused]] std::uint8_t pad_0xd59[0x3]; // 0xd59
        client::GameTime_t m_flIntermissionStartTime; // 0xd5c        
        client::GameTime_t m_flIntermissionEndTime; // 0xd60        
        bool m_bLevelInitialized; // 0xd64        
        [[maybe_unused]] std::uint8_t pad_0xd65[0x3]; // 0xd65
        int32_t m_iTotalRoundsPlayed; // 0xd68        
        int32_t m_iUnBalancedRounds; // 0xd6c        
        bool m_endMatchOnRoundReset; // 0xd70        
        bool m_endMatchOnThink; // 0xd71        
        [[maybe_unused]] std::uint8_t pad_0xd72[0x2]; // 0xd72
        int32_t m_iFreezeTime; // 0xd74        
        int32_t m_iNumTerrorist; // 0xd78        
        int32_t m_iNumCT; // 0xd7c        
        int32_t m_iNumSpawnableTerrorist; // 0xd80        
        int32_t m_iNumSpawnableCT; // 0xd84        
        // m_arrSelectedHostageSpawnIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_arrSelectedHostageSpawnIndices;
        char m_arrSelectedHostageSpawnIndices[0x18]; // 0xd88        
        int32_t m_nSpawnPointsRandomSeed; // 0xda0        
        bool m_bFirstConnected; // 0xda4        
        bool m_bCompleteReset; // 0xda5        
        bool m_bPickNewTeamsOnReset; // 0xda6        
        bool m_bScrambleTeamsOnRestart; // 0xda7        
        bool m_bSwapTeamsOnRestart; // 0xda8        
        [[maybe_unused]] std::uint8_t pad_0xda9[0x7]; // 0xda9
        // m_nEndMatchTiedVotes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_nEndMatchTiedVotes;
        char m_nEndMatchTiedVotes[0x18]; // 0xdb0        
        [[maybe_unused]] std::uint8_t pad_0xdc8[0x4]; // 0xdc8
        bool m_bNeedToAskPlayersForContinueVote; // 0xdcc        
        [[maybe_unused]] std::uint8_t pad_0xdcd[0x3]; // 0xdcd
        uint32_t m_numQueuedMatchmakingAccounts; // 0xdd0        
        float m_fAvgPlayerRank; // 0xdd4        
        char* m_pQueuedMatchmakingReservationString; // 0xdd8        
        uint32_t m_numTotalTournamentDrops; // 0xde0        
        uint32_t m_numSpectatorsCountMax; // 0xde4        
        uint32_t m_numSpectatorsCountMaxTV; // 0xde8        
        uint32_t m_numSpectatorsCountMaxLnk; // 0xdec        
        [[maybe_unused]] std::uint8_t pad_0xdf0[0x8]; // 0xdf0
        bool m_bForceTeamChangeSilent; // 0xdf8        
        bool m_bLoadingRoundBackupData; // 0xdf9        
        [[maybe_unused]] std::uint8_t pad_0xdfa[0x36]; // 0xdfa
        int32_t m_nMatchInfoShowType; // 0xe30        
        float m_flMatchInfoDecidedTime; // 0xe34        
        [[maybe_unused]] std::uint8_t pad_0xe38[0x18]; // 0xe38
        int32_t mTeamDMLastWinningTeamNumber; // 0xe50        
        float mTeamDMLastThinkTime; // 0xe54        
        float m_flTeamDMLastAnnouncementTime; // 0xe58        
        int32_t m_iAccountTerrorist; // 0xe5c        
        int32_t m_iAccountCT; // 0xe60        
        int32_t m_iSpawnPointCount_Terrorist; // 0xe64        
        int32_t m_iSpawnPointCount_CT; // 0xe68        
        int32_t m_iMaxNumTerrorists; // 0xe6c        
        int32_t m_iMaxNumCTs; // 0xe70        
        int32_t m_iLoserBonusMostRecentTeam; // 0xe74        
        float m_tmNextPeriodicThink; // 0xe78        
        bool m_bVoiceWonMatchBragFired; // 0xe7c        
        [[maybe_unused]] std::uint8_t pad_0xe7d[0x3]; // 0xe7d
        float m_fWarmupNextChatNoticeTime; // 0xe80        
        [[maybe_unused]] std::uint8_t pad_0xe84[0x4]; // 0xe84
        int32_t m_iHostagesRescued; // 0xe88        
        int32_t m_iHostagesTouched; // 0xe8c        
        float m_flNextHostageAnnouncement; // 0xe90        
        bool m_bNoTerroristsKilled; // 0xe94        
        bool m_bNoCTsKilled; // 0xe95        
        bool m_bNoEnemiesKilled; // 0xe96        
        bool m_bCanDonateWeapons; // 0xe97        
        [[maybe_unused]] std::uint8_t pad_0xe98[0x4]; // 0xe98
        float m_firstKillTime; // 0xe9c        
        [[maybe_unused]] std::uint8_t pad_0xea0[0x4]; // 0xea0
        float m_firstBloodTime; // 0xea4        
        [[maybe_unused]] std::uint8_t pad_0xea8[0x18]; // 0xea8
        bool m_hostageWasInjured; // 0xec0        
        bool m_hostageWasKilled; // 0xec1        
        [[maybe_unused]] std::uint8_t pad_0xec2[0xe]; // 0xec2
        bool m_bVoteCalled; // 0xed0        
        bool m_bServerVoteOnReset; // 0xed1        
        [[maybe_unused]] std::uint8_t pad_0xed2[0x2]; // 0xed2
        float m_flVoteCheckThrottle; // 0xed4        
        bool m_bBuyTimeEnded; // 0xed8        
        [[maybe_unused]] std::uint8_t pad_0xed9[0x3]; // 0xed9
        int32_t m_nLastFreezeEndBeep; // 0xedc        
        bool m_bTargetBombed; // 0xee0        
        bool m_bBombDefused; // 0xee1        
        bool m_bMapHasBombZone; // 0xee2        
        [[maybe_unused]] std::uint8_t pad_0xee3[0x4d]; // 0xee3
        Vector m_vecMainCTSpawnPos; // 0xf30        
        [[maybe_unused]] std::uint8_t pad_0xf3c[0x4]; // 0xf3c
        // m_CTSpawnPointsMasterList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::SpawnPoint*> m_CTSpawnPointsMasterList;
        char m_CTSpawnPointsMasterList[0x18]; // 0xf40        
        // m_TerroristSpawnPointsMasterList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::SpawnPoint*> m_TerroristSpawnPointsMasterList;
        char m_TerroristSpawnPointsMasterList[0x18]; // 0xf58        
        bool m_bRespawningAllRespawnablePlayers; // 0xf70        
        [[maybe_unused]] std::uint8_t pad_0xf71[0x3]; // 0xf71
        int32_t m_iNextCTSpawnPoint; // 0xf74        
        float m_flCTSpawnPointUsedTime; // 0xf78        
        int32_t m_iNextTerroristSpawnPoint; // 0xf7c        
        float m_flTerroristSpawnPointUsedTime; // 0xf80        
        [[maybe_unused]] std::uint8_t pad_0xf84[0x4]; // 0xf84
        // m_CTSpawnPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::SpawnPoint*> m_CTSpawnPoints;
        char m_CTSpawnPoints[0x18]; // 0xf88        
        // m_TerroristSpawnPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::SpawnPoint*> m_TerroristSpawnPoints;
        char m_TerroristSpawnPoints[0x18]; // 0xfa0        
        bool m_bIsUnreservedGameServer; // 0xfb8        
        [[maybe_unused]] std::uint8_t pad_0xfb9[0x3]; // 0xfb9
        float m_fAutobalanceDisplayTime; // 0xfbc        
        [[maybe_unused]] std::uint8_t pad_0xfc0[0x268]; // 0xfc0
        bool m_bAllowWeaponSwitch; // 0x1228        
        bool m_bRoundTimeWarningTriggered; // 0x1229        
        [[maybe_unused]] std::uint8_t pad_0x122a[0x2]; // 0x122a
        client::GameTime_t m_phaseChangeAnnouncementTime; // 0x122c        
        float m_fNextUpdateTeamClanNamesTime; // 0x1230        
        client::GameTime_t m_flLastThinkTime; // 0x1234        
        float m_fAccumulatedRoundOffDamage; // 0x1238        
        int32_t m_nShorthandedBonusLastEvalRound; // 0x123c        
        [[maybe_unused]] std::uint8_t pad_0x1240[0x278]; // 0x1240
        // metadata: MNetworkEnable
        int32_t m_nMatchAbortedEarlyReason; // 0x14b8        
        bool m_bHasTriggeredRoundStartMusic; // 0x14bc        
        bool m_bSwitchingTeamsAtRoundReset; // 0x14bd        
        [[maybe_unused]] std::uint8_t pad_0x14be[0x1a]; // 0x14be
        // metadata: MNetworkEnable
        // metadata: MNetworkPolymorphic
        server::CCSGameModeRules* m_pGameModeRules; // 0x14d8        
        KeyValues3 m_BtGlobalBlackboard; // 0x14e0        
        [[maybe_unused]] std::uint8_t pad_0x14f0[0x80]; // 0x14f0
        // m_hPlayerResource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPlayerResource;
        char m_hPlayerResource[0x4]; // 0x1570        
        [[maybe_unused]] std::uint8_t pad_0x1574[0x4]; // 0x1574
        // metadata: MNetworkEnable
        server::CRetakeGameRules m_RetakeRules; // 0x1578        
        // m_arrTeamUniqueKillWeaponsMatch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_arrTeamUniqueKillWeaponsMatch[4];
        char m_arrTeamUniqueKillWeaponsMatch[0x60]; // 0x1710        
        bool m_bTeamLastKillUsedUniqueWeaponMatch[4]; // 0x1770        
        [[maybe_unused]] std::uint8_t pad_0x1774[0x24]; // 0x1774
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnMatchEndCountChanged"
        uint8_t m_nMatchEndCount; // 0x1798        
        [[maybe_unused]] std::uint8_t pad_0x1799[0x3]; // 0x1799
        // metadata: MNetworkEnable
        int32_t m_nTTeamIntroVariant; // 0x179c        
        // metadata: MNetworkEnable
        int32_t m_nCTTeamIntroVariant; // 0x17a0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnTeamIntroPeriodChanged"
        bool m_bTeamIntroPeriod; // 0x17a4        
        [[maybe_unused]] std::uint8_t pad_0x17a5[0x3]; // 0x17a5
        client::GameTime_t m_fTeamIntroPeriodEnd; // 0x17a8        
        bool m_bPlayedTeamIntroVO; // 0x17ac        
        [[maybe_unused]] std::uint8_t pad_0x17ad[0x3]; // 0x17ad
        // metadata: MNetworkEnable
        int32_t m_iRoundEndWinnerTeam; // 0x17b0        
        // metadata: MNetworkEnable
        int32_t m_eRoundEndReason; // 0x17b4        
        // metadata: MNetworkEnable
        bool m_bRoundEndShowTimerDefend; // 0x17b8        
        [[maybe_unused]] std::uint8_t pad_0x17b9[0x3]; // 0x17b9
        // metadata: MNetworkEnable
        int32_t m_iRoundEndTimerTime; // 0x17bc        
        // metadata: MNetworkEnable
        CUtlString m_sRoundEndFunFactToken; // 0x17c0        
        // metadata: MNetworkEnable
        CPlayerSlot m_iRoundEndFunFactPlayerSlot; // 0x17c8        
        // metadata: MNetworkEnable
        int32_t m_iRoundEndFunFactData1; // 0x17cc        
        // metadata: MNetworkEnable
        int32_t m_iRoundEndFunFactData2; // 0x17d0        
        // metadata: MNetworkEnable
        int32_t m_iRoundEndFunFactData3; // 0x17d4        
        // metadata: MNetworkEnable
        CUtlString m_sRoundEndMessage; // 0x17d8        
        // metadata: MNetworkEnable
        int32_t m_iRoundEndPlayerCount; // 0x17e0        
        // metadata: MNetworkEnable
        bool m_bRoundEndNoMusic; // 0x17e4        
        [[maybe_unused]] std::uint8_t pad_0x17e5[0x3]; // 0x17e5
        // metadata: MNetworkEnable
        int32_t m_iRoundEndLegacy; // 0x17e8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRoundEndCountChanged"
        uint8_t m_nRoundEndCount; // 0x17ec        
        [[maybe_unused]] std::uint8_t pad_0x17ed[0x3]; // 0x17ed
        // metadata: MNetworkEnable
        int32_t m_iRoundStartRoundNumber; // 0x17f0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRoundStartCountChanged"
        uint8_t m_nRoundStartCount; // 0x17f4        
        [[maybe_unused]] std::uint8_t pad_0x17f5[0x400b]; // 0x17f5
        double m_flLastPerfSampleTime; // 0x5800        
        [[maybe_unused]] std::uint8_t pad_0x5808[0x10020];
        
        // Static fields:
        static int64_t &Get_m_nMapCycleTimeStamp() {return *reinterpret_cast<int64_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCSGameRules")->GetStaticFields()[0]->m_pInstance);};
        static int32_t &Get_m_nMapCycleindex() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCSGameRules")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSGameRules because it is not a standard-layout class
    static_assert(sizeof(CCSGameRules) == 0x15828);
};
