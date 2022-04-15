#include "../winhttp.h"

//----- (0000000140264210) ----------------------------------------------------
__int64 __fastcall sub_140264210(__int64 a1, __int64 a2, unsigned int a3)
{
	unsigned __int64 v3; // r9
	unsigned __int64 i; // r8
	unsigned int v7; // edx
	int v8; // ecx
	int v9; // eax
	__int64 result; // rax

	v3 = a3;
	for (i = 0i64; i < v3; *(_DWORD*)(a1 + 4 * i - 4) = (v7 >> 2) & 7 | result | v8)
	{
		v7 = *(unsigned __int16*)(a2 + 2 * i);
		v8 = 2
			* (*(_WORD*)(a2 + 2 * i) & 0x380 | (4
				* (*(_WORD*)(a2 + 2 * i) & 0x1F | (2
					* (*(_WORD*)(a2 + 2 * i) & 0x7000 | (4 * (*(_WORD*)(a2 + 2 * i) & 0x3E0 | (8 * (v7 & 0x7C00)))))))));
		v9 = -(*(__int16*)(a2 + 2 * i++) < 0);
		result = v9 & 0xFF000000;
	}
	return result;
}

