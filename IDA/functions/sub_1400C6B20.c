#include "../winhttp.h"

//----- (00000001400C6B20) ----------------------------------------------------
void __fastcall sub_1400C6B20(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rcx
	_QWORD* v12; // rax
	__int64 v13; // r10
	__int64 v14; // rdx
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64(__fastcall * *v17)(); // [rsp+20h] [rbp-28h] BYREF
	int v18; // [rsp+28h] [rbp-20h]
	__int64 v19; // [rsp+30h] [rbp-18h]

	v2 = *(_QWORD*)(a1 + 32);
	if (v2)
		sub_1400E9260(v2, a1);
	if ((*(_BYTE*)(a1 + 28) & 1) != 0)
		sub_1400C85F0((_QWORD*)a1, (__int64)&off_140A14920, a1);
	v3 = *(_QWORD*)(a1 + 32);
	if (v3 && *(_QWORD*)(v3 + 2880) == a1)
		sub_1400E8BF0(v3);
	v4 = *(_QWORD*)(a1 + 16);
	*(_BYTE*)(a1 + 30) &= ~1u;
	if (v4 && (*(_BYTE*)(v4 + 30) & 1) != 0)
		sub_1400CB660(v4);
	v5 = *(_QWORD*)(a1 + 16);
	if (v5)
	{
		v6 = *(_QWORD*)(v5 + 16);
		*(_BYTE*)(v5 + 29) |= 1u;
		if (v6)
			sub_1400C8870(v6);
	}
	v7 = *(_QWORD*)(a1 + 16);
	if (v7 && *(_QWORD*)(v7 + 600) == a1)
		*(_QWORD*)(v7 + 600) = 0i64;
	v8 = *(_QWORD*)(a1 + 32);
	if (v8)
		sub_1400E9490(v8, *(_DWORD*)(a1 + 24));
	sub_1400C6D00(a1);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 536i64))(a1);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 544i64))(a1);
	v10 = *(_QWORD*)(a1 + 832);
	if (v10)
		sub_1400579E0(v10, v9, *(_DWORD*)(a1 + 824));
	v11 = 0i64;
	v18 = -2;
	v17 = off_140B56A08;
	v19 = 0i64;
	if ((__int64(__fastcall***)())(a1 + 816) != &v17)
	{
		*(_QWORD*)(a1 + 832) = 0i64;
		if (sub_1400F9C90((__int64)&v17))
		{
			sub_1400579E0(*(_QWORD*)(a1 + 832), v9, *(_DWORD*)(a1 + 824));
			v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v19 + 32) + 160i64), v18);
			v14 = *(_QWORD*)(v13 + 16);
			*(_QWORD*)v14 = *v12;
			*(_DWORD*)(v14 + 8) = *((_DWORD*)v12 + 2);
			*(_QWORD*)(v13 + 16) += 16i64;
			*(_DWORD*)(a1 + 824) = sub_1400578C0(*(_QWORD*)(a1 + 832));
		}
		v11 = v19;
	}
	v17 = off_140B56A08;
	if (v11)
		sub_1400579E0(v11, v9, v18);
	*(_BYTE*)(a1 + 28) &= ~1u;
	v15 = *(_QWORD*)(a1 + 16);
	if (v15)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	v16 = *(_QWORD*)(a1 + 448);
	if (v16)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
		*(_QWORD*)(a1 + 448) = 0i64;
	}
}
// 1400C6C09: variable 'v9' is possibly undefined
// 1400C6C74: variable 'v13' is possibly undefined
// 140A14920: using guessed type char *off_140A14920;
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

