#include "../winhttp.h"

//----- (00000001407D7380) ----------------------------------------------------
__int64 __fastcall sub_1407D7380(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v3; // rax
	__int64 v6; // r8
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // r10
	__int64 v11; // r8
	unsigned int* v12; // rdx
	__int64 v13; // rax
	__int64 v14; // rbx
	__int64 v15; // rcx
	__int64 v16; // rax
	__int64 v17; // rbx
	__int64 v18; // rax

	v3 = *((_QWORD*)a3 + 1);
	v6 = v3 + a2;
	if ((unsigned __int64)(v3 + a2) < *a1)
		return 2147500037i64;
	v8 = *a3;
	if ((unsigned __int64)(a2 + v3 + 24 * v8) > a1[1])
		return 2147500037i64;
	v9 = 0i64;
	if ((_DWORD)v8)
		v9 = v6;
	v10 = 0i64;
	*((_QWORD*)a3 + 1) = v9;
	v11 = v9 + ((24 * v8 + 15) & 0xFFFFFFFFFFFFFFF0ui64);
	if (!(_DWORD)v8)
		return 0i64;
	while (1)
	{
		v12 = (unsigned int*)(*((_QWORD*)a3 + 1) + a1[2] + 24 * v10);
		v13 = *((_QWORD*)v12 + 1);
		v14 = v13 + v11;
		if ((unsigned __int64)(v13 + v11) < *a1)
			break;
		v15 = *v12;
		if ((unsigned __int64)(v11 + v13 + 4 * v15) > a1[1])
			break;
		v16 = 0i64;
		if ((_DWORD)v15)
			v16 = v14;
		v17 = *((_QWORD*)v12 + 2);
		*((_QWORD*)v12 + 1) = v16;
		if ((unsigned __int64)(v17 + v11) < *a1 || v11 + v17 + 32 * (unsigned __int64)(unsigned int)v15 > a1[1])
			break;
		v18 = 0i64;
		if ((_DWORD)v15)
			v18 = v17 + v11;
		v10 = (unsigned int)(v10 + 1);
		*((_QWORD*)v12 + 2) = v18;
		if ((unsigned int)v10 >= *a3)
			return 0i64;
	}
	return 2147500037i64;
}

