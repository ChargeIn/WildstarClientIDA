#include "../winhttp.h"

//----- (0000000140698F50) ----------------------------------------------------
__int64 __fastcall sub_140698F50(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // rsi
	int v7; // ebx
	int v8; // ecx
	int v9; // edx
	int v10; // eax
	int v11; // edx
	__int64 v12; // rdx
	int v13; // edx
	__int64 v14; // rcx

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v4 = *(_QWORD*)(v2 + 8)) != 0 && (v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8)), (v6 = v5) != 0))
	{
		v7 = *(_DWORD*)(v5 + 16);
		v8 = sub_140056D60(a1, 2u) - 1;
		v9 = 200;
		v10 = 200;
		if (*(_DWORD*)(v6 + 16) == 1)
			v10 = 100;
		if (v7 == 1)
			v9 = 100;
		v11 = v8 + v9 - v10;
		if (v11 >= 0 && v11 < *(_DWORD*)(v6 + 632) && (v12 = *(_QWORD*)(*(_QWORD*)(v6 + 624) + 8i64 * v11)) != 0)
			v13 = *(_DWORD*)(v12 + 32);
		else
			v13 = 0;
		v14 = a1[2];
		*(_DWORD*)(v14 + 8) = 3;
		*(double*)v14 = (double)v13;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140698F88: variable 'v3' is possibly undefined

