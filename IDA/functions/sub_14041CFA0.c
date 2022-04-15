#include "../winhttp.h"

//----- (000000014041CFA0) ----------------------------------------------------
__int64 __fastcall sub_14041CFA0(_QWORD* a1)
{
	int* v2; // rax
	int* v4; // rcx
	unsigned int v5; // eax

	v2 = sub_140417BF0(a1, 1u);
	if (v2)
	{
		v4 = (int*)a1[2];
		v5 = (unsigned int)v2[83] >> 6;
		v4[2] = 1;
		*v4 = v5 & 1;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}

