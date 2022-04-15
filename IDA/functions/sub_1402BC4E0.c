#include "../winhttp.h"

//----- (00000001402BC4E0) ----------------------------------------------------
__int64 __fastcall sub_1402BC4E0(__int64* a1, unsigned __int64 a2, unsigned __int64 a3, int* a4, __int64 a5)
{
	unsigned __int64 v5; // rdi
	__int64 v10; // rbx
	unsigned __int64 v12; // rdi
	int* v13; // rax
	__int64 v14; // rcx

	v5 = a1[5];
	if (a2 > v5 || a3 > v5 || a2 > a3)
		return 2147942487i64;
	v10 = a5;
	if (a5 == -1)
	{
		v10 = 0i64;
		if (!a4)
			goto LABEL_12;
		if (*(_WORD*)a4)
		{
			do
				++v10;
			while (*((_WORD*)a4 + v10));
		}
	}
	if (!a4 && v10)
		return 2147942487i64;
LABEL_12:
	if (v10 != a3 - a2)
	{
		v12 = v10 + a2 + v5 - a3;
		if (v12 > a1[6])
		{
			v13 = sub_14018C320(a1[4], 2 * v12 + 2, 0);
			a1[6] = v12;
			a1[4] = (__int64)v13;
		}
		sub_1407DB590((int*)(a1[4] + 2 * (a2 + v10)), (int*)(a1[4] + 2 * a3), 2 * (a1[5] - a3));
		*(_WORD*)(a1[4] + 2 * v12) = 0;
		a1[5] = v12;
	}
	sub_1407DB590((int*)(a1[4] + 2 * a2), a4, 2 * v10);
	v14 = a1[8];
	if (v14)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
		a1[8] = 0i64;
	}
	return 0i64;
}

