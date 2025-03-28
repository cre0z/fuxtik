#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ClosestPointTestType_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
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
    // Size: 0xa08
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_SetHitboxToClosest : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1c0        
        // metadata: MPropertyFriendlyName "desired hitbox"
        int32_t m_nDesiredHitbox; // 0x1c4        
        // metadata: MPropertyFriendlyName "model hitbox scale"
        particleslib::CParticleCollectionVecInput m_vecHitBoxScale; // 0x1c8        
        // metadata: MPropertyFriendlyName "hitbox set"
        char m_HitboxSetName[128]; // 0x820        
        // metadata: MPropertyFriendlyName "use bones instead of hitboxes"
        bool m_bUseBones; // 0x8a0        
        // metadata: MPropertyFriendlyName "get closest point on closest hitbox"
        bool m_bUseClosestPointOnHitbox; // 0x8a1        
        [[maybe_unused]] std::uint8_t pad_0x8a2[0x2]; // 0x8a2
        // metadata: MPropertyFriendlyName "closest point test type"
        particles::ClosestPointTestType_t m_nTestType; // 0x8a4        
        // metadata: MPropertyFriendlyName "hybrid ratio"
        particleslib::CParticleCollectionFloatInput m_flHybridRatio; // 0x8a8        
        // metadata: MPropertyFriendlyName "set initial position"
        bool m_bUpdatePosition; // 0xa00        
        [[maybe_unused]] std::uint8_t pad_0xa01[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_SetHitboxToClosest because it is not a standard-layout class
    static_assert(sizeof(C_INIT_SetHitboxToClosest) == 0xa08);
};
