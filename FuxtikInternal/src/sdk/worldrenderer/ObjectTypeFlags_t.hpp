#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
    // Enumerator count: 13
    // Alignment: 4
    // Size: 0x4
    enum class ObjectTypeFlags_t : std::uint32_t
    {
        OBJECT_TYPE_NONE = 0x0,
        OBJECT_TYPE_MODEL = 0x8,
        OBJECT_TYPE_BLOCK_LIGHT = 0x10,
        OBJECT_TYPE_NO_SHADOWS = 0x20,
        OBJECT_TYPE_WORLDSPACE_TEXURE_BLEND = 0x40,
        OBJECT_TYPE_DISABLED_IN_LOW_QUALITY = 0x80,
        OBJECT_TYPE_NO_SUN_SHADOWS = 0x100,
        OBJECT_TYPE_RENDER_WITH_DYNAMIC = 0x200,
        OBJECT_TYPE_RENDER_TO_CUBEMAPS = 0x400,
        OBJECT_TYPE_MODEL_HAS_LODS = 0x800,
        OBJECT_TYPE_OVERLAY = 0x2000,
        OBJECT_TYPE_PRECOMPUTED_VISMEMBERS = 0x4000,
        OBJECT_TYPE_STATIC_CUBE_MAP = 0x8000,
    };
};
