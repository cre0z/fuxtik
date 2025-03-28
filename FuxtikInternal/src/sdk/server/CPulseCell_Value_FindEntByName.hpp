#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseValue.hpp"
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
    // Size: 0x50
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MCellForDomain "ServerPointEntity"
    // static metadata: MPulseCellMethodBindings
    // static metadata: MPulseCellOutflowHookInfo
    // static metadata: MPulseCellWithCustomDocNode
    // static metadata: MPropertyFriendlyName "Find Entity"
    // static metadata: MPropertyDescription "Search for an entity by name. If multiple entities have the same name, only one will be returned."
    #pragma pack(push, 1)
    class CPulseCell_Value_FindEntByName : public pulse_runtime_lib::CPulseCell_BaseValue
    {
    public:
        CUtlString m_EntityType; // 0x48        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_Value_FindEntByName because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_Value_FindEntByName) == 0x50);
};
