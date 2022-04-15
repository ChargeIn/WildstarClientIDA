#include "../winhttp.h"

//----- (00000001406A5410) ----------------------------------------------------
__int64 __fastcall sub_1406A5410(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	__int64 result; // rax
	int v5; // ecx

	v2 = sub_140056AB0(a1, 1u);
	v3 = a1[2];
	if (v2)
	{
		v5 = **(_DWORD**)(v2 + 8);
		*(_DWORD*)(v3 + 8) = 3;
		result = 1i64;
		*(double*)v3 = (double)(v5 + 1);
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(v3 + 8) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

