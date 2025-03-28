#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
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
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x8c0
    // Has VTable
    // Construct disallowed
    // MConstructibleClassBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    // static metadata: MNetworkVarNames "string_t m_DialogXMLName"
    // static metadata: MNetworkVarNames "string_t m_PanelClassName"
    // static metadata: MNetworkVarNames "string_t m_PanelID"
    #pragma pack(push, 1)
    class CBaseClientUIEntity : public server::CBaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x710        
        [[maybe_unused]] std::uint8_t pad_0x711[0x7]; // 0x711
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_DialogXMLName; // 0x718        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_PanelClassName; // 0x720        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_PanelID; // 0x728        
        entity2::CEntityIOOutput m_CustomOutput0; // 0x730        
        entity2::CEntityIOOutput m_CustomOutput1; // 0x758        
        entity2::CEntityIOOutput m_CustomOutput2; // 0x780        
        entity2::CEntityIOOutput m_CustomOutput3; // 0x7a8        
        entity2::CEntityIOOutput m_CustomOutput4; // 0x7d0        
        entity2::CEntityIOOutput m_CustomOutput5; // 0x7f8        
        entity2::CEntityIOOutput m_CustomOutput6; // 0x820        
        entity2::CEntityIOOutput m_CustomOutput7; // 0x848        
        entity2::CEntityIOOutput m_CustomOutput8; // 0x870        
        entity2::CEntityIOOutput m_CustomOutput9; // 0x898        
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseClientUIEntity because it is not a standard-layout class
    static_assert(sizeof(CBaseClientUIEntity) == 0x8c0);
};
