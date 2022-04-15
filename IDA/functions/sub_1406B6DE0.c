#include "../winhttp.h"

//----- (00000001406B6DE0) ----------------------------------------------------
__int64 __fastcall sub_1406B6DE0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	unsigned int v4; // ecx
	int v5; // eax
	int v6; // edx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 result; // rax
	__int64 v10; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
	{
		v4 = *(_DWORD*)(v3 + 12);
		v5 = *(_DWORD*)(v3 + 8);
		if (v5)
		{
			v6 = 0;
			if ((unsigned int)(v5 - 1) <= 1)
				v6 = 4;
		}
		else
		{
			v7 = sub_1402215C0(v4);
			if (v7)
				v6 = *(_DWORD*)(v7 + 64);
			else
				v6 = 0;
		}
		v8 = a1[2];
		result = 1i64;
		*(_DWORD*)(v8 + 8) = 3;
		*(double*)v8 = (double)v6;
		a1[2] += 16i64;
	}
	else
	{
		v10 = a1[2];
		*(_QWORD*)v10 = 0i64;
		*(_DWORD*)(v10 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

