#pragma once
#include "source2sdk/server/CPulseGraphInstance_ServerEntity.hpp"
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
    // Standard-layout class: false
    // Size: 0x150
    // Has VTable
    // 
    // static metadata: MPulseInstanceDomainInfo
    // static metadata: MPulseDomainHookInfo
    // static metadata: MPulseLibraryBindings
    // static metadata: MPulseDomainIsGameBlackboard
    // static metadata: MPulseDomainOptInFeatureTag
    #pragma pack(push, 1)
    class CPulseGraphInstance_GameBlackboard : public server::CPulseGraphInstance_ServerEntity
    {
    public:
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CPulseGraphInstance_GameBlackboard) == 0x150);
};
