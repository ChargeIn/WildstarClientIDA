#include "../winhttp.h"

//----- (000000014041CA70) ----------------------------------------------------
__int64 __fastcall sub_14041CA70(_QWORD* a1)
{
	int* v2; // rax
	unsigned int v3; // edx
	int* v4; // r8
	__int64 result; // rax

	v2 = sub_140417BF0(a1, 1u);
	if (v2)
	{
		v3 = v2[83];
		v4 = (int*)a1[2];
		result = 1i64;
		v4[2] = 1;
		*v4 = (v3 >> 14) & 1;
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

