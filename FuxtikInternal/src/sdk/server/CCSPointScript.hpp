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
    class CCSPointScriptEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x100
    // Has VTable
    // 
    // static metadata: MPulseInstanceDomainInfo
    // static metadata: MPulseDomainHookInfo
    // static metadata: MPulseLibraryBindings
    // static metadata: MPulseDomainOptInFeatureTag
    #pragma pack(push, 1)
    class CCSPointScript : public pulse_runtime_lib::CBasePulseGraphInstance
    {
    public:
        server::CCSPointScriptEntity* m_pParent; // 0xf8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPointScript because it is not a standard-layout class
    static_assert(sizeof(CCSPointScript) == 0x100);
};
