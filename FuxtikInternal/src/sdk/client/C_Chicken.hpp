#pragma once
#include "source2sdk/client/C_AttributeContainer.hpp"
#include "source2sdk/client/C_DynamicProp.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CBaseAnimGraph;
};

namespace source2sdk::client
{
    class C_CSPlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1628
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_jumpedThisFrame"
    // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_leader"
    // static metadata: MNetworkVarNames "CAttributeContainer m_AttributeManager"
    #pragma pack(push, 1)
    class C_Chicken : public client::C_DynamicProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1158[0x8]; // 0x1158
        // m_hHolidayHatAddon has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CBaseAnimGraph> m_hHolidayHatAddon;
        char m_hHolidayHatAddon[0x4]; // 0x1160        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnJumpedChanged"
        bool m_jumpedThisFrame; // 0x1164        
        [[maybe_unused]] std::uint8_t pad_0x1165[0x3]; // 0x1165
        // metadata: MNetworkEnable
        // m_leader has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CSPlayerPawn> m_leader;
        char m_leader[0x4]; // 0x1168        
        [[maybe_unused]] std::uint8_t pad_0x116c[0x4]; // 0x116c
        // metadata: MNetworkEnable
        client::C_AttributeContainer m_AttributeManager; // 0x1170        
        bool m_bAttributesInitialized; // 0x1618        
        [[maybe_unused]] std::uint8_t pad_0x1619[0x3]; // 0x1619
        client::ParticleIndex_t m_hWaterWakeParticles; // 0x161c        
        bool m_bIsPreviewModel; // 0x1620        
        [[maybe_unused]] std::uint8_t pad_0x1621[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Chicken because it is not a standard-layout class
    static_assert(sizeof(C_Chicken) == 0x1628);
};
