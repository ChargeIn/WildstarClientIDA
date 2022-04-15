#include "../winhttp.h"

//----- (00000001402B71E0) ----------------------------------------------------
__int64 __fastcall sub_1402B71E0(int a1)
{
	int v1; // ecx
	__int64 result; // rax

	v1 = a1 & 0xF0000;
	if (v1 == 0x10000)
		return 1i64;
	result = 8i64;
	if (v1 != 0x20000)
		return 0i64;
	return result;
}

