#include "../winhttp.h"

//----- (000000014088D6B0) ----------------------------------------------------
__int64 __fastcall sub_14088D6B0(__int64 a1, int a2, int a3, int* a4)
{
	__int64* v5; // rcx
	__int64 result; // rax
	int v7; // edi

	v5 = *(__int64**)(a1 + 24);
	result = 0i64;
	v7 = a3;
	if (v5)
	{
		if (*a4 > 0 && a3 < a4[2])
			v7 = a4[2];
		result = a2 - v7 + (unsigned int)sub_14088F4C0(v5, v7);
	}
	*(_WORD*)(a1 + 60) |= 1u;
	*(_QWORD*)(a1 + 32) = (unsigned int)(a2 - result);
	return result;
}

