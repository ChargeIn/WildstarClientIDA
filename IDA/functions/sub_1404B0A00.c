#include "../winhttp.h"

//----- (00000001404B0A00) ----------------------------------------------------
void __fastcall sub_1404B0A00(__int64* a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rdi
	__int64 v5; // rcx
	__int64 v6; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v9; // rdi
	__int64 v10; // rbp
	__int64 v11; // rsi
	__int64 v12; // rbx
	_QWORD* v13; // rax
	_QWORD* v14; // rbx
	__int64 v15; // rsi
	__int64 v16; // rbp
	__int64 v17; // rdi
	__int64 v18; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v21; // rsi
	__int64 v22; // rbx
	__int64 v23; // rdi
	__int64 v24; // rbx
	__int64 v25; // rdi
	__int64 v26; // rbx
	__int64* v27; // rdi
	int n; // ebp
	bool v29; // zf
	__int64 v30; // rsi
	__int64 v31; // rbx

	v1 = (_QWORD*)a1[9];
	v3 = (_QWORD*)v1[2];
	if (v3 != v1)
	{
		do
		{
			v4 = v3[5];
			if (v4)
			{
				v5 = *(_QWORD*)(v4 + 24);
				if (v5)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
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
		} while (v3 != (_QWORD*)a1[9]);
	}
	sub_140008410((__int64)(a1 + 8));
	v9 = (__int64)a1;
	v10 = 2i64;
	do
	{
		if (*(_QWORD*)(v9 + 16))
		{
			v11 = *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64);
			if (v11)
			{
				do
				{
					sub_1400083B0(v9, *(_QWORD*)(v11 + 24));
					v12 = *(_QWORD*)(v11 + 16);
					sub_14018B900(v11, 0);
					v11 = v12;
				} while (v12);
			}
			*(_QWORD*)(*(_QWORD*)(v9 + 8) + 16i64) = *(_QWORD*)(v9 + 8);
			*(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) = 0i64;
			*(_QWORD*)(*(_QWORD*)(v9 + 8) + 24i64) = *(_QWORD*)(v9 + 8);
			*(_QWORD*)(v9 + 16) = 0i64;
		}
		v9 += 32i64;
		--v10;
	} while (v10);
	v13 = (_QWORD*)a1[17];
	v14 = (_QWORD*)v13[2];
	if (v14 != v13)
	{
		do
		{
			v15 = v14[5];
			if (v15)
			{
				if (*(_QWORD*)(v15 + 16))
				{
					v16 = *(_QWORD*)(*(_QWORD*)(v15 + 8) + 8i64);
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
				sub_14018B900(v15, 0);
			}
			v18 = v14[3];
			if (v18)
			{
				v14 = (_QWORD*)v14[3];
				for (k = *(_QWORD**)(v18 + 16); k; k = (_QWORD*)k[2])
					v14 = k;
			}
			else
			{
				for (m = v14[1]; v14 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v14 = (_QWORD*)m;
				if (v14[3] != m)
					v14 = (_QWORD*)m;
			}
		} while (v14 != (_QWORD*)a1[17]);
	}
	if (a1[18])
	{
		v21 = *(_QWORD*)(a1[17] + 8);
		if (v21)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 16), *(_QWORD*)(v21 + 24));
				v22 = *(_QWORD*)(v21 + 16);
				sub_14018B900(v21, 0);
				v21 = v22;
			} while (v22);
		}
		*(_QWORD*)(a1[17] + 16) = a1[17];
		*(_QWORD*)(a1[17] + 8) = 0i64;
		*(_QWORD*)(a1[17] + 24) = a1[17];
		a1[18] = 0i64;
	}
	sub_14018B900(a1[17], 0);
	if (a1[14])
	{
		v23 = *(_QWORD*)(a1[13] + 8);
		if (v23)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 12), *(_QWORD*)(v23 + 24));
				v24 = *(_QWORD*)(v23 + 16);
				sub_14018B900(v23, 0);
				v23 = v24;
			} while (v24);
		}
		*(_QWORD*)(a1[13] + 16) = a1[13];
		*(_QWORD*)(a1[13] + 8) = 0i64;
		*(_QWORD*)(a1[13] + 24) = a1[13];
		a1[14] = 0i64;
	}
	sub_14018B900(a1[13], 0);
	if (a1[10])
	{
		v25 = *(_QWORD*)(a1[9] + 8);
		if (v25)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 8), *(_QWORD*)(v25 + 24));
				v26 = *(_QWORD*)(v25 + 16);
				sub_14018B900(v25, 0);
				v25 = v26;
			} while (v26);
		}
		*(_QWORD*)(a1[9] + 16) = a1[9];
		*(_QWORD*)(a1[9] + 8) = 0i64;
		*(_QWORD*)(a1[9] + 24) = a1[9];
		a1[10] = 0i64;
	}
	v27 = a1 + 9;
	sub_14018B900(a1[9], 0);
	for (n = 1; n >= 0; --n)
	{
		v29 = *(v27 - 3) == 0;
		v27 -= 4;
		if (!v29)
		{
			v30 = *(_QWORD*)(*v27 + 8);
			if (v30)
			{
				do
				{
					sub_1400083B0((__int64)(v27 - 1), *(_QWORD*)(v30 + 24));
					v31 = *(_QWORD*)(v30 + 16);
					sub_14018B900(v30, 0);
					v30 = v31;
				} while (v31);
			}
			*(_QWORD*)(*v27 + 16) = *v27;
			*(_QWORD*)(*v27 + 8) = 0i64;
			*(_QWORD*)(*v27 + 24) = *v27;
			v27[1] = 0i64;
		}
		sub_14018B900(*v27, 0);
	}
}

