#include "../winhttp.h"

//----- (0000000140657550) ----------------------------------------------------
__int64 __fastcall sub_140657550(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 result; // rax
	unsigned int v6; // ecx
	__int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	_QWORD* v10; // rax
	__int64 v11; // rdx
	int v12; // r10d
	_QWORD* v13; // rax
	__int64 v14; // r10
	__int64 v15; // rdx
	int v16; // r11d
	_QWORD* v17; // rax
	__int64 v18; // r10
	__int64 v19; // rdx

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
		sub_140056570(a1, 1u, "invalid unit");
	v4 = *(_QWORD*)(v3 + 24);
	if (v4)
	{
		if (*(_DWORD*)(v3 + 128) == 14
			&& (v6 = *(_DWORD*)(v4 + 332)) != 0
			&& (v7 = sub_1402092A0(v6)) != 0
			&& *(_DWORD*)(v7 + 8)
			&& *(_DWORD*)(v7 + 12))
		{
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v8 = a1[2];
			v9 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v8 + 8) = 5;
			*(_QWORD*)v8 = v9;
			a1[2] += 16i64;
			LODWORD(v8) = sub_1400578C0((__int64)a1);
			v10 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
			v11 = a1[2];
			*(_QWORD*)v11 = *v10;
			*(_DWORD*)(v11 + 8) = *((_DWORD*)v10 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v11, L"nMinLevel", v12);
			a1[2] -= 16i64;
			v13 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
			*(_QWORD*)v14 = *v13;
			*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v15, L"nMaxLevel", v16);
			a1[2] -= 16i64;
			v17 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
			*(_QWORD*)v18 = *v17;
			*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
			a1[2] += 16i64;
			sub_1400579E0((__int64)a1, v19, v8);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		return 1i64;
	}
	else
	{
		result = 1i64;
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return result;
}
// 140657680: variable 'v12' is possibly undefined
// 1406576B1: variable 'v14' is possibly undefined
// 1406576C3: variable 'v15' is possibly undefined
// 1406576C3: variable 'v16' is possibly undefined
// 1406576E9: variable 'v18' is possibly undefined
// 1406576FB: variable 'v19' is possibly undefined
// 140B2CCA0: using guessed type wchar_t aNmaxlevel[10];
// 140B2CCD8: using guessed type wchar_t aNminlevel[10];
// 140C65898: using guessed type __int64 qword_140C65898;

