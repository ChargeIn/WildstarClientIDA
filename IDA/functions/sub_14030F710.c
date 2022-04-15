#include "../winhttp.h"

//----- (000000014030F710) ----------------------------------------------------
__int64 __fastcall sub_14030F710(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v3; // rax
	__int64 v6; // r9
	__int64 result; // rax
	__int64 v8; // r8
	unsigned int v9; // ebx
	__int64 v10; // rax
	__int64 v11; // rdx

	v3 = *((_QWORD*)a3 + 1);
	v6 = v3 + a2;
	if ((unsigned __int64)(v3 + a2) < *a1)
		return 2147500037i64;
	v8 = *a3;
	if ((unsigned __int64)(a2 + 160 * v8 + v3) > a1[1])
		return 2147500037i64;
	v9 = 0;
	v10 = 0i64;
	if ((_DWORD)v8)
		v10 = v6;
	v11 = v10 + ((160 * v8 + 15) & 0xFFFFFFFFFFFFFFF0ui64);
	*((_QWORD*)a3 + 1) = v10;
	if (!(_DWORD)v8)
		return 0i64;
	while (1)
	{
		result = sub_14030C930(a1, v11, *((_QWORD*)a3 + 1) + a1[2] + 160i64 * v9);
		if ((int)result < 0)
			break;
		if (++v9 >= *a3)
			return 0i64;
	}
	return result;
}
// 14030F795: variable 'v11' is possibly undefined

