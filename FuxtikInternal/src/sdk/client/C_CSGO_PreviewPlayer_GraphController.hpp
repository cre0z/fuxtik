#pragma once
#include "source2sdk/client/CAnimGraphControllerBase.hpp"
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
    // Size: 0x108
    // Has VTable
    #pragma pack(push, 1)
    class C_CSGO_PreviewPlayer_GraphController : public client::CAnimGraphControllerBase
    {
    public:
        // m_pszCharacterMode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszCharacterMode;
        char m_pszCharacterMode[0x20]; // 0x18        
        // m_pszTeamPreviewVariant has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszTeamPreviewVariant;
        char m_pszTeamPreviewVariant[0x20]; // 0x38        
        // m_pszTeamPreviewPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszTeamPreviewPosition;
        char m_pszTeamPreviewPosition[0x20]; // 0x58        
        // m_pszEndOfMatchCelebration has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszEndOfMatchCelebration;
        char m_pszEndOfMatchCelebration[0x20]; // 0x78        
        // m_nTeamPreviewRandom has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<int32_t> m_nTeamPreviewRandom;
        char m_nTeamPreviewRandom[0x18]; // 0x98        
        // m_pszWeaponState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszWeaponState;
        char m_pszWeaponState[0x20]; // 0xb0        
        // m_pszWeaponType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszWeaponType;
        char m_pszWeaponType[0x20]; // 0xd0        
        // m_bCT has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bCT;
        char m_bCT[0x18]; // 0xf0        
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("C_CSGO_PreviewPlayer_GraphController")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("C_CSGO_PreviewPlayer_GraphController")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CSGO_PreviewPlayer_GraphController because it is not a standard-layout class
    static_assert(sizeof(C_CSGO_PreviewPlayer_GraphController) == 0x108);
};
