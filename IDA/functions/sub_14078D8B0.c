#include "../winhttp.h"

//----- (000000014078D8B0) ----------------------------------------------------
__int64 __fastcall sub_14078D8B0(_QWORD* a1)
{
	signed int v1; // ebx
	int v2; // esi
	__int64 v4; // rbp
	int v5; // eax
	__int64 v6; // rcx
	__int64 result; // rax

	v1 = 1;
	v2 = 0;
	v4 = (__int64)(a1[2] - a1[3]) >> 4;
	if ((int)v4 >= 1)
	{
		do
		{
			v5 = sub_140056D60(a1, v1++);
			v2 ^= v5;
		} while (v1 <= (int)v4);
	}
	v6 = a1[2];
	*(_DWORD*)(v6 + 8) = 3;
	result = 1i64;
	*(double*)v6 = (double)v2;
	a1[2] += 16i64;
	return result;
}

