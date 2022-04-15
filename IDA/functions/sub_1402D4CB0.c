#include "../winhttp.h"

//----- (00000001402D4CB0) ----------------------------------------------------
__int64 __fastcall sub_1402D4CB0(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v3; // rax
	__int64 v6; // r8
	int v8; // ecx
	__int64 v9; // rbx
	__int64 v10; // rax
	unsigned int v11; // r8d
	__int64 v12; // rbx
	__int64 v13; // rdx
	__int64 v14; // rax
	__int64 v15; // r11
	__int64 v16; // rcx
	__int64 v17; // rax

	v3 = *((_QWORD*)a3 + 1);
	v6 = v3 + a2;
	if ((unsigned __int64)(v3 + a2) < *a1)
		return 2147500037i64;
	v8 = *a3;
	v9 = 32i64 * *a3;
	if ((unsigned __int64)(a2 + v9 + v3) <= a1[1])
	{
		v10 = 0i64;
		if (v8)
			v10 = v6;
		v11 = 0;
		*((_QWORD*)a3 + 1) = v10;
		v12 = v10 + ((v9 + 15) & 0xFFFFFFFFFFFFFFF0ui64);
		if (!v8)
			return 0i64;
		while (1)
		{
			v13 = *((_QWORD*)a3 + 1) + a1[2] + 32i64 * v11;
			v14 = *(_QWORD*)(v13 + 16);
			v15 = v14 + v12;
			if ((unsigned __int64)(v14 + v12) < *a1)
				break;
			v16 = *(unsigned int*)(v13 + 8);
			if ((unsigned __int64)(v12 + v14 + 2 * v16) > a1[1])
				break;
			v17 = 0i64;
			if ((_DWORD)v16)
				v17 = v15;
			++v11;
			*(_QWORD*)(v13 + 16) = v17;
			if (v11 >= *a3)
				return 0i64;
		}
	}
	return 2147500037i64;
}

