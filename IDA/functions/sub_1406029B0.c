//----- (00000001406029B0) ----------------------------------------------------
__int64 __fastcall sub_1406029B0(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	_DWORD* v4; // rdx
	unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 64);
	if (v2 && *(_QWORD*)(v2 + 72) == *(_QWORD*)a2
		|| (v2 = *(_QWORD*)(a1 + 72)) != 0 && *(_QWORD*)(v2 + 72) == *(_QWORD*)a2)
	{
		if (sub_14079EE60(v2, a2 + 16, &v6))
		{
			v4 = *(_DWORD**)(*(_QWORD*)(v2 + 88) + 8 * v6);
			if (v4)
			{
				v4[77] = *(_DWORD*)(a2 + 32);
				v4[78] = *(_DWORD*)(a2 + 36);
				v4[79] = *(_DWORD*)(a2 + 40);
				v4[80] = *(_DWORD*)(a2 + 44);
				v4[81] = *(_DWORD*)(a2 + 48);
				v4[82] = *(_DWORD*)(a2 + 52);
				v4[83] = *(_DWORD*)(a2 + 56);
				v4[84] = *(_DWORD*)(a2 + 60);
				v4[85] = *(_DWORD*)(a2 + 64);
				v4[86] = *(_DWORD*)(a2 + 68);
				v4[87] = *(_DWORD*)(a2 + 72);
				v4[88] = *(_DWORD*)(a2 + 76);
				v4[89] = *(_DWORD*)(a2 + 80);
				v4[90] = *(_DWORD*)(a2 + 84);
				v4[91] = *(_DWORD*)(a2 + 88);
				v4[92] = *(_DWORD*)(a2 + 92);
			}
		}
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "MatchingPenaltyUpdated", &unk_1409D128B);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

