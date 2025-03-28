#pragma once
#include "source2sdk/client/CPlayerPawnComponent.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x48
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hCarriedHostage"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hCarriedHostageProp"
    #pragma pack(push, 1)
    class CCSPlayer_HostageServices : public client::CPlayerPawnComponent
    {
    public:
        // metadata: MNetworkEnable
        // m_hCarriedHostage has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCarriedHostage;
        char m_hCarriedHostage[0x4]; // 0x40        
        // metadata: MNetworkEnable
        // m_hCarriedHostageProp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCarriedHostageProp;
        char m_hCarriedHostageProp[0x4]; // 0x44        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayer_HostageServices because it is not a standard-layout class
    static_assert(sizeof(CCSPlayer_HostageServices) == 0x48);
};
