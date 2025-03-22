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
    // Size: 0xcd8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float32 m_flLightScale"
    // static metadata: MNetworkVarNames "float32 m_Radius"
    #pragma pack(push, 1)
    class C_SpotlightEnd : public client::C_BaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        float m_flLightScale; // 0xcc8        
        // metadata: MNetworkEnable
        float m_Radius; // 0xccc        
        [[maybe_unused]] std::uint8_t pad_0xcd0[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_SpotlightEnd because it is not a standard-layout class
    static_assert(sizeof(C_SpotlightEnd) == 0xcd8);
};
