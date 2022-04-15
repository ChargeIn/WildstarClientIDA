#include "../winhttp.h"

//----- (00000001400296F0) ----------------------------------------------------
void __fastcall sub_1400296F0(__int64* a1, __int64 a2)
{
	unsigned __int64 v3; // r14
	__int64 v5; // rcx
	unsigned __int64 v6; // rsi
	__int64 v7; // rdi
	__int64* v8; // rdx
	__int64 v9; // rcx
	int* v10; // rbp
	__int64 v11; // rdi
	unsigned __int64 v12; // rsi
	__int64 v13; // rcx

	v3 = a1[1] - 1;
	v5 = *(_QWORD*)(*a1 + 816 * a2 + 784);
	if (v5)
		sub_14018B900(v5, 0);
	v6 = a2 + 1;
	if (v6 < a1[1])
	{
		v7 = 816 * v6;
		do
		{
			v8 = (__int64*)(v7 + *a1);
			if (v8 != (__int64*)816)
				sub_140029950((__int64)(v8 - 102), v8);
			v9 = *(_QWORD*)(v7 + *a1 + 784);
			if (v9)
				sub_14018B900(v9, 0);
			++v6;
			v7 += 816i64;
		} while (v6 < a1[1]);
	}
	v10 = sub_14018DB00(*a1, v3, 816i64);
	if ((int*)*a1 != v10)
	{
		if (v3)
		{
			v11 = 0i64;
			v12 = v3;
			do
			{
				if (&v10[v11])
					sub_140029950((__int64)&v10[v11], (__int64*)(v11 * 4 + *a1));
				v13 = *(_QWORD*)(v11 * 4 + *a1 + 784);
				if (v13)
					sub_14018B900(v13, 0);
				v11 += 204i64;
				--v12;
			} while (v12);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v10;
	}
	a1[1] = v3;
}

