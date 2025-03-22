#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/C_EconItemView.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1278
    // Has VTable
    // Is Abstract
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nVariant"
    // static metadata: MNetworkVarNames "int m_nRandom"
    // static metadata: MNetworkVarNames "int m_nOrdinal"
    // static metadata: MNetworkVarNames "CUtlString m_sWeaponName"
    // static metadata: MNetworkVarNames "XUID m_xuid"
    // static metadata: MNetworkVarNames "CEconItemView m_agentItem"
    // static metadata: MNetworkVarNames "CEconItemView m_glovesItem"
    // static metadata: MNetworkVarNames "CEconItemView m_weaponItem"
    #pragma pack(push, 1)
    class C_CSGO_TeamPreviewCharacterPosition : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nVariant; // 0x548        
        // metadata: MNetworkEnable
        int32_t m_nRandom; // 0x54c        
        // metadata: MNetworkEnable
        int32_t m_nOrdinal; // 0x550        
        [[maybe_unused]] std::uint8_t pad_0x554[0x4]; // 0x554
        // metadata: MNetworkEnable
        CUtlString m_sWeaponName; // 0x558        
        // metadata: MNetworkEnable
        uint64_t m_xuid; // 0x560        
        // metadata: MNetworkEnable
        client::C_EconItemView m_agentItem; // 0x568        
        // metadata: MNetworkEnable
        client::C_EconItemView m_glovesItem; // 0x9b0        
        // metadata: MNetworkEnable
        client::C_EconItemView m_weaponItem; // 0xdf8        
        [[maybe_unused]] std::uint8_t pad_0x1240[0x38];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CSGO_TeamPreviewCharacterPosition because it is not a standard-layout class
    static_assert(sizeof(C_CSGO_TeamPreviewCharacterPosition) == 0x1278);
};
