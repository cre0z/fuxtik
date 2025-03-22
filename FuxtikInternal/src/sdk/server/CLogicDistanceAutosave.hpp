#pragma once
#include "source2sdk/server/CLogicalEntity.hpp"
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
    // Size: 0x4d8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CLogicDistanceAutosave : public server::CLogicalEntity
    {
    public:
        CUtlSymbolLarge m_iszTargetEntity; // 0x4c0        
        float m_flDistanceToPlayer; // 0x4c8        
        bool m_bForceNewLevelUnit; // 0x4cc        
        bool m_bCheckCough; // 0x4cd        
        bool m_bThinkDangerous; // 0x4ce        
        [[maybe_unused]] std::uint8_t pad_0x4cf[0x1]; // 0x4cf
        float m_flDangerousTime; // 0x4d0        
        [[maybe_unused]] std::uint8_t pad_0x4d4[0x4];
        
        // Datamap fields:
        // void InputSave; // 0x0
        // float InputSaveDangerous; // 0x0
        // void CLogicDistanceAutosaveSaveThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicDistanceAutosave because it is not a standard-layout class
    static_assert(sizeof(CLogicDistanceAutosave) == 0x4d8);
};
