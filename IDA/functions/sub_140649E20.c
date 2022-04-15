//----- (0000000140649E20) ----------------------------------------------------
__int64 __fastcall sub_140649E20(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	unsigned __int64* v5; // rdx
	unsigned __int64 v6; // r8
	__int64 v8[38]; // [rsp+20h] [rbp-E0h]

	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
	{
		v6 = 0i64;
		v5 = (unsigned __int64*)&unk_1409D143B;
		goto LABEL_11;
	}
	v8[0] = (__int64)"NonPlayer";
	v8[1] = (__int64)"Chest";
	v8[2] = (__int64)"Destructible";
	v8[3] = (__int64)"Vehicle";
	v8[4] = (__int64)"Door";
	v8[5] = (__int64)"Harvest";
	v8[6] = (__int64)"Corpse";
	v8[7] = (__int64)"Mount";
	v8[8] = (__int64)"Collectible";
	v8[9] = (__int64)"Taxi";
	v8[10] = (__int64)"Simple";
	v8[11] = (__int64)"Platform";
	v8[12] = (__int64)"Mailbox";
	v8[13] = (__int64)"Turret";
	v8[14] = (__int64)"InstancePortal";
	v8[15] = (__int64)"Plug";
	v8[16] = (__int64)"Residence";
	v8[17] = (__int64)"StructuredPlug";
	v8[18] = (__int64)"PinataLoot";
	v8[19] = (__int64)"BindPoint";
	v8[20] = (__int64)"Player";
	v8[21] = (__int64)"HiddenSpell";
	v8[22] = (__int64)"Trigger";
	v8[23] = (__int64)"Ghost";
	v8[24] = (__int64)&unk_1409F42E4;
	v8[25] = (__int64)"Esper Pet";
	v8[26] = (__int64)"World object";
	v8[27] = (__int64)"Scanner";
	v8[28] = (__int64)"Camera";
	v8[29] = (__int64)"Trap";
	v8[30] = (__int64)"DestructibleDoor";
	v8[31] = (__int64)"Pickup";
	v8[32] = (__int64)"SimpleCollidable";
	v8[33] = (__int64)"HousingMannequin";
	v8[34] = (__int64)"HousingHarvestPlug";
	v8[35] = (__int64)"HousingPlant";
	v8[36] = (__int64)"Lockbox";
	v4 = *(int*)(v3 + 128);
	if ((unsigned int)v4 > 0x24)
	{
		v6 = 7i64;
		v5 = (unsigned __int64*)"Unknown";
	LABEL_11:
		sub_140058710(a1, v5, v6);
		return 1i64;
	}
	v5 = (unsigned __int64*)v8[v4];
	if (v5)
	{
		v6 = -1i64;
		do
			++v6;
		while (*((_BYTE*)v5 + v6));
		goto LABEL_11;
	}
	*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

