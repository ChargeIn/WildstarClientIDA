#include "../winhttp.h"

//----- (00000001402CA5E0) ----------------------------------------------------
__int64 __fastcall sub_1402CA5E0(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v5; // rax
	__int64 v6; // r9
	__int64 result; // rax
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // r11
	__int64 v11; // rdx
	__int64 v12; // r8
	__int64 v13; // rcx
	__int64 v14; // rax
	unsigned int* v15; // r8
	int v16; // r11d

	v5 = *((_QWORD*)a3 + 1);
	v6 = v5 + a2;
	if ((unsigned __int64)(v5 + a2) < *a1)
		return 2147500037i64;
	v8 = *a3;
	if ((unsigned __int64)(a2 + 144 * v8 + v5) > a1[1])
		return 2147500037i64;
	v9 = 0i64;
	if ((_DWORD)v8)
		v9 = v6;
	v10 = 0i64;
	*((_QWORD*)a3 + 1) = v9;
	v11 = v9 + ((144 * v8 + 15) & 0xFFFFFFFFFFFFFFF0ui64);
	if ((_DWORD)v8)
	{
		while (1)
		{
			v12 = *((_QWORD*)a3 + 1) + a1[2] + 144 * v10;
			v13 = *(_QWORD*)(v12 + 72);
			if ((unsigned __int64)(v13 + v11) < *a1 || v11 + v13 + 16 * (unsigned __int64)*(unsigned int*)(v12 + 64) > a1[1])
				break;
			v14 = 0i64;
			if (*(_DWORD*)(v12 + 64))
				v14 = v13 + v11;
			v15 = (unsigned int*)(v12 + 80);
			*((_QWORD*)v15 - 1) = v14;
			result = sub_1402CA420(a1, v11, v15);
			if ((int)result < 0)
				return result;
			v10 = (unsigned int)(v16 + 1);
			if ((unsigned int)v10 >= *a3)
				return 0i64;
		}
		return 2147500037i64;
	}
	return 0i64;
}
// 1402CA664: variable 'v11' is possibly undefined
// 1402CA6A5: variable 'v16' is possibly undefined

