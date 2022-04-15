#include "../winhttp.h"

//----- (0000000140683340) ----------------------------------------------------
__int64 __fastcall sub_140683340(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	unsigned int* v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rsi
	__int64 v7; // rax
	int v8; // edi
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v13; // rdx
	__int64 v14; // rax

	if (qword_140C65970
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(unsigned int**)(v3 + 8)) != 0i64
		&& (v5 = sub_140617410((__int64)v4, *v4), (v6 = v5) != 0))
	{
		v7 = *(_QWORD*)(v5 + 48);
		v8 = 0;
		v9 = *(_QWORD*)(v7 + 16);
		if (v9 != v7)
		{
			do
			{
				if (*(_DWORD*)(v9 + 36) == 1 && sub_1403D90D0(qword_140C65898, *(_DWORD*)(v9 + 32)))
					++v8;
				v10 = *(_QWORD*)(v9 + 24);
				if (v10)
				{
					v9 = *(_QWORD*)(v9 + 24);
					for (i = *(_QWORD*)(v10 + 16); i; i = *(_QWORD*)(i + 16))
						v9 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v9 + 8); v9 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v9 = j;
					if (*(_QWORD*)(v9 + 24) != j)
						v9 = j;
				}
			} while (v9 != *(_QWORD*)(v6 + 48));
		}
		v13 = a1[2];
		*(_DWORD*)(v13 + 8) = 3;
		*(double*)v13 = (float)v8;
	}
	else
	{
		v14 = a1[2];
		*(_QWORD*)v14 = 0i64;
		*(_DWORD*)(v14 + 8) = 3;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

