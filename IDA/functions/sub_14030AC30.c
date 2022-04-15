#include "../winhttp.h"

//----- (000000014030AC30) ----------------------------------------------------
__int64 __fastcall sub_14030AC30(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v3; // rax
	__int64 v6; // r9
	__int64 result; // rax
	__int64 v8; // rcx
	__int64 v9; // r8
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // r9
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // r9
	__int64 v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rax
	__int64 v19; // rdx
	__int64 v20; // rdx

	v3 = *((_QWORD*)a3 + 1);
	v6 = v3 + a2;
	if ((unsigned __int64)(v3 + a2) < *a1)
		return 2147500037i64;
	v8 = *a3;
	if ((unsigned __int64)(a2 + v3 + 4 * v8) > a1[1])
		return 2147500037i64;
	v9 = 0i64;
	v10 = 0i64;
	if ((_DWORD)v8)
		v10 = v6;
	*((_QWORD*)a3 + 1) = v10;
	v11 = *((_QWORD*)a3 + 2);
	v12 = v11 + a2;
	if ((unsigned __int64)(v11 + a2) < *a1 || (unsigned __int64)(a2 + v11 + 4 * v8) > a1[1])
		return 2147500037i64;
	v13 = 0i64;
	if ((_DWORD)v8)
		v13 = v12;
	*((_QWORD*)a3 + 2) = v13;
	v14 = *((_QWORD*)a3 + 4);
	v15 = v14 + a2;
	if ((unsigned __int64)(v14 + a2) < *a1)
		return 2147500037i64;
	v16 = a3[6];
	if ((unsigned __int64)(a2 + v14 + 4 * v16) > a1[1])
		return 2147500037i64;
	v17 = 0i64;
	if ((_DWORD)v16)
		v17 = v15;
	*((_QWORD*)a3 + 4) = v17;
	v18 = *((_QWORD*)a3 + 5);
	if ((unsigned __int64)(v18 + a2) < *a1 || (unsigned __int64)(a2 + v18 + 4 * v16) > a1[1])
		return 2147500037i64;
	if ((_DWORD)v16)
		v9 = v18 + a2;
	*((_QWORD*)a3 + 5) = v9;
	result = sub_14030EB90(a1, a2, a3 + 12);
	if ((int)result >= 0)
	{
		result = sub_14030EB90(a1, v19, a3 + 18);
		if ((int)result >= 0)
		{
			result = sub_1402CA3C0(a1, v20, a3 + 24);
			if ((int)result >= 0)
				return 0i64;
		}
	}
	return result;
}
// 14030AD11: variable 'v19' is possibly undefined
// 14030AD21: variable 'v20' is possibly undefined

