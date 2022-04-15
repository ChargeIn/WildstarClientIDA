#include "../winhttp.h"

//----- (00000001403DAF90) ----------------------------------------------------
__int64 __fastcall sub_1403DAF90(__int64 a1, __int64 a2)
{
	__m128* v4; // rbx
	int v5; // ebp
	unsigned int i; // esi
	int v7; // r8d

	sub_1405FE2F0(*(_QWORD**)(a1 + 32144), a2);
	v4 = (__m128*)sub_1403D90D0(a1, *(_DWORD*)a2);
	if (v4)
	{
		v5 = 0;
		v4[874].m128_i32[2] = *(_DWORD*)(a2 + 4);
		for (i = 0; i < *(_DWORD*)(a2 + 12); ++i)
			sub_14047F0C0(v4, *(_QWORD*)(a2 + 16) + 72i64 * i, *(_DWORD*)(a2 + 8));
		if (v4[8].m128_i32[0] == 5 && !v4[37].m128_i32[0])
			v5 = 1;
		v7 = *(_DWORD*)(a2 + 8);
		if (v7 || v5)
			sub_14047F210((__int64)v4, v4 + 286, v7, v5);
	}
	return 0i64;
}

