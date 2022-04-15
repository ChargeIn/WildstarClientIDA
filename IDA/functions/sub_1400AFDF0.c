#include "../winhttp.h"

//----- (00000001400AFDF0) ----------------------------------------------------
__int64 __fastcall sub_1400AFDF0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a2 += 192i64;
	*a2 += 32i64 * *(unsigned int*)(a1 + 20);
	result = 4i64 * *(unsigned int*)(a1 + 20);
	*a3 += result;
	return result;
}

