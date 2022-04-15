#include "../winhttp.h"

//----- (00000001408EF290) ----------------------------------------------------
_BOOL8 __fastcall sub_1408EF290(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	unsigned __int8 v8; // al
	unsigned int v9; // ecx
	unsigned int v10; // r8d
	__int64 v11; // rdx
	int v12; // eax
	int v13; // eax
	unsigned int v14; // ecx
	unsigned int v15; // r8d
	__int64 v16; // rdx
	int v17; // esi
	__int64 v18; // r14
	char v19; // bl
	__int64 v20; // rsi
	int i; // r14d
	int j; // ebx
	unsigned __int8 v23; // al

	*(_QWORD*)a1 = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_DWORD*)a1 = sub_1408EC1C0(a3, 2);
	*(_DWORD*)(a1 + 24) = sub_1408EC1C0(a3, 24);
	*(_DWORD*)(a1 + 28) = sub_1408EC1C0(a3, 24);
	*(_DWORD*)(a1 + 32) = sub_1408EC1C0(a3, 24) + 1;
	*(_BYTE*)(a1 + 36) = sub_1408EC1C0(a3, 6) + 1;
	v8 = sub_1408EC1C0(a3, 8);
	*(_BYTE*)(a1 + 37) = v8;
	if (v8 >= *(int*)(a2 + 24))
		return 1i64;
	if (*(_BYTE*)(a1 + 36)
		&& (v9 = (*(char*)(a1 + 36) + 3) & 0xFFFFFFFC, v10 = v9 + *(_DWORD*)(a4 + 16), v10 <= *(_DWORD*)(a4 + 20)))
	{
		v11 = *(_QWORD*)(a4 + 8);
		*(_DWORD*)(a4 + 16) = v10;
		*(_QWORD*)(a4 + 8) = v11 + v9;
	}
	else
	{
		v11 = 0i64;
	}
	v12 = *(char*)(a1 + 36);
	*(_QWORD*)(a1 + 8) = v11;
	v13 = 8 * v12;
	if (v13 && (v14 = (v13 + 3) & 0xFFFFFFFC, v15 = v14 + *(_DWORD*)(a4 + 16), v15 <= *(_DWORD*)(a4 + 20)))
	{
		v16 = *(_QWORD*)(a4 + 8);
		*(_DWORD*)(a4 + 16) = v15;
		*(_QWORD*)(a4 + 8) = v16 + v14;
	}
	else
	{
		v16 = 0i64;
	}
	v17 = 0;
	v18 = 0i64;
	for (*(_QWORD*)(a1 + 16) = v16; v17 < *(char*)(a1 + 36); *(_BYTE*)(++v18 + *(_QWORD*)(a1 + 8) - 1) = v19)
	{
		v19 = sub_1408EC1C0(a3, 3);
		if ((unsigned int)sub_1408EC1C0(a3, 1))
			v19 |= 8 * sub_1408EC1C0(a3, 5);
		++v17;
	}
	v20 = 0i64;
	for (i = 0; i < *(char*)(a1 + 36); ++v20)
	{
		for (j = 0; j < 8; ++j)
		{
			if (((*(_BYTE*)(v20 + *(_QWORD*)(a1 + 8)) >> j) & 1) != 0)
			{
				v23 = sub_1408EC1C0(a3, 8);
				if (v23 >= *(int*)(a2 + 24))
					return 1i64;
				*(_BYTE*)(j + 8 * v20 + *(_QWORD*)(a1 + 16)) = v23;
				if (j + 1 > *(char*)(a1 + 38))
					*(_BYTE*)(a1 + 38) = j + 1;
			}
			else
			{
				*(_BYTE*)(j + 8 * v20 + *(_QWORD*)(a1 + 16)) = -1;
			}
		}
		++i;
	}
	return *(int*)(a3 + 16) < 0;
}

