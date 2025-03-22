#pragma once
#include "source2sdk/particles/CParticleFunctionConstraint.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleCollisionMode_t.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
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
    // Size: 0x940
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_WorldTraceConstraint : public particles::CParticleFunctionConstraint
    {
    public:
        // metadata: MPropertyFriendlyName "control point for fast collision tests"
        int32_t m_nCP; // 0x1b8        
        // metadata: MPropertyFriendlyName "control point offset for fast collisions"
        // metadata: MVectorIsCoordinate
        Vector m_vecCpOffset; // 0x1bc        
        // metadata: MPropertyFriendlyName "collision mode"
        particles::ParticleCollisionMode_t m_nCollisionMode; // 0x1c8        
        // metadata: MPropertyFriendlyName "minimum detail collision mode"
        particles::ParticleCollisionMode_t m_nCollisionModeMin; // 0x1cc        
        // metadata: MPropertyStartGroup "Collision Options"
        // metadata: MPropertyFriendlyName "Trace Set"
        particles::ParticleTraceSet_t m_nTraceSet; // 0x1d0        
        // metadata: MPropertyFriendlyName "collision group"
        char m_CollisionGroupName[128]; // 0x1d4        
        // metadata: MPropertyFriendlyName "World Only"
        bool m_bWorldOnly; // 0x254        
        // metadata: MPropertyFriendlyName "brush only"
        bool m_bBrushOnly; // 0x255        
        // metadata: MPropertyFriendlyName "include water"
        // metadata: MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
        bool m_bIncludeWater; // 0x256        
        [[maybe_unused]] std::uint8_t pad_0x257[0x1]; // 0x257
        // metadata: MPropertyFriendlyName "CP Entity to Ignore for Collisions"
        // metadata: MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
        int32_t m_nIgnoreCP; // 0x258        
        // metadata: MPropertyFriendlyName "control point movement distance tolerance"
        // metadata: MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
        float m_flCpMovementTolerance; // 0x25c        
        // metadata: MPropertyFriendlyName "plane cache retest rate"
        // metadata: MPropertySuppressExpr "m_nCollisionMode != COLLISION_MODE_PER_FRAME_PLANESET"
        float m_flRetestRate; // 0x260        
        // metadata: MPropertyFriendlyName "trace accuracy tolerance"
        // metadata: MPropertySuppressExpr "m_nCollisionMode != COLLISION_MODE_USE_NEAREST_TRACE"
        float m_flTraceTolerance; // 0x264        
        // metadata: MPropertyFriendlyName "Confirm Collision Speed Threshold"
        // metadata: MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
        float m_flCollisionConfirmationSpeed; // 0x268        
        // metadata: MPropertyFriendlyName "Max Confirmation Traces Per Fame"
        // metadata: MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
        float m_nMaxTracesPerFrame; // 0x26c        
        // metadata: MPropertyStartGroup "Impact Options"
        // metadata: MPropertyFriendlyName "radius scale"
        particleslib::CPerParticleFloatInput m_flRadiusScale; // 0x270        
        // metadata: MPropertyFriendlyName "amount of bounce"
        particleslib::CPerParticleFloatInput m_flBounceAmount; // 0x3c8        
        // metadata: MPropertyFriendlyName "amount of slide"
        particleslib::CPerParticleFloatInput m_flSlideAmount; // 0x520        
        // metadata: MPropertyFriendlyName "Random Direction scale"
        particleslib::CPerParticleFloatInput m_flRandomDirScale; // 0x678        
        // metadata: MPropertyFriendlyName "Add Decay to Bounce"
        bool m_bDecayBounce; // 0x7d0        
        // metadata: MPropertyFriendlyName "kill particle on collision"
        bool m_bKillonContact; // 0x7d1        
        [[maybe_unused]] std::uint8_t pad_0x7d2[0x2]; // 0x7d2
        // metadata: MPropertyFriendlyName "minimum speed to kill on collision"
        float m_flMinSpeed; // 0x7d4        
        // metadata: MPropertyFriendlyName "Set Normal"
        bool m_bSetNormal; // 0x7d8        
        [[maybe_unused]] std::uint8_t pad_0x7d9[0x3]; // 0x7d9
        // metadata: MPropertyFriendlyName "Stick On Collision Cache Field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nStickOnCollisionField; // 0x7dc        
        // metadata: MPropertyFriendlyName "Speed to stop when sticking"
        particleslib::CPerParticleFloatInput m_flStopSpeed; // 0x7e0        
        // metadata: MPropertyFriendlyName "Entity Hitbox Cache Field (Requires Stick on Collision)"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nEntityStickDataField; // 0x938        
        // metadata: MPropertyFriendlyName "Entity Normal Cache Field (Requires Stick on Collision)"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nEntityStickNormalField; // 0x93c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_WorldTraceConstraint because it is not a standard-layout class
    static_assert(sizeof(C_OP_WorldTraceConstraint) == 0x940);
};
