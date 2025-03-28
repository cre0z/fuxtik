#pragma once
#include "source2sdk/client/GameTime_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb08
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    // static metadata: MNetworkVarNames "float32 m_MaxWeight"
    // static metadata: MNetworkVarNames "float32 m_FadeDuration"
    // static metadata: MNetworkVarNames "float32 m_Weight"
    // static metadata: MNetworkVarNames "char m_lookupFilename"
    #pragma pack(push, 1)
    class CColorCorrectionVolume : public server::CBaseTrigger
    {
    public:
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x8e0        
        [[maybe_unused]] std::uint8_t pad_0x8e1[0x3]; // 0x8e1
        // metadata: MNetworkEnable
        float m_MaxWeight; // 0x8e4        
        // metadata: MNetworkEnable
        float m_FadeDuration; // 0x8e8        
        bool m_bStartDisabled; // 0x8ec        
        [[maybe_unused]] std::uint8_t pad_0x8ed[0x3]; // 0x8ed
        // metadata: MNetworkEnable
        float m_Weight; // 0x8f0        
        // metadata: MNetworkEnable
        char m_lookupFilename[512]; // 0x8f4        
        float m_LastEnterWeight; // 0xaf4        
        client::GameTime_t m_LastEnterTime; // 0xaf8        
        float m_LastExitWeight; // 0xafc        
        client::GameTime_t m_LastExitTime; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb04[0x4];
        
        // Datamap fields:
        // void CColorCorrectionVolumeThinkFunc; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CColorCorrectionVolume because it is not a standard-layout class
    static_assert(sizeof(CColorCorrectionVolume) == 0xb08);
};
