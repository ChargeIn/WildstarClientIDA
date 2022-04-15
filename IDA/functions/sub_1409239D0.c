#include "../winhttp.h"

//----- (00000001409239D0) ----------------------------------------------------
__int64 __fastcall sub_1409239D0(__int64 a1, __int64 a2)
{
	__int64 v2; // r14
	unsigned int* v3; // rbx
	BOOL v6; // ebp
	char* v8; // rax
	int v9; // r14d
	__int64 v10; // rax
	__int64 v11; // r8
	__int64 v12; // [rsp+28h] [rbp-20h]

	v2 = *(unsigned __int16*)(a2 + 2);
	v3 = *(unsigned int**)a1;
	v6 = *(_BYTE*)(v2 + *(_QWORD*)(a1 + 24)) != 0;
	if (*(_QWORD*)(a1 + 208))
		return a2 + 4;
	if (!*(_BYTE*)(v2 + *(_QWORD*)(a1 + 24)) && !*v3)
	{
		v12 = *(int*)(a1 + 32) + 48i64 + 8 * v2;
		v3[26] = 0;
		v8 = sub_14092D140((__int64)v3, 1, 1, 0i64, 267, v12);
		if (v8)
			*v8 = -117;
	}
	v9 = 2 * v2;
	if (!*v3)
	{
		v10 = *(int*)(a1 + 36);
		v3[26] = 0;
		sub_14092AA10(v3, 267, v10 + 48 + 8i64 * (v9 + 1), 6, 0i64);
	}
	if (!v6 && !*v3)
	{
		v11 = *(int*)(a1 + 36) + 48i64 + 8i64 * v9;
		v3[26] = 0;
		sub_14092AA10(v3, 267, v11, 1, 0i64);
	}
	return a2 + 4;
}

