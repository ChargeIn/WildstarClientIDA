#include "../winhttp.h"

//----- (00000001406F80E0) ----------------------------------------------------
__int64 __fastcall sub_1406F80E0(_QWORD* a1)
{
	__int64 v2; // rsi
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // ebp
	__int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 i; // rax
	__int64 j; // rax

	v2 = qword_140C65898 + 28576;
	if (qword_140C65898 == -28576)
		return 0i64;
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v4 = a1[2];
	v5 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	v6 = 0;
	*(_QWORD*)v4 = v5;
	a1[2] += 16i64;
	v7 = *(_QWORD*)(v2 + 8);
	v8 = *(_QWORD*)(v7 + 16);
	if (v8 != v7)
	{
		do
		{
			if (sub_1403D90D0(qword_140C65898, *(_DWORD*)(v8 + 32)))
			{
				v9 = a1[2];
				++v6;
				*(_DWORD*)(v9 + 8) = 3;
				*(double*)v9 = (double)v6;
				a1[2] += 16i64;
				sub_140649870(a1, *(_DWORD*)(v8 + 32));
				sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 32i64;
			}
			v10 = *(_QWORD*)(v8 + 24);
			if (v10)
			{
				v8 = *(_QWORD*)(v8 + 24);
				for (i = *(_QWORD*)(v10 + 16); i; i = *(_QWORD*)(i + 16))
					v8 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v8 + 8); v8 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v8 = j;
				if (*(_QWORD*)(v8 + 24) != j)
					v8 = j;
			}
		} while (v8 != *(_QWORD*)(v2 + 8));
	}
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

