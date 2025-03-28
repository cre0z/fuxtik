#pragma once
#include "source2sdk/client/Class_T.hpp"
#include "source2sdk/server/CModelPointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x768
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CEnvExplosion : public server::CModelPointEntity
    {
    public:
        int32_t m_iMagnitude; // 0x710        
        float m_flPlayerDamage; // 0x714        
        int32_t m_iRadiusOverride; // 0x718        
        float m_flInnerRadius; // 0x71c        
        int32_t m_spriteScale; // 0x720        
        float m_flDamageForce; // 0x724        
        // m_hInflictor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hInflictor;
        char m_hInflictor[0x4]; // 0x728        
        int32_t m_iCustomDamageType; // 0x72c        
        [[maybe_unused]] std::uint8_t pad_0x730[0x8]; // 0x730
        CUtlSymbolLarge m_iszExplosionType; // 0x738        
        CUtlSymbolLarge m_iszCustomEffectName; // 0x740        
        CUtlSymbolLarge m_iszCustomSoundName; // 0x748        
        client::Class_T m_iClassIgnore; // 0x750        
        client::Class_T m_iClassIgnore2; // 0x754        
        CUtlSymbolLarge m_iszEntityIgnoreName; // 0x758        
        // m_hEntityIgnore has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEntityIgnore;
        char m_hEntityIgnore[0x4]; // 0x760        
        [[maybe_unused]] std::uint8_t pad_0x764[0x4];
        
        // Datamap fields:
        // uint32_t m_nExplosionType; // 0x730
        // void CEnvExplosionSmoke; // 0x0
        // void InputExplode; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvExplosion because it is not a standard-layout class
    static_assert(sizeof(CEnvExplosion) == 0x768);
};
