#include "../winhttp.h"

//----- (0000000140496FA0) ----------------------------------------------------
void __fastcall sub_140496FA0(_QWORD* a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	void(__fastcall * **v4)(_QWORD, __int64); // rcx
	__int64 v5; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v8; // r15
	_QWORD* v9; // rax
	_QWORD* v10; // rbx
	void(__fastcall * **v11)(_QWORD, __int64); // rcx
	__int64 v12; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v15; // rbp
	__int64 v16; // rsi
	__int64 v17; // rbx
	unsigned __int64 n; // rsi
	__int64 v19; // rbx
	__int64 v20; // rcx
	__int64 v21; // rcx
	__int64 v22; // r14
	__int64 v23; // rbx
	__int64 v24; // r14
	__int64 v25; // rbx
	__int64 v26; // rsi
	__int64 v27; // rbx
	__int64 v28; // rdi
	__int64 v29; // rbx
	__int64 v30; // rdi
	__int64 v31; // rbx

	*a1 = off_140B673E8;
	v2 = (_QWORD*)a1[2];
	v3 = (_QWORD*)v2[2];
	if (v3 != v2)
	{
		do
		{
			v4 = (void(__fastcall***)(_QWORD, __int64))v3[5];
			if (v4)
				(**v4)(v4, 1i64);
			v5 = v3[3];
			if (v5)
			{
				v3 = (_QWORD*)v3[3];
				for (i = *(_QWORD**)(v5 + 16); i; i = (_QWORD*)i[2])
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
	v8 = (__int64)(a1 + 1);
	sub_140008410((__int64)(a1 + 1));
	v9 = (_QWORD*)a1[6];
	v10 = (_QWORD*)v9[2];
	if (v10 != v9)
	{
		do
		{
			v11 = (void(__fastcall***)(_QWORD, __int64))v10[5];
			if (v11)
				(**v11)(v11, 1i64);
			v12 = v10[3];
			if (v12)
			{
				v10 = (_QWORD*)v10[3];
				for (k = *(_QWORD**)(v12 + 16); k; k = (_QWORD*)k[2])
					v10 = k;
			}
			else
			{
				for (m = v10[1]; v10 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v10 = (_QWORD*)m;
				if (v10[3] != m)
					v10 = (_QWORD*)m;
			}
		} while (v10 != (_QWORD*)a1[6]);
	}
	v15 = (__int64)(a1 + 5);
	if (a1[7])
	{
		v16 = *(_QWORD*)(a1[6] + 8i64);
		if (v16)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 5), *(_QWORD*)(v16 + 24));
				v17 = *(_QWORD*)(v16 + 16);
				sub_14018B900(v16, 0);
				v16 = v17;
			} while (v17);
		}
		*(_QWORD*)(a1[6] + 16i64) = a1[6];
		*(_QWORD*)(a1[6] + 8i64) = 0i64;
		*(_QWORD*)(a1[6] + 24i64) = a1[6];
		a1[7] = 0i64;
	}
	for (n = 0i64; n < a1[22]; ++n)
	{
		v19 = a1[23] + 8 * n;
		while (*(_QWORD*)v19)
		{
			v20 = *(_QWORD*)v19;
			*(_QWORD*)v19 = *(_QWORD*)(*(_QWORD*)v19 + 8i64);
			sub_14018B900(v20, 0);
		}
	}
	v21 = a1[23];
	a1[21] = 0i64;
	sub_14018B900(v21, 0);
	a1[23] = 0i64;
	if (a1[19])
	{
		v22 = *(_QWORD*)(a1[18] + 8i64);
		if (v22)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 17), *(_QWORD*)(v22 + 24));
				v23 = *(_QWORD*)(v22 + 16);
				sub_14018B900(v22, 0);
				v22 = v23;
			} while (v23);
		}
		*(_QWORD*)(a1[18] + 16i64) = a1[18];
		*(_QWORD*)(a1[18] + 8i64) = 0i64;
		*(_QWORD*)(a1[18] + 24i64) = a1[18];
		a1[19] = 0i64;
	}
	sub_14018B900(a1[18], 0);
	if (a1[15])
	{
		v24 = *(_QWORD*)(a1[14] + 8i64);
		if (v24)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 13), *(_QWORD*)(v24 + 24));
				v25 = *(_QWORD*)(v24 + 16);
				sub_14018B900(v24, 0);
				v24 = v25;
			} while (v25);
		}
		*(_QWORD*)(a1[14] + 16i64) = a1[14];
		*(_QWORD*)(a1[14] + 8i64) = 0i64;
		*(_QWORD*)(a1[14] + 24i64) = a1[14];
		a1[15] = 0i64;
	}
	sub_14018B900(a1[14], 0);
	if (a1[11])
	{
		v26 = *(_QWORD*)(a1[10] + 8i64);
		if (v26)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 9), *(_QWORD*)(v26 + 24));
				v27 = *(_QWORD*)(v26 + 16);
				sub_14018B900(v26, 0);
				v26 = v27;
			} while (v27);
		}
		*(_QWORD*)(a1[10] + 16i64) = a1[10];
		*(_QWORD*)(a1[10] + 8i64) = 0i64;
		*(_QWORD*)(a1[10] + 24i64) = a1[10];
		a1[11] = 0i64;
	}
	sub_14018B900(a1[10], 0);
	if (a1[7])
	{
		v28 = *(_QWORD*)(a1[6] + 8i64);
		if (v28)
		{
			do
			{
				sub_1400083B0(v15, *(_QWORD*)(v28 + 24));
				v29 = *(_QWORD*)(v28 + 16);
				sub_14018B900(v28, 0);
				v28 = v29;
			} while (v29);
		}
		*(_QWORD*)(*(_QWORD*)(v15 + 8) + 16i64) = *(_QWORD*)(v15 + 8);
		*(_QWORD*)(*(_QWORD*)(v15 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(v15 + 8) + 24i64) = *(_QWORD*)(v15 + 8);
		*(_QWORD*)(v15 + 16) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(v15 + 8), 0);
	if (*(_QWORD*)(v8 + 16))
	{
		v30 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 8i64);
		if (v30)
		{
			do
			{
				sub_1400083B0(v8, *(_QWORD*)(v30 + 24));
				v31 = *(_QWORD*)(v30 + 16);
				sub_14018B900(v30, 0);
				v30 = v31;
			} while (v31);
		}
		*(_QWORD*)(*(_QWORD*)(v8 + 8) + 16i64) = *(_QWORD*)(v8 + 8);
		*(_QWORD*)(*(_QWORD*)(v8 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(v8 + 8) + 24i64) = *(_QWORD*)(v8 + 8);
		*(_QWORD*)(v8 + 16) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(v8 + 8), 0);
}
// 140B673E8: using guessed type __int64 (__fastcall *off_140B673E8[2])();

