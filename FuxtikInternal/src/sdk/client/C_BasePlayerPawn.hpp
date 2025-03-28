#pragma once
#include "source2sdk/client/C_BaseCombatCharacter.hpp"
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/client/ViewAngleServerChange_t.hpp"
#include "source2sdk/client/sky3dparams_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CBasePlayerController;
};

namespace source2sdk::client
{
    class CPlayer_AutoaimServices;
};

namespace source2sdk::client
{
    class CPlayer_CameraServices;
};

namespace source2sdk::client
{
    class CPlayer_FlashlightServices;
};

namespace source2sdk::client
{
    class CPlayer_ItemServices;
};

namespace source2sdk::client
{
    class CPlayer_MovementServices;
};

namespace source2sdk::client
{
    class CPlayer_ObserverServices;
};

namespace source2sdk::client
{
    class CPlayer_UseServices;
};

namespace source2sdk::client
{
    class CPlayer_WaterServices;
};

namespace source2sdk::client
{
    class CPlayer_WeaponServices;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1298
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkUserGroupProxy "C_BasePlayerPawn"
    // static metadata: MNetworkUserGroupProxy "C_BasePlayerPawn"
    // static metadata: MNetworkExcludeByUserGroup "FogController"
    // static metadata: MNetworkIncludeByUserGroup "Player"
    // static metadata: MNetworkIncludeByUserGroup "Water"
    // static metadata: MNetworkIncludeByUserGroup "LocalPlayerExclusive"
    // static metadata: MNetworkOverride "m_vecX CNetworkOriginCellCoordQuantizedVector"
    // static metadata: MNetworkOverride "m_vecY CNetworkOriginCellCoordQuantizedVector"
    // static metadata: MNetworkOverride "m_vecZ CNetworkOriginCellCoordQuantizedVector"
    // static metadata: MNetworkOverride "m_lifeState"
    // static metadata: MNetworkExcludeByName "m_pWeaponServices"
    // static metadata: MNetworkExcludeByName "m_pItemServices"
    // static metadata: MNetworkExcludeByName "m_pAutoaimServices"
    // static metadata: MNetworkExcludeByName "m_pObserverServices"
    // static metadata: MNetworkExcludeByName "m_pWaterServices"
    // static metadata: MNetworkExcludeByName "m_pUseServices"
    // static metadata: MNetworkExcludeByName "m_pFlashlightServices"
    // static metadata: MNetworkExcludeByName "m_pMovementServices"
    // static metadata: MNetworkVarNames "CPlayer_WeaponServices * m_pWeaponServices"
    // static metadata: MNetworkVarNames "CPlayer_ItemServices * m_pItemServices"
    // static metadata: MNetworkVarNames "CPlayer_AutoaimServices * m_pAutoaimServices"
    // static metadata: MNetworkVarNames "CPlayer_ObserverServices * m_pObserverServices"
    // static metadata: MNetworkVarNames "CPlayer_WaterServices * m_pWaterServices"
    // static metadata: MNetworkVarNames "CPlayer_UseServices * m_pUseServices"
    // static metadata: MNetworkVarNames "CPlayer_FlashlightServices * m_pFlashlightServices"
    // static metadata: MNetworkVarNames "CPlayer_CameraServices * m_pCameraServices"
    // static metadata: MNetworkVarNames "CPlayer_MovementServices * m_pMovementServices"
    // static metadata: MNetworkVarNames "ViewAngleServerChange_t m_ServerViewAngleChanges"
    // static metadata: MNetworkVarNames "uint32 m_iHideHUD"
    // static metadata: MNetworkVarNames "sky3dparams_t m_skybox3d"
    // static metadata: MNetworkVarNames "GameTime_t m_flDeathTime"
    // static metadata: MNetworkVarNames "CHandle< CBasePlayerController> m_hController"
    #pragma pack(push, 1)
    class C_BasePlayerPawn : public client::C_BaseCombatCharacter
    {
    public:
        // metadata: MNetworkEnable
        client::CPlayer_WeaponServices* m_pWeaponServices; // 0x10f8        
        // metadata: MNetworkEnable
        client::CPlayer_ItemServices* m_pItemServices; // 0x1100        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::CPlayer_AutoaimServices* m_pAutoaimServices; // 0x1108        
        // metadata: MNetworkEnable
        client::CPlayer_ObserverServices* m_pObserverServices; // 0x1110        
        // metadata: MNetworkEnable
        client::CPlayer_WaterServices* m_pWaterServices; // 0x1118        
        // metadata: MNetworkEnable
        client::CPlayer_UseServices* m_pUseServices; // 0x1120        
        // metadata: MNetworkEnable
        client::CPlayer_FlashlightServices* m_pFlashlightServices; // 0x1128        
        // metadata: MNetworkEnable
        client::CPlayer_CameraServices* m_pCameraServices; // 0x1130        
        // metadata: MNetworkEnable
        client::CPlayer_MovementServices* m_pMovementServices; // 0x1138        
        [[maybe_unused]] std::uint8_t pad_0x1140[0x8]; // 0x1140
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_ServerViewAngleChanges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::ViewAngleServerChange_t> m_ServerViewAngleChanges;
        char m_ServerViewAngleChanges[0x50]; // 0x1148        
        uint32_t m_nHighestConsumedServerViewAngleChangeIndex; // 0x1198        
        QAngle v_angle; // 0x119c        
        QAngle v_anglePrevious; // 0x11a8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint32_t m_iHideHUD; // 0x11b4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::sky3dparams_t m_skybox3d; // 0x11b8        
        // metadata: MNetworkEnable
        client::GameTime_t m_flDeathTime; // 0x1248        
        Vector m_vecPredictionError; // 0x124c        
        client::GameTime_t m_flPredictionErrorTime; // 0x1258        
        Vector m_vecLastCameraSetupLocalOrigin; // 0x125c        
        client::GameTime_t m_flLastCameraSetupTime; // 0x1268        
        float m_flFOVSensitivityAdjust; // 0x126c        
        float m_flMouseSensitivity; // 0x1270        
        Vector m_vOldOrigin; // 0x1274        
        float m_flOldSimulationTime; // 0x1280        
        int32_t m_nLastExecutedCommandNumber; // 0x1284        
        int32_t m_nLastExecutedCommandTick; // 0x1288        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnControllerChanged"
        // m_hController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CBasePlayerController> m_hController;
        char m_hController[0x4]; // 0x128c        
        bool m_bIsSwappingToPredictableController; // 0x1290        
        [[maybe_unused]] std::uint8_t pad_0x1291[0x7];
        
        // Datamap fields:
        // void m_hPawnListEntry; // 0x1292
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BasePlayerPawn because it is not a standard-layout class
    static_assert(sizeof(C_BasePlayerPawn) == 0x1298);
};
