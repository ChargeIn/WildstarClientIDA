#include "../winhttp.h"

//----- (000000014087C540) ----------------------------------------------------
__int64 __fastcall sub_14087C540(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v2; // r8
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 8);
	v2 = *(_QWORD*)(a1 + 16);
	for (result = 0i64; v1 != v2; v1 += 8i64)
		result = (unsigned int)(*(_DWORD*)(v1 + 4) + result);
	return result;
}

