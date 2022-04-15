#include "../winhttp.h"

//----- (00000001403DB050) ----------------------------------------------------
__int64 __fastcall sub_1403DB050(__int64 a1, __int64 a2, double a3, double a4)
{
	__int64 v6; // r14
	__int64 v7; // rcx
	__int64 v8; // rbx
	__int64 v9; // rdi
	int v10; // eax
	unsigned __int64 v11; // rbx
	__int64 v12; // rax
	unsigned int v13; // ecx
	__int64 v14; // rax
	__int64 v15; // r9
	unsigned int v16; // r8d
	__int64 v17; // rcx
	__int64 v18; // rdx
	__int128 v20; // [rsp+60h] [rbp-18h] BYREF

	sub_140427D40(*(_QWORD*)(a1 + 29504), *(_DWORD*)(a2 + 8), *(_DWORD*)(a2 + 4));
	sub_1405FEFC0(*(_QWORD*)(a1 + 32144), *(_DWORD*)(a2 + 8));
	v6 = sub_1403D90D0(a1, *(_DWORD*)(a2 + 8));
	v8 = sub_1403D90D0(a1, *(_DWORD*)(a2 + 4));
	if (v6)
		v9 = v6;
	else
		v9 = sub_1403D90D0(a1, *(_DWORD*)a2);
	v10 = sub_1403DA850(v7, *(_DWORD*)(a2 + 12), *(_DWORD*)(a2 + 16), *(_DWORD*)(a2 + 20));
	sub_1403DAB40(a1, v9, v8, v10, *(_DWORD*)(a2 + 12), *(_DWORD*)(a2 + 16), *(_DWORD*)(a2 + 60));
	v11 = 0i64;
	if (*(_DWORD*)(a2 + 12) == 7)
	{
		v12 = sub_140211B00(*(_DWORD*)(a2 + 16));
		if (v12)
		{
			v13 = *(_DWORD*)(v12 + 32);
			if (v13)
			{
				v14 = sub_140248F00(v13);
				if (v14)
				{
					v16 = *(_DWORD*)(a2 + 4);
					v20 = 0i64;
					sub_1405787D0((__int64)&v20, 0, v16, v15, v14, 0i64, 0i64, 0, 0i64, &v20, 0);
				}
			}
		}
	}
	if (v6)
	{
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "UnitDestroyed", L"U", *(unsigned int*)(a2 + 8));
		sub_1403D9590(a1, v6, a3, a4);
	}
	else if (v9 && *(_QWORD*)(v9 + 13888))
	{
		v17 = 0i64;
		do
		{
			v18 = *(_QWORD*)(v9 + 13880);
			if (*(_DWORD*)(v18 + v17) == *(_DWORD*)(a2 + 8))
				*(_DWORD*)(v18 + v17 + 56) = 1;
			++v11;
			v17 += 64i64;
		} while (v11 < *(_QWORD*)(v9 + 13888));
	}
	return 0i64;
}
// 1403DB0D0: variable 'v7' is possibly undefined
// 1403DB155: variable 'v15' is possibly undefined
// 1409EDDFC: using guessed type wchar_t aU_5[2];

