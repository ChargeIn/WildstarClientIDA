#include "../winhttp.h"

//----- (0000000140098A50) ----------------------------------------------------
__int64 __fastcall sub_140098A50(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a2 += 37i64;
	*a2 += 32i64 * *(unsigned int*)(a1 + 4);
	result = 4i64 * *(unsigned int*)(a1 + 4);
	*a3 += result;
	*a2 += 110i64;
	return result;
}

