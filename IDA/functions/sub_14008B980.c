#include "../winhttp.h"

//----- (000000014008B980) ----------------------------------------------------
__int64 __fastcall sub_14008B980(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a2 += 39i64;
	*a2 += 32i64 * *(unsigned int*)(a1 + 8);
	*a3 += 4i64 * *(unsigned int*)(a1 + 8);
	*a2 += 32i64 * *(unsigned int*)(a1 + 8);
	*a3 += 4i64 * *(unsigned int*)(a1 + 8);
	*a2 += 32i64;
	*a2 += 32i64 * *(unsigned int*)(a1 + 32);
	result = 4i64 * *(unsigned int*)(a1 + 32);
	*a3 += result;
	++* a2;
	return result;
}

