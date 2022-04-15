#include "../winhttp.h"

//----- (00000001407BE940) ----------------------------------------------------
__int64 __fastcall sub_1407BE940(__int64* a1, unsigned int a2, _DWORD* a3)
{
	__int64 v3; // rax
	unsigned int v7; // r8d
	unsigned int v8; // r9d
	__int64 v9; // rax
	__int64 v10; // r10
	__int64 v11; // rbx
	__int64 v12; // rdx
	unsigned int v13; // ecx
	int v15[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *a1;
	v15[0] = -1;
	if (!(*(unsigned int(__fastcall**)(__int64*, int*))(v3 + 64))(a1, v15))
		return 0i64;
	v7 = *((_DWORD*)a1 + 18);
	v8 = 0;
	if (!v7)
		return 0i64;
	v9 = a1[3];
	v10 = a1[8];
	v11 = a1[7];
	while (1)
	{
		v12 = (v7 + v8) >> 1;
		v13 = *(_DWORD*)((unsigned int)(*(_DWORD*)(v9 + 8) * *(_DWORD*)(v10 + 4 * v12)) + v11);
		if (a2 >= v13)
			break;
		v7 = (v7 + v8) >> 1;
	LABEL_8:
		if (v8 >= v7)
			return 0i64;
	}
	if (a2 > v13)
	{
		v8 = v12 + 1;
		goto LABEL_8;
	}
	if (a3)
		*a3 = *(_DWORD*)(v10 + 4 * v12);
	return 1i64;
}
// 1407BE940: using guessed type int var_18[6];

