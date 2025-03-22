#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_PlantedC4;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xee0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_Multimeter : public client::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xed0[0x8]; // 0xed0
        // m_hTargetC4 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_PlantedC4> m_hTargetC4;
        char m_hTargetC4[0x4]; // 0xed8        
        [[maybe_unused]] std::uint8_t pad_0xedc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Multimeter because it is not a standard-layout class
    static_assert(sizeof(C_Multimeter) == 0xee0);
};
