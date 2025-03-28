#pragma once
#include "source2sdk/client/CompMatPropertyMutatorConditionType_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x28
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyElementNameFn
    #pragma pack(push, 1)
    struct CompMatMutatorCondition_t
    {
    public:
        // metadata: MPropertyAutoRebuildOnChange
        // metadata: MPropertyFriendlyName "Condition"
        client::CompMatPropertyMutatorConditionType_t m_nMutatorCondition; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // metadata: MPropertyFriendlyName "Container Name"
        // metadata: MPropertyAttrStateCallback
        CUtlString m_strMutatorConditionContainerName; // 0x8        
        // metadata: MPropertyFriendlyName "Variable Name"
        // metadata: MPropertyAttrStateCallback
        CUtlString m_strMutatorConditionContainerVarName; // 0x10        
        // metadata: MPropertyFriendlyName "Variable Value"
        // metadata: MPropertyAttrStateCallback
        CUtlString m_strMutatorConditionContainerVarValue; // 0x18        
        // metadata: MPropertyFriendlyName "Pass when True"
        bool m_bPassWhenTrue; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x21[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CompMatMutatorCondition_t, m_nMutatorCondition) == 0x0);
    static_assert(offsetof(CompMatMutatorCondition_t, m_strMutatorConditionContainerName) == 0x8);
    static_assert(offsetof(CompMatMutatorCondition_t, m_strMutatorConditionContainerVarName) == 0x10);
    static_assert(offsetof(CompMatMutatorCondition_t, m_strMutatorConditionContainerVarValue) == 0x18);
    static_assert(offsetof(CompMatMutatorCondition_t, m_bPassWhenTrue) == 0x20);
    
    static_assert(sizeof(CompMatMutatorCondition_t) == 0x28);
};
