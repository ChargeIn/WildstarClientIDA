#include "../winhttp.h"

//----- (000000014030F290) ----------------------------------------------------
__int64 __fastcall sub_14030F290(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v6; // rax
	__int64 v7; // r9
	__int64 result; // rax
	__int64 v9; // rdx
	unsigned int v10; // ebx
	__int64 v11; // rax
	__int64 v12; // rbp

	v6 = *((_QWORD*)a3 + 1);
	v7 = v6 + a2;
	if ((unsigned __int64)(v6 + a2) < *a1)
		return 2147500037i64;
	v9 = *a3;
	if ((unsigned __int64)(a2 + 48 * v9 + v6) > a1[1])
		return 2147500037i64;
	v10 = 0;
	v11 = 0i64;
	if ((_DWORD)v9)
		v11 = v7;
	v12 = v11 + ((48 * v9 + 15) & 0xFFFFFFFFFFFFFFF0ui64);
	*((_QWORD*)a3 + 1) = v11;
	if (!(_DWORD)v9)
		return 0i64;
	while (1)
	{
		result = sub_14030B010(a1, v12, *((_QWORD*)a3 + 1) + a1[2] + 48i64 * v10);
		if ((int)result < 0)
			break;
		if (++v10 >= *a3)
			return 0i64;
	}
	return result;
}

