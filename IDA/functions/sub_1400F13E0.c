#include "../winhttp.h"

//----- (00000001400F13E0) ----------------------------------------------------
__int64 __fastcall sub_1400F13E0(__int64 a1, __int64 a2, int a3, _QWORD* a4)
{
	__int64* v4; // rbx
	__int64 result; // rax

	*a4 += 8i64;
	v4 = *(__int64**)(*a4 - 8i64);
	result = sub_1400D6530(a2, a3);
	*v4 = result;
	return result;
}

