#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x3c8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_RandomModelSequence : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "activity"
        // metadata: MPropertySuppressExpr "mod != dota"
        char m_ActivityName[256]; // 0x1c0        
        // metadata: MPropertyFriendlyName "sequence"
        // metadata: MPropertySuppressExpr "mod == dota"
        char m_SequenceName[256]; // 0x2c0        
        // metadata: MPropertyFriendlyName "model"
        // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_hModel;
        char m_hModel[0x8]; // 0x3c0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_RandomModelSequence because it is not a standard-layout class
    static_assert(sizeof(C_INIT_RandomModelSequence) == 0x3c8);
};
