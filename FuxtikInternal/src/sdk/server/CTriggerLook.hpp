#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CTriggerOnce.hpp"
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
    // Size: 0x9a0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bTestOcclusion"
    #pragma pack(push, 1)
    class CTriggerLook : public server::CTriggerOnce
    {
    public:
        // m_hLookTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLookTarget;
        char m_hLookTarget[0x4]; // 0x908        
        float m_flFieldOfView; // 0x90c        
        float m_flLookTime; // 0x910        
        float m_flLookTimeTotal; // 0x914        
        client::GameTime_t m_flLookTimeLast; // 0x918        
        float m_flTimeoutDuration; // 0x91c        
        bool m_bTimeoutFired; // 0x920        
        bool m_bIsLooking; // 0x921        
        bool m_b2DFOV; // 0x922        
        bool m_bUseVelocity; // 0x923        
        // metadata: MNetworkEnable
        bool m_bTestOcclusion; // 0x924        
        [[maybe_unused]] std::uint8_t pad_0x925[0x3]; // 0x925
        entity2::CEntityIOOutput m_OnTimeout; // 0x928        
        entity2::CEntityIOOutput m_OnStartLook; // 0x950        
        entity2::CEntityIOOutput m_OnEndLook; // 0x978        
        
        // Datamap fields:
        // void CTriggerLookTimeoutThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerLook because it is not a standard-layout class
    static_assert(sizeof(CTriggerLook) == 0x9a0);
};
