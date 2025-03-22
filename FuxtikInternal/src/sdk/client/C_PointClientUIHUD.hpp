#pragma once
#include "source2sdk/client/C_BaseClientUIEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xec8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bIgnoreInput"
    // static metadata: MNetworkVarNames "float m_flWidth"
    // static metadata: MNetworkVarNames "float m_flHeight"
    // static metadata: MNetworkVarNames "float m_flDPI"
    // static metadata: MNetworkVarNames "float m_flInteractDistance"
    // static metadata: MNetworkVarNames "float m_flDepthOffset"
    // static metadata: MNetworkVarNames "uint32 m_unOwnerContext"
    // static metadata: MNetworkVarNames "uint32 m_unHorizontalAlign"
    // static metadata: MNetworkVarNames "uint32 m_unVerticalAlign"
    // static metadata: MNetworkVarNames "uint32 m_unOrientation"
    // static metadata: MNetworkVarNames "bool m_bAllowInteractionFromAllSceneWorlds"
    // static metadata: MNetworkVarNames "string_t m_vecCSSClasses"
    #pragma pack(push, 1)
    class C_PointClientUIHUD : public client::C_BaseClientUIEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xcf8[0x8]; // 0xcf8
        bool m_bCheckCSSClasses; // 0xd00        
        [[maybe_unused]] std::uint8_t pad_0xd01[0x17f]; // 0xd01
        // metadata: MNetworkEnable
        bool m_bIgnoreInput; // 0xe80        
        [[maybe_unused]] std::uint8_t pad_0xe81[0x3]; // 0xe81
        // metadata: MNetworkEnable
        float m_flWidth; // 0xe84        
        // metadata: MNetworkEnable
        float m_flHeight; // 0xe88        
        // metadata: MNetworkEnable
        float m_flDPI; // 0xe8c        
        // metadata: MNetworkEnable
        float m_flInteractDistance; // 0xe90        
        // metadata: MNetworkEnable
        float m_flDepthOffset; // 0xe94        
        // metadata: MNetworkEnable
        uint32_t m_unOwnerContext; // 0xe98        
        // metadata: MNetworkEnable
        uint32_t m_unHorizontalAlign; // 0xe9c        
        // metadata: MNetworkEnable
        uint32_t m_unVerticalAlign; // 0xea0        
        // metadata: MNetworkEnable
        uint32_t m_unOrientation; // 0xea4        
        // metadata: MNetworkEnable
        bool m_bAllowInteractionFromAllSceneWorlds; // 0xea8        
        [[maybe_unused]] std::uint8_t pad_0xea9[0x7]; // 0xea9
        // metadata: MNetworkEnable
        // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
        char m_vecCSSClasses[0x18]; // 0xeb0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PointClientUIHUD because it is not a standard-layout class
    static_assert(sizeof(C_PointClientUIHUD) == 0xec8);
};
