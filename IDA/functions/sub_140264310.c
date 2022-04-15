#include "../winhttp.h"

//----- (0000000140264310) ----------------------------------------------------
__int64 __fastcall sub_140264310(__int64 a1, __int64 a2, unsigned int a3)
{
	unsigned __int64 v3; // r9
	unsigned __int64 i; // r10
	int v5; // r8d
	__int64 result; // rax

	v3 = 0i64;
	for (i = a3;
		v3 < i;
		*(_DWORD*)(a1 + 4 * v3 - 4) = v5 & 0xF | result | (16
			* ((unsigned __int8)v5 | (16
				* (v5 & 0xFF0 | (16 * (v5 & 0xFF00)))))))
	{
		v5 = *(unsigned __int16*)(a2 + 2 * v3++);
		result = (v5 << 16) & 0xF0000000;
	}
	return result;
}

