#pragma once
#include "source2sdk/client/CPlayer_ViewModelServices.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseViewModel;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x50
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CHandle< CBaseViewModel > m_hViewModel"
    #pragma pack(push, 1)
    class CCSPlayer_ViewModelServices : public client::CPlayer_ViewModelServices
    {
    public:
        // metadata: MNetworkEnable
        // m_hViewModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseViewModel> m_hViewModel[3];
        char m_hViewModel[0xc]; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x4c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayer_ViewModelServices because it is not a standard-layout class
    static_assert(sizeof(CCSPlayer_ViewModelServices) == 0x50);
};
