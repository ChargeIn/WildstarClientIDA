#include "../winhttp.h"

//----- (0000000140019B70) ----------------------------------------------------
__int64 __fastcall sub_140019B70(__int64* a1, _QWORD* a2)
{
	__int64 v2; // rbp
	int* v5; // rax
	int* v6; // rcx
	int* v7; // rsi
	unsigned __int64 i; // rdi
	int* v9; // rdx
	_QWORD* v10; // rcx
	__int64 v11; // rcx
	__int64 result; // rax

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 8i64);
	v6 = &v5[2 * v2];
	v7 = v5;
	if (v6)
	{
		*(_QWORD*)v6 = *a2;
		*a2 = 0i64;
	}
	if ((int*)*a1 != v5)
	{
		for (i = 0i64; i < a1[1]; ++i)
		{
			v9 = &v7[2 * i];
			if (v9)
			{
				v10 = (_QWORD*)(*a1 + 8 * i);
				*(_QWORD*)v9 = *v10;
				*v10 = 0i64;
			}
			v11 = *(_QWORD*)(*a1 + 8 * i);
			if (v11)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v7;
	}
	result = v2;
	a1[1] = v2 + 1;
	return result;
}

