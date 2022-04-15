#include "../winhttp.h"

//----- (000000014075D4F0) ----------------------------------------------------
__int64 __fastcall sub_14075D4F0(_QWORD* a1)
{
	int v2; // eax
	__int64 v3; // rax
	int v4; // edx
	__int64 v5; // rcx
	__int64 result; // rax
	__int64 v7; // rax
	int v8; // edx
	__int64 v9; // rax

	v2 = sub_140056D60(a1, 1u);
	if (v2 == 3)
	{
		v3 = sub_140200220(0x368u);
		if (v3)
			v4 = *(_DWORD*)(v3 + 4);
		else
			v4 = 0;
		v5 = a1[2];
		result = 1i64;
		*(_DWORD*)(v5 + 8) = 3;
		*(double*)v5 = (double)v4;
		a1[2] += 16i64;
	}
	else if (v2 == 1)
	{
		v7 = sub_140200220(0x414u);
		if (v7)
			v8 = *(_DWORD*)(v7 + 4);
		else
			v8 = 0;
		v9 = a1[2];
		*(_DWORD*)(v9 + 8) = 3;
		*(double*)v9 = (double)v8;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

