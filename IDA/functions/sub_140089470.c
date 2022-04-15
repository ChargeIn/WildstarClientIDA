#include "../winhttp.h"

//----- (0000000140089470) ----------------------------------------------------
__int64 __fastcall sub_140089470(unsigned int* a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a2 += 32i64;
	*a2 += 32i64 * *a1;
	result = 4i64 * *a1;
	*a3 += result;
	return result;
}

