#include "../winhttp.h"

//----- (00000001405CABD0) ----------------------------------------------------
void __fastcall sub_1405CABD0(__int64 a1, int a2, __int64* a3)
{
	__int64 i; // rbx
	__int64 v7; // rbp
	__int64 v8; // rdi
	int* v9; // rax
	int* v10; // r14

	for (i = 0i64; (unsigned int)i < *(_DWORD*)(a1 + 4); i = (unsigned int)(i + 1))
	{
		v7 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * i);
		if (v7 && **(_DWORD**)(v7 + 64) == a2)
		{
			v8 = a3[1];
			v9 = sub_14018DB00(*a3, v8 + 1, 8i64);
			v10 = v9;
			*(_QWORD*)&v9[2 * v8] = v7;
			if ((int*)*a3 != v9)
			{
				sub_1407DB590(v9, (int*)*a3, 8 * a3[1]);
				if (*a3)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a3 - 16) + 8i64))(*a3 - 16);
				*a3 = (__int64)v10;
			}
			a3[1] = v8 + 1;
		}
	}
}

