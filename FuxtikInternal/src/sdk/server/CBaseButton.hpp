#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
#include "source2sdk/server/locksound_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseModelEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x8e0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CHandle< CBaseModelEntity> m_glowEntity"
    // static metadata: MNetworkVarNames "bool m_usable"
    // static metadata: MNetworkVarNames "string_t m_szDisplayText"
    #pragma pack(push, 1)
    class CBaseButton : public server::CBaseToggle
    {
    public:
        QAngle m_angMoveEntitySpace; // 0x790        
        bool m_fStayPushed; // 0x79c        
        bool m_fRotating; // 0x79d        
        [[maybe_unused]] std::uint8_t pad_0x79e[0x2]; // 0x79e
        server::locksound_t m_ls; // 0x7a0        
        CUtlSymbolLarge m_sUseSound; // 0x7c0        
        CUtlSymbolLarge m_sLockedSound; // 0x7c8        
        CUtlSymbolLarge m_sUnlockedSound; // 0x7d0        
        CUtlSymbolLarge m_sOverrideAnticipationName; // 0x7d8        
        bool m_bLocked; // 0x7e0        
        bool m_bDisabled; // 0x7e1        
        [[maybe_unused]] std::uint8_t pad_0x7e2[0x2]; // 0x7e2
        client::GameTime_t m_flUseLockedTime; // 0x7e4        
        bool m_bSolidBsp; // 0x7e8        
        [[maybe_unused]] std::uint8_t pad_0x7e9[0x7]; // 0x7e9
        entity2::CEntityIOOutput m_OnDamaged; // 0x7f0        
        entity2::CEntityIOOutput m_OnPressed; // 0x818        
        entity2::CEntityIOOutput m_OnUseLocked; // 0x840        
        entity2::CEntityIOOutput m_OnIn; // 0x868        
        entity2::CEntityIOOutput m_OnOut; // 0x890        
        int32_t m_nState; // 0x8b8        
        CEntityHandle m_hConstraint; // 0x8bc        
        CEntityHandle m_hConstraintParent; // 0x8c0        
        bool m_bForceNpcExclude; // 0x8c4        
        [[maybe_unused]] std::uint8_t pad_0x8c5[0x3]; // 0x8c5
        CUtlSymbolLarge m_sGlowEntity; // 0x8c8        
        // metadata: MNetworkEnable
        // m_glowEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseModelEntity> m_glowEntity;
        char m_glowEntity[0x4]; // 0x8d0        
        // metadata: MNetworkEnable
        bool m_usable; // 0x8d4        
        [[maybe_unused]] std::uint8_t pad_0x8d5[0x3]; // 0x8d5
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_szDisplayText; // 0x8d8        
        
        // Datamap fields:
        //  m_ls.sLockedSound; // 0x7a8
        //  m_ls.sUnlockedSound; // 0x7b0
        // void CBaseButtonButtonTouch; // 0x0
        // void CBaseButtonButtonSpark; // 0x0
        // void CBaseButtonTriggerAndWait; // 0x0
        // void CBaseButtonButtonReturn; // 0x0
        // void CBaseButtonButtonBackHome; // 0x0
        // void CBaseButtonButtonUse; // 0x0
        // void CBaseButtonActivateTouch; // 0x0
        // void InputLock; // 0x0
        // void InputUnlock; // 0x0
        // void InputPress; // 0x0
        // void InputPressIn; // 0x0
        // void InputPressOut; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // CUtlString displaytext; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseButton because it is not a standard-layout class
    static_assert(sizeof(CBaseButton) == 0x8e0);
};
