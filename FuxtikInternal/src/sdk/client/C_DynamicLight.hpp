#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
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
    // Size: 0xcf0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "uint8 m_Flags"
    // static metadata: MNetworkVarNames "uint8 m_LightStyle"
    // static metadata: MNetworkVarNames "float32 m_Radius"
    // static metadata: MNetworkVarNames "int32 m_Exponent"
    // static metadata: MNetworkVarNames "float32 m_InnerAngle"
    // static metadata: MNetworkVarNames "float32 m_OuterAngle"
    // static metadata: MNetworkVarNames "float32 m_SpotRadius"
    #pragma pack(push, 1)
    class C_DynamicLight : public client::C_BaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        uint8_t m_Flags; // 0xcc8        
        // metadata: MNetworkEnable
        uint8_t m_LightStyle; // 0xcc9        
        [[maybe_unused]] std::uint8_t pad_0xcca[0x2]; // 0xcca
        // metadata: MNetworkEnable
        float m_Radius; // 0xccc        
        // metadata: MNetworkEnable
        int32_t m_Exponent; // 0xcd0        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "360,000000"
        float m_InnerAngle; // 0xcd4        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "360,000000"
        float m_OuterAngle; // 0xcd8        
        // metadata: MNetworkEnable
        float m_SpotRadius; // 0xcdc        
        [[maybe_unused]] std::uint8_t pad_0xce0[0x10];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DynamicLight because it is not a standard-layout class
    static_assert(sizeof(C_DynamicLight) == 0xcf0);
};
