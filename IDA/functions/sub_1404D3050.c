#include "../winhttp.h"

//----- (00000001404D3050) ----------------------------------------------------
__int64 __fastcall sub_1404D3050(_QWORD* a1, __int64 a2)
{
	__int64 result; // rax
	unsigned __int8 i; // si
	__int64 v5; // rcx
	int v6; // ebp
	int v7; // r12d
	unsigned int v8; // r14d
	__int64 v9; // rdi
	int* v10; // rax
	__int64 v11; // rcx
	int* v12; // rdx
	int* v13; // r15
	__int64 v14; // rcx

	if (!a2)
		return 2147500037i64;
	a1[1] = a2;
	for (i = 0; i < 3u; ++i)
	{
		v5 = a1[1];
		v6 = *(_DWORD*)(v5 + 4i64 * i + 28);
		if (v6 >= 2)
			break;
		v7 = *(_DWORD*)(v5 + 4i64 * i + 40);
		if (!v7)
			break;
		v8 = *(_DWORD*)(v5 + 4i64 * i + 52);
		if (!v8)
			break;
		if (v6 == 1 && v8 > 1)
			return 2147500037i64;
		v9 = a1[3];
		v10 = sub_14018DB00(a1[2], v9 + 1, 12i64);
		v11 = 3 * v9;
		v10[v11] = v6;
		v10[v11 + 1] = v7;
		v10[v11 + 2] = v8;
		v12 = (int*)a1[2];
		v13 = v10;
		if (v12 != v10)
		{
			sub_1407DB590(v10, v12, 12i64 * a1[3]);
			v14 = a1[2];
			if (v14)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
			a1[2] = v13;
		}
		a1[3] = v9 + 1;
	}
	if ((*(_BYTE*)(a1[1] + 16i64) & 4) != 0 && a1[3] > 1ui64)
		return 2147500037i64;
	result = 0i64;
	if (!a1[3])
		return 2147500037i64;
	return result;
}

