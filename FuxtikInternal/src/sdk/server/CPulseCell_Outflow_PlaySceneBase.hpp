#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_OutflowConnection.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_ResumePoint.hpp"
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
    // Size: 0xc0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPulseCell_Outflow_PlaySceneBase : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow
    {
    public:
        pulse_runtime_lib::CPulse_ResumePoint m_OnFinished; // 0x48        
        pulse_runtime_lib::CPulse_ResumePoint m_OnCanceled; // 0x78        
        // m_Triggers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<pulse_runtime_lib::CPulse_OutflowConnection> m_Triggers;
        char m_Triggers[0x18]; // 0xa8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_Outflow_PlaySceneBase because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_Outflow_PlaySceneBase) == 0xc0);
};
