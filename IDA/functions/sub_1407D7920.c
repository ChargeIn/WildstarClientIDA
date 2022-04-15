#include "../winhttp.h"

//----- (00000001407D7920) ----------------------------------------------------
__int64 __fastcall sub_1407D7920(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v3; // rax
	__int64 v6; // r8
	__int64 result; // rax
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rbp
	__int64 v12; // r8
	__int64 v13; // rax
	__int64 v14; // rdx
	__int64 v15; // rcx
	__int64 v16; // rax
	unsigned int* v17; // r8

	v3 = *((_QWORD*)a3 + 1);
	v6 = v3 + a2;
	if ((unsigned __int64)(v3 + a2) < *a1)
		return 2147500037i64;
	v8 = *a3;
	if ((unsigned __int64)(a2 + 48 * v8 + v3) > a1[1])
		return 2147500037i64;
	v9 = 0i64;
	if ((_DWORD)v8)
		v9 = v6;
	v10 = 0i64;
	*((_QWORD*)a3 + 1) = v9;
	v11 = v9 + ((48 * v8 + 15) & 0xFFFFFFFFFFFFFFF0ui64);
	if (!(_DWORD)v8)
		return 0i64;
	while (1)
	{
		v12 = *((_QWORD*)a3 + 1) + a1[2] + 48 * v10;
		v13 = *(_QWORD*)(v12 + 16);
		v14 = v13 + v11;
		if ((unsigned __int64)(v13 + v11) < *a1)
			break;
		v15 = *(unsigned int*)(v12 + 8);
		if ((unsigned __int64)(v11 + v13 + 2 * v15) > a1[1])
			break;
		v16 = 0i64;
		if ((_DWORD)v15)
			v16 = v14;
		v17 = (unsigned int*)(v12 + 24);
		*((_QWORD*)v17 - 1) = v16;
		result = sub_1407D7770(a1, v11, v17);
		if ((int)result < 0)
			return result;
		v10 = (unsigned int)(v10 + 1);
		if ((unsigned int)v10 >= *a3)
			return 0i64;
	}
	return 2147500037i64;
}

