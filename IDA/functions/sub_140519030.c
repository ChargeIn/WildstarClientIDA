#include "../winhttp.h"

//----- (0000000140519030) ----------------------------------------------------
__int64 __fastcall sub_140519030(__int64 a1, _QWORD* a2)
{
	__int64 v3; // rdx
	unsigned __int64 v4; // r9
	unsigned int v6; // r8d
	__int64 v7; // rdx
	__int64 v8; // rax
	__int64 v9; // rcx
	unsigned __int64 v10; // rbp
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rax
	unsigned int* v14; // rdi
	unsigned int v15; // ecx
	int v16; // esi
	__int64 v17; // r14
	__int64 v18; // r8
	__int64 v19; // rdx

	v3 = qword_140C63650;
	*(_QWORD*)(a1 + 16) = -1i64;
	v4 = *(_QWORD*)(v3 + 768);
	v6 = 0;
	if (v4)
	{
		v7 = *(_QWORD*)(v3 + 760);
		v8 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v7 + 8 * v8) + 400i64) != a2)
		{
			v8 = ++v6;
			if (v6 >= v4)
				goto LABEL_5;
		}
		v9 = *(_QWORD*)(v7 + 8i64 * v6);
	}
	else
	{
	LABEL_5:
		v9 = 0i64;
	}
	v10 = (int)(sub_1400F26A0(v9 + 384, 3) - 1);
	v11 = *(_QWORD*)(qword_140C635F0 + 5584);
	if (v10 >= *(_QWORD*)(v11 + 112) || (v12 = *(_QWORD*)(v11 + 104) + (v10 << 6)) == 0)
		sub_140056570(a2, 3u, "must be a valid account item");
	v13 = sub_1401E8C20(*(_DWORD*)(v12 + 8));
	v14 = (unsigned int*)v13;
	if (!v13 || *(_DWORD*)(v13 + 28))
		sub_140056570(a2, 3u, "must be a valid account item");
	v15 = *(_DWORD*)(v13 + 12);
	v16 = 1;
	if (v15)
	{
		v17 = sub_1401FE020(v15);
		if (v17)
		{
			if ((unsigned int)sub_1403D2140(qword_140C65898, v14[3]) >= *(_DWORD*)(v17 + 4))
				v16 = 0;
		}
	}
	v18 = v14[12];
	if (v14[6])
		v16 = 0;
	if ((_DWORD)v18
		&& (v19 = *(_QWORD*)(qword_140C65898 + 120)) != 0
		&& !(*(unsigned int(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
			+ 24i64))(
				qword_140C659A0,
				v19,
				v18,
				0i64,
				0i64,
				0)
		|| !v16)
	{
		sub_140056570(a2, 3u, "must be a valid account item");
	}
	*(_QWORD*)(a1 + 16) = v10;
	return 0i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;

