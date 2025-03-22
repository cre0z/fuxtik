#pragma once
#include "source2sdk/client/CRR_Response.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x1f0
    #pragma pack(push, 1)
    struct ConceptHistory_t
    {
    public:
        float timeSpoken; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        client::CRR_Response m_response; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ConceptHistory_t, timeSpoken) == 0x0);
    static_assert(offsetof(ConceptHistory_t, m_response) == 0x8);
    
    static_assert(sizeof(ConceptHistory_t) == 0x1f0);
};
