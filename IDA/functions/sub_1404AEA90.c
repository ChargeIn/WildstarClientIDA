#include "../winhttp.h"

//----- (00000001404AEA90) ----------------------------------------------------
void __fastcall sub_1404AEA90(_QWORD* a1)
{
	_QWORD* v1; // rax
	_QWORD* v2; // rbx
	__int64 v4; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* v7; // rax
	_QWORD* v8; // rbx
	__int64 v9; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v12; // rdi
	__int64 v13; // rbx
	_QWORD* v14; // rax
	_QWORD* v15; // rbx
	__int64 v16; // r14
	__int64 v17; // rbp
	__int64 v18; // rdi
	__int64 v19; // rax
	_QWORD* n; // rax
	__int64 ii; // rax
	__int64 v22; // rdi
	__int64 v23; // rbx
	_QWORD* v24; // rax
	_QWORD* v25; // rbx
	__int64 v26; // r14
	__int64 v27; // rbp
	__int64 v28; // rdi
	__int64 v29; // rax
	_QWORD* jj; // rax
	__int64 kk; // rax
	__int64 v32; // rdi
	__int64 v33; // rbx
	__int64 v34; // rbp
	__int64 v35; // rbx
	__int64 v36; // rdi
	__int64 v37; // rbx
	__int64 v38; // rdi
	__int64 v39; // rbx
	__int64 v40; // rdi
	__int64 v41; // rbx
	__int64 v42; // rdi
	__int64 v43; // rbx
	__int64 v44; // rdi
	__int64 v45; // rbx
	__int64 v46; // rdi
	__int64 v47; // rbx
	__int64 v48; // rdi
	__int64 v49; // rbx

	*a1 = &off_140B687B0;
	v1 = (_QWORD*)a1[22];
	v2 = (_QWORD*)v1[2];
	if (v2 != v1)
	{
		do
		{
			sub_14018B900(v2[5], 0);
			v4 = v2[3];
			if (v4)
			{
				v2 = (_QWORD*)v2[3];
				for (i = *(_QWORD**)(v4 + 16); i; i = (_QWORD*)i[2])
					v2 = i;
			}
			else
			{
				for (j = v2[1]; v2 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v2 = (_QWORD*)j;
				if (v2[3] != j)
					v2 = (_QWORD*)j;
			}
		} while (v2 != (_QWORD*)a1[22]);
	}
	sub_140008410((__int64)(a1 + 21));
	v7 = (_QWORD*)a1[26];
	v8 = (_QWORD*)v7[2];
	if (v8 != v7)
	{
		do
		{
			sub_14018B900(v8[5], 0);
			v9 = v8[3];
			if (v9)
			{
				v8 = (_QWORD*)v8[3];
				for (k = *(_QWORD**)(v9 + 16); k; k = (_QWORD*)k[2])
					v8 = k;
			}
			else
			{
				for (m = v8[1]; v8 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v8 = (_QWORD*)m;
				if (v8[3] != m)
					v8 = (_QWORD*)m;
			}
		} while (v8 != (_QWORD*)a1[26]);
	}
	if (a1[27])
	{
		v12 = *(_QWORD*)(a1[26] + 8i64);
		if (v12)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 25), *(_QWORD*)(v12 + 24));
				v13 = *(_QWORD*)(v12 + 16);
				sub_14018B900(v12, 0);
				v12 = v13;
			} while (v13);
		}
		*(_QWORD*)(a1[26] + 16i64) = a1[26];
		*(_QWORD*)(a1[26] + 8i64) = 0i64;
		*(_QWORD*)(a1[26] + 24i64) = a1[26];
		a1[27] = 0i64;
	}
	v14 = (_QWORD*)a1[2];
	v15 = (_QWORD*)v14[2];
	if (v15 != v14)
	{
		do
		{
			v16 = v15[5];
			if (v16)
			{
				if (*(_QWORD*)(v16 + 24))
				{
					v17 = *(_QWORD*)(*(_QWORD*)(v16 + 16) + 8i64);
					if (v17)
					{
						do
						{
							sub_1400083B0(v16 + 8, *(_QWORD*)(v17 + 24));
							v18 = *(_QWORD*)(v17 + 16);
							sub_14018B900(v17, 0);
							v17 = v18;
						} while (v18);
					}
					*(_QWORD*)(*(_QWORD*)(v16 + 16) + 16i64) = *(_QWORD*)(v16 + 16);
					*(_QWORD*)(*(_QWORD*)(v16 + 16) + 8i64) = 0i64;
					*(_QWORD*)(*(_QWORD*)(v16 + 16) + 24i64) = *(_QWORD*)(v16 + 16);
					*(_QWORD*)(v16 + 24) = 0i64;
				}
				sub_14018B900(*(_QWORD*)(v16 + 16), 0);
				sub_14018B900(v16, 0);
			}
			v19 = v15[3];
			if (v19)
			{
				v15 = (_QWORD*)v15[3];
				for (n = *(_QWORD**)(v19 + 16); n; n = (_QWORD*)n[2])
					v15 = n;
			}
			else
			{
				for (ii = v15[1]; v15 == *(_QWORD**)(ii + 24); ii = *(_QWORD*)(ii + 8))
					v15 = (_QWORD*)ii;
				if (v15[3] != ii)
					v15 = (_QWORD*)ii;
			}
		} while (v15 != (_QWORD*)a1[2]);
	}
	if (a1[3])
	{
		v22 = *(_QWORD*)(a1[2] + 8i64);
		if (v22)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 1), *(_QWORD*)(v22 + 24));
				v23 = *(_QWORD*)(v22 + 16);
				sub_14018B900(v22, 0);
				v22 = v23;
			} while (v23);
		}
		*(_QWORD*)(a1[2] + 16i64) = a1[2];
		*(_QWORD*)(a1[2] + 8i64) = 0i64;
		*(_QWORD*)(a1[2] + 24i64) = a1[2];
		a1[3] = 0i64;
	}
	v24 = (_QWORD*)a1[6];
	v25 = (_QWORD*)v24[2];
	if (v25 != v24)
	{
		do
		{
			v26 = v25[5];
			if (v26)
			{
				if (*(_QWORD*)(v26 + 24))
				{
					v27 = *(_QWORD*)(*(_QWORD*)(v26 + 16) + 8i64);
					if (v27)
					{
						do
						{
							sub_1400083B0(v26 + 8, *(_QWORD*)(v27 + 24));
							v28 = *(_QWORD*)(v27 + 16);
							sub_14018B900(v27, 0);
							v27 = v28;
						} while (v28);
					}
					*(_QWORD*)(*(_QWORD*)(v26 + 16) + 16i64) = *(_QWORD*)(v26 + 16);
					*(_QWORD*)(*(_QWORD*)(v26 + 16) + 8i64) = 0i64;
					*(_QWORD*)(*(_QWORD*)(v26 + 16) + 24i64) = *(_QWORD*)(v26 + 16);
					*(_QWORD*)(v26 + 24) = 0i64;
				}
				sub_14018B900(*(_QWORD*)(v26 + 16), 0);
				sub_14018B900(v26, 0);
			}
			v29 = v25[3];
			if (v29)
			{
				v25 = (_QWORD*)v25[3];
				for (jj = *(_QWORD**)(v29 + 16); jj; jj = (_QWORD*)jj[2])
					v25 = jj;
			}
			else
			{
				for (kk = v25[1]; v25 == *(_QWORD**)(kk + 24); kk = *(_QWORD*)(kk + 8))
					v25 = (_QWORD*)kk;
				if (v25[3] != kk)
					v25 = (_QWORD*)kk;
			}
		} while (v25 != (_QWORD*)a1[6]);
	}
	if (a1[7])
	{
		v32 = *(_QWORD*)(a1[6] + 8i64);
		if (v32)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 5), *(_QWORD*)(v32 + 24));
				v33 = *(_QWORD*)(v32 + 16);
				sub_14018B900(v32, 0);
				v32 = v33;
			} while (v33);
		}
		*(_QWORD*)(a1[6] + 16i64) = a1[6];
		*(_QWORD*)(a1[6] + 8i64) = 0i64;
		*(_QWORD*)(a1[6] + 24i64) = a1[6];
		a1[7] = 0i64;
	}
	if (a1[31])
	{
		v34 = *(_QWORD*)(a1[30] + 8i64);
		if (v34)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 29), *(_QWORD*)(v34 + 24));
				v35 = *(_QWORD*)(v34 + 16);
				sub_14018B900(v34, 0);
				v34 = v35;
			} while (v35);
		}
		*(_QWORD*)(a1[30] + 16i64) = a1[30];
		*(_QWORD*)(a1[30] + 8i64) = 0i64;
		*(_QWORD*)(a1[30] + 24i64) = a1[30];
		a1[31] = 0i64;
	}
	sub_14018B900(a1[30], 0);
	if (a1[27])
	{
		v36 = *(_QWORD*)(a1[26] + 8i64);
		if (v36)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 25), *(_QWORD*)(v36 + 24));
				v37 = *(_QWORD*)(v36 + 16);
				sub_14018B900(v36, 0);
				v36 = v37;
			} while (v37);
		}
		*(_QWORD*)(a1[26] + 16i64) = a1[26];
		*(_QWORD*)(a1[26] + 8i64) = 0i64;
		*(_QWORD*)(a1[26] + 24i64) = a1[26];
		a1[27] = 0i64;
	}
	sub_14018B900(a1[26], 0);
	if (a1[23])
	{
		v38 = *(_QWORD*)(a1[22] + 8i64);
		if (v38)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 21), *(_QWORD*)(v38 + 24));
				v39 = *(_QWORD*)(v38 + 16);
				sub_14018B900(v38, 0);
				v38 = v39;
			} while (v39);
		}
		*(_QWORD*)(a1[22] + 16i64) = a1[22];
		*(_QWORD*)(a1[22] + 8i64) = 0i64;
		*(_QWORD*)(a1[22] + 24i64) = a1[22];
		a1[23] = 0i64;
	}
	sub_14018B900(a1[22], 0);
	if (a1[19])
	{
		v40 = *(_QWORD*)(a1[18] + 8i64);
		if (v40)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 17), *(_QWORD*)(v40 + 24));
				v41 = *(_QWORD*)(v40 + 16);
				sub_14018B900(v40, 0);
				v40 = v41;
			} while (v41);
		}
		*(_QWORD*)(a1[18] + 16i64) = a1[18];
		*(_QWORD*)(a1[18] + 8i64) = 0i64;
		*(_QWORD*)(a1[18] + 24i64) = a1[18];
		a1[19] = 0i64;
	}
	sub_14018B900(a1[18], 0);
	if (a1[15])
	{
		v42 = *(_QWORD*)(a1[14] + 8i64);
		if (v42)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 13), *(_QWORD*)(v42 + 24));
				v43 = *(_QWORD*)(v42 + 16);
				sub_14018B900(v42, 0);
				v42 = v43;
			} while (v43);
		}
		*(_QWORD*)(a1[14] + 16i64) = a1[14];
		*(_QWORD*)(a1[14] + 8i64) = 0i64;
		*(_QWORD*)(a1[14] + 24i64) = a1[14];
		a1[15] = 0i64;
	}
	sub_14018B900(a1[14], 0);
	if (a1[11])
	{
		v44 = *(_QWORD*)(a1[10] + 8i64);
		if (v44)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 9), *(_QWORD*)(v44 + 24));
				v45 = *(_QWORD*)(v44 + 16);
				sub_14018B900(v44, 0);
				v44 = v45;
			} while (v45);
		}
		*(_QWORD*)(a1[10] + 16i64) = a1[10];
		*(_QWORD*)(a1[10] + 8i64) = 0i64;
		*(_QWORD*)(a1[10] + 24i64) = a1[10];
		a1[11] = 0i64;
	}
	sub_14018B900(a1[10], 0);
	if (a1[7])
	{
		v46 = *(_QWORD*)(a1[6] + 8i64);
		if (v46)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 5), *(_QWORD*)(v46 + 24));
				v47 = *(_QWORD*)(v46 + 16);
				sub_14018B900(v46, 0);
				v46 = v47;
			} while (v47);
		}
		*(_QWORD*)(a1[6] + 16i64) = a1[6];
		*(_QWORD*)(a1[6] + 8i64) = 0i64;
		*(_QWORD*)(a1[6] + 24i64) = a1[6];
		a1[7] = 0i64;
	}
	sub_14018B900(a1[6], 0);
	if (a1[3])
	{
		v48 = *(_QWORD*)(a1[2] + 8i64);
		if (v48)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 1), *(_QWORD*)(v48 + 24));
				v49 = *(_QWORD*)(v48 + 16);
				sub_14018B900(v48, 0);
				v48 = v49;
			} while (v49);
		}
		*(_QWORD*)(a1[2] + 16i64) = a1[2];
		*(_QWORD*)(a1[2] + 8i64) = 0i64;
		*(_QWORD*)(a1[2] + 24i64) = a1[2];
		a1[3] = 0i64;
	}
	sub_14018B900(a1[2], 0);
}
// 140B687B0: using guessed type __int64 (__fastcall *off_140B687B0)();

