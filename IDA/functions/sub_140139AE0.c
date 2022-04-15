#include "../winhttp.h"

//----- (0000000140139AE0) ----------------------------------------------------
void __fastcall sub_140139AE0(__int64 a1, __int64 a2)
{
	int* v4; // rax
	int* v5; // r15
	unsigned int v6; // ebp
	__int64 v7; // rsi
	__int64 v8; // rax
	bool v9; // bl
	__int64 v10; // rdi
	int v11; // eax
	int* v12; // rax
	__int64 i; // rbx
	int* v14; // rbx
	__int64 v15; // rbp
	int* v16; // r14
	__int64 v17; // rax
	int* v18; // rsi
	__int64 v19; // rdi
	unsigned __int64 v20; // rdi
	_WORD* v21; // r12
	int* v22; // r15
	int* v23; // rsi
	int* v24; // rdi
	__int64* v25; // rax
	bool v26; // di
	__int64 v27; // r9
	__int64 v28; // rcx
	int* v29; // rsi
	int* v30; // rdi
	__int64 v31; // rax
	__int64 v32; // rbx
	unsigned __int64 v33; // rbx
	_QWORD* v34; // rax
	_QWORD* v35; // rbx
	__int64 v36; // rcx
	__int64 v37; // rcx
	__int64 v38; // rax
	_QWORD* j; // rax
	__int64 k; // rax
	int* v41; // rdx
	__int64 v42; // rax
	_QWORD* v43; // rax
	_QWORD* v44; // rbx
	__int64 v45; // rax
	_QWORD* m; // rax
	__int64 n; // rax
	int* v48; // rax
	__int64 v49; // rbx
	__int64 v50; // rcx
	__int64 v51; // rdi
	int* v52; // rbx
	__int64 v53; // rcx
	int* v54; // [rsp+20h] [rbp-78h]
	char v55[16]; // [rsp+28h] [rbp-70h] BYREF
	char v56[8]; // [rsp+38h] [rbp-60h] BYREF
	int* v57; // [rsp+40h] [rbp-58h]
	__int64 v58; // [rsp+48h] [rbp-50h]
	int* v59; // [rsp+A0h] [rbp+8h] BYREF
	int* v60; // [rsp+B0h] [rbp+18h] BYREF
	__int64 v61; // [rsp+B8h] [rbp+20h] BYREF

	if (*(_QWORD*)(a1 + 8))
	{
		v4 = sub_14018B280(24i64, 0);
		*(_QWORD*)v4 = v4;
		v5 = v4;
		v54 = v4;
		*((_QWORD*)v4 + 1) = v4;
		v57 = sub_14018B280(64i64, 0);
		v58 = 0i64;
		*(_BYTE*)v57 = 0;
		*((_QWORD*)v57 + 1) = 0i64;
		v6 = 0;
		*((_QWORD*)v57 + 2) = v57;
		*((_QWORD*)v57 + 3) = v57;
		if (*(_DWORD*)(a1 + 24))
		{
			v7 = 0i64;
			do
			{
				v8 = *(_QWORD*)(a1 + 16);
				v9 = 0;
				v10 = *(_QWORD*)(v7 + v8);
				if (!*(_BYTE*)(v10 + 312))
				{
				LABEL_14:
					if (*(_BYTE*)(v10 + 264) && !v9)
						sub_1400035B0();
					goto LABEL_17;
				}
				if (a2)
				{
					v11 = sub_140421470(a2, *(_QWORD*)(v7 + v8));
					v9 = v11 == 0;
					if (v11 == 1)
						goto LABEL_9;
					if (!v11)
						goto LABEL_14;
				}
				if (!sub_140136B00(v10, *(_DWORD*)(a1 + 72)))
					goto LABEL_14;
			LABEL_9:
				v12 = sub_14018B280(24i64, 0);
				if (v12 != (int*)-16i64)
					*((_QWORD*)v12 + 2) = v10;
				*(_QWORD*)v12 = v5;
				*((_QWORD*)v12 + 1) = *((_QWORD*)v5 + 1);
				**((_QWORD**)v5 + 1) = v12;
				*((_QWORD*)v5 + 1) = v12;
				for (i = *(_QWORD*)(v10 + 424); i != *(_QWORD*)(v10 + 432); i += 32i64)
					sub_140044D10((__int64)v56, (__int64)v55, i);
			LABEL_17:
				++v6;
				v7 += 8i64;
			} while (v6 < *(_DWORD*)(a1 + 24));
		}
		v14 = *(int**)v5;
		if (*(int**)v5 != v5)
		{
			do
			{
				v15 = *((_QWORD*)v14 + 2);
				v16 = 0i64;
				v17 = 0i64;
				v18 = *(int**)(v15 + 24);
				if (*(_WORD*)v18)
				{
					do
						++v17;
					while (*((_WORD*)v18 + v17));
				}
				v19 = (2 * v17) >> 1;
				if ((unsigned __int64)(v19 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					v16 = sub_14018B280(2 * (v19 + 1), 0);
				v20 = 2 * v19;
				sub_1407DB590(v16, v18, v20);
				v21 = (_WORD*)((char*)v16 + v20);
				if ((int*)((char*)v16 + v20))
					*v21 = 0;
				v22 = v57;
				v23 = v57;
				v24 = (int*)*((_QWORD*)v57 + 1);
				if (!v24)
					goto LABEL_33;
				do
				{
					if ((int)sub_1400454D0(*((_QWORD*)v24 + 5), *((_QWORD*)v24 + 6), (unsigned __int16*)v16, (__int64)v21) < 0)
					{
						v24 = (int*)*((_QWORD*)v24 + 3);
					}
					else
					{
						v23 = v24;
						v24 = (int*)*((_QWORD*)v24 + 2);
					}
				} while (v24);
				if (v23 == v22
					|| (int)sub_1400454D0((__int64)v16, (__int64)v21, *((unsigned __int16**)v23 + 5), *((_QWORD*)v23 + 6)) < 0)
				{
				LABEL_33:
					v60 = v22;
					v25 = (__int64*)&v60;
				}
				else
				{
					v59 = v23;
					v25 = (__int64*)&v59;
				}
				v26 = *v25 == (_QWORD)v22;
				if (v16)
					sub_14018B900((__int64)v16, 0);
				if (v26)
				{
					*(_QWORD*)(a1 + 32) = v15;
					if (!*(_BYTE*)(v15 + 264))
					{
						v27 = *(_QWORD*)(v15 + 24);
						v61 = 0x141D1D190i64;
						sub_1401A3130(13, 2, &v61, v27);
					}
					sub_1401374C0(v15);
				}
				else if (*(_BYTE*)(v15 + 264))
				{
					sub_1400035B0();
				}
				v14 = *(int**)v14;
				v5 = v54;
			} while (v14 != v54);
		}
		v28 = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(a1 + 32) = 0i64;
		*(_BYTE*)a1 = 1;
		sub_1400EAA10(v28, 60, (__int64)&unk_1409D053F);
		v29 = 0i64;
		*(_BYTE*)(*(_QWORD*)(a1 + 8) + 392i64) = 0;
		v30 = *(int**)(qword_140C63650 + 784);
		v31 = 0i64;
		if (*(_WORD*)v30)
		{
			do
				++v31;
			while (*((_WORD*)v30 + v31));
		}
		v32 = (2 * v31) >> 1;
		if ((unsigned __int64)(v32 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v29 = sub_14018B280(2 * (v32 + 1), 0);
		v33 = 2 * v32;
		sub_1407DB590(v29, v30, v33);
		if ((int*)((char*)v29 + v33))
			*(_WORD*)((char*)v29 + v33) = 0;
		v34 = *(_QWORD**)(a1 + 48);
		v35 = (_QWORD*)v34[2];
		if (v35 != v34)
		{
			do
			{
				v36 = v35[8];
				if (*(_QWORD*)(v36 + 88) || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)(v36 + 56) + 8i64))(v36 + 56))
				{
					v37 = v35[8];
					if (!*(_QWORD*)(v37 + 208))
						sub_140185550(v37);
				}
				else
				{
					sub_1401340D0(v35[8], (__int64)L"Package not found");
				}
				v38 = v35[3];
				if (v38)
				{
					v35 = (_QWORD*)v35[3];
					for (j = *(_QWORD**)(v38 + 16); j; j = (_QWORD*)j[2])
						v35 = j;
				}
				else
				{
					for (k = v35[1]; v35 == *(_QWORD**)(k + 24); k = *(_QWORD*)(k + 8))
						v35 = (_QWORD*)k;
					if (v35[3] != k)
						v35 = (_QWORD*)k;
				}
			} while (v35 != *(_QWORD**)(a1 + 48));
		}
		v41 = (int*)&word_140B7B704;
		v42 = 0i64;
		if (v29)
			v41 = v29;
		if (*(_WORD*)v41)
		{
			do
				++v42;
			while (*((_WORD*)v41 + v42));
		}
		sub_14001C480(qword_140C63650 + 776, v41, (int*)((char*)v41 + 2 * v42));
		*(_BYTE*)(*(_QWORD*)(a1 + 8) + 392i64) = 1;
		v43 = *(_QWORD**)(a1 + 48);
		v44 = (_QWORD*)v43[2];
		if (v44 != v43)
		{
			do
			{
				sub_140185B10(v44[8]);
				v45 = v44[3];
				if (v45)
				{
					v44 = (_QWORD*)v44[3];
					for (m = *(_QWORD**)(v45 + 16); m; m = (_QWORD*)m[2])
						v44 = m;
				}
				else
				{
					for (n = v44[1]; v44 == *(_QWORD**)(n + 24); n = *(_QWORD*)(n + 8))
						v44 = (_QWORD*)n;
					if (v44[3] != n)
						v44 = (_QWORD*)n;
				}
			} while (v44 != *(_QWORD**)(a1 + 48));
		}
		if (v29)
			sub_14018B900((__int64)v29, 0);
		if (v58)
		{
			v48 = v57;
			v49 = *((_QWORD*)v57 + 1);
			if (v49)
			{
				do
				{
					sub_140044CA0((__int64)v56, *(_QWORD**)(v49 + 24));
					v50 = *(_QWORD*)(v49 + 40);
					v51 = *(_QWORD*)(v49 + 16);
					if (v50)
						sub_14018B900(v50, 0);
					sub_14018B900(v49, 0);
					v49 = v51;
				} while (v51);
				v48 = v57;
			}
			*((_QWORD*)v48 + 2) = v48;
			*((_QWORD*)v57 + 1) = 0i64;
			*((_QWORD*)v57 + 3) = v57;
			v58 = 0i64;
		}
		sub_14018B900((__int64)v57, 0);
		v52 = *(int**)v5;
		while (v52 != v5)
		{
			v53 = (__int64)v52;
			v52 = *(int**)v52;
			sub_14018B900(v53, 0);
		}
		*(_QWORD*)v5 = v5;
		*((_QWORD*)v5 + 1) = v5;
		sub_14018B900((__int64)v5, 0);
	}
}
// 140A22B90: using guessed type wchar_t aPackageNotFoun[18];
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140139AE0: using guessed type char var_70[16];
// 140139AE0: using guessed type char var_60[8];

