#include "../winhttp.h"

//----- (00000001400852F0) ----------------------------------------------------
__int64 __fastcall sub_1400852F0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if ((int)result >= 0)
		return sub_14006C120(a1, (__int64*)(a3 + 8), v6);
	return result;
}
// 14008532E: variable 'v6' is possibly undefined

