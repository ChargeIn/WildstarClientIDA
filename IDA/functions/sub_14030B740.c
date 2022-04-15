#include "../winhttp.h"

//----- (000000014030B740) ----------------------------------------------------
__int64 __fastcall sub_14030B740(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v4; // rcx
	__int64 result; // rax
	__int64 v7; // r8
	__int64 v8; // rax
	__int64 v9; // rdx

	v4 = *((_QWORD*)a3 + 1);
	if ((unsigned __int64)(v4 + a2) < *a1)
		return 2147500037i64;
	v7 = *a3;
	if ((unsigned __int64)(a2 + v4 + 12 * v7) > a1[1])
		return 2147500037i64;
	v8 = 0i64;
	if ((_DWORD)v7)
		v8 = v4 + a2;
	*((_QWORD*)a3 + 1) = v8;
	result = sub_14030ED20(a1, a2, a3 + 4);
	if ((int)result >= 0)
	{
		result = sub_14030ED20(a1, v9, a3 + 10);
		if ((int)result >= 0)
			return 0i64;
	}
	return result;
}
// 14030B7A5: variable 'v9' is possibly undefined

