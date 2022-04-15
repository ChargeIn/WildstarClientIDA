#include "../winhttp.h"

//----- (00000001402D4BF0) ----------------------------------------------------
__int64 __fastcall sub_1402D4BF0(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v4; // r8
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // r8
	__int64 v10; // r11
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rdx
	__int64 v15; // rax

	v4 = *((_QWORD*)a3 + 1);
	if ((unsigned __int64)(v4 + a2) < *a1)
		return 2147500037i64;
	v7 = *a3;
	if ((unsigned __int64)(a2 + 24 * v7 + v4) <= a1[1])
	{
		v8 = 0i64;
		if ((_DWORD)v7)
			v8 = v4 + a2;
		v9 = 0i64;
		*((_QWORD*)a3 + 1) = v8;
		v10 = v8 + ((24 * v7 + 15) & 0xFFFFFFFFFFFFFFF0ui64);
		if (!(_DWORD)v7)
			return 0i64;
		while (1)
		{
			v11 = *((_QWORD*)a3 + 1) + a1[2] + 24 * v9;
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
			v9 = (unsigned int)(v9 + 1);
			*(_QWORD*)(v11 + 16) = v15;
			if ((unsigned int)v9 >= *a3)
				return 0i64;
		}
	}
	return 2147500037i64;
}

