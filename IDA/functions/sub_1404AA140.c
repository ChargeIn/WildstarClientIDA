#include "../winhttp.h"

//----- (00000001404AA140) ----------------------------------------------------
void __fastcall sub_1404AA140(_QWORD* a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rdi
	__int64 v5; // rcx
	__int64 v6; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v9; // rbp
	_QWORD* v10; // rax
	_QWORD* v11; // rbx
	__int64 v12; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v15; // rdi
	__int64 v16; // rsi
	__int64 v17; // rbx
	__int64 v18; // rdi
	__int64 v19; // rbx

	*a1 = &off_140B68748;
	v2 = (_QWORD*)a1[2];
	v3 = (_QWORD*)v2[2];
	if (v3 != v2)
	{
		do
		{
			v4 = v3[5];
			if (v4)
			{
				v5 = *(_QWORD*)(v4 + 8);
				if (v5)
					sub_14018B900(v5, 0);
				sub_14018B900(v4, 0);
			}
			v6 = v3[3];
			if (v6)
			{
				v3 = (_QWORD*)v3[3];
				for (i = *(_QWORD**)(v6 + 16); i; i = (_QWORD*)i[2])
					v3 = i;
			}
			else
			{
				for (j = v3[1]; v3 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = (_QWORD*)j;
				if (v3[3] != j)
					v3 = (_QWORD*)j;
			}
		} while (v3 != (_QWORD*)a1[2]);
	}
	v9 = (__int64)(a1 + 1);
	sub_140008410((__int64)(a1 + 1));
	v10 = (_QWORD*)a1[6];
	v11 = (_QWORD*)v10[2];
	if (v11 != v10)
	{
		do
		{
			sub_14018B900(v11[5], 0);
			v12 = v11[3];
			if (v12)
			{
				v11 = (_QWORD*)v11[3];
				for (k = *(_QWORD**)(v12 + 16); k; k = (_QWORD*)k[2])
					v11 = k;
			}
			else
			{
				for (m = v11[1]; v11 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v11 = (_QWORD*)m;
				if (v11[3] != m)
					v11 = (_QWORD*)m;
			}
		} while (v11 != (_QWORD*)a1[6]);
	}
	v15 = (__int64)(a1 + 5);
	if (a1[7])
	{
		v16 = *(_QWORD*)(a1[6] + 8i64);
		if (v16)
		{
			do
			{
				sub_1400083B0(v15, *(_QWORD*)(v16 + 24));
				v17 = *(_QWORD*)(v16 + 16);
				sub_14018B900(v16, 0);
				v16 = v17;
			} while (v17);
		}
		*(_QWORD*)(*(_QWORD*)(v15 + 8) + 16i64) = *(_QWORD*)(v15 + 8);
		*(_QWORD*)(*(_QWORD*)(v15 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(v15 + 8) + 24i64) = *(_QWORD*)(v15 + 8);
		*(_QWORD*)(v15 + 16) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(v15 + 8), 0);
	if (*(_QWORD*)(v9 + 16))
	{
		v18 = *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64);
		if (v18)
		{
			do
			{
				sub_1400083B0(v9, *(_QWORD*)(v18 + 24));
				v19 = *(_QWORD*)(v18 + 16);
				sub_14018B900(v18, 0);
				v18 = v19;
			} while (v19);
		}
		*(_QWORD*)(*(_QWORD*)(v9 + 8) + 16i64) = *(_QWORD*)(v9 + 8);
		*(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(v9 + 8) + 24i64) = *(_QWORD*)(v9 + 8);
		*(_QWORD*)(v9 + 16) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(v9 + 8), 0);
}
// 140B68748: using guessed type __int64 (__fastcall *off_140B68748)();

