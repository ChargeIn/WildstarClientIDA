#include "../winhttp.h"

//----- (0000000140740430) ----------------------------------------------------
__int64 __fastcall sub_140740430(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 result; // rax
	int v6; // ecx

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
	{
		v4 = a1[2];
		result = 1i64;
		v6 = *(_DWORD*)(v3 + 8) + 1;
		*(_DWORD*)(v4 + 8) = 3;
		*(double*)v4 = (double)v6;
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

