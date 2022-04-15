#include "../winhttp.h"

//----- (0000000140845180) ----------------------------------------------------
__int64 __fastcall sub_140845180(__int64 a1, int a2, int a3, unsigned int a4, int* a5, int a6)
{
	__int64 v8; // rdi
	__int64 result; // rax

	v8 = 2i64 * a2;
	result = sub_140837E30(16 * (v8 + a3) + a1 + 8, a5, a4, a6);
	if ((_DWORD)result == 1 && !a3)
	{
		sub_140845120((__int64*)(16 * v8 + a1 + 8));
		return 1i64;
	}
	return result;
}

