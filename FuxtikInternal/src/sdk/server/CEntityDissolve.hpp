#pragma once
#include "source2sdk/client/EntityDisolveType_t.hpp"
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x740
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float32 m_flFadeInStart"
    // static metadata: MNetworkVarNames "float32 m_flFadeInLength"
    // static metadata: MNetworkVarNames "float32 m_flFadeOutModelStart"
    // static metadata: MNetworkVarNames "float32 m_flFadeOutModelLength"
    // static metadata: MNetworkVarNames "float32 m_flFadeOutStart"
    // static metadata: MNetworkVarNames "float32 m_flFadeOutLength"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "EntityDisolveType_t m_nDissolveType"
    // static metadata: MNetworkVarNames "Vector m_vDissolverOrigin"
    // static metadata: MNetworkVarNames "uint32 m_nMagnitude"
    #pragma pack(push, 1)
    class CEntityDissolve : public server::CBaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        float m_flFadeInStart; // 0x710        
        // metadata: MNetworkEnable
        float m_flFadeInLength; // 0x714        
        // metadata: MNetworkEnable
        float m_flFadeOutModelStart; // 0x718        
        // metadata: MNetworkEnable
        float m_flFadeOutModelLength; // 0x71c        
        // metadata: MNetworkEnable
        float m_flFadeOutStart; // 0x720        
        // metadata: MNetworkEnable
        float m_flFadeOutLength; // 0x724        
        // metadata: MNetworkEnable
        client::GameTime_t m_flStartTime; // 0x728        
        // metadata: MNetworkEnable
        client::EntityDisolveType_t m_nDissolveType; // 0x72c        
        // metadata: MNetworkEnable
        Vector m_vDissolverOrigin; // 0x730        
        // metadata: MNetworkEnable
        uint32_t m_nMagnitude; // 0x73c        
        
        // Datamap fields:
        // void CEntityDissolveDissolveThink; // 0x0
        // void CEntityDissolveElectrocuteThink; // 0x0
        // CUtlSymbolLarge InputDissolve; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEntityDissolve because it is not a standard-layout class
    static_assert(sizeof(CEntityDissolve) == 0x740);
};
