#pragma once
#include "source2sdk/client/CSPerRoundStats_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x80
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_iEnemy5Ks"
    // static metadata: MNetworkVarNames "int m_iEnemy4Ks"
    // static metadata: MNetworkVarNames "int m_iEnemy3Ks"
    // static metadata: MNetworkVarNames "int m_iEnemyKnifeKills"
    // static metadata: MNetworkVarNames "int m_iEnemyTaserKills"
    #pragma pack(push, 1)
    struct CSMatchStats_t : public client::CSPerRoundStats_t
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
        [[maybe_unused]] std::uint8_t pad_0x7c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSMatchStats_t because it is not a standard-layout class
    static_assert(sizeof(CSMatchStats_t) == 0x80);
};
