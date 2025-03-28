#pragma once
#include "source2sdk/pulse_runtime_lib/CBasePulseGraphInstance.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CPulseGraphComponentBase;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x150
    // Has VTable
    // 
    // static metadata: MPulseInstanceDomainInfo
    // static metadata: MPulseDomainHookInfo
    // static metadata: MPulseLibraryBindings
    // static metadata: MPulseDomainOptInFeatureTag
    // static metadata: MPulseDomainOptInGameBlackboard
    // static metadata: MPulseDomainOptInValueType
    #pragma pack(push, 1)
    class CPulseGraphInstance_ServerEntity : public pulse_runtime_lib::CBasePulseGraphInstance
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xf8[0x8]; // 0xf8
        server::CPulseGraphComponentBase* m_pComponent; // 0x100        
        [[maybe_unused]] std::uint8_t pad_0x108[0x48];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseGraphInstance_ServerEntity because it is not a standard-layout class
    static_assert(sizeof(CPulseGraphInstance_ServerEntity) == 0x150);
};
