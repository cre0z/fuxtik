#pragma once
#include "source2sdk/server/CCSPlayerPawnBase.hpp"
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
    // Size: 0xd38
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarTypeOverride "CCSObserver_ObserverServices m_pObserverServices"
    // static metadata: MNetworkIncludeByName "m_pObserverServices"
    // static metadata: MNetworkVarTypeOverride "CCSObserver_MovementServices m_pMovementServices"
    // static metadata: MNetworkIncludeByName "m_pMovementServices"
    // static metadata: MNetworkVarTypeOverride "CCSObserver_CameraServices m_pCameraServices"
    // static metadata: MNetworkIncludeByName "m_pCameraServices"
    // static metadata: MNetworkVarTypeOverride "CCSObserver_UseServices m_pUseServices"
    // static metadata: MNetworkIncludeByName "m_pUseServices"
    // static metadata: MNetworkVarTypeOverride "CCSObserver_ViewModelServices m_pViewModelServices"
    // static metadata: MNetworkIncludeByName "m_pViewModelServices"
    #pragma pack(push, 1)
    class CCSObserverPawn : public server::CCSPlayerPawnBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xd10[0x28];
        // Datamap fields:
        // CCSObserver_ObserverServices m_pObserverServices; // 0xa20
        // CCSObserver_MovementServices m_pMovementServices; // 0xa48
        // CCSObserver_UseServices m_pUseServices; // 0xa30
        // CCSObserver_ViewModelServices m_pViewModelServices; // 0xc08
        // CCSObserver_CameraServices m_pCameraServices; // 0xa40
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCSObserverPawn) == 0xd38);
};
