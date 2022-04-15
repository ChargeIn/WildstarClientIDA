#include "../winhttp.h"

//----- (000000014041FFD0) ----------------------------------------------------
__int64 __fastcall sub_14041FFD0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 v3; // rax
	__int64 result; // rax
	int v5; // [rsp+40h] [rbp+18h] BYREF

	*a3 += 8i64;
	v3 = *(_QWORD*)(*a3 - 8i64);
	if (v3)
	{
		v5 = **(_DWORD**)(v3 + 112);
		return sub_1403D3470(a2, &v5);
	}
	else
	{
		result = a2[2];
		*(_DWORD*)(result + 8) = 0;
		a2[2] += 16i64;
	}
	return result;
}

