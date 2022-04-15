#include "../winhttp.h"

//----- (000000014030A7C0) ----------------------------------------------------
__int64 __fastcall sub_14030A7C0(__int64* a1, __int64 a2)
{
	__int64 v2; // rbp
	int* v5; // rdi
	int* v6; // rcx
	unsigned __int64 v7; // r8
	int* v8; // rax
	__int64 v9; // rdx
	__int64 result; // rax

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 16i64);
	v6 = &v5[4 * v2];
	if (v6)
	{
		*(_QWORD*)v6 = *(_QWORD*)a2;
		v6[2] = *(_DWORD*)(a2 + 8);
	}
	if ((int*)*a1 != v5)
	{
		v7 = 0i64;
		if (a1[1])
		{
			v8 = v5;
			do
			{
				if (v8)
				{
					v9 = *a1 + (char*)v8 - (char*)v5;
					*(_QWORD*)v8 = *(_QWORD*)v9;
					v8[2] = *(_DWORD*)(v9 + 8);
				}
				++v7;
				v8 += 4;
			} while (v7 < a1[1]);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v5;
	}
	result = v2;
	a1[1] = v2 + 1;
	return result;
}

