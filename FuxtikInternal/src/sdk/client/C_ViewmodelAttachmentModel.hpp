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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xed8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_ViewmodelAttachmentModel : public client::CBaseAnimGraph
    {
    public:
        bool m_bShouldFrontFaceCullLeftHanded; // 0xed0        
        [[maybe_unused]] std::uint8_t pad_0xed1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ViewmodelAttachmentModel because it is not a standard-layout class
    static_assert(sizeof(C_ViewmodelAttachmentModel) == 0xed8);
};
