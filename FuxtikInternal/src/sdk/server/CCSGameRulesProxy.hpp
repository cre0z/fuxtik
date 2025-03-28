#pragma once
#include "source2sdk/server/CGameRulesProxy.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCSGameRules;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4c8
    // Has VTable
    // Construct allowed
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CCSGameRules* m_pGameRules"
    #pragma pack(push, 1)
    class CCSGameRulesProxy : public server::CGameRulesProxy
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkTypeAlias "CCSGameRules*"
        // metadata: MNetworkPriority "32"
        server::CCSGameRules* m_pGameRules; // 0x4c0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSGameRulesProxy because it is not a standard-layout class
    static_assert(sizeof(CCSGameRulesProxy) == 0x4c8);
};
