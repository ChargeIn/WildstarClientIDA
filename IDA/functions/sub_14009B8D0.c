#include "../winhttp.h"

//----- (000000014009B8D0) ----------------------------------------------------
__int64 __fastcall sub_14009B8D0(unsigned __int8* a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a2 += 8i64;
	*a2 += (unsigned __int64)*a1 << 6;
	result = 8i64 * *a1;
	*a3 += result;
	return result;
}

