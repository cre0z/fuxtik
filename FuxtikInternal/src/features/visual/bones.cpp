#include "bones.h"

#include <iostream>

#include "visuals.h"
#include "../../config/config.h"
#include "../../math/math.h"
#include "../../math/vector.h"

BoneConnection boneConnections[] = {
	BoneConnection(6, 5),
	BoneConnection(5, 4),
	BoneConnection(4, 0),
	BoneConnection(4, 8),
	BoneConnection(8, 9),
	BoneConnection(9, 11),
	BoneConnection(4, 13),
	BoneConnection(13, 14),
	BoneConnection(14, 16),
	BoneConnection(4, 2),
	BoneConnection(0, 22),
	BoneConnection(0, 25),
	BoneConnection(22, 23),
	BoneConnection(23, 24),
	BoneConnection(25, 26),
	BoneConnection(26, 27)
};

void Cheats::Visuals::BonesESP()
{
	float(*ViewMatrix)[4][4] = (float(*)[4][4])(Cheats::client + Offsets::dwViewMatrix);

	auto localPawn = *(uintptr_t*)(Cheats::client + Offsets::dwLocalPlayerPawn);
	if (!localPawn)
		return;

	uintptr_t localGameScene = *(uintptr_t*)(localPawn + Offsets::C_BaseEntity::m_pGameSceneNode);

	Vec3 origin = *(Vec3*)(localPawn + Offsets::m_vOldOrigin);
	uintptr_t localBoneArray = *(uintptr_t*)(localGameScene + Offsets::CGameSceneNode::CSkeletonInstance::m_modelState + 0x80);
	Vector localEyePos = *(Vector*)(localBoneArray + 6 * 32);

	auto localTeam = *(int*)(localPawn + Offsets::m_iTeamNum);
	auto entityList = *(uintptr_t*)(Cheats::client + Offsets::dwEntityList);

	if (!entityList) {
#ifdef _DEBUG
		std::cout << "Entity list not found!\n";
#endif
		return;
	}

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

		uintptr_t playerGameScene = *(uintptr_t*)(pCSPlayerPawnPtr + Offsets::C_BaseEntity::m_pGameSceneNode);
		uintptr_t playerBoneArray = *(uintptr_t*)(playerGameScene + Offsets::CGameSceneNode::CSkeletonInstance::m_modelState + 0x80);

		int health = *(int*)(pCSPlayerPawnPtr + Offsets::m_iHealth);
		if (!health || health > 100)
			continue;

		int team = *(int*)(pCSPlayerPawnPtr + Offsets::m_iTeamNum);
		if (team == localTeam && Config::DeathmatchMode != true)
			continue;

		for (int i = 0; i < sizeof(boneConnections) / sizeof(boneConnections[0]); i++)
		{
			int bone1 = boneConnections[i].bone1;
			int bone2 = boneConnections[i].bone2;

			Vec3 vectorBone1 = *(Vec3*)(playerBoneArray + bone1 * 32);
			Vec3 vectorBone2 = *(Vec3*)(playerBoneArray + bone2 * 32);

			Vec2 vb1, vb2;

			if (vectorBone1.WorldToScreen(vb1, ViewMatrix) &&
				vectorBone2.WorldToScreen(vb2, ViewMatrix))
			{
				ImGui::GetBackgroundDrawList()->AddLine({ vb1.x, vb1.y }, { vb2.x, vb2.y }, ImColor(255, 255, 255), 1.5f);
			}
		}
	}
}
