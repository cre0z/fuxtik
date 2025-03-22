#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
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
    // Size: 0x240
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_ModelCull : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1b8        
        // metadata: MPropertyFriendlyName "use only bounding box"
        bool m_bBoundBox; // 0x1bc        
        // metadata: MPropertyFriendlyName "cull outside instead of inside"
        bool m_bCullOutside; // 0x1bd        
        // metadata: MPropertyFriendlyName "use bones instead of hitboxes"
        bool m_bUseBones; // 0x1be        
        // metadata: MPropertyFriendlyName "hitbox set"
        char m_HitboxSetName[128]; // 0x1bf        
        [[maybe_unused]] std::uint8_t pad_0x23f[0x1];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_ModelCull because it is not a standard-layout class
    static_assert(sizeof(C_OP_ModelCull) == 0x240);
};
