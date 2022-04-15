#include "../winhttp.h"

//----- (00000001404889B0) ----------------------------------------------------
void __fastcall sub_1404889B0(_QWORD* a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rdi
	__int64 v5; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v8; // r15
	__int64 v9; // r14
	__int64 v10; // rbp
	_QWORD* v11; // rax
	_QWORD* v12; // rbx
	_QWORD* v13; // r12
	__int64 v14; // rbp
	__int64 v15; // rdi
	__int64 v16; // r14
	__int64 v17; // rdi
	__int64 v18; // r15
	__int64 v19; // rdi
	__int64 v20; // r15
	__int64 v21; // rdi
	__int64 v22; // r14
	__int64 v23; // rdi
	__int64 v24; // rbp
	__int64 v25; // rdi
	__int64 v26; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v29; // rdi
	__int64 v30; // rsi
	__int64 v31; // rbx
	__int64 v32; // rsi
	__int64 v33; // rbx
	__int64 v34; // rsi
	__int64 v35; // rbx
	__int64 v36; // rsi
	__int64 v37; // rbx
	__int64 v38; // rsi
	__int64 v39; // rbx

	*a1 = off_140B67200;
	sub_14018B900(qword_140C65940, 0);
	v2 = (_QWORD*)a1[6];
	v3 = (_QWORD*)v2[2];
	if (v3 != v2)
	{
		do
		{
			v4 = v3[5];
			if (v4)
			{
				sub_14048A4C0(v3[5]);
				sub_14018B900(v4, 0);
			}
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
		} while (v3 != (_QWORD*)a1[6]);
	}
	v8 = (__int64)(a1 + 5);
	sub_140008410((__int64)(a1 + 5));
	v9 = (__int64)(a1 + 9);
	sub_140008410((__int64)(a1 + 9));
	v10 = (__int64)(a1 + 13);
	sub_140008410((__int64)(a1 + 13));
	v11 = (_QWORD*)a1[2];
	v12 = (_QWORD*)v11[2];
	if (v12 != v11)
	{
		do
		{
			v13 = (_QWORD*)v12[5];
			if (v13)
			{
				*v13 = 0i64;
				if (v13[3])
				{
					v14 = *(_QWORD*)(v13[2] + 8i64);
					if (v14)
					{
						do
						{
							sub_1400083B0((__int64)(v13 + 1), *(_QWORD*)(v14 + 24));
							v15 = *(_QWORD*)(v14 + 16);
							sub_14018B900(v14, 0);
							v14 = v15;
						} while (v15);
					}
					*(_QWORD*)(v13[2] + 16i64) = v13[2];
					*(_QWORD*)(v13[2] + 8i64) = 0i64;
					*(_QWORD*)(v13[2] + 24i64) = v13[2];
					v13[3] = 0i64;
				}
				if (v13[7])
				{
					v16 = *(_QWORD*)(v13[6] + 8i64);
					if (v16)
					{
						do
						{
							sub_1400083B0((__int64)(v13 + 5), *(_QWORD*)(v16 + 24));
							v17 = *(_QWORD*)(v16 + 16);
							sub_14018B900(v16, 0);
							v16 = v17;
						} while (v17);
					}
					*(_QWORD*)(v13[6] + 16i64) = v13[6];
					*(_QWORD*)(v13[6] + 8i64) = 0i64;
					*(_QWORD*)(v13[6] + 24i64) = v13[6];
					v13[7] = 0i64;
				}
				if (v13[11])
				{
					v18 = *(_QWORD*)(v13[10] + 8i64);
					if (v18)
					{
						do
						{
							sub_1400083B0((__int64)(v13 + 9), *(_QWORD*)(v18 + 24));
							v19 = *(_QWORD*)(v18 + 16);
							sub_14018B900(v18, 0);
							v18 = v19;
						} while (v19);
					}
					*(_QWORD*)(v13[10] + 16i64) = v13[10];
					*(_QWORD*)(v13[10] + 8i64) = 0i64;
					*(_QWORD*)(v13[10] + 24i64) = v13[10];
					v13[11] = 0i64;
				}
				if (v13[11])
				{
					v20 = *(_QWORD*)(v13[10] + 8i64);
					if (v20)
					{
						do
						{
							sub_1400083B0((__int64)(v13 + 9), *(_QWORD*)(v20 + 24));
							v21 = *(_QWORD*)(v20 + 16);
							sub_14018B900(v20, 0);
							v20 = v21;
						} while (v21);
					}
					*(_QWORD*)(v13[10] + 16i64) = v13[10];
					*(_QWORD*)(v13[10] + 8i64) = 0i64;
					*(_QWORD*)(v13[10] + 24i64) = v13[10];
					v13[11] = 0i64;
				}
				sub_14018B900(v13[10], 0);
				if (v13[7])
				{
					v22 = *(_QWORD*)(v13[6] + 8i64);
					if (v22)
					{
						do
						{
							sub_1400083B0((__int64)(v13 + 5), *(_QWORD*)(v22 + 24));
							v23 = *(_QWORD*)(v22 + 16);
							sub_14018B900(v22, 0);
							v22 = v23;
						} while (v23);
					}
					*(_QWORD*)(v13[6] + 16i64) = v13[6];
					*(_QWORD*)(v13[6] + 8i64) = 0i64;
					*(_QWORD*)(v13[6] + 24i64) = v13[6];
					v13[7] = 0i64;
				}
				sub_14018B900(v13[6], 0);
				if (v13[3])
				{
					v24 = *(_QWORD*)(v13[2] + 8i64);
					if (v24)
					{
						do
						{
							sub_1400083B0((__int64)(v13 + 1), *(_QWORD*)(v24 + 24));
							v25 = *(_QWORD*)(v24 + 16);
							sub_14018B900(v24, 0);
							v24 = v25;
						} while (v25);
					}
					*(_QWORD*)(v13[2] + 16i64) = v13[2];
					*(_QWORD*)(v13[2] + 8i64) = 0i64;
					*(_QWORD*)(v13[2] + 24i64) = v13[2];
					v13[3] = 0i64;
				}
				sub_14018B900(v13[2], 0);
				sub_14018B900((__int64)v13, 0);
			}
			v26 = v12[3];
			if (v26)
			{
				v12 = (_QWORD*)v12[3];
				for (k = *(_QWORD**)(v26 + 16); k; k = (_QWORD*)k[2])
					v12 = k;
			}
			else
			{
				for (m = v12[1]; v12 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v12 = (_QWORD*)m;
				if (v12[3] != m)
					v12 = (_QWORD*)m;
			}
		} while (v12 != (_QWORD*)a1[2]);
		v10 = (__int64)(a1 + 13);
		v9 = (__int64)(a1 + 9);
		v8 = (__int64)(a1 + 5);
	}
	v29 = (__int64)(a1 + 1);
	if (a1[3])
	{
		v30 = *(_QWORD*)(a1[2] + 8i64);
		if (v30)
		{
			do
			{
				sub_1400083B0(v29, *(_QWORD*)(v30 + 24));
				v31 = *(_QWORD*)(v30 + 16);
				sub_14018B900(v30, 0);
				v30 = v31;
			} while (v31);
		}
		*(_QWORD*)(a1[2] + 16i64) = a1[2];
		*(_QWORD*)(a1[2] + 8i64) = 0i64;
		*(_QWORD*)(a1[2] + 24i64) = a1[2];
		a1[3] = 0i64;
	}
	if (*(_QWORD*)(v10 + 16))
	{
		v32 = *(_QWORD*)(*(_QWORD*)(v10 + 8) + 8i64);
		if (v32)
		{
			do
			{
				sub_1400083B0(v10, *(_QWORD*)(v32 + 24));
				v33 = *(_QWORD*)(v32 + 16);
				sub_14018B900(v32, 0);
				v32 = v33;
			} while (v33);
		}
		*(_QWORD*)(*(_QWORD*)(v10 + 8) + 16i64) = *(_QWORD*)(v10 + 8);
		*(_QWORD*)(*(_QWORD*)(v10 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(v10 + 8) + 24i64) = *(_QWORD*)(v10 + 8);
		*(_QWORD*)(v10 + 16) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(v10 + 8), 0);
	if (*(_QWORD*)(v9 + 16))
	{
		v34 = *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64);
		if (v34)
		{
			do
			{
				sub_1400083B0(v9, *(_QWORD*)(v34 + 24));
				v35 = *(_QWORD*)(v34 + 16);
				sub_14018B900(v34, 0);
				v34 = v35;
			} while (v35);
		}
		*(_QWORD*)(*(_QWORD*)(v9 + 8) + 16i64) = *(_QWORD*)(v9 + 8);
		*(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(v9 + 8) + 24i64) = *(_QWORD*)(v9 + 8);
		*(_QWORD*)(v9 + 16) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(v9 + 8), 0);
	if (*(_QWORD*)(v8 + 16))
	{
		v36 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 8i64);
		if (v36)
		{
			do
			{
				sub_1400083B0(v8, *(_QWORD*)(v36 + 24));
				v37 = *(_QWORD*)(v36 + 16);
				sub_14018B900(v36, 0);
				v36 = v37;
			} while (v37);
		}
		*(_QWORD*)(*(_QWORD*)(v8 + 8) + 16i64) = *(_QWORD*)(v8 + 8);
		*(_QWORD*)(*(_QWORD*)(v8 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(v8 + 8) + 24i64) = *(_QWORD*)(v8 + 8);
		*(_QWORD*)(v8 + 16) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(v8 + 8), 0);
	if (a1[3])
	{
		v38 = *(_QWORD*)(a1[2] + 8i64);
		if (v38)
		{
			do
			{
				sub_1400083B0(v29, *(_QWORD*)(v38 + 24));
				v39 = *(_QWORD*)(v38 + 16);
				sub_14018B900(v38, 0);
				v38 = v39;
			} while (v39);
		}
		*(_QWORD*)(a1[2] + 16i64) = a1[2];
		*(_QWORD*)(a1[2] + 8i64) = 0i64;
		*(_QWORD*)(a1[2] + 24i64) = a1[2];
		a1[3] = 0i64;
	}
	sub_14018B900(a1[2], 0);
}
// 140B67200: using guessed type __int64 (__fastcall *off_140B67200[17])();
// 140C65940: using guessed type __int64 qword_140C65940;

