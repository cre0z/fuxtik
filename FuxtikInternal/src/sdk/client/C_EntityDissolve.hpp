#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/EntityDisolveType_t.hpp"
#include "source2sdk/client/GameTime_t.hpp"
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
    // Standard-layout class: false
    // Size: 0xd10
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "float32 m_flFadeInStart"
    // static metadata: MNetworkVarNames "float32 m_flFadeInLength"
    // static metadata: MNetworkVarNames "float32 m_flFadeOutModelStart"
    // static metadata: MNetworkVarNames "float32 m_flFadeOutModelLength"
    // static metadata: MNetworkVarNames "float32 m_flFadeOutStart"
    // static metadata: MNetworkVarNames "float32 m_flFadeOutLength"
    // static metadata: MNetworkVarNames "EntityDisolveType_t m_nDissolveType"
    // static metadata: MNetworkVarNames "Vector m_vDissolverOrigin"
    // static metadata: MNetworkVarNames "uint32 m_nMagnitude"
    #pragma pack(push, 1)
    class C_EntityDissolve : public client::C_BaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xcc8[0x8]; // 0xcc8
        // metadata: MNetworkEnable
        client::GameTime_t m_flStartTime; // 0xcd0        
        // metadata: MNetworkEnable
        float m_flFadeInStart; // 0xcd4        
        // metadata: MNetworkEnable
        float m_flFadeInLength; // 0xcd8        
        // metadata: MNetworkEnable
        float m_flFadeOutModelStart; // 0xcdc        
        // metadata: MNetworkEnable
        float m_flFadeOutModelLength; // 0xce0        
        // metadata: MNetworkEnable
        float m_flFadeOutStart; // 0xce4        
        // metadata: MNetworkEnable
        float m_flFadeOutLength; // 0xce8        
        client::GameTime_t m_flNextSparkTime; // 0xcec        
        // metadata: MNetworkEnable
        client::EntityDisolveType_t m_nDissolveType; // 0xcf0        
        // metadata: MNetworkEnable
        Vector m_vDissolverOrigin; // 0xcf4        
        // metadata: MNetworkEnable
        uint32_t m_nMagnitude; // 0xd00        
        bool m_bCoreExplode; // 0xd04        
        bool m_bLinkedToServerEnt; // 0xd05        
        [[maybe_unused]] std::uint8_t pad_0xd06[0xa];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EntityDissolve because it is not a standard-layout class
    static_assert(sizeof(C_EntityDissolve) == 0xd10);
};
