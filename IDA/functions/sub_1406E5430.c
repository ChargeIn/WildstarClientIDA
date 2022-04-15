#include "../winhttp.h"

//----- (00000001406E5430) ----------------------------------------------------
void __fastcall sub_1406E5430(__int64 a1, __int64* a2)
{
	unsigned __int64 v2; // r12
	unsigned __int64 i; // rbx
	__int64 v6; // rbp
	__int64 v7; // rdi
	int* v8; // rax
	int* v9; // r14

	v2 = *(_QWORD*)(a1 + 2464);
	for (i = 0i64; i < v2; ++i)
	{
		v6 = *(_QWORD*)(*(_QWORD*)(a1 + 2456) + 8 * i);
		if ((unsigned int)(*(_DWORD*)(v6 + 64) - 2) <= 1)
		{
			v7 = a2[1];
			v8 = sub_14018DB00(*a2, v7 + 1, 8i64);
			v9 = v8;
			*(_QWORD*)&v8[2 * v7] = v6;
			if ((int*)*a2 != v8)
			{
				sub_1407DB590(v8, (int*)*a2, 8 * a2[1]);
				if (*a2)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a2 - 16) + 8i64))(*a2 - 16);
				*a2 = (__int64)v9;
			}
			a2[1] = v7 + 1;
		}
	}
}

