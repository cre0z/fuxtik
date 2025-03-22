#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_ResumePoint.hpp"
#include "source2sdk/pulse_runtime_lib/SignatureOutflow_Resume.hpp"
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
    // static metadata: MCellForDomain "ServerPointEntity"
    // static metadata: MPulseCellMethodBindings
    // static metadata: MPulseCellOutflowHookInfo ""
    // static metadata: MPropertyFriendlyName "Listen for Entity Output"
    // static metadata: MPropertyDescription "Waits for the entity to fire a specific output. By default, this listens once, but can be configured to listen until canceled."
    // static metadata: MPulseEditorSubHeaderText
    // static metadata: MPulseEditorHeaderIcon "tools/images/pulse_editor/eio_output_link.png"
    #pragma pack(push, 1)
    class CPulseCell_Outflow_ListenForEntityOutput : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow
    {
    public:
        // metadata: MPulseCellOutflow_IsDefault
        pulse_runtime_lib::SignatureOutflow_Resume m_OnFired; // 0x48        
        pulse_runtime_lib::CPulse_ResumePoint m_OnCanceled; // 0x78        
        // metadata: MPulseDocCustomAttr
        CGlobalSymbol m_strEntityOutput; // 0xa8        
        // metadata: MPropertyDescription "Optional output value to match if applicable. Leave empty to match any possible value for the output param."
        CUtlString m_strEntityOutputParam; // 0xb0        
        // metadata: MPropertyDescription "Continue listening for the output until canceled."
        bool m_bListenUntilCanceled; // 0xb8        
        [[maybe_unused]] std::uint8_t pad_0xb9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_Outflow_ListenForEntityOutput because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_Outflow_ListenForEntityOutput) == 0xc0);
};
