#pragma once
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseFilter;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4e8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPointPush : public server::CPointEntity
    {
    public:
        bool m_bEnabled; // 0x4c0        
        [[maybe_unused]] std::uint8_t pad_0x4c1[0x3]; // 0x4c1
        float m_flMagnitude; // 0x4c4        
        float m_flRadius; // 0x4c8        
        float m_flInnerRadius; // 0x4cc        
        float m_flConeOfInfluence; // 0x4d0        
        [[maybe_unused]] std::uint8_t pad_0x4d4[0x4]; // 0x4d4
        CUtlSymbolLarge m_iszFilterName; // 0x4d8        
        // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hFilter;
        char m_hFilter[0x4]; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e4[0x4];
        
        // Datamap fields:
        // void CPointPushPushThink; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointPush because it is not a standard-layout class
    static_assert(sizeof(CPointPush) == 0x4e8);
};
