#pragma once
#include "source2sdk/client/CPlayer_MovementServices_Humanoid.hpp"
#include "source2sdk/client/GameTime_t.hpp"
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
    // Size: 0x4e0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float m_flMaxFallVelocity"
    // static metadata: MNetworkVarNames "Vector m_vecLadderNormal"
    // static metadata: MNetworkVarNames "int m_nLadderSurfacePropIndex"
    // static metadata: MNetworkVarNames "float m_flDuckAmount"
    // static metadata: MNetworkVarNames "float m_flDuckSpeed"
    // static metadata: MNetworkVarNames "bool m_bDuckOverride"
    // static metadata: MNetworkVarNames "bool m_bDesiresDuck"
    // static metadata: MNetworkVarNames "uint32 m_nDuckTimeMsecs"
    // static metadata: MNetworkVarNames "uint32 m_nDuckJumpTimeMsecs"
    // static metadata: MNetworkVarNames "uint32 m_nJumpTimeMsecs"
    // static metadata: MNetworkVarNames "float m_flLastDuckTime"
    // static metadata: MNetworkVarNames "int m_nGameCodeHasMovedPlayerAfterCommand"
    // static metadata: MNetworkVarNames "bool m_bOldJumpPressed"
    // static metadata: MNetworkVarNames "float m_flJumpUntil"
    // static metadata: MNetworkVarNames "float m_flJumpVel"
    // static metadata: MNetworkVarNames "GameTime_t m_fStashGrenadeParameterWhen"
    // static metadata: MNetworkVarNames "ButtonBitMask_t m_nButtonDownMaskPrev"
    // static metadata: MNetworkVarNames "float m_flOffsetTickCompleteTime"
    // static metadata: MNetworkVarNames "float m_flOffsetTickStashedSpeed"
    // static metadata: MNetworkVarNames "float m_flStamina"
    #pragma pack(push, 1)
    class CCSPlayer_MovementServices : public client::CPlayer_MovementServices_Humanoid
    {
    public:
        // metadata: MNetworkEnable
        float m_flMaxFallVelocity; // 0x218        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "normal"
        Vector m_vecLadderNormal; // 0x21c        
        // metadata: MNetworkEnable
        int32_t m_nLadderSurfacePropIndex; // 0x228        
        // metadata: MNetworkEnable
        float m_flDuckAmount; // 0x22c        
        // metadata: MNetworkEnable
        float m_flDuckSpeed; // 0x230        
        // metadata: MNetworkEnable
        bool m_bDuckOverride; // 0x234        
        // metadata: MNetworkEnable
        bool m_bDesiresDuck; // 0x235        
        [[maybe_unused]] std::uint8_t pad_0x236[0x2]; // 0x236
        float m_flDuckOffset; // 0x238        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // metadata: MNetworkPriority "32"
        uint32_t m_nDuckTimeMsecs; // 0x23c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint32_t m_nDuckJumpTimeMsecs; // 0x240        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint32_t m_nJumpTimeMsecs; // 0x244        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flLastDuckTime; // 0x248        
        [[maybe_unused]] std::uint8_t pad_0x24c[0xc]; // 0x24c
        Vector2D m_vecLastPositionAtFullCrouchSpeed; // 0x258        
        bool m_duckUntilOnGround; // 0x260        
        bool m_bHasWalkMovedSinceLastJump; // 0x261        
        bool m_bInStuckTest; // 0x262        
        [[maybe_unused]] std::uint8_t pad_0x263[0xd]; // 0x263
        float m_flStuckCheckTime[2][64]; // 0x270        
        int32_t m_nTraceCount; // 0x470        
        int32_t m_StuckLast; // 0x474        
        bool m_bSpeedCropped; // 0x478        
        [[maybe_unused]] std::uint8_t pad_0x479[0x3]; // 0x479
        int32_t m_nOldWaterLevel; // 0x47c        
        float m_flWaterEntryTime; // 0x480        
        Vector m_vecForward; // 0x484        
        Vector m_vecLeft; // 0x490        
        Vector m_vecUp; // 0x49c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        int32_t m_nGameCodeHasMovedPlayerAfterCommand; // 0x4a8        
        // metadata: MNetworkEnable
        bool m_bOldJumpPressed; // 0x4ac        
        [[maybe_unused]] std::uint8_t pad_0x4ad[0x3]; // 0x4ad
        float m_flJumpPressedTime; // 0x4b0        
        // metadata: MNetworkEnable
        float m_flJumpUntil; // 0x4b4        
        // metadata: MNetworkEnable
        float m_flJumpVel; // 0x4b8        
        // metadata: MNetworkEnable
        client::GameTime_t m_fStashGrenadeParameterWhen; // 0x4bc        
        // metadata: MNetworkEnable
        uint64_t m_nButtonDownMaskPrev; // 0x4c0        
        // metadata: MNetworkEnable
        float m_flOffsetTickCompleteTime; // 0x4c8        
        // metadata: MNetworkEnable
        float m_flOffsetTickStashedSpeed; // 0x4cc        
        // metadata: MNetworkEnable
        float m_flStamina; // 0x4d0        
        float m_flHeightAtJumpStart; // 0x4d4        
        float m_flMaxJumpHeightThisJump; // 0x4d8        
        [[maybe_unused]] std::uint8_t pad_0x4dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayer_MovementServices because it is not a standard-layout class
    static_assert(sizeof(CCSPlayer_MovementServices) == 0x4e0);
};
