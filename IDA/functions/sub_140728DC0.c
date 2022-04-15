#include "../winhttp.h"

//----- (0000000140728DC0) ----------------------------------------------------
__int64 __fastcall sub_140728DC0(__int64 a1, _DWORD* a2)
{
	__int64 v2; // r9
	int* v4; // rax
	int v5; // r8d
	int v6; // eax
	int v7; // ecx
	unsigned int* v8; // r14
	__int64 v9; // rdi
	__int64 v10; // rbp
	__int64 v11; // rax
	__int64 v12; // rsi
	__int64 v13; // rax
	int* v14; // rax
	unsigned int v15; // edx
	__int64 v16; // rcx
	int v17; // eax
	int* v18; // rax
	int v19; // edx
	int v20; // ecx
	int v21; // eax
	unsigned int v22; // edx
	unsigned int v23; // eax
	__int64 v25; // [rsp+20h] [rbp-48h]
	__int64 v26; // [rsp+28h] [rbp-40h]
	__int64 v27; // [rsp+30h] [rbp-38h]
	__int64 v28; // [rsp+38h] [rbp-30h]
	__int64 v29; // [rsp+40h] [rbp-28h]
	__int64 v30; // [rsp+48h] [rbp-20h]
	int v31; // [rsp+70h] [rbp+8h] BYREF

	v2 = qword_140C635F0;
	*(_DWORD*)(a1 + 24) = -1;
	v4 = (int*)qword_140C63750;
	*(_QWORD*)(a1 + 72) = *(_QWORD*)(*(_QWORD*)(v2 + 5584) + 248i64);
	v5 = *v4;
	v6 = dword_140C546F0;
	if (v5 < dword_140C546F0)
		v6 = v5;
	if (byte_140C54700[v6])
		*(_QWORD*)(a1 + 80) = 0i64;
	else
		*(_QWORD*)(a1 + 80) = *(_QWORD*)(*(_QWORD*)(v2 + 5584) + 240i64);
	v7 = *(_DWORD*)(a1 + 20) - 1;
	if (*(_DWORD*)(a1 + 20) == 1)
	{
		if (!*a2 || *a2 == 3)
		{
			sub_14072A9F0((_DWORD*)a1, a2);
			*(_DWORD*)(a1 + 16) = 1;
		}
		return 0i64;
	}
	if (v7 != 4 || *a2 != 3)
		return 0i64;
	sub_14072A9F0((_DWORD*)a1, a2);
	if (dword_140C4B548)
		sub_14072AFA0(a1, &dword_140C4B548);
	v8 = (unsigned int*)(a1 + 44);
	v9 = 0i64;
	v10 = 3i64;
	v25 = 0i64;
	v26 = 0i64;
	v27 = 0i64;
	v28 = 0i64;
	v29 = 0i64;
	v30 = 0i64;
	do
	{
		v11 = sub_1401E8C20(*v8);
		v12 = v11;
		if (v11)
		{
			v31 = *(_DWORD*)(v11 + 72);
			if (v31)
			{
				v14 = sub_140484600(qword_140C65918 + 80, &v31);
				v13 = sub_1404846C0((__int64)v14);
			}
			else
			{
				v13 = 0i64;
			}
			v15 = *(_DWORD*)(v12 + 8);
			v16 = qword_140C658F0;
			*(__int64*)((char*)&v25 + v9) = v13;
			*(__int64*)((char*)&v28 + v9) = (__int64)sub_1400B5DF0(v16, v15, 0i64);
		}
		if (!*(__int64*)((char*)&v25 + v9))
			*(__int64*)((char*)&v25 + v9) = *(_QWORD*)(a1 + 1200);
		++v8;
		v9 += 8i64;
		--v10;
	} while (v10);
	if (*(_DWORD*)(a1 + 32) == 2)
		sub_14078A400(*(_QWORD*)(a1 + 1272));
	if (*(_DWORD*)(a1 + 36) == 2)
		sub_14078A400(*(_QWORD*)(a1 + 1272) + 152i64);
	if (*(_DWORD*)(a1 + 40) == 2)
		sub_14078A400(*(_QWORD*)(a1 + 1272) + 304i64);
	v17 = sub_14078A1A0(*(_QWORD*)(a1 + 1272), v25, v28, 1);
	if (v17 >= 0)
	{
		v17 = sub_14078A1A0(*(_QWORD*)(a1 + 1272) + 152i64, v26, v29, 1);
		if (v17 >= 0)
			v17 = sub_14078A1A0(*(_QWORD*)(a1 + 1272) + 304i64, v27, v30, 1);
	}
	*(_DWORD*)(a1 + 1260) = 0;
	if (v17 >= 0)
	{
		*(_DWORD*)(a1 + 20) = 6;
		return 0i64;
	}
	else
	{
		sub_140729D70((_QWORD*)a1);
		v18 = (int*)qword_140C63750;
		v19 = dword_140C636A8;
		*(_DWORD*)(a1 + 20) = 4;
		v20 = *v18;
		v21 = dword_140C54730;
		if (v20 < dword_140C54730)
			v21 = v20;
		v22 = dword_140C54740[v21] + v19;
		v23 = *(_DWORD*)(a1 + 1192);
		if (v23 == -1)
		{
			*(_DWORD*)(a1 + 1192) = v22;
			return 0i64;
		}
		else
		{
			if (v23 < v22)
				v23 = v22;
			*(_DWORD*)(a1 + 1192) = v23;
			return 0i64;
		}
	}
}
// 140C4B548: using guessed type int dword_140C4B548;
// 140C546F0: using guessed type int dword_140C546F0;
// 140C54700: using guessed type _BYTE byte_140C54700[32];
// 140C54730: using guessed type int dword_140C54730;
// 140C54740: using guessed type int dword_140C54740[16];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65918: using guessed type __int64 qword_140C65918;

