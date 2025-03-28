#pragma once
#include "source2sdk/client/CPlayerControllerComponent.hpp"
#include "source2sdk/client/CSMatchStats_t.hpp"
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
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x120
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CSPerRoundStats_t m_perRoundStats"
    // static metadata: MNetworkVarNames "CSMatchStats_t m_matchStats"
    // static metadata: MNetworkVarNames "int m_iNumRoundKills"
    // static metadata: MNetworkVarNames "int m_iNumRoundKillsHeadshots"
    // static metadata: MNetworkVarNames "uint32 m_unTotalRoundDamageDealt"
    #pragma pack(push, 1)
    class CCSPlayerController_ActionTrackingServices : public client::CPlayerControllerComponent
    {
    public:
        // metadata: MNetworkEnable
        // m_perRoundStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::CSPerRoundStats_t> m_perRoundStats;
        char m_perRoundStats[0x50]; // 0x40        
        // metadata: MNetworkEnable
        client::CSMatchStats_t m_matchStats; // 0x90        
        // metadata: MNetworkEnable
        int32_t m_iNumRoundKills; // 0x110        
        // metadata: MNetworkEnable
        int32_t m_iNumRoundKillsHeadshots; // 0x114        
        // metadata: MNetworkEnable
        uint32_t m_unTotalRoundDamageDealt; // 0x118        
        [[maybe_unused]] std::uint8_t pad_0x11c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayerController_ActionTrackingServices because it is not a standard-layout class
    static_assert(sizeof(CCSPlayerController_ActionTrackingServices) == 0x120);
};
