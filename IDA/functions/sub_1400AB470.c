#include "../winhttp.h"

//----- (00000001400AB470) ----------------------------------------------------
__int64 __fastcall sub_1400AB470(unsigned int* a1, _QWORD* a2, _QWORD* a3)
{
	unsigned int v3; // r9d
	unsigned int i; // eax
	__int64 result; // rax

	*a2 += 32i64;
	*a3 += 12i64 * *a1;
	v3 = 0;
	for (i = 0; i < *a1; ++i)
		*a2 += 65i64;
	*a2 += 32i64;
	result = a1[4];
	*a3 += 12 * result;
	if (a1[4])
	{
		do
		{
			*a2 += 65i64;
			++v3;
		} while (v3 < a1[4]);
	}
	return result;
}

