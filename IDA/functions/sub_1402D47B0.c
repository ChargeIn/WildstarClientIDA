#include "../winhttp.h"

//----- (00000001402D47B0) ----------------------------------------------------
__int64 __fastcall sub_1402D47B0(__int64 a1)
{
	__int64 result; // rax
	__int64 v2; // rbx
	int v3[4]; // [rsp+20h] [rbp-18h] BYREF

	result = *(unsigned int*)(*(_QWORD*)(a1 + 16) + 24i64);
	if (!(_DWORD)result)
	{
		v2 = *(_QWORD*)(a1 + 32);
		v3[0] = -1;
		if (*(_DWORD*)(v2 + 24) != 3)
			sub_1402C9AE0(v2, (__int64)v3, 3);
		return *(unsigned int*)(*(_QWORD*)(v2 + 64) + 28i64);
	}
	return result;
}
// 1402D47B0: using guessed type int var_18[4];

