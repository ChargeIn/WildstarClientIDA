//----- (00000001405C3D30) ----------------------------------------------------
__int64 __fastcall sub_1405C3D30(__int64 a1, int* a2)
{
	__int64 v2; // rbx
	__int64 v4; // rax
	int v5; // eax
	__int64 v6; // rcx
	__int16* v7; // rax
	signed int v9; // [rsp+20h] [rbp-18h]

	v2 = qword_140C65B98;
	sub_1405C0760(qword_140C65B98, a2[1], 0i64, 16, v9);
	switch (*a2)
	{
	case 15:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "MatchLeft", &unk_1409D12A2);
		break;
	case 22:
		*(_DWORD*)(v2 + 164) = 0;
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "MatchingRoleCheckCanceled", &unk_1409D1276);
		break;
	case 23:
		v4 = qword_140C65898;
		*(_DWORD*)(v2 + 164) = 0;
		*(_DWORD*)(v4 + 1368) = 1;
		*(_QWORD*)(v2 + 168) = 16i64;
		*(_QWORD*)(v2 + 176) = 0i64;
		*(_DWORD*)(v2 + 184) = 0;
		sub_140195D70(v2 + 192);
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "MatchingCancelPendingGame", &unk_1409D1256);
		break;
	}
	v5 = sub_1405C42C0(*a2);
	if (v5)
	{
		v7 = sub_14034BDD0(v6, v5);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v7, 0, 0i64);
	}
	return 0i64;
}
// 1405C3D58: variable 'v9' is possibly undefined
// 1405C3E02: variable 'v6' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C65B98: using guessed type __int64 qword_140C65B98;

