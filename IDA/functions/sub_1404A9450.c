#include "../winhttp.h"

//----- (00000001404A9450) ----------------------------------------------------
void __fastcall sub_1404A9450(_QWORD* a1)
{
	_QWORD* v1; // rax
	_QWORD* v2; // rbx
	__int64 v4; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rdi
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 k; // rax
	__int64 m; // rax
	_QWORD* v14; // rax
	_QWORD* v15; // rbx
	__int64 v16; // rdi
	__int64 v17; // rcx
	__int64 v18; // rax
	_QWORD* n; // rax
	__int64 ii; // rax
	__int64 v21; // r15
	__int64 v22; // rdi
	__int64 v23; // rbx
	__int64 v24; // r13
	__int64 v25; // rdi
	__int64 v26; // rbx
	__int64 v27; // rbp
	__int64 v28; // rbx
	__int64 v29; // rsi
	__int64 v30; // rbx
	__int64 v31; // r14
	__int64 v32; // rbp
	__int64 v33; // r12
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
	__int64 v44; // rdi
	__int64 v45; // rbx
	__int64 v46; // [rsp+70h] [rbp+8h]
	__int64 v47; // [rsp+78h] [rbp+10h]
	__int64 v48; // [rsp+80h] [rbp+18h]
	__int64 v49; // [rsp+88h] [rbp+20h]

	*a1 = off_140B686F0;
	v1 = (_QWORD*)a1[2];
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
		} while (v2 != (_QWORD*)a1[2]);
	}
	v49 = (__int64)(a1 + 1);
	sub_140008410((__int64)(a1 + 1));
	v47 = (__int64)(a1 + 9);
	sub_140008410((__int64)(a1 + 9));
	v48 = (__int64)(a1 + 5);
	sub_140008410((__int64)(a1 + 5));
	v7 = a1[14];
	v8 = *(_QWORD*)(v7 + 16);
	if (v8 != v7)
	{
		do
		{
			sub_1404A9C40((__int64)(a1 + 17), (_DWORD*)(v8 + 32));
			v9 = *(_QWORD*)(v8 + 40);
			if (v9)
			{
				v10 = *(_QWORD*)(v9 + 16);
				if (v10)
					sub_14018B900(v10, 0);
				sub_14018B900(v9, 0);
			}
			v11 = *(_QWORD*)(v8 + 24);
			if (v11)
			{
				v8 = *(_QWORD*)(v8 + 24);
				for (k = *(_QWORD*)(v11 + 16); k; k = *(_QWORD*)(k + 16))
					v8 = k;
			}
			else
			{
				for (m = *(_QWORD*)(v8 + 8); v8 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
					v8 = m;
				if (*(_QWORD*)(v8 + 24) != m)
					v8 = m;
			}
		} while (v8 != a1[14]);
	}
	v14 = (_QWORD*)a1[18];
	v15 = (_QWORD*)v14[2];
	if (v15 != v14)
	{
		do
		{
			v16 = v15[5];
			if (v16)
			{
				v17 = *(_QWORD*)(v16 + 16);
				if (v17)
					sub_14018B900(v17, 0);
				sub_14018B900(v16, 0);
			}
			v18 = v15[3];
			if (v18)
			{
				v15 = (_QWORD*)v15[3];
				for (n = *(_QWORD**)(v18 + 16); n; n = (_QWORD*)n[2])
					v15 = n;
			}
			else
			{
				for (ii = v15[1]; v15 == *(_QWORD**)(ii + 24); ii = *(_QWORD*)(ii + 8))
					v15 = (_QWORD*)ii;
				if (v15[3] != ii)
					v15 = (_QWORD*)ii;
			}
		} while (v15 != (_QWORD*)a1[18]);
	}
	v21 = (__int64)(a1 + 13);
	if (a1[15])
	{
		v22 = *(_QWORD*)(a1[14] + 8i64);
		if (v22)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 13), *(_QWORD*)(v22 + 24));
				v23 = *(_QWORD*)(v22 + 16);
				sub_14018B900(v22, 0);
				v22 = v23;
			} while (v23);
		}
		*(_QWORD*)(a1[14] + 16i64) = a1[14];
		*(_QWORD*)(a1[14] + 8i64) = 0i64;
		*(_QWORD*)(a1[14] + 24i64) = a1[14];
		a1[15] = 0i64;
	}
	v24 = (__int64)(a1 + 17);
	if (a1[19])
	{
		v25 = *(_QWORD*)(a1[18] + 8i64);
		if (v25)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 17), *(_QWORD*)(v25 + 24));
				v26 = *(_QWORD*)(v25 + 16);
				sub_14018B900(v25, 0);
				v25 = v26;
			} while (v26);
		}
		*(_QWORD*)(a1[18] + 16i64) = a1[18];
		*(_QWORD*)(a1[18] + 8i64) = 0i64;
		*(_QWORD*)(a1[18] + 24i64) = a1[18];
		a1[19] = 0i64;
	}
	if (a1[27])
	{
		v27 = *(_QWORD*)(a1[26] + 8i64);
		if (v27)
		{
			do
			{
				sub_140032150((__int64)(a1 + 25), *(_QWORD**)(v27 + 24));
				v28 = *(_QWORD*)(v27 + 16);
				v46 = v28;
				if (*(_QWORD*)(v27 + 56))
				{
					v29 = *(_QWORD*)(*(_QWORD*)(v27 + 48) + 8i64);
					if (v29)
					{
						do
						{
							sub_1400083B0(v27 + 40, *(_QWORD*)(v29 + 24));
							v30 = *(_QWORD*)(v29 + 16);
							sub_14018B900(v29, 0);
							v29 = v30;
						} while (v30);
						v28 = v46;
					}
					*(_QWORD*)(*(_QWORD*)(v27 + 48) + 16i64) = *(_QWORD*)(v27 + 48);
					*(_QWORD*)(*(_QWORD*)(v27 + 48) + 8i64) = 0i64;
					*(_QWORD*)(*(_QWORD*)(v27 + 48) + 24i64) = *(_QWORD*)(v27 + 48);
					*(_QWORD*)(v27 + 56) = 0i64;
				}
				sub_14018B900(*(_QWORD*)(v27 + 48), 0);
				sub_14018B900(v27, 0);
				v27 = v28;
			} while (v28);
		}
		*(_QWORD*)(a1[26] + 16i64) = a1[26];
		*(_QWORD*)(a1[26] + 8i64) = 0i64;
		*(_QWORD*)(a1[26] + 24i64) = a1[26];
		a1[27] = 0i64;
	}
	sub_14018B900(a1[26], 0);
	v31 = (__int64)(a1 + 21);
	if (*(_QWORD*)(v31 + 16))
	{
		v32 = *(_QWORD*)(*(_QWORD*)(v31 + 8) + 8i64);
		if (v32)
		{
			do
			{
				sub_140032150(v31, *(_QWORD**)(v32 + 24));
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
		*(_QWORD*)(*(_QWORD*)(v31 + 8) + 16i64) = *(_QWORD*)(v31 + 8);
		*(_QWORD*)(*(_QWORD*)(v31 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(v31 + 8) + 24i64) = *(_QWORD*)(v31 + 8);
		*(_QWORD*)(v31 + 16) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(v31 + 8), 0);
	if (*(_QWORD*)(v24 + 16))
	{
		v36 = *(_QWORD*)(*(_QWORD*)(v24 + 8) + 8i64);
		if (v36)
		{
			do
			{
				sub_1400083B0(v24, *(_QWORD*)(v36 + 24));
				v37 = *(_QWORD*)(v36 + 16);
				sub_14018B900(v36, 0);
				v36 = v37;
			} while (v37);
		}
		*(_QWORD*)(*(_QWORD*)(v24 + 8) + 16i64) = *(_QWORD*)(v24 + 8);
		*(_QWORD*)(*(_QWORD*)(v24 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(v24 + 8) + 24i64) = *(_QWORD*)(v24 + 8);
		*(_QWORD*)(v24 + 16) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(v24 + 8), 0);
	if (*(_QWORD*)(v21 + 16))
	{
		v38 = *(_QWORD*)(*(_QWORD*)(v21 + 8) + 8i64);
		if (v38)
		{
			do
			{
				sub_1400083B0(v21, *(_QWORD*)(v38 + 24));
				v39 = *(_QWORD*)(v38 + 16);
				sub_14018B900(v38, 0);
				v38 = v39;
			} while (v39);
		}
		*(_QWORD*)(*(_QWORD*)(v21 + 8) + 16i64) = *(_QWORD*)(v21 + 8);
		*(_QWORD*)(*(_QWORD*)(v21 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(v21 + 8) + 24i64) = *(_QWORD*)(v21 + 8);
		*(_QWORD*)(v21 + 16) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(v21 + 8), 0);
	if (*(_QWORD*)(v47 + 16))
	{
		v40 = *(_QWORD*)(*(_QWORD*)(v47 + 8) + 8i64);
		if (v40)
		{
			do
			{
				sub_1400083B0(v47, *(_QWORD*)(v40 + 24));
				v41 = *(_QWORD*)(v40 + 16);
				sub_14018B900(v40, 0);
				v40 = v41;
			} while (v41);
		}
		*(_QWORD*)(*(_QWORD*)(v47 + 8) + 16i64) = *(_QWORD*)(v47 + 8);
		*(_QWORD*)(*(_QWORD*)(v47 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(v47 + 8) + 24i64) = *(_QWORD*)(v47 + 8);
		*(_QWORD*)(v47 + 16) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(v47 + 8), 0);
	if (*(_QWORD*)(v48 + 16))
	{
		v42 = *(_QWORD*)(*(_QWORD*)(v48 + 8) + 8i64);
		if (v42)
		{
			do
			{
				sub_1400083B0(v48, *(_QWORD*)(v42 + 24));
				v43 = *(_QWORD*)(v42 + 16);
				sub_14018B900(v42, 0);
				v42 = v43;
			} while (v43);
		}
		*(_QWORD*)(*(_QWORD*)(v48 + 8) + 16i64) = *(_QWORD*)(v48 + 8);
		*(_QWORD*)(*(_QWORD*)(v48 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(v48 + 8) + 24i64) = *(_QWORD*)(v48 + 8);
		*(_QWORD*)(v48 + 16) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(v48 + 8), 0);
	if (*(_QWORD*)(v49 + 16))
	{
		v44 = *(_QWORD*)(*(_QWORD*)(v49 + 8) + 8i64);
		if (v44)
		{
			do
			{
				sub_1400083B0(v49, *(_QWORD*)(v44 + 24));
				v45 = *(_QWORD*)(v44 + 16);
				sub_14018B900(v44, 0);
				v44 = v45;
			} while (v45);
		}
		*(_QWORD*)(*(_QWORD*)(v49 + 8) + 16i64) = *(_QWORD*)(v49 + 8);
		*(_QWORD*)(*(_QWORD*)(v49 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(v49 + 8) + 24i64) = *(_QWORD*)(v49 + 8);
		*(_QWORD*)(v49 + 16) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(v49 + 8), 0);
}
// 140B686F0: using guessed type __int64 (__fastcall *off_140B686F0[2])();

