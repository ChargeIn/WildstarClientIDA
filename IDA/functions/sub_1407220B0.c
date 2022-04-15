#include "../winhttp.h"

//----- (00000001407220B0) ----------------------------------------------------
void __fastcall sub_1407220B0(_QWORD* a1)
{
	_QWORD* v1; // rax
	_QWORD* v2; // rbx
	__int64 v4; // rdi
	__int64 v5; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* v8; // rax
	_QWORD* v9; // rbx
	void(__fastcall * **v10)(_QWORD, __int64); // rcx
	__int64 v11; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v14; // rdi
	__int64 v15; // rbx
	__int64 v16; // rdi
	__int64 v17; // rbx
	_QWORD* v18; // rax
	_QWORD* v19; // rbx
	void(__fastcall * **v20)(_QWORD, __int64); // rcx
	__int64 v21; // rax
	_QWORD* n; // rax
	__int64 ii; // rax
	__int64 v24; // rsi
	__int64 v25; // rbx
	__int64 v26; // rdi
	__int64 v27; // rbx
	__int64 v28; // rbp
	__int64 v29; // r15
	__int64 v30; // rsi
	__int64 v31; // rbx
	__int64 v32; // rbp
	__int64 v33; // r15
	__int64 v34; // rsi
	__int64 v35; // rbx
	__int64 v36; // rdi
	__int64 v37; // rbx
	__int64 v38; // rdi
	__int64 v39; // rbx
	__int64 v40; // rdi
	__int64 v41; // rbx
	__int64 v42; // rdi
	__int64 v43; // rbx

	*a1 = off_140B672B0;
	v1 = (_QWORD*)a1[2];
	v2 = (_QWORD*)v1[2];
	if (v2 != v1)
	{
		do
		{
			v4 = v2[5];
			if (v4)
			{
				sub_140720C10(v2[5]);
				sub_14018B900(v4, 0);
			}
			v5 = v2[3];
			if (v5)
			{
				v2 = (_QWORD*)v2[3];
				for (i = *(_QWORD**)(v5 + 16); i; i = (_QWORD*)i[2])
					v2 = i;
			}
			else
			{
				for (j = v2[1]; v2 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v2 = (_QWORD*)j;
				if (v2[3] != j)
					v2 = (_QWORD*)j;
			}
		} while (v2 != (_QWORD*)a1[2]);
	}
	sub_140008410((__int64)(a1 + 1));
	v8 = (_QWORD*)a1[6];
	v9 = (_QWORD*)v8[2];
	if (v9 != v8)
	{
		do
		{
			v10 = (void(__fastcall***)(_QWORD, __int64))v9[5];
			if (v10)
				(**v10)(v10, 1i64);
			v11 = v9[3];
			if (v11)
			{
				v9 = (_QWORD*)v9[3];
				for (k = *(_QWORD**)(v11 + 16); k; k = (_QWORD*)k[2])
					v9 = k;
			}
			else
			{
				for (m = v9[1]; v9 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v9 = (_QWORD*)m;
				if (v9[3] != m)
					v9 = (_QWORD*)m;
			}
		} while (v9 != (_QWORD*)a1[6]);
	}
	if (a1[7])
	{
		v14 = *(_QWORD*)(a1[6] + 8i64);
		if (v14)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 5), *(_QWORD*)(v14 + 24));
				v15 = *(_QWORD*)(v14 + 16);
				sub_14018B900(v14, 0);
				v14 = v15;
			} while (v15);
		}
		*(_QWORD*)(a1[6] + 16i64) = a1[6];
		*(_QWORD*)(a1[6] + 8i64) = 0i64;
		*(_QWORD*)(a1[6] + 24i64) = a1[6];
		a1[7] = 0i64;
	}
	if (a1[15])
	{
		v16 = *(_QWORD*)(a1[14] + 8i64);
		if (v16)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 13), *(_QWORD*)(v16 + 24));
				v17 = *(_QWORD*)(v16 + 16);
				sub_14018B900(v16, 0);
				v16 = v17;
			} while (v17);
		}
		*(_QWORD*)(a1[14] + 16i64) = a1[14];
		*(_QWORD*)(a1[14] + 8i64) = 0i64;
		*(_QWORD*)(a1[14] + 24i64) = a1[14];
		a1[15] = 0i64;
	}
	v18 = (_QWORD*)a1[30];
	v19 = (_QWORD*)v18[2];
	if (v19 != v18)
	{
		do
		{
			v20 = (void(__fastcall***)(_QWORD, __int64))v19[5];
			if (v20)
				(**v20)(v20, 1i64);
			v21 = v19[3];
			if (v21)
			{
				v19 = (_QWORD*)v19[3];
				for (n = *(_QWORD**)(v21 + 16); n; n = (_QWORD*)n[2])
					v19 = n;
			}
			else
			{
				for (ii = v19[1]; v19 == *(_QWORD**)(ii + 24); ii = *(_QWORD*)(ii + 8))
					v19 = (_QWORD*)ii;
				if (v19[3] != ii)
					v19 = (_QWORD*)ii;
			}
		} while (v19 != (_QWORD*)a1[30]);
	}
	if (a1[31])
	{
		v24 = *(_QWORD*)(a1[30] + 8i64);
		if (v24)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 29), *(_QWORD*)(v24 + 24));
				v25 = *(_QWORD*)(v24 + 16);
				sub_14018B900(v24, 0);
				v24 = v25;
			} while (v25);
		}
		*(_QWORD*)(a1[30] + 16i64) = a1[30];
		*(_QWORD*)(a1[30] + 8i64) = 0i64;
		*(_QWORD*)(a1[30] + 24i64) = a1[30];
		a1[31] = 0i64;
	}
	sub_14018B900(a1[30], 0);
	if (a1[27])
	{
		v26 = *(_QWORD*)(a1[26] + 8i64);
		if (v26)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 25), *(_QWORD*)(v26 + 24));
				v27 = *(_QWORD*)(v26 + 16);
				sub_14018B900(v26, 0);
				v26 = v27;
			} while (v27);
		}
		*(_QWORD*)(a1[26] + 16i64) = a1[26];
		*(_QWORD*)(a1[26] + 8i64) = 0i64;
		*(_QWORD*)(a1[26] + 24i64) = a1[26];
		a1[27] = 0i64;
	}
	sub_14018B900(a1[26], 0);
	if (a1[23])
	{
		v28 = *(_QWORD*)(a1[22] + 8i64);
		if (v28)
		{
			do
			{
				sub_140032150((__int64)(a1 + 21), *(_QWORD**)(v28 + 24));
				v29 = *(_QWORD*)(v28 + 16);
				if (*(_QWORD*)(v28 + 56))
				{
					v30 = *(_QWORD*)(*(_QWORD*)(v28 + 48) + 8i64);
					if (v30)
					{
						do
						{
							sub_1400083B0(v28 + 40, *(_QWORD*)(v30 + 24));
							v31 = *(_QWORD*)(v30 + 16);
							sub_14018B900(v30, 0);
							v30 = v31;
						} while (v31);
					}
					*(_QWORD*)(*(_QWORD*)(v28 + 48) + 16i64) = *(_QWORD*)(v28 + 48);
					*(_QWORD*)(*(_QWORD*)(v28 + 48) + 8i64) = 0i64;
					*(_QWORD*)(*(_QWORD*)(v28 + 48) + 24i64) = *(_QWORD*)(v28 + 48);
					*(_QWORD*)(v28 + 56) = 0i64;
				}
				sub_14018B900(*(_QWORD*)(v28 + 48), 0);
				sub_14018B900(v28, 0);
				v28 = v29;
			} while (v29);
		}
		*(_QWORD*)(a1[22] + 16i64) = a1[22];
		*(_QWORD*)(a1[22] + 8i64) = 0i64;
		*(_QWORD*)(a1[22] + 24i64) = a1[22];
		a1[23] = 0i64;
	}
	sub_14018B900(a1[22], 0);
	if (a1[19])
	{
		v32 = *(_QWORD*)(a1[18] + 8i64);
		if (v32)
		{
			do
			{
				sub_140032150((__int64)(a1 + 17), *(_QWORD**)(v32 + 24));
				v33 = *(_QWORD*)(v32 + 16);
				if (*(_QWORD*)(v32 + 56))
				{
					v34 = *(_QWORD*)(*(_QWORD*)(v32 + 48) + 8i64);
					if (v34)
					{
						do
						{
							sub_1400083B0(v32 + 40, *(_QWORD*)(v34 + 24));
							v35 = *(_QWORD*)(v34 + 16);
							sub_14018B900(v34, 0);
							v34 = v35;
						} while (v35);
					}
					*(_QWORD*)(*(_QWORD*)(v32 + 48) + 16i64) = *(_QWORD*)(v32 + 48);
					*(_QWORD*)(*(_QWORD*)(v32 + 48) + 8i64) = 0i64;
					*(_QWORD*)(*(_QWORD*)(v32 + 48) + 24i64) = *(_QWORD*)(v32 + 48);
					*(_QWORD*)(v32 + 56) = 0i64;
				}
				sub_14018B900(*(_QWORD*)(v32 + 48), 0);
				sub_14018B900(v32, 0);
				v32 = v33;
			} while (v33);
		}
		*(_QWORD*)(a1[18] + 16i64) = a1[18];
		*(_QWORD*)(a1[18] + 8i64) = 0i64;
		*(_QWORD*)(a1[18] + 24i64) = a1[18];
		a1[19] = 0i64;
	}
	sub_14018B900(a1[18], 0);
	if (a1[15])
	{
		v36 = *(_QWORD*)(a1[14] + 8i64);
		if (v36)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 13), *(_QWORD*)(v36 + 24));
				v37 = *(_QWORD*)(v36 + 16);
				sub_14018B900(v36, 0);
				v36 = v37;
			} while (v37);
		}
		*(_QWORD*)(a1[14] + 16i64) = a1[14];
		*(_QWORD*)(a1[14] + 8i64) = 0i64;
		*(_QWORD*)(a1[14] + 24i64) = a1[14];
		a1[15] = 0i64;
	}
	sub_14018B900(a1[14], 0);
	if (a1[11])
	{
		v38 = *(_QWORD*)(a1[10] + 8i64);
		if (v38)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 9), *(_QWORD*)(v38 + 24));
				v39 = *(_QWORD*)(v38 + 16);
				sub_14018B900(v38, 0);
				v38 = v39;
			} while (v39);
		}
		*(_QWORD*)(a1[10] + 16i64) = a1[10];
		*(_QWORD*)(a1[10] + 8i64) = 0i64;
		*(_QWORD*)(a1[10] + 24i64) = a1[10];
		a1[11] = 0i64;
	}
	sub_14018B900(a1[10], 0);
	if (a1[7])
	{
		v40 = *(_QWORD*)(a1[6] + 8i64);
		if (v40)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 5), *(_QWORD*)(v40 + 24));
				v41 = *(_QWORD*)(v40 + 16);
				sub_14018B900(v40, 0);
				v40 = v41;
			} while (v41);
		}
		*(_QWORD*)(a1[6] + 16i64) = a1[6];
		*(_QWORD*)(a1[6] + 8i64) = 0i64;
		*(_QWORD*)(a1[6] + 24i64) = a1[6];
		a1[7] = 0i64;
	}
	sub_14018B900(a1[6], 0);
	if (a1[3])
	{
		v42 = *(_QWORD*)(a1[2] + 8i64);
		if (v42)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 1), *(_QWORD*)(v42 + 24));
				v43 = *(_QWORD*)(v42 + 16);
				sub_14018B900(v42, 0);
				v42 = v43;
			} while (v43);
		}
		*(_QWORD*)(a1[2] + 16i64) = a1[2];
		*(_QWORD*)(a1[2] + 8i64) = 0i64;
		*(_QWORD*)(a1[2] + 24i64) = a1[2];
		a1[3] = 0i64;
	}
	sub_14018B900(a1[2], 0);
}
// 140B672B0: using guessed type __int64 (__fastcall *off_140B672B0[4])();

