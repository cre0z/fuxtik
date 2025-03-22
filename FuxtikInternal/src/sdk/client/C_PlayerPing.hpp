#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    class C_CSPlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x598
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_hPlayer"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hPingedEntity"
    // static metadata: MNetworkVarNames "int m_iType"
    // static metadata: MNetworkVarNames "bool m_bUrgent"
    // static metadata: MNetworkVarNames "char m_szPlaceName"
    #pragma pack(push, 1)
    class C_PlayerPing : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x548[0x30]; // 0x548
        // metadata: MNetworkEnable
        // m_hPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CSPlayerPawn> m_hPlayer;
        char m_hPlayer[0x4]; // 0x578        
        // metadata: MNetworkEnable
        // m_hPingedEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPingedEntity;
        char m_hPingedEntity[0x4]; // 0x57c        
        // metadata: MNetworkEnable
        int32_t m_iType; // 0x580        
        // metadata: MNetworkEnable
        bool m_bUrgent; // 0x584        
        // metadata: MNetworkEnable
        char m_szPlaceName[18]; // 0x585        
        [[maybe_unused]] std::uint8_t pad_0x597[0x1];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PlayerPing because it is not a standard-layout class
    static_assert(sizeof(C_PlayerPing) == 0x598);
};
