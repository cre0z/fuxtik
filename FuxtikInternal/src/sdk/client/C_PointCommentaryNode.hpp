#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf20
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "float32 m_flStartTimeInCommentary"
    // static metadata: MNetworkVarNames "string_t m_iszCommentaryFile"
    // static metadata: MNetworkVarNames "string_t m_iszTitle"
    // static metadata: MNetworkVarNames "string_t m_iszSpeakers"
    // static metadata: MNetworkVarNames "int m_iNodeNumber"
    // static metadata: MNetworkVarNames "int m_iNodeNumberMax"
    // static metadata: MNetworkVarNames "bool m_bListenedTo"
    // static metadata: MNetworkVarNames "CHandle< C_BaseEntity> m_hViewPosition"
    #pragma pack(push, 1)
    class C_PointCommentaryNode : public client::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xed0[0x8]; // 0xed0
        // metadata: MNetworkEnable
        bool m_bActive; // 0xed8        
        bool m_bWasActive; // 0xed9        
        [[maybe_unused]] std::uint8_t pad_0xeda[0x2]; // 0xeda
        client::GameTime_t m_flEndTime; // 0xedc        
        // metadata: MNetworkEnable
        client::GameTime_t m_flStartTime; // 0xee0        
        // metadata: MNetworkEnable
        float m_flStartTimeInCommentary; // 0xee4        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszCommentaryFile; // 0xee8        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszTitle; // 0xef0        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszSpeakers; // 0xef8        
        // metadata: MNetworkEnable
        int32_t m_iNodeNumber; // 0xf00        
        // metadata: MNetworkEnable
        int32_t m_iNodeNumberMax; // 0xf04        
        // metadata: MNetworkEnable
        bool m_bListenedTo; // 0xf08        
        [[maybe_unused]] std::uint8_t pad_0xf09[0xf]; // 0xf09
        // metadata: MNetworkEnable
        // m_hViewPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hViewPosition;
        char m_hViewPosition[0x4]; // 0xf18        
        bool m_bRestartAfterRestore; // 0xf1c        
        [[maybe_unused]] std::uint8_t pad_0xf1d[0x3];
        
        // Datamap fields:
        // void m_sndCommentary; // 0xf10
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PointCommentaryNode because it is not a standard-layout class
    static_assert(sizeof(C_PointCommentaryNode) == 0xf20);
};
