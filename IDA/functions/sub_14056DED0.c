//----- (000000014056DED0) ----------------------------------------------------
__int64 __fastcall sub_14056DED0(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r10
	unsigned int v3; // r9d
	__int64 v5; // rax
	__int64 v7; // r8
	__int64 v8; // rdi
	int v9; // esi
	__int64 v10; // rbp
	__int64 v11; // rax
	__int64 result; // rax
	__int64 v13; // [rsp+50h] [rbp+8h]

	v2 = *(_QWORD*)(a1 + 16);
	v3 = *a2;
	v5 = *(_QWORD*)(v2 + 8);
	v7 = v2;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < v3)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v7 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v7 == v2 || (v13 = v7, v3 < *(_DWORD*)(v7 + 32)))
		v13 = *(_QWORD*)(a1 + 16);
	if (v13 == v2)
		return 0i64;
	v8 = *(_QWORD*)(v13 + 40);
	if (!v8)
		return 0i64;
	v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 56i64))(v8);
	if (!(unsigned int)sub_14079D700((__int64*)v8, a2[1], a2[2], a2[3], *(_DWORD*)(a1 + 80)))
		return 0i64;
	if (!a2[1])
		return v9 == 0;
	if ((unsigned int)sub_140573130(a1, *(_QWORD*)(qword_140C65898 + 120)))
	{
		sub_140437A10((_QWORD*)qword_140C658D8, 0x4Cu, 0, 0i64, 0, 0, 1);
		v10 = *(_QWORD*)(qword_140C65898 + 29504);
		v11 = sub_140491BD0(qword_140C65968, *(_DWORD*)(**(_QWORD**)(v8 + 48) + 32i64));
		if (v11)
			sub_1400EA3E0(v10, "PlayerPathRewardAvailable", byte_1409ECD2C, v11);
	}
	else if (!v9)
	{
		sub_1400EA3E0(
			*(_QWORD*)(qword_140C65898 + 29504),
			"PlayerPathMissionCompleteSound",
			byte_1409ECDAC,
			*(_QWORD*)(v8 + 48));
	}
	result = 2i64;
	if (v9)
		return 0i64;
	return result;
}
// 1409ECD2C: using guessed type _BYTE byte_1409ECD2C[4];
// 1409ECDAC: using guessed type _BYTE byte_1409ECDAC[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C65968: using guessed type __int64 qword_140C65968;

