#include "../winhttp.h"

//----- (00000001400AD3C0) ----------------------------------------------------
__int64 __fastcall sub_1400AD3C0(_DWORD* a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a2 += 10i64;
	*a2 += 32i64 * (unsigned int)*a1;
	*a3 += 4i64 * (unsigned int)*a1;
	*a3 += 12i64 * (unsigned int)*a1;
	for (result = 0i64; (unsigned int)result < *a1; result = (unsigned int)(result + 1))
		*a2 += 96i64;
	*a2 += 35i64;
	return result;
}

