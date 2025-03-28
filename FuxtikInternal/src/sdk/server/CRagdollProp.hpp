#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/client/ragdoll_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
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
    class CBasePlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa88
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "Vector m_ragPos"
    // static metadata: MNetworkVarNames "QAngle m_ragAngles"
    // static metadata: MNetworkVarNames "EHANDLE m_hRagdollSource"
    // static metadata: MNetworkVarNames "float32 m_flBlendWeight"
    #pragma pack(push, 1)
    class CRagdollProp : public server::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x8e8[0x8]; // 0x8e8
        client::ragdoll_t m_ragdoll; // 0x8f0        
        bool m_bStartDisabled; // 0x928        
        [[maybe_unused]] std::uint8_t pad_0x929[0x7]; // 0x929
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        // m_ragPos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<Vector> m_ragPos;
        char m_ragPos[0x18]; // 0x930        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "13"
        // m_ragAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<QAngle> m_ragAngles;
        char m_ragAngles[0x18]; // 0x948        
        // metadata: MNetworkEnable
        // m_hRagdollSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRagdollSource;
        char m_hRagdollSource[0x4]; // 0x960        
        uint32_t m_lastUpdateTickCount; // 0x964        
        bool m_allAsleep; // 0x968        
        bool m_bFirstCollisionAfterLaunch; // 0x969        
        [[maybe_unused]] std::uint8_t pad_0x96a[0x2]; // 0x96a
        // m_hDamageEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hDamageEntity;
        char m_hDamageEntity[0x4]; // 0x96c        
        // m_hKiller has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hKiller;
        char m_hKiller[0x4]; // 0x970        
        // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerPawn> m_hPhysicsAttacker;
        char m_hPhysicsAttacker[0x4]; // 0x974        
        client::GameTime_t m_flLastPhysicsInfluenceTime; // 0x978        
        client::GameTime_t m_flFadeOutStartTime; // 0x97c        
        float m_flFadeTime; // 0x980        
        // metadata: MNetworkDisable
        Vector m_vecLastOrigin; // 0x984        
        client::GameTime_t m_flAwakeTime; // 0x990        
        client::GameTime_t m_flLastOriginChangeTime; // 0x994        
        CUtlSymbolLarge m_strOriginClassName; // 0x998        
        CUtlSymbolLarge m_strSourceClassName; // 0x9a0        
        bool m_bHasBeenPhysgunned; // 0x9a8        
        bool m_bShouldTeleportPhysics; // 0x9a9        
        [[maybe_unused]] std::uint8_t pad_0x9aa[0x2]; // 0x9aa
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "1,000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_flBlendWeight; // 0x9ac        
        float m_flDefaultFadeScale; // 0x9b0        
        [[maybe_unused]] std::uint8_t pad_0x9b4[0x4]; // 0x9b4
        // m_ragdollMins has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_ragdollMins;
        char m_ragdollMins[0x18]; // 0x9b8        
        // m_ragdollMaxs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_ragdollMaxs;
        char m_ragdollMaxs[0x18]; // 0x9d0        
        bool m_bShouldDeleteActivationRecord; // 0x9e8        
        [[maybe_unused]] std::uint8_t pad_0x9e9[0x5f]; // 0x9e9
        bool m_bValidatePoweredRagdollPose; // 0xa48        
        [[maybe_unused]] std::uint8_t pad_0xa49[0x3f];
        
        // Datamap fields:
        // void m_ragdoll.boneIndex; // 0x908
        // void InputEnableMotion; // 0x0
        // void InputDisableMotion; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // float InputFadeAndRemove; // 0x0
        // void CRagdollPropSetDebrisThink; // 0x0
        // void CRagdollPropClearFlagsThink; // 0x0
        // void CRagdollPropFadeOutThink; // 0x0
        // void CRagdollPropSettleThink; // 0x0
        // void CRagdollPropAttachedItemsThink; // 0x0
        // void CRagdollPropRagdollTouch; // 0x0
        // void m_ragdoll.list; // 0x8f0
        // bool m_ragdoll.allowStretch; // 0x920
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CRagdollProp because it is not a standard-layout class
    static_assert(sizeof(CRagdollProp) == 0xa88);
};
