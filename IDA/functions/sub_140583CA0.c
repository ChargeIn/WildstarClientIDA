#include "../winhttp.h"

//----- (0000000140583CA0) ----------------------------------------------------
__int64 __fastcall sub_140583CA0(__int64 a1, __int64 a2)
{
	int* v3; // rcx
	unsigned __int64 v4; // r14
	unsigned __int64 v5; // r12
	int* v6; // rdi
	int* v7; // rdx
	int* v8; // rbx
	bool v9; // al
	unsigned __int64 v10; // rsi
	int* i; // rax
	int* v12; // rax
	int* v13; // rcx
	unsigned int v14; // esi
	__int64 v15; // rbx
	int* v16; // rbx
	__int64 v17; // rax
	int* j; // rax
	__int64 k; // rax
	__int64 v20; // rdi
	int* v21; // rbx
	unsigned __int64 v22; // rsi
	__int64 v23; // r11
	unsigned __int64 v24; // r10
	unsigned __int64 v25; // rdx
	unsigned __int64 v26; // r8
	unsigned __int64 v27; // rcx
	unsigned __int64* v28; // rax
	_QWORD* v29; // rax
	__int64 v30; // r9
	_WORD* v31; // rcx
	__int64 v32; // rax
	__int64 v33; // rax
	int* m; // rax
	__int64 n; // rax
	__int64 v36; // rsi
	__int64 v37; // rbx
	int* v38; // rax
	__int64 v39; // rdi
	__int64 v40; // rbx
	char v42[16]; // [rsp+30h] [rbp-50h] BYREF
	char v43[8]; // [rsp+40h] [rbp-40h] BYREF
	int* v44; // [rsp+48h] [rbp-38h]
	__int64 v45; // [rsp+50h] [rbp-30h]
	char v46[8]; // [rsp+60h] [rbp-20h] BYREF
	int* v47; // [rsp+68h] [rbp-18h]
	__int64 v48; // [rsp+70h] [rbp-10h]

	v44 = sub_14018B280(40i64, 0);
	v45 = 0i64;
	*(_BYTE*)v44 = 0;
	*((_QWORD*)v44 + 1) = 0i64;
	*((_QWORD*)v44 + 2) = v44;
	*((_QWORD*)v44 + 3) = v44;
	v48 = 0i64;
	v47 = sub_14018B280(40i64, 0);
	*(_BYTE*)v47 = 0;
	*((_QWORD*)v47 + 1) = 0i64;
	v4 = 0i64;
	*((_QWORD*)v47 + 2) = v47;
	*((_QWORD*)v47 + 3) = v47;
	v5 = qword_140C7DE20;
	v6 = v44;
	while (v4 < v5)
	{
		v7 = (int*)*((_QWORD*)v6 + 1);
		v8 = v6;
		v9 = 1;
		v10 = **(_QWORD**)(qword_140C7DE18 + 8 * v4);
		while (v7)
		{
			v8 = v7;
			v9 = v10 < *((_QWORD*)v7 + 4);
			if (v10 >= *((_QWORD*)v7 + 4))
				v7 = (int*)*((_QWORD*)v7 + 3);
			else
				v7 = (int*)*((_QWORD*)v7 + 2);
		}
		v3 = v8;
		if (v9)
		{
			if (v8 == *((int**)v6 + 2))
				goto LABEL_19;
			if (*(_BYTE*)v8 || *(int**)(*((_QWORD*)v8 + 1) + 8i64) != v8)
			{
				v3 = (int*)*((_QWORD*)v8 + 2);
				if (v3)
				{
					for (i = (int*)*((_QWORD*)v3 + 3); i; i = (int*)*((_QWORD*)i + 3))
						v3 = i;
				}
				else
				{
					v3 = (int*)*((_QWORD*)v8 + 1);
					if (v8 == *((int**)v3 + 2))
					{
						do
						{
							v12 = v3;
							v3 = (int*)*((_QWORD*)v3 + 1);
						} while (v12 == *((int**)v3 + 2));
					}
				}
			}
			else
			{
				v3 = (int*)*((_QWORD*)v8 + 3);
			}
		}
		if (*((_QWORD*)v3 + 4) < v10)
		{
		LABEL_19:
			if (v8 == v6 || v10 < *((_QWORD*)v8 + 4))
			{
				v13 = sub_14018B280(40i64, 0);
				if (v13 != (int*)-32i64)
					*((_QWORD*)v13 + 4) = v10;
				*((_QWORD*)v8 + 2) = v13;
				if (v8 == v44)
				{
					*((_QWORD*)v44 + 1) = v13;
					*((_QWORD*)v44 + 3) = v13;
				}
				else if (v8 == *((int**)v44 + 2))
				{
					*((_QWORD*)v44 + 2) = v13;
				}
			}
			else
			{
				v13 = sub_14018B280(40i64, 0);
				if (v13 != (int*)-32i64)
					*((_QWORD*)v13 + 4) = v10;
				*((_QWORD*)v8 + 3) = v13;
				if (v8 == *((int**)v44 + 3))
					*((_QWORD*)v44 + 3) = v13;
			}
			*((_QWORD*)v13 + 1) = v8;
			*((_QWORD*)v13 + 2) = 0i64;
			*((_QWORD*)v13 + 3) = 0i64;
			sub_1400081C0((__int64)v13, (_QWORD*)v44 + 1);
			v6 = v44;
			++v45;
		}
		++v4;
	}
	v14 = 0;
	if (*(_DWORD*)a2)
	{
		do
		{
			v15 = 664i64 * v14;
			if (!sub_140007910((__int64)v43, (_QWORD*)(v15 + *(_QWORD*)(a2 + 8))))
				sub_140007810((__int64)v46, (__int64)v42, (unsigned __int64*)(v15 + *(_QWORD*)(a2 + 8)));
			sub_1405848F0(
				v14 == *(_DWORD*)(a2 + 4),
				(unsigned __int64*)(v15 + *(_QWORD*)(a2 + 8)),
				*(_QWORD*)(a2 + 16) + 80i64 * v14,
				*(_QWORD*)(a2 + 24) + 56i64 * v14,
				v14 == *(_DWORD*)(a2 + 4));
			++v14;
		} while (v14 < *(_DWORD*)a2);
		v6 = v44;
	}
	v16 = (int*)*((_QWORD*)v6 + 2);
	while (v16 != v6)
	{
		sub_140584B00((__int64)v3, *((_QWORD*)v16 + 4));
		v17 = *((_QWORD*)v16 + 3);
		if (v17)
		{
			v16 = (int*)*((_QWORD*)v16 + 3);
			for (j = *(int**)(v17 + 16); j; j = (int*)*((_QWORD*)j + 2))
				v16 = j;
		}
		else
		{
			for (k = *((_QWORD*)v16 + 1); v16 == *(int**)(k + 24); k = *(_QWORD*)(k + 8))
				v16 = (int*)k;
			if (*((_QWORD*)v16 + 3) != k)
				v16 = (int*)k;
		}
	}
	dword_140C7DE28 = 0;
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildChange", &unk_1409D0EB3);
	v20 = (__int64)v47;
	v21 = (int*)*((_QWORD*)v47 + 2);
	if (v21 != v47)
	{
		v22 = qword_140C7DE20;
		v23 = qword_140C7DE18;
		do
		{
			v24 = *((_QWORD*)v21 + 4);
			v25 = 0i64;
			v26 = v22;
			if (v22)
			{
				while (1)
				{
					v27 = v25 + ((v26 - v25) >> 1);
					v28 = *(unsigned __int64**)(v23 + 8 * v27);
					if (v24 == *v28)
						break;
					if (v24 <= *v28)
						v25 = v27 + 1;
					else
						v26 = v25 + ((v26 - v25) >> 1);
					if (v25 >= v26)
						goto LABEL_56;
				}
			}
			else
			{
			LABEL_56:
				v27 = v25;
			}
			if (v27 < v22)
			{
				v29 = *(_QWORD**)(v23 + 8 * v27);
				if (v24 == *v29)
				{
					v30 = *(_QWORD*)(v23 + 8 * v27);
					if (v29)
					{
						v31 = (_WORD*)v29[68];
						if (v31)
						{
							v32 = 0i64;
							if (*v31)
							{
								do
									++v32;
								while (v31[v32]);
								if (v32)
								{
									sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildMessageOfTheDay", byte_1409EA7B4, v30);
									v22 = qword_140C7DE20;
									v23 = qword_140C7DE18;
								}
							}
						}
					}
				}
			}
			v33 = *((_QWORD*)v21 + 3);
			if (v33)
			{
				v21 = (int*)*((_QWORD*)v21 + 3);
				for (m = *(int**)(v33 + 16); m; m = (int*)*((_QWORD*)m + 2))
					v21 = m;
			}
			else
			{
				for (n = *((_QWORD*)v21 + 1); v21 == *(int**)(n + 24); n = *(_QWORD*)(n + 8))
					v21 = (int*)n;
				if (*((_QWORD*)v21 + 3) != n)
					v21 = (int*)n;
			}
		} while (v21 != (int*)v20);
		v20 = (__int64)v47;
	}
	if (v48)
	{
		v36 = *(_QWORD*)(v20 + 8);
		if (v36)
		{
			do
			{
				sub_1400083B0((__int64)v46, *(_QWORD*)(v36 + 24));
				v37 = *(_QWORD*)(v36 + 16);
				sub_14018B900(v36, 0);
				v36 = v37;
			} while (v37);
			v20 = (__int64)v47;
		}
		*(_QWORD*)(v20 + 16) = v20;
		*((_QWORD*)v47 + 1) = 0i64;
		*((_QWORD*)v47 + 3) = v47;
		v20 = (__int64)v47;
		v48 = 0i64;
	}
	sub_14018B900(v20, 0);
	if (v45)
	{
		v38 = v44;
		v39 = *((_QWORD*)v44 + 1);
		if (v39)
		{
			do
			{
				sub_1400083B0((__int64)v43, *(_QWORD*)(v39 + 24));
				v40 = *(_QWORD*)(v39 + 16);
				sub_14018B900(v39, 0);
				v39 = v40;
			} while (v40);
			v38 = v44;
		}
		*((_QWORD*)v38 + 2) = v38;
		*((_QWORD*)v44 + 1) = 0i64;
		*((_QWORD*)v44 + 3) = v44;
		v45 = 0i64;
	}
	sub_14018B900((__int64)v44, 0);
	return 0i64;
}
// 140583DEF: conditional instruction was optimized away because rdx.8==0
// 140583F14: variable 'v3' is possibly undefined
// 1409EA7B4: using guessed type _BYTE byte_1409EA7B4[40];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;
// 140C7DE28: using guessed type int dword_140C7DE28;
// 140583CA0: using guessed type char var_40[8];
// 140583CA0: using guessed type char var_50[16];
// 140583CA0: using guessed type char var_20[8];

