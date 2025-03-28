#pragma once
#include "source2sdk/server/CBaseCombatCharacter.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CAI_Expresser;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa10
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CHostageExpresserShim : public server::CBaseCombatCharacter
    {
    public:
        server::CAI_Expresser* m_pExpresser; // 0xa08        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CHostageExpresserShim because it is not a standard-layout class
    static_assert(sizeof(CHostageExpresserShim) == 0xa10);
};
