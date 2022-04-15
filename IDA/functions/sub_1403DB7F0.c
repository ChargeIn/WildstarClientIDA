#include "../winhttp.h"

//----- (00000001403DB7F0) ----------------------------------------------------
__int64 __fastcall sub_1403DB7F0(__int64 a1, int* a2, __int64 a3, double a4)
{
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // edx

	v6 = sub_1403D90D0(a1, *a2);
	v7 = v6;
	if (v6)
	{
		sub_14045BDC0(v6, a2[1], a2[2], a4);
		v8 = *(_QWORD*)(a1 + 25744);
		if (!v8 || *a2 != *(_DWORD*)(v8 + 8))
		{
			v9 = a2[1];
			if (*(_DWORD*)(v7 + 264) != v9)
			{
				*(_DWORD*)(v7 + 264) = v9;
				*(_DWORD*)(v7 + 268) = sub_14045A950(v7, v9);
			}
		}
	}
	return 0i64;
}

