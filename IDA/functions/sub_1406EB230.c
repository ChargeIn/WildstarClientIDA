#include "../winhttp.h"

//----- (00000001406EB230) ----------------------------------------------------
__int64 __fastcall sub_1406EB230(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // r10d
	__int64 v4; // r8
	__int64 v5; // rdx
	unsigned __int8 v6; // cl
	unsigned __int8 v7; // r9
	__int64 v8; // rcx
	__int64 result; // rax

	v2 = sub_1406E8880(a1, 1u);
	v3 = 0;
	v4 = *(_QWORD*)(v2 + 2464);
	if (v4)
	{
		v5 = *(_QWORD*)(v2 + 2456);
		do
		{
			v6 = *(_BYTE*)(*(_QWORD*)v5 + 68i64);
			v7 = *(_BYTE*)(**(_QWORD**)v5 + 64i64);
			if (v6 > v7)
				v3 += v6 - v7;
			v5 += 8i64;
			--v4;
		} while (v4);
	}
	v8 = a1[2];
	result = 1i64;
	*(_DWORD*)(v8 + 8) = 3;
	*(double*)v8 = (double)v3;
	a1[2] += 16i64;
	return result;
}

