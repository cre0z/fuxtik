#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/server/CPlayer_UseServices.hpp"
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
    // Size: 0x50
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CCSPlayer_UseServices : public server::CPlayer_UseServices
    {
    public:
        // m_hLastKnownUseEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastKnownUseEntity;
        char m_hLastKnownUseEntity[0x4]; // 0x40        
        client::GameTime_t m_flLastUseTimeStamp; // 0x44        
        client::GameTime_t m_flTimeLastUsedWindow; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x4c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayer_UseServices because it is not a standard-layout class
    static_assert(sizeof(CCSPlayer_UseServices) == 0x50);
};
