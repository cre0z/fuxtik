#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseExecCursor.hpp"
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
    // Alignment: 0x1
    // Standard-layout class: false
    // Size: 0xa0
    // Has VTable
    // 
    // static metadata: MPulseLibraryBindings
    // static metadata: MPulseInternal_IsCursor
    #pragma pack(push, 1)
    class CPulseServerCursor : public pulse_runtime_lib::CPulseExecCursor
    {
    public:
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CPulseServerCursor) == 0xa0);
};
