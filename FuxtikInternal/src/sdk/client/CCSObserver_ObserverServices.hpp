#pragma once
#include "source2sdk/client/CPlayer_ObserverServices.hpp"
#include "source2sdk/client/ObserverInterpState_t.hpp"
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
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0xb0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CCSObserver_ObserverServices : public client::CPlayer_ObserverServices
    {
    public:
        CEntityHandle m_hLastObserverTarget; // 0x58        
        Vector m_vecObserverInterpolateOffset; // 0x5c        
        Vector m_vecObserverInterpStartPos; // 0x68        
        float m_flObsInterp_PathLength; // 0x74        
        [[maybe_unused]] std::uint8_t pad_0x78[0x8]; // 0x78
        Quaternion m_qObsInterp_OrientationStart; // 0x80        
        Quaternion m_qObsInterp_OrientationTravelDir; // 0x90        
        client::ObserverInterpState_t m_obsInterpState; // 0xa0        
        bool m_bObserverInterpolationNeedsDeferredSetup; // 0xa4        
        [[maybe_unused]] std::uint8_t pad_0xa5[0xb];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSObserver_ObserverServices because it is not a standard-layout class
    static_assert(sizeof(CCSObserver_ObserverServices) == 0xb0);
};
