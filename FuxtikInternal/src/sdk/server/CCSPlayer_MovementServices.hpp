#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/server/CPlayer_MovementServices_Humanoid.hpp"
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
    // Size: 0x4f8
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
    class CCSPlayer_MovementServices : public server::CPlayer_MovementServices_Humanoid
    {
    public:
        // metadata: MNetworkEnable
        float m_flMaxFallVelocity; // 0x228        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "normal"
        Vector m_vecLadderNormal; // 0x22c        
        // metadata: MNetworkEnable
        int32_t m_nLadderSurfacePropIndex; // 0x238        
        // metadata: MNetworkEnable
        float m_flDuckAmount; // 0x23c        
        // metadata: MNetworkEnable
        float m_flDuckSpeed; // 0x240        
        // metadata: MNetworkEnable
        bool m_bDuckOverride; // 0x244        
        // metadata: MNetworkEnable
        bool m_bDesiresDuck; // 0x245        
        [[maybe_unused]] std::uint8_t pad_0x246[0x2]; // 0x246
        float m_flDuckOffset; // 0x248        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // metadata: MNetworkPriority "32"
        uint32_t m_nDuckTimeMsecs; // 0x24c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint32_t m_nDuckJumpTimeMsecs; // 0x250        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint32_t m_nJumpTimeMsecs; // 0x254        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flLastDuckTime; // 0x258        
        [[maybe_unused]] std::uint8_t pad_0x25c[0xc]; // 0x25c
        Vector2D m_vecLastPositionAtFullCrouchSpeed; // 0x268        
        bool m_duckUntilOnGround; // 0x270        
        bool m_bHasWalkMovedSinceLastJump; // 0x271        
        bool m_bInStuckTest; // 0x272        
        [[maybe_unused]] std::uint8_t pad_0x273[0xd]; // 0x273
        float m_flStuckCheckTime[2][64]; // 0x280        
        int32_t m_nTraceCount; // 0x480        
        int32_t m_StuckLast; // 0x484        
        bool m_bSpeedCropped; // 0x488        
        [[maybe_unused]] std::uint8_t pad_0x489[0x3]; // 0x489
        int32_t m_nOldWaterLevel; // 0x48c        
        float m_flWaterEntryTime; // 0x490        
        Vector m_vecForward; // 0x494        
        Vector m_vecLeft; // 0x4a0        
        Vector m_vecUp; // 0x4ac        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        int32_t m_nGameCodeHasMovedPlayerAfterCommand; // 0x4b8        
        bool m_bMadeFootstepNoise; // 0x4bc        
        [[maybe_unused]] std::uint8_t pad_0x4bd[0x3]; // 0x4bd
        int32_t m_iFootsteps; // 0x4c0        
        // metadata: MNetworkEnable
        bool m_bOldJumpPressed; // 0x4c4        
        [[maybe_unused]] std::uint8_t pad_0x4c5[0x3]; // 0x4c5
        float m_flJumpPressedTime; // 0x4c8        
        // metadata: MNetworkEnable
        float m_flJumpUntil; // 0x4cc        
        // metadata: MNetworkEnable
        float m_flJumpVel; // 0x4d0        
        // metadata: MNetworkEnable
        client::GameTime_t m_fStashGrenadeParameterWhen; // 0x4d4        
        // metadata: MNetworkEnable
        uint64_t m_nButtonDownMaskPrev; // 0x4d8        
        // metadata: MNetworkEnable
        float m_flOffsetTickCompleteTime; // 0x4e0        
        // metadata: MNetworkEnable
        float m_flOffsetTickStashedSpeed; // 0x4e4        
        // metadata: MNetworkEnable
        float m_flStamina; // 0x4e8        
        float m_flHeightAtJumpStart; // 0x4ec        
        float m_flMaxJumpHeightThisJump; // 0x4f0        
        [[maybe_unused]] std::uint8_t pad_0x4f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayer_MovementServices because it is not a standard-layout class
    static_assert(sizeof(CCSPlayer_MovementServices) == 0x4f8);
};
