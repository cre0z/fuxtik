#pragma once
#include "source2sdk/server/CSPerRoundStats_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0xc0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_iEnemy5Ks"
    // static metadata: MNetworkVarNames "int m_iEnemy4Ks"
    // static metadata: MNetworkVarNames "int m_iEnemy3Ks"
    // static metadata: MNetworkVarNames "int m_iEnemyKnifeKills"
    // static metadata: MNetworkVarNames "int m_iEnemyTaserKills"
    #pragma pack(push, 1)
    struct CSMatchStats_t : public server::CSPerRoundStats_t
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_iEnemy5Ks; // 0x68        
        // metadata: MNetworkEnable
        int32_t m_iEnemy4Ks; // 0x6c        
        // metadata: MNetworkEnable
        int32_t m_iEnemy3Ks; // 0x70        
        // metadata: MNetworkEnable
        int32_t m_iEnemyKnifeKills; // 0x74        
        // metadata: MNetworkEnable
        int32_t m_iEnemyTaserKills; // 0x78        
        int32_t m_iEnemy2Ks; // 0x7c        
        int32_t m_iUtility_Count; // 0x80        
        int32_t m_iUtility_Successes; // 0x84        
        int32_t m_iUtility_Enemies; // 0x88        
        int32_t m_iFlash_Count; // 0x8c        
        int32_t m_iFlash_Successes; // 0x90        
        int32_t m_nHealthPointsRemovedTotal; // 0x94        
        int32_t m_nHealthPointsDealtTotal; // 0x98        
        int32_t m_nShotsFiredTotal; // 0x9c        
        int32_t m_nShotsOnTargetTotal; // 0xa0        
        int32_t m_i1v1Count; // 0xa4        
        int32_t m_i1v1Wins; // 0xa8        
        int32_t m_i1v2Count; // 0xac        
        int32_t m_i1v2Wins; // 0xb0        
        int32_t m_iEntryCount; // 0xb4        
        int32_t m_iEntryWins; // 0xb8        
        [[maybe_unused]] std::uint8_t pad_0xbc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSMatchStats_t because it is not a standard-layout class
    static_assert(sizeof(CSMatchStats_t) == 0xc0);
};
