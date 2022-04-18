#include "../winhttp.h"

//----- (0000000140460070) ----------------------------------------------------
__int64 __fastcall sub_140460070(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
	__int64 v7; // rbx
	__int64 v9; // rax
	__int64 v10; // rsi
	unsigned int i; // edi
	__int64 v12; // rcx
	unsigned int j; // edi
	__int64 v14; // rcx
	unsigned int k; // edi
	__int64 v16; // rcx
	unsigned int m; // edi
	__int64 v18; // rcx
	unsigned int n; // edi
	__int64 v20; // rcx
	unsigned int ii; // edi
	__int64 v22; // rcx
	__int64 v23; // rcx

	v7 = qword_140C65898;
	*(_DWORD*)(a1 + 60) = a2;
	v9 = *(_QWORD*)(v7 + 120);
	if (v9)
	{
		v10 = 0i64;
		if (*(_DWORD*)(a1 + 8) == *(_DWORD*)(v9 + 8))
		{
			for (i = 0; i < *(_DWORD*)(v7 + 164); ++i)
			{
				v12 = *(_QWORD*)(*(_QWORD*)(v7 + 176) + 8i64 * i);
				if (v12)
					sub_14056A430(v12);
			}
			for (j = 0; j < *(_DWORD*)(v7 + 188); ++j)
			{
				v14 = *(_QWORD*)(*(_QWORD*)(v7 + 200) + 8i64 * j);
				if (v14)
					sub_14056A430(v14);
			}
			for (k = 0; k < *(_DWORD*)(v7 + 212); ++k)
			{
				v16 = *(_QWORD*)(*(_QWORD*)(v7 + 224) + 8i64 * k);
				if (v16)
					sub_14056A430(v16);
			}
			for (m = 0; m < *(_DWORD*)(v7 + 236); ++m)
			{
				v18 = *(_QWORD*)(*(_QWORD*)(v7 + 248) + 8i64 * m);
				if (v18)
					sub_14056A430(v18);
			}
			for (n = 0; n < *(_DWORD*)(v7 + 260); ++n)
			{
				v20 = *(_QWORD*)(*(_QWORD*)(v7 + 272) + 8i64 * n);
				if (v20)
					sub_14056A430(v20);
			}
			for (ii = 0; ii < *(_DWORD*)(v7 + 284); ++ii)
			{
				v22 = *(_QWORD*)(*(_QWORD*)(v7 + 296) + 8i64 * ii);
				if (v22)
					sub_14056A430(v22);
			}
			if (*(_DWORD*)(v7 + 308))
			{
				do
				{
					v23 = *(_QWORD*)(*(_QWORD*)(v7 + 320) + 8 * v10);
					if (v23)
						sub_14056A430(v23);
					v10 = (unsigned int)(v10 + 1);
				} while ((unsigned int)v10 < *(_DWORD*)(v7 + 308));
			}
			*(_DWORD*)(qword_140C65898 + 1368) = 1;
		}
	}
	return Apollo_LUAEvent(
		*(_QWORD*)(qword_140C65898 + 29504),
		"UnitLevelChanged",
		L"U",
		*(unsigned int*)(a1 + 8),
		a5,
		a6,
		a7);
}
// 1409EE04C: using guessed type wchar_t aU_14[2];
// 140C65898: using guessed type __int64 qword_140C65898;

