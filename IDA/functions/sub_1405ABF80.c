#include "../winhttp.h"

//----- (00000001405ABF80) ----------------------------------------------------
__int64 __fastcall sub_1405ABF80(__int64 a1)
{
	int v2; // edi
	__int64 result; // rax
	unsigned int v4; // esi
	int v5; // eax
	int v6; // ecx
	__int64 v7; // rcx
	unsigned int v8; // esi
	int v9; // eax
	int v10; // ecx
	__int64 v11; // rcx
	unsigned int v12; // esi
	int v13; // eax
	int v14; // ecx
	__int64 v15; // rcx
	__int64 v16; // r8
	unsigned int v17; // edx
	_DWORD* v18; // rcx
	__int64 v19; // rcx
	unsigned int v20; // r9d
	__int64 v21; // rcx
	unsigned int v22; // r9d
	__int64 v23; // rcx
	unsigned int v24; // esi
	int v25; // eax
	int v26; // ecx
	__int64 v27; // rcx
	unsigned int v28; // r9d
	__int64 v29; // rcx
	char v30[176]; // [rsp+70h] [rbp-B8h] BYREF

	v2 = 0;
	result = sub_140205FA0(*(_DWORD*)(a1 + 184));
	if (result)
		v2 = *(_DWORD*)(result + 4);
	v4 = *(_DWORD*)(a1 + 88);
	if (v4)
	{
		result = sub_140207D60(v4);
		if (result)
		{
			v5 = *(_DWORD*)(result + 24);
			v6 = 0;
			if ((v5 & 0x340) != 0)
				v6 = v5;
			sub_1404BCB00((__int64)v30, a1 + 8, 0i64, v4, 0, v6, 0, 0, 4, 0, 0i64, 0i64, 0);
			result = sub_1404C8E20(v7, *(_DWORD*)(a1 + 188), v2, (__int64)v30, 0);
		}
	}
	v8 = *(_DWORD*)(a1 + 92);
	if (v8)
	{
		result = sub_140207D60(v8);
		if (result)
		{
			v9 = *(_DWORD*)(result + 24);
			v10 = 0;
			if ((v9 & 0x340) != 0)
				v10 = v9;
			sub_1404BCB00((__int64)v30, a1 + 8, 0i64, v8, 0, v10, 0, 0, 4, 0, 0i64, 0i64, 0);
			result = sub_1404C8E20(v11, *(_DWORD*)(a1 + 188), v2, (__int64)v30, 0);
		}
	}
	v12 = *(_DWORD*)(a1 + 96);
	if (v12)
	{
		result = sub_140207D60(v12);
		if (result)
		{
			v13 = *(_DWORD*)(result + 24);
			v14 = 0;
			if ((v13 & 0x340) != 0)
				v14 = v13;
			sub_1404BCB00((__int64)v30, a1 + 8, 0i64, v12, 0, v14, 0, 0, 4, 0, 0i64, 0i64, 0);
			result = sub_1404C8E20(v15, *(_DWORD*)(a1 + 188), v2, (__int64)v30, 0);
		}
	}
	v16 = *(_QWORD*)(a1 + 232);
	if (v16 && (v17 = *(_DWORD*)(a1 + 272), result = 0i64, v17))
	{
		v18 = (_DWORD*)(v16 + 4);
		while (*v18 != v2)
		{
			result = (unsigned int)(result + 1);
			v18 += 48;
			if ((unsigned int)result >= v17)
				goto LABEL_23;
		}
		v19 = v16 + 192 * result;
	}
	else
	{
	LABEL_23:
		v19 = 0i64;
	}
	v20 = *(_DWORD*)(a1 + 80);
	if (!v20 && !*(_DWORD*)(a1 + 76) && !*(_DWORD*)(a1 + 72) && !*(_DWORD*)(a1 + 84))
		return sub_1405A9980(v19);
	if (v19)
	{
		result = (unsigned int)(*(_DWORD*)(v19 + 184) - 2);
		if ((unsigned int)result <= 1)
			return sub_1405A9980(v19);
	}
	if (v20)
	{
		sub_1404BCB00((__int64)v30, a1 + 8, 0i64, v20, 0, 0, 0, 0, 1, 0, 0i64, 0i64, 0);
		result = sub_1404C8E20(v21, *(_DWORD*)(a1 + 188), v2, (__int64)v30, 0);
	}
	v22 = *(_DWORD*)(a1 + 76);
	if (v22)
	{
		sub_1404BCB00((__int64)v30, a1 + 8, 0i64, v22, 0, 0, 0, 0, 2, 0, 0i64, 0i64, 0);
		result = sub_1404C8E20(v23, *(_DWORD*)(a1 + 188), v2, (__int64)v30, 0);
	}
	v24 = *(_DWORD*)(a1 + 72);
	if (v24)
	{
		result = sub_140207D60(v24);
		if (result)
		{
			v25 = *(_DWORD*)(result + 24);
			v26 = 0;
			if ((v25 & 0x340) != 0)
				v26 = v25;
			sub_1404BCB00((__int64)v30, a1 + 8, 0i64, v24, 0, v26, 0, 0, 4, 0, 0i64, 0i64, 0);
			result = sub_1404C8E20(v27, *(_DWORD*)(a1 + 188), v2, (__int64)v30, 0);
		}
	}
	v28 = *(_DWORD*)(a1 + 84);
	if (v28)
	{
		sub_1404BCB00((__int64)v30, a1 + 8, 0i64, v28, 0, 0, 0, 0, 3, 0, 0i64, 0i64, 0);
		return sub_1404C8E20(v29, *(_DWORD*)(a1 + 188), v2, (__int64)v30, 0);
	}
	return result;
}
// 1405AC021: variable 'v7' is possibly undefined
// 1405AC096: variable 'v11' is possibly undefined
// 1405AC10B: variable 'v15' is possibly undefined
// 1405AC1D8: variable 'v21' is possibly undefined
// 1405AC233: variable 'v23' is possibly undefined
// 1405AC2A8: variable 'v27' is possibly undefined
// 1405AC303: variable 'v29' is possibly undefined

