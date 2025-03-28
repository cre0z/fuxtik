#pragma once
#include "source2sdk/client/GameTick_t.hpp"
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x760
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByName "m_fFlags"
    // static metadata: MNetworkOverride "m_fFlags CBaseEntity"
    // static metadata: MNetworkOverride "m_vecX CNetworkOriginCellCoordQuantizedVector"
    // static metadata: MNetworkOverride "m_vecY CNetworkOriginCellCoordQuantizedVector"
    // static metadata: MNetworkOverride "m_vecZ CNetworkOriginCellCoordQuantizedVector"
    // static metadata: MNetworkOverride "m_angRotation CGameSceneNode"
    // static metadata: MNetworkVarNames "Vector m_vecMoveDirEntitySpace"
    // static metadata: MNetworkVarNames "float32 m_flTargetSpeed"
    // static metadata: MNetworkVarNames "GameTick_t m_nTransitionStartTick"
    // static metadata: MNetworkVarNames "int m_nTransitionDurationTicks"
    // static metadata: MNetworkVarNames "float32 m_flTransitionStartSpeed"
    // static metadata: MNetworkVarNames "EHANDLE m_hConveyorModels"
    #pragma pack(push, 1)
    class CFuncConveyor : public server::CBaseModelEntity
    {
    public:
        CUtlSymbolLarge m_szConveyorModels; // 0x710        
        float m_flTransitionDurationSeconds; // 0x718        
        QAngle m_angMoveEntitySpace; // 0x71c        
        // metadata: MNetworkEnable
        Vector m_vecMoveDirEntitySpace; // 0x728        
        // metadata: MNetworkEnable
        float m_flTargetSpeed; // 0x734        
        // metadata: MNetworkEnable
        client::GameTick_t m_nTransitionStartTick; // 0x738        
        // metadata: MNetworkEnable
        int32_t m_nTransitionDurationTicks; // 0x73c        
        // metadata: MNetworkEnable
        float m_flTransitionStartSpeed; // 0x740        
        [[maybe_unused]] std::uint8_t pad_0x744[0x4]; // 0x744
        // metadata: MNetworkEnable
        // m_hConveyorModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CBaseEntity>> m_hConveyorModels;
        char m_hConveyorModels[0x18]; // 0x748        
        
        // Datamap fields:
        // void InputToggleDirection; // 0x0
        // float InputSetSpeed; // 0x0
        // float InputSetTransitionDuration; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncConveyor because it is not a standard-layout class
    static_assert(sizeof(CFuncConveyor) == 0x760);
};
