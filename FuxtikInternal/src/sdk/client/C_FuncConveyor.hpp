#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/GameTick_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd10
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByName "m_fFlags"
    // static metadata: MNetworkOverride "m_fFlags C_BaseEntity"
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
    class C_FuncConveyor : public client::C_BaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xcc8[0x8]; // 0xcc8
        // metadata: MNetworkEnable
        Vector m_vecMoveDirEntitySpace; // 0xcd0        
        // metadata: MNetworkEnable
        float m_flTargetSpeed; // 0xcdc        
        // metadata: MNetworkEnable
        client::GameTick_t m_nTransitionStartTick; // 0xce0        
        // metadata: MNetworkEnable
        int32_t m_nTransitionDurationTicks; // 0xce4        
        // metadata: MNetworkEnable
        float m_flTransitionStartSpeed; // 0xce8        
        [[maybe_unused]] std::uint8_t pad_0xcec[0x4]; // 0xcec
        // metadata: MNetworkEnable
        // m_hConveyorModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_BaseEntity>> m_hConveyorModels;
        char m_hConveyorModels[0x18]; // 0xcf0        
        float m_flCurrentConveyorOffset; // 0xd08        
        float m_flCurrentConveyorSpeed; // 0xd0c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_FuncConveyor because it is not a standard-layout class
    static_assert(sizeof(C_FuncConveyor) == 0xd10);
};
