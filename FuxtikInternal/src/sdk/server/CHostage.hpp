#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CHostageExpresserShim.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/EntitySpottedState_t.hpp"
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
    class CCSPlayerPawn;
};

namespace source2sdk::server
{
    class CCSPlayerPawnBase;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x2ca8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
    // static metadata: MNetworkIncludeByName "m_iMaxHealth"
    // static metadata: MNetworkIncludeByName "m_iHealth"
    // static metadata: MNetworkIncludeByName "m_lifeState"
    // static metadata: MNetworkIncludeByName "m_fFlags"
    // static metadata: MNetworkIncludeByName "m_vecViewOffset"
    // static metadata: MNetworkVarNames "Vector m_vel"
    // static metadata: MNetworkVarNames "bool m_isRescued"
    // static metadata: MNetworkVarNames "bool m_jumpedThisFrame"
    // static metadata: MNetworkVarNames "int m_nHostageState"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_leader"
    // static metadata: MNetworkVarNames "CountdownTimer m_reuseTimer"
    // static metadata: MNetworkVarNames "bool m_bHandsHaveBeenCut"
    // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_hHostageGrabber"
    // static metadata: MNetworkVarNames "GameTime_t m_flRescueStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flGrabSuccessTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flDropStartTime"
    #pragma pack(push, 1)
    class CHostage : public server::CHostageExpresserShim
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xa10[0x10]; // 0xa10
        entity2::CEntityIOOutput m_OnHostageBeginGrab; // 0xa20        
        entity2::CEntityIOOutput m_OnFirstPickedUp; // 0xa48        
        entity2::CEntityIOOutput m_OnDroppedNotRescued; // 0xa70        
        entity2::CEntityIOOutput m_OnRescued; // 0xa98        
        // metadata: MNetworkEnable
        server::EntitySpottedState_t m_entitySpottedState; // 0xac0        
        int32_t m_nSpotRules; // 0xad8        
        uint32_t m_uiHostageSpawnExclusionGroupMask; // 0xadc        
        uint32_t m_nHostageSpawnRandomFactor; // 0xae0        
        bool m_bRemove; // 0xae4        
        [[maybe_unused]] std::uint8_t pad_0xae5[0x3]; // 0xae5
        // metadata: MNetworkEnable
        Vector m_vel; // 0xae8        
        // metadata: MNetworkEnable
        bool m_isRescued; // 0xaf4        
        // metadata: MNetworkEnable
        bool m_jumpedThisFrame; // 0xaf5        
        [[maybe_unused]] std::uint8_t pad_0xaf6[0x2]; // 0xaf6
        // metadata: MNetworkEnable
        int32_t m_nHostageState; // 0xaf8        
        // metadata: MNetworkEnable
        // m_leader has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_leader;
        char m_leader[0x4]; // 0xafc        
        // m_lastLeader has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCSPlayerPawnBase> m_lastLeader;
        char m_lastLeader[0x4]; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb04[0x4]; // 0xb04
        // metadata: MNetworkEnable
        server::CountdownTimer m_reuseTimer; // 0xb08        
        bool m_hasBeenUsed; // 0xb20        
        [[maybe_unused]] std::uint8_t pad_0xb21[0x3]; // 0xb21
        Vector m_accel; // 0xb24        
        bool m_isRunning; // 0xb30        
        bool m_isCrouching; // 0xb31        
        [[maybe_unused]] std::uint8_t pad_0xb32[0x6]; // 0xb32
        server::CountdownTimer m_jumpTimer; // 0xb38        
        bool m_isWaitingForLeader; // 0xb50        
        [[maybe_unused]] std::uint8_t pad_0xb51[0x200f]; // 0xb51
        server::CountdownTimer m_repathTimer; // 0x2b60        
        server::CountdownTimer m_inhibitDoorTimer; // 0x2b78        
        [[maybe_unused]] std::uint8_t pad_0x2b90[0x78]; // 0x2b90
        server::CountdownTimer m_inhibitObstacleAvoidanceTimer; // 0x2c08        
        [[maybe_unused]] std::uint8_t pad_0x2c20[0x8]; // 0x2c20
        server::CountdownTimer m_wiggleTimer; // 0x2c28        
        [[maybe_unused]] std::uint8_t pad_0x2c40[0x4]; // 0x2c40
        bool m_isAdjusted; // 0x2c44        
        // metadata: MNetworkEnable
        bool m_bHandsHaveBeenCut; // 0x2c45        
        [[maybe_unused]] std::uint8_t pad_0x2c46[0x2]; // 0x2c46
        // metadata: MNetworkEnable
        // m_hHostageGrabber has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCSPlayerPawn> m_hHostageGrabber;
        char m_hHostageGrabber[0x4]; // 0x2c48        
        client::GameTime_t m_fLastGrabTime; // 0x2c4c        
        Vector m_vecPositionWhenStartedDroppingToGround; // 0x2c50        
        Vector m_vecGrabbedPos; // 0x2c5c        
        // metadata: MNetworkEnable
        client::GameTime_t m_flRescueStartTime; // 0x2c68        
        // metadata: MNetworkEnable
        client::GameTime_t m_flGrabSuccessTime; // 0x2c6c        
        // metadata: MNetworkEnable
        client::GameTime_t m_flDropStartTime; // 0x2c70        
        int32_t m_nApproachRewardPayouts; // 0x2c74        
        int32_t m_nPickupEventCount; // 0x2c78        
        Vector m_vecSpawnGroundPos; // 0x2c7c        
        [[maybe_unused]] std::uint8_t pad_0x2c88[0x14]; // 0x2c88
        Vector m_vecHostageResetPosition; // 0x2c9c        
        
        // Datamap fields:
        // void HostageRescueZoneTouch; // 0x0
        // void CHostageHostageUse; // 0x0
        // void CHostageHostageThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CHostage because it is not a standard-layout class
    static_assert(sizeof(CHostage) == 0x2ca8);
};
