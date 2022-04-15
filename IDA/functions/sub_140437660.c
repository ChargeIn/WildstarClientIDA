#include "../winhttp.h"

//----- (0000000140437660) ----------------------------------------------------
void __fastcall sub_140437660(__int64* a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rdi
	__int64 v5; // rcx
	__int64 v6; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* v9; // rax
	_QWORD* v10; // rbx
	__int64 v11; // rsi
	__int64 v12; // rbp
	__int64 v13; // rdi
	__int64 v14; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v17; // rsi
	__int64 v18; // rbx
	__int64 v19; // rcx
	__int64 v20; // rsi
	__int64 v21; // rbx
	__int64 v22; // rdi
	__int64 v23; // rbx
	__int64 v24; // rdi
	__int64 v25; // rbx

	v1 = (_QWORD*)a1[1];
	v3 = (_QWORD*)v1[2];
	if (v3 != v1)
	{
		do
		{
			v4 = v3[5];
			if (v4)
			{
				v5 = *(_QWORD*)(v4 + 16);
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
		} while (v3 != (_QWORD*)a1[1]);
	}
	sub_140008410((__int64)a1);
	v9 = (_QWORD*)a1[9];
	v10 = (_QWORD*)v9[2];
	if (v10 != v9)
	{
		do
		{
			v11 = v10[5];
			if (v11)
			{
				if (*(_QWORD*)(v11 + 16))
				{
					v12 = *(_QWORD*)(*(_QWORD*)(v11 + 8) + 8i64);
					if (v12)
					{
						do
						{
							sub_1400083B0(v11, *(_QWORD*)(v12 + 24));
							v13 = *(_QWORD*)(v12 + 16);
							sub_14018B900(v12, 0);
							v12 = v13;
						} while (v13);
					}
					*(_QWORD*)(*(_QWORD*)(v11 + 8) + 16i64) = *(_QWORD*)(v11 + 8);
					*(_QWORD*)(*(_QWORD*)(v11 + 8) + 8i64) = 0i64;
					*(_QWORD*)(*(_QWORD*)(v11 + 8) + 24i64) = *(_QWORD*)(v11 + 8);
					*(_QWORD*)(v11 + 16) = 0i64;
				}
				sub_14018B900(*(_QWORD*)(v11 + 8), 0);
				sub_14018B900(v11, 0);
			}
			v14 = v10[3];
			if (v14)
			{
				v10 = (_QWORD*)v10[3];
				for (k = *(_QWORD**)(v14 + 16); k; k = (_QWORD*)k[2])
					v10 = k;
			}
			else
			{
				for (m = v10[1]; v10 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v10 = (_QWORD*)m;
				if (v10[3] != m)
					v10 = (_QWORD*)m;
			}
		} while (v10 != (_QWORD*)a1[9]);
	}
	if (a1[10])
	{
		v17 = *(_QWORD*)(a1[9] + 8);
		if (v17)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 8), *(_QWORD*)(v17 + 24));
				v18 = *(_QWORD*)(v17 + 16);
				sub_14018B900(v17, 0);
				v17 = v18;
			} while (v18);
		}
		*(_QWORD*)(a1[9] + 16) = a1[9];
		*(_QWORD*)(a1[9] + 8) = 0i64;
		*(_QWORD*)(a1[9] + 24) = a1[9];
		a1[10] = 0i64;
	}
	v19 = a1[12];
	if (v19)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
	if (a1[10])
	{
		v20 = *(_QWORD*)(a1[9] + 8);
		if (v20)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 8), *(_QWORD*)(v20 + 24));
				v21 = *(_QWORD*)(v20 + 16);
				sub_14018B900(v20, 0);
				v20 = v21;
			} while (v21);
		}
		*(_QWORD*)(a1[9] + 16) = a1[9];
		*(_QWORD*)(a1[9] + 8) = 0i64;
		*(_QWORD*)(a1[9] + 24) = a1[9];
		a1[10] = 0i64;
	}
	sub_14018B900(a1[9], 0);
	if (a1[6])
	{
		v22 = *(_QWORD*)(a1[5] + 8);
		if (v22)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 4), *(_QWORD*)(v22 + 24));
				v23 = *(_QWORD*)(v22 + 16);
				sub_14018B900(v22, 0);
				v22 = v23;
			} while (v23);
		}
		*(_QWORD*)(a1[5] + 16) = a1[5];
		*(_QWORD*)(a1[5] + 8) = 0i64;
		*(_QWORD*)(a1[5] + 24) = a1[5];
		a1[6] = 0i64;
	}
	sub_14018B900(a1[5], 0);
	if (a1[2])
	{
		v24 = *(_QWORD*)(a1[1] + 8);
		if (v24)
		{
			do
			{
				sub_1400083B0((__int64)a1, *(_QWORD*)(v24 + 24));
				v25 = *(_QWORD*)(v24 + 16);
				sub_14018B900(v24, 0);
				v24 = v25;
			} while (v25);
		}
		*(_QWORD*)(a1[1] + 16) = a1[1];
		*(_QWORD*)(a1[1] + 8) = 0i64;
		*(_QWORD*)(a1[1] + 24) = a1[1];
		a1[2] = 0i64;
	}
	sub_14018B900(a1[1], 0);
}

