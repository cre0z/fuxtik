#pragma once
#include "source2sdk/server/CPulseCell_Outflow_PlaySceneBase.hpp"
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
    // Size: 0xc8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MCellForDomain "ServerPointEntity"
    // static metadata: MPulseCellMethodBindings
    // static metadata: MPulseCellOutflowHookInfo
    // static metadata: MPulseCellWithCustomDocNode
    #pragma pack(push, 1)
    class CPulseCell_Outflow_PlayVCD : public server::CPulseCell_Outflow_PlaySceneBase
    {
    public:
        CUtlString m_vcdFilename; // 0xc0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_Outflow_PlayVCD because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_Outflow_PlayVCD) == 0xc8);
};
