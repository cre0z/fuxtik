#include <array>
#include "skinchanger.h"
#include "../cheats.h"
#include "../offsets.h"

constexpr const int GetWeaponPaint(const short& itemDef)
{
	switch (itemDef) {
	case 1:
		return 711; // deagle
	case 4:
		return 38; // glock
	case 7:
		return 490; // ak
	case 9:
		return 344; // awp
	case 61:
		return 653; // usp
	default:
		return 0;
	}
}

void Cheats::Visuals::Skinchanger()
{
	auto localPlayer = *(uintptr_t*)(Cheats::client + Offsets::dwLocalPlayerPawn);
	auto weapons = *(std::array<unsigned long, 8>*)(localPlayer + Offsets::m_hMyWeapons);

	for (const auto& handle : weapons)
	{
		const auto& weapon = (uintptr_t*)(Cheats::client + Offsets::dwEntityList + (handle & 0xFFF) * 0x10);
		if (!weapon)
			continue;

		if (const auto paint = GetWeaponPaint(*(short*)(weapon + Offsets::m_iItemDefinitionIndex)))
		{
			const bool shouldUpdate = *(int32_t*)(weapon + Offsets::m_nFallbackPaintKit) != paint;

			*(int32_t*)(weapon + Offsets::m_iItemIDHigh) = -1;
			*(int32_t*)(weapon + Offsets::m_nFallbackPaintKit) = paint;
			*(float*)(weapon + Offsets::m_flFallbackWear) = 0.1f;

			if (shouldUpdate)
				*(int32_t*)(Cheats::engine + Offsets::dwNetworkGameClient + 0x258) = -1;
		}
	}
}