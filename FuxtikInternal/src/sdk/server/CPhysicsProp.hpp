#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBreakableProp.hpp"
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
    // Size: 0xbe8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByName "m_flexWeight"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
    // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
    // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
    // static metadata: MNetworkIncludeByName "m_spawnflags"
    // static metadata: MNetworkVarNames "bool m_bAwake"
    #pragma pack(push, 1)
    class CPhysicsProp : public server::CBreakableProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xa80[0x8]; // 0xa80
        entity2::CEntityIOOutput m_MotionEnabled; // 0xa88        
        entity2::CEntityIOOutput m_OnAwakened; // 0xab0        
        entity2::CEntityIOOutput m_OnAwake; // 0xad8        
        entity2::CEntityIOOutput m_OnAsleep; // 0xb00        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0xb28        
        entity2::CEntityIOOutput m_OnOutOfWorld; // 0xb50        
        entity2::CEntityIOOutput m_OnPlayerPickup; // 0xb78        
        bool m_bForceNavIgnore; // 0xba0        
        bool m_bNoNavmeshBlocker; // 0xba1        
        bool m_bForceNpcExclude; // 0xba2        
        [[maybe_unused]] std::uint8_t pad_0xba3[0x1]; // 0xba3
        float m_massScale; // 0xba4        
        float m_inertiaScale; // 0xba8        
        float m_buoyancyScale; // 0xbac        
        int32_t m_damageType; // 0xbb0        
        int32_t m_damageToEnableMotion; // 0xbb4        
        float m_flForceToEnableMotion; // 0xbb8        
        bool m_bThrownByPlayer; // 0xbbc        
        bool m_bDroppedByPlayer; // 0xbbd        
        bool m_bTouchedByPlayer; // 0xbbe        
        bool m_bFirstCollisionAfterLaunch; // 0xbbf        
        int32_t m_iExploitableByPlayer; // 0xbc0        
        bool m_bHasBeenAwakened; // 0xbc4        
        bool m_bIsOverrideProp; // 0xbc5        
        [[maybe_unused]] std::uint8_t pad_0xbc6[0x2]; // 0xbc6
        client::GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xbc8        
        int32_t m_iInitialGlowState; // 0xbcc        
        int32_t m_nGlowRange; // 0xbd0        
        int32_t m_nGlowRangeMin; // 0xbd4        
        Color m_glowColor; // 0xbd8        
        bool m_bShouldAutoConvertBackFromDebris; // 0xbdc        
        bool m_bMuteImpactEffects; // 0xbdd        
        [[maybe_unused]] std::uint8_t pad_0xbde[0x6]; // 0xbde
        bool m_bAcceptDamageFromHeldObjects; // 0xbe4        
        bool m_bEnableUseOutput; // 0xbe5        
        // metadata: MNetworkEnable
        bool m_bAwake; // 0xbe6        
        [[maybe_unused]] std::uint8_t pad_0xbe7[0x1];
        
        // Datamap fields:
        // void InputEnableMotion; // 0x0
        // void InputDisableMotion; // 0x0
        // void InputWake; // 0x0
        // bool InputSetAutoConvertBackFromDebris; // 0x0
        // void InputSleep; // 0x0
        // void InputDisableFloating; // 0x0
        // void InputStartGlowing; // 0x0
        // void InputStopGlowing; // 0x0
        // Vector InputSetGlowOverride; // 0x0
        // int32_t InputSetGlowRange; // 0x0
        // float InputSetMass; // 0x0
        // void InputEnableGravity; // 0x0
        // void InputDisableGravity; // 0x0
        // void InputEnableDrag; // 0x0
        // void InputDisableDrag; // 0x0
        // void InputEnableCollisions; // 0x0
        // void InputDisableCollisions; // 0x0
        // bool forcemotiondisabled; // 0x7fffffff
        // bool phys_start_asleep; // 0x7fffffff
        // void CPhysicsPropClearFlagsThink; // 0x0
        // int32_t m_nNavObstacleType; // 0xbe0
        // int32_t health; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysicsProp because it is not a standard-layout class
    static_assert(sizeof(CPhysicsProp) == 0xbe8);
};
