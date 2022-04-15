#include "../winhttp.h"

//----- (00000001400AEB10) ----------------------------------------------------
__int64 __fastcall sub_1400AEB10(unsigned int* a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a2 += 10i64;
	*a2 += 32i64 * *a1;
	result = 4i64 * *a1;
	*a3 += result;
	*a2 += 181i64;
	return result;
}

