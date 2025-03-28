#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/server/CAttributeContainer.hpp"
#include "source2sdk/server/CDynamicProp.hpp"
#include "source2sdk/server/ChickenActivity.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x3108
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CAttributeContainer m_AttributeManager"
    // static metadata: MNetworkVarNames "bool m_jumpedThisFrame"
    // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_leader"
    #pragma pack(push, 1)
    class CChicken : public server::CDynamicProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb80[0x20]; // 0xb80
        // metadata: MNetworkEnable
        server::CAttributeContainer m_AttributeManager; // 0xba0        
        [[maybe_unused]] std::uint8_t pad_0xe68[0x20]; // 0xe68
        CUtlStringToken m_sActivityFinishedTag; // 0xe88        
        [[maybe_unused]] std::uint8_t pad_0xe8c[0x4]; // 0xe8c
        server::CountdownTimer m_updateTimer; // 0xe90        
        Vector m_stuckAnchor; // 0xea8        
        [[maybe_unused]] std::uint8_t pad_0xeb4[0x4]; // 0xeb4
        server::CountdownTimer m_stuckTimer; // 0xeb8        
        server::CountdownTimer m_collisionStuckTimer; // 0xed0        
        bool m_isOnGround; // 0xee8        
        [[maybe_unused]] std::uint8_t pad_0xee9[0x3]; // 0xee9
        Vector m_vFallVelocity; // 0xeec        
        server::ChickenActivity m_desiredActivity; // 0xef8        
        server::ChickenActivity m_currentActivity; // 0xefc        
        server::CountdownTimer m_activityTimer; // 0xf00        
        float m_turnRate; // 0xf18        
        // m_fleeFrom has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_fleeFrom;
        char m_fleeFrom[0x4]; // 0xf1c        
        server::CountdownTimer m_moveRateThrottleTimer; // 0xf20        
        server::CountdownTimer m_startleTimer; // 0xf38        
        server::CountdownTimer m_vocalizeTimer; // 0xf50        
        client::GameTime_t m_flWhenZombified; // 0xf68        
        // metadata: MNetworkEnable
        bool m_jumpedThisFrame; // 0xf6c        
        [[maybe_unused]] std::uint8_t pad_0xf6d[0x3]; // 0xf6d
        // metadata: MNetworkEnable
        // m_leader has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCSPlayerPawn> m_leader;
        char m_leader[0x4]; // 0xf70        
        [[maybe_unused]] std::uint8_t pad_0xf74[0x14]; // 0xf74
        server::CountdownTimer m_reuseTimer; // 0xf88        
        bool m_hasBeenUsed; // 0xfa0        
        [[maybe_unused]] std::uint8_t pad_0xfa1[0x7]; // 0xfa1
        server::CountdownTimer m_jumpTimer; // 0xfa8        
        float m_flLastJumpTime; // 0xfc0        
        bool m_bInJump; // 0xfc4        
        bool m_isWaitingForLeader; // 0xfc5        
        [[maybe_unused]] std::uint8_t pad_0xfc6[0x200a]; // 0xfc6
        server::CountdownTimer m_repathTimer; // 0x2fd0        
        server::CountdownTimer m_inhibitDoorTimer; // 0x2fe8        
        [[maybe_unused]] std::uint8_t pad_0x3000[0x78]; // 0x3000
        server::CountdownTimer m_inhibitObstacleAvoidanceTimer; // 0x3078        
        [[maybe_unused]] std::uint8_t pad_0x3090[0x8]; // 0x3090
        Vector m_vecPathGoal; // 0x3098        
        client::GameTime_t m_flActiveFollowStartTime; // 0x30a4        
        server::CountdownTimer m_followMinuteTimer; // 0x30a8        
        Vector m_vecLastEggPoopPosition; // 0x30c0        
        [[maybe_unused]] std::uint8_t pad_0x30cc[0x4]; // 0x30cc
        // m_vecEggsPooped has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecEggsPooped;
        char m_vecEggsPooped[0x18]; // 0x30d0        
        [[maybe_unused]] std::uint8_t pad_0x30e8[0x8]; // 0x30e8
        server::CountdownTimer m_BlockDirectionTimer; // 0x30f0        
        
        // Datamap fields:
        // void CChickenChickenTouch; // 0x0
        // void CChickenChickenThink; // 0x0
        // void CChickenChickenUse; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CChicken because it is not a standard-layout class
    static_assert(sizeof(CChicken) == 0x3108);
};
