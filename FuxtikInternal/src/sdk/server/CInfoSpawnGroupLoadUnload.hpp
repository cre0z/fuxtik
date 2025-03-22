#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5c0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CInfoSpawnGroupLoadUnload : public server::CLogicalEntity
    {
    public:
        entity2::CEntityIOOutput m_OnSpawnGroupLoadStarted; // 0x4c0        
        entity2::CEntityIOOutput m_OnSpawnGroupLoadFinished; // 0x4e8        
        entity2::CEntityIOOutput m_OnSpawnGroupUnloadStarted; // 0x510        
        entity2::CEntityIOOutput m_OnSpawnGroupUnloadFinished; // 0x538        
        CUtlSymbolLarge m_iszSpawnGroupName; // 0x560        
        CUtlSymbolLarge m_iszSpawnGroupFilterName; // 0x568        
        CUtlSymbolLarge m_iszLandmarkName; // 0x570        
        CUtlString m_sFixedSpawnGroupName; // 0x578        
        float m_flTimeoutInterval; // 0x580        
        bool m_bStreamingStarted; // 0x584        
        bool m_bUnloadingStarted; // 0x585        
        [[maybe_unused]] std::uint8_t pad_0x586[0x3a];
        
        // Datamap fields:
        // void CInfoSpawnGroupLoadUnloadSpawnGroupLoadingThink; // 0x0
        // void CInfoSpawnGroupLoadUnloadSpawnGroupUnloadingThink; // 0x0
        // void InputStartSpawnGroupLoad; // 0x0
        // void InputActivateSpawnGroup; // 0x0
        // void InputStartSpawnGroupUnload; // 0x0
        // CUtlSymbolLarge InputSetSpawnGroup; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInfoSpawnGroupLoadUnload because it is not a standard-layout class
    static_assert(sizeof(CInfoSpawnGroupLoadUnload) == 0x5c0);
};
