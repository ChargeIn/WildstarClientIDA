#include "../winhttp.h"

//----- (00000001408AB980) ----------------------------------------------------
__int64 __fastcall sub_1408AB980(__int64 a1)
{
	unsigned int v2; // ebx
	_BYTE* v3; // rbp
	__int64 v4; // rdi
	__int64 result; // rax

	v2 = 0;
	v3 = (_BYTE*)(a1 + 2312);
	do
	{
		if (*v3)
		{
			v4 = 944i64 * v2;
			sub_1408AD4F0(v4 + a1 + 24);
			sub_1408AD370(v4 + a1 + 24);
			result = sub_1408AE720(116i64 * v2 + a1 + 1912);
		}
		++v2;
		v3 += 28;
	} while (v2 < 2);
	return result;
}

