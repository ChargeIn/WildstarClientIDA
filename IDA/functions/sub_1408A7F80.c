#include "../winhttp.h"

//----- (00000001408A7F80) ----------------------------------------------------
__int64 __fastcall sub_1408A7F80(__int64* a1)
{
	__int64 result; // rax
	__int64 v2; // rdx
	__int64 v3; // r8

	for (result = 0i64; (unsigned int)result < *((_DWORD*)a1 + 2); *(_QWORD*)(v3 + v2 + 168) = 0i64)
	{
		v2 = *a1;
		v3 = (unsigned int)result;
		result = (unsigned int)(result + 1);
		v3 *= 176i64;
		*(_QWORD*)(v3 + v2 + 160) = 0i64;
	}
	return result;
}

