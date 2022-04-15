#include "../winhttp.h"

//----- (0000000140878580) ----------------------------------------------------
__int64 __fastcall sub_140878580(__int64 a1, int a2)
{
	__int64 v2; // rax
	char* v4; // r9
	char* v5; // rcx
	__int64 v6; // rcx

	v2 = *(unsigned __int16*)(a1 + 72);
	v4 = *(char**)(a1 + 8 * v2 + 80);
	LOWORD(v2) = v2 + 1;
	*(_WORD*)(a1 + 72) = v2;
	if ((_WORD)v2 == 8)
		*(_WORD*)(a1 + 72) = 0;
	v5 = &v4[4 * a2 * *(_DWORD*)(a1 + 32)];
	if (v4 < v5)
	{
		*(_OWORD*)v4 = 0i64;
		qmemcpy(v4 + 16, v4, 8 * (((unsigned __int64)(v5 - v4 - 1) >> 3) & 0x1FFFFFFFFFFFFFFEi64));
	}
	v6 = *(_QWORD*)(a1 + 8);
	if (v6)
		sub_140877220(v6, (__int64)v4, a2 * *(unsigned __int16*)(a1 + 148) / 2);
	_InterlockedIncrement((volatile signed __int32*)(a1 + 144));
	return 1i64;
}

