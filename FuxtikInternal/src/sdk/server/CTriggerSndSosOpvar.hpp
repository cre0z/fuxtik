#pragma once
#include "source2sdk/server/CBaseTrigger.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc40
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CTriggerSndSosOpvar : public server::CBaseTrigger
    {
    public:
        // m_hTouchingPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hTouchingPlayers;
        char m_hTouchingPlayers[0x18]; // 0x8e0        
        Vector m_flPosition; // 0x8f8        
        float m_flCenterSize; // 0x904        
        float m_flMinVal; // 0x908        
        float m_flMaxVal; // 0x90c        
        CUtlSymbolLarge m_opvarName; // 0x910        
        CUtlSymbolLarge m_stackName; // 0x918        
        CUtlSymbolLarge m_operatorName; // 0x920        
        bool m_bVolIs2D; // 0x928        
        char m_opvarNameChar[256]; // 0x929        
        char m_stackNameChar[256]; // 0xa29        
        char m_operatorNameChar[256]; // 0xb29        
        [[maybe_unused]] std::uint8_t pad_0xc29[0x3]; // 0xc29
        Vector m_VecNormPos; // 0xc2c        
        float m_flNormCenterSize; // 0xc38        
        [[maybe_unused]] std::uint8_t pad_0xc3c[0x4];
        
        // Datamap fields:
        // void CTriggerSndSosOpvarSndSosTriggerOpvarWaitOver; // 0x0
        // void m_opvarNameChar; // 0x929
        // void m_stackNameChar; // 0xa29
        // void m_operatorNameChar; // 0xb29
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerSndSosOpvar because it is not a standard-layout class
    static_assert(sizeof(CTriggerSndSosOpvar) == 0xc40);
};
