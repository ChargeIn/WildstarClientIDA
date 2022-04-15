#include "../winhttp.h"

//----- (000000014030F4E0) ----------------------------------------------------
__int64 __fastcall sub_14030F4E0(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v5; // rax
	__int64 v6; // r9
	__int64 result; // rax
	__int64 v8; // rcx
	unsigned int v9; // edi
	__int64 v10; // rax
	__int64 v11; // rdx
	unsigned int* v12; // rbx
	__int64 v13; // rdx
	__int64 v14; // rdx

	v5 = *((_QWORD*)a3 + 1);
	v6 = v5 + a2;
	if ((unsigned __int64)(v5 + a2) < *a1)
		return 2147500037i64;
	v8 = *a3;
	if ((unsigned __int64)(a2 + 80 * v8 + v5) > a1[1])
		return 2147500037i64;
	v9 = 0;
	v10 = 0i64;
	if ((_DWORD)v8)
		v10 = v6;
	*((_QWORD*)a3 + 1) = v10;
	v11 = v10 + ((80 * v8 + 15) & 0xFFFFFFFFFFFFFFF0ui64);
	if (!(_DWORD)v8)
		return 0i64;
	while (1)
	{
		v12 = (unsigned int*)(*((_QWORD*)a3 + 1) + a1[2] + 80i64 * v9);
		result = sub_14030ED20(a1, v11, v12 + 2);
		if ((int)result < 0)
			break;
		result = sub_14030ED20(a1, v13, v12 + 8);
		if ((int)result < 0)
			break;
		result = sub_14030ED20(a1, v14, v12 + 14);
		if ((int)result < 0)
			break;
		if (++v9 >= *a3)
			return 0i64;
	}
	return result;
}
// 14030F569: variable 'v11' is possibly undefined
// 14030F579: variable 'v13' is possibly undefined
// 14030F589: variable 'v14' is possibly undefined

