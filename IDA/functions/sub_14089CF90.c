#include "../winhttp.h"

//----- (000000014089CF90) ----------------------------------------------------
__int64 __fastcall sub_14089CF90(__int64 a1)
{
	unsigned int v1; // r8d
	int v2; // edx
	__int64 result; // rax

	v1 = *(_DWORD*)(a1 + 28);
	v2 = *(_DWORD*)(a1 + 16) % v1;
	*(_BYTE*)(a1 + 60) = 1;
	*(_WORD*)(a1 + 12) = 1;
	*(_DWORD*)(a1 + 24) = v1;
	result = 1i64;
	*(_DWORD*)(a1 + 16) = v2;
	return result;
}

