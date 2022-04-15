#include "../winhttp.h"

//----- (00000001402CA6C0) ----------------------------------------------------
__int64 __fastcall sub_1402CA6C0(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v4; // r8
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // r10
	__int64 v10; // r8
	__int64 v11; // rdx
	__int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // rbx
	__int64 v18; // rcx
	__int64 v19; // rax

	v4 = *((_QWORD*)a3 + 1);
	if ((unsigned __int64)(v4 + a2) < *a1)
		return 2147500037i64;
	v7 = *a3;
	if ((unsigned __int64)(a2 + 40 * v7 + v4) <= a1[1])
	{
		v8 = 0i64;
		if ((_DWORD)v7)
			v8 = v4 + a2;
		v9 = 0i64;
		v10 = v8 + ((40 * v7 + 15) & 0xFFFFFFFFFFFFFFF0ui64);
		*((_QWORD*)a3 + 1) = v8;
		if (!(_DWORD)v7)
			return 0i64;
		while (1)
		{
			v11 = *((_QWORD*)a3 + 1) + a1[2] + 40 * v9;
			v12 = *(_QWORD*)(v11 + 16);
			v13 = v12 + v10;
			if ((unsigned __int64)(v12 + v10) < *a1)
				break;
			v14 = *(unsigned int*)(v11 + 8);
			if ((unsigned __int64)(v10 + v12 + 2 * v14) > a1[1])
				break;
			v15 = 0i64;
			if ((_DWORD)v14)
				v15 = v13;
			*(_QWORD*)(v11 + 16) = v15;
			v16 = *(_QWORD*)(v11 + 32);
			v17 = v16 + v10;
			if ((unsigned __int64)(v16 + v10) < *a1)
				break;
			v18 = *(unsigned int*)(v11 + 24);
			if ((unsigned __int64)(v10 + v16 + 2 * v18) > a1[1])
				break;
			v19 = 0i64;
			if ((_DWORD)v18)
				v19 = v17;
			v9 = (unsigned int)(v9 + 1);
			*(_QWORD*)(v11 + 32) = v19;
			if ((unsigned int)v9 >= *a3)
				return 0i64;
		}
	}
	return 2147500037i64;
}

