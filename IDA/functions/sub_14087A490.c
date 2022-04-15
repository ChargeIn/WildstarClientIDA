#include "../winhttp.h"

//----- (000000014087A490) ----------------------------------------------------
__int64 __fastcall sub_14087A490(__int64 a1)
{
	int v2; // eax
	__int64 v3; // rcx
	unsigned int v4; // ecx

	if ((*(_BYTE*)(*(_QWORD*)(a1 + 24) + 383i64) & 2) == 0)
		return 1i64;
	v2 = sub_1408801C0(a1);
	v3 = *(_QWORD*)(a1 + 24);
	*(_DWORD*)(a1 + 44) = v2 & 0xFFFFFFC0;
	*(_BYTE*)(v3 + 383) &= 0xF1u;
	*(_DWORD*)(v3 + 372) = v2 - (v2 & 0xFFFFFFC0);
	v4 = *(_DWORD*)(a1 + 44);
	if (v4 < *(_DWORD*)(a1 + 40))
	{
		*(_QWORD*)(a1 + 88) = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 416i64)
			+ *(unsigned int*)(a1 + 52)
			+ (unsigned __int64)(*(unsigned __int16*)(a1 + 96) * (v4 >> 6));
		return 1i64;
	}
	return 2i64;
}

