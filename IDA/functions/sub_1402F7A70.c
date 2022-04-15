#include "../winhttp.h"

//----- (00000001402F7A70) ----------------------------------------------------
__int64 __fastcall sub_1402F7A70(__int64 a1, unsigned int a2)
{
	unsigned int v2; // r8d
	unsigned int v3; // eax
	__int64 v4; // rax
	__int64 v5; // rdx

	v2 = 0;
	if (a2)
	{
		v4 = *(_QWORD*)(a1 + 64);
		if (a2 >= *(_DWORD*)(v4 + 400))
			return 0i64;
		v3 = *(unsigned __int16*)(*(_QWORD*)(v4 + 408) + 2i64 * (int)a2);
	}
	else
	{
		v3 = 0;
	}
	v5 = *(_QWORD*)(a1 + 64);
	if (v3 < *(_DWORD*)(v5 + 1448) && *(_WORD*)(*(_QWORD*)(v5 + 1456) + 2i64 * v3) != 0xFFFF)
		return 1;
	return v2;
}
// 1402F7A9C: conditional instruction was optimized away because eax.4<10000u

