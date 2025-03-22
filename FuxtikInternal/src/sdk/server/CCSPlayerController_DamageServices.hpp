#pragma once
#include "source2sdk/client/CPlayerControllerComponent.hpp"
#include "source2sdk/server/CDamageRecord.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nSendUpdate"
    // static metadata: MNetworkVarNames "CDamageRecord m_DamageList"
    #pragma pack(push, 1)
    class CCSPlayerController_DamageServices : public client::CPlayerControllerComponent
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusiveDuringRoundEnd"
        // metadata: MNetworkChangeCallback "OnDamageListUpdate"
        int32_t m_nSendUpdate; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x44[0x4]; // 0x44
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusiveDuringRoundEnd"
        // m_DamageList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::CDamageRecord> m_DamageList;
        char m_DamageList[0x70]; // 0x48        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayerController_DamageServices because it is not a standard-layout class
    static_assert(sizeof(CCSPlayerController_DamageServices) == 0xb8);
};
