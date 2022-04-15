#include "../winhttp.h"

//----- (0000000140645020) ----------------------------------------------------
__int64 __fastcall sub_140645020(__int64* a1, __int64 a2)
{
	__int64 v2; // rbp
	int* v5; // r15
	int* v6; // rcx
	__int64* v7; // rcx
	unsigned __int64 v8; // rsi
	int* v9; // rbx
	_QWORD* v10; // rdx
	__int64 result; // rax

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 24i64);
	v6 = &v5[6 * v2];
	if (v6)
	{
		v7 = (__int64*)(v6 + 2);
		*((_DWORD*)v7 - 2) = *(_DWORD*)a2;
		sub_140645310(v7, (_QWORD*)(a2 + 8));
	}
	if ((int*)*a1 != v5)
	{
		v8 = 0i64;
		if (a1[1])
		{
			v9 = v5;
			do
			{
				if (v9)
				{
					v10 = (_QWORD*)(*a1 + (char*)v9 - (char*)v5 + 8);
					*v9 = *(_DWORD*)(*a1 + (char*)v9 - (char*)v5);
					sub_140645310((__int64*)v9 + 1, v10);
				}
				sub_140644FB0((int*)((char*)v9 + 8i64 - (_QWORD)v5 + *a1));
				++v8;
				v9 += 6;
			} while (v8 < a1[1]);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v5;
	}
	result = v2;
	a1[1] = v2 + 1;
	return result;
}

