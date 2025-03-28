#include "visuals.h"
#include "../../config/config.h"

void Cheats::Visuals::ESP()
{
	float(*ViewMatrix)[4][4] = (float(*)[4][4])(Cheats::client + Offsets::dwViewMatrix);

	auto localPawn = *(uintptr_t*)(Cheats::client + Offsets::dwLocalPlayerPawn);

	if (!localPawn)
		return;

	auto localTeam = *(int*)(localPawn + Offsets::m_iTeamNum);
	auto entityList = *(uintptr_t*)(Cheats::client + Offsets::dwEntityList);

	if (!entityList)
		return;

	for (int i = 1; i < 64; i++) {
		uintptr_t list_entry1 = *(uintptr_t*)(entityList + (8 * (i & 0x7FFF) >> 9) + 16);
		if (!list_entry1)
			continue;

		uintptr_t playerController = *(uintptr_t*)(list_entry1 + 120 * (i & 0x1FF));
		if (!playerController)
			continue;

		uint32_t playerPawn = *(uint32_t*)(playerController + Offsets::m_hPlayerPawn);
		if (!playerPawn)
			continue;

		uintptr_t list_entry2 = *(uintptr_t*)(entityList + 0x8 * ((playerPawn & 0x7FFF) >> 9) + 16);
		if (!list_entry2)
			continue;

		uintptr_t pCSPlayerPawnPtr = *(uintptr_t*)(list_entry2 + 120 * (playerPawn & 0x1FF));
		if (!pCSPlayerPawnPtr)
			continue;

		int health = *(int*)(pCSPlayerPawnPtr + Offsets::m_iHealth);
		if (!health || health > 100)
			continue;

		int team = *(int*)(pCSPlayerPawnPtr + Offsets::m_iTeamNum);
		if (team == localTeam && Config::DeathmatchMode != true)
			continue;

		Vec3 feetpos = *(Vec3*)(pCSPlayerPawnPtr + Offsets::m_vOldOrigin);
		Vec3 headpos = { feetpos.x + 0.0f, feetpos.y + 0.0f, feetpos.z + 72.0f };

		Vec2 feet, head;

		if (feetpos.WorldToScreen(feet, ViewMatrix) && headpos.WorldToScreen(head, ViewMatrix)) {
			float height = (feet.y - head.y) * 1.25f;
			float width = height / 2.5f;

			float x = feet.x - width / 2.0f;
			float y = head.y;

			ImGui::GetBackgroundDrawList()->AddRect({x, y}, {x + width, y + height}, ImColor(255,255,255));
		}
	}
}
