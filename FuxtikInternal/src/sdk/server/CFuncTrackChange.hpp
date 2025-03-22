#pragma once
#include "source2sdk/server/CFuncPlatRot.hpp"
#include "source2sdk/server/TRAIN_CODE.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CFuncTrackTrain;
};

namespace source2sdk::server
{
    class CPathTrack;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x818
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CFuncTrackChange : public server::CFuncPlatRot
    {
    public:
        server::CPathTrack* m_trackTop; // 0x7d8        
        server::CPathTrack* m_trackBottom; // 0x7e0        
        server::CFuncTrackTrain* m_train; // 0x7e8        
        CUtlSymbolLarge m_trackTopName; // 0x7f0        
        CUtlSymbolLarge m_trackBottomName; // 0x7f8        
        CUtlSymbolLarge m_trainName; // 0x800        
        server::TRAIN_CODE m_code; // 0x808        
        int32_t m_targetState; // 0x80c        
        int32_t m_use; // 0x810        
        [[maybe_unused]] std::uint8_t pad_0x814[0x4];
        
        // Datamap fields:
        // void CFuncTrackChangeFind; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncTrackChange because it is not a standard-layout class
    static_assert(sizeof(CFuncTrackChange) == 0x818);
};
