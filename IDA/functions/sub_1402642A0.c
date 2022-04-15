#include "../winhttp.h"

//----- (00000001402642A0) ----------------------------------------------------
__int64 __fastcall sub_1402642A0(__int64 a1, __int64 a2, unsigned int a3)
{
	unsigned __int64 v3; // r9
	unsigned __int64 i; // r8
	unsigned int v6; // ecx
	__int64 result; // rax

	v3 = a3;
	for (i = 0i64;
		i < v3;
		*(_DWORD*)(a1 + 4 * i - 4) = (v6 >> 2) & 7 | result | (2
			* (v6 & 0x380 | (4
				* (v6 & 0x1F | (2
					* (v6 & 0x7000 | (4 * (v6 & 0x3E0)))))))) | 0xFF000000)
	{
		v6 = *(unsigned __int16*)(a2 + 2 * i++);
		result = (v6 << 9) & 0xFFF80000;
	}
	return result;
}

