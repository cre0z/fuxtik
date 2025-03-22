#pragma once
#include "source2sdk/server/CSAdditionalPerRoundStats_t.hpp"
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
    // Size: 0x48
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct CSAdditionalMatchStats_t : public server::CSAdditionalPerRoundStats_t
    {
    public:
        int32_t m_numRoundsSurvived; // 0x18        
        int32_t m_maxNumRoundsSurvived; // 0x1c        
        int32_t m_numRoundsSurvivedTotal; // 0x20        
        int32_t m_iRoundsWonWithoutPurchase; // 0x24        
        int32_t m_iRoundsWonWithoutPurchaseTotal; // 0x28        
        int32_t m_numFirstKills; // 0x2c        
        int32_t m_numClutchKills; // 0x30        
        int32_t m_numPistolKills; // 0x34        
        int32_t m_numSniperKills; // 0x38        
        int32_t m_iNumSuicides; // 0x3c        
        int32_t m_iNumTeamKills; // 0x40        
        int32_t m_iTeamDamage; // 0x44        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSAdditionalMatchStats_t because it is not a standard-layout class
    static_assert(sizeof(CSAdditionalMatchStats_t) == 0x48);
};
