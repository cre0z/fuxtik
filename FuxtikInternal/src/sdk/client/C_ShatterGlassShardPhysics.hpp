#pragma once
#include "source2sdk/client/C_PhysicsProp.hpp"
#include "source2sdk/client/shard_model_desc_t.hpp"
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
    // Size: 0x10b0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkExcludeByName "m_hModel"
    // static metadata: MNetworkVarNames "shard_model_desc_t m_ShardDesc"
    #pragma pack(push, 1)
    class C_ShatterGlassShardPhysics : public client::C_PhysicsProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1048[0x8]; // 0x1048
        // metadata: MNetworkEnable
        client::shard_model_desc_t m_ShardDesc; // 0x1050        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ShatterGlassShardPhysics because it is not a standard-layout class
    static_assert(sizeof(C_ShatterGlassShardPhysics) == 0x10b0);
};
