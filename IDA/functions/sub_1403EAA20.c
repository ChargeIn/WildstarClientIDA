#include "../winhttp.h"

//----- (00000001403EAA20) ----------------------------------------------------
void __fastcall sub_1403EAA20(const void** a1, const void**** a2)
{
	const void*** v2; // rsi
	const void*** v3; // rax
	const void** v4; // rax
	const void** i; // rdi
	const void** v6; // rcx
	unsigned int v7; // ecx
	__int64 v8; // rax
	int* v9; // rbx
	int* v10; // rcx
	int* v11; // rax
	const void**** v12; // rdx
	const void*** v13; // rcx
	__int64 v14; // rcx
	int* j; // rcx
	__int64 k; // rcx
	__int64 v17; // [rsp+20h] [rbp-40h]
	char v18[8]; // [rsp+30h] [rbp-30h] BYREF
	int* v19; // [rsp+38h] [rbp-28h]
	__int64 v20; // [rsp+40h] [rbp-20h]
	const void** v21; // [rsp+70h] [rbp+10h] BYREF

	v21 = a1;
	v2 = (const void***)(qword_140C65898 + 29416);
	if (!*a2)
	{
		*a2 = v2;
		a2[1] = (const void***)*v2;
		*v2 = (const void**)a2;
		v3 = a2[1];
		if (v3)
			*v3 = (const void**)(a2 + 1);
	}
	v4 = *v2;
	*v2 = 0i64;
	v21 = v4;
	if (v4)
		*v4 = &v21;
	v20 = 0i64;
	v19 = sub_14018B280(48i64, 0);
	*(_BYTE*)v19 = 0;
	*((_QWORD*)v19 + 1) = 0i64;
	*((_QWORD*)v19 + 2) = v19;
	*((_QWORD*)v19 + 3) = v19;
	for (i = v21; v21; ++v20)
	{
		if (*i)
			*(_QWORD*)*i = i[1];
		v6 = (const void**)i[1];
		if (v6)
			*v6 = *i;
		v7 = *((_DWORD*)i + 6);
		*i = 0i64;
		i[1] = 0i64;
		LODWORD(v17) = v7;
		v8 = *((_QWORD*)v19 + 1);
		v9 = v19;
		if (!v8)
			goto LABEL_22;
		do
		{
			v9 = (int*)v8;
			if (v7 >= *(_DWORD*)(v8 + 32))
				v8 = *(_QWORD*)(v8 + 24);
			else
				v8 = *(_QWORD*)(v8 + 16);
		} while (v8);
		if (v9 == v19 || v7 < v9[8])
		{
		LABEL_22:
			v10 = sub_14018B280(48i64, 0);
			if (v10 != (int*)-32i64)
			{
				*((_QWORD*)v10 + 4) = v17;
				*((_QWORD*)v10 + 5) = i;
			}
			*((_QWORD*)v9 + 2) = v10;
			if (v9 == v19)
			{
				*((_QWORD*)v19 + 1) = v10;
				*((_QWORD*)v19 + 3) = v10;
			}
			else if (v9 == *((int**)v19 + 2))
			{
				*((_QWORD*)v19 + 2) = v10;
			}
		}
		else
		{
			v10 = sub_14018B280(48i64, 0);
			if (v10 != (int*)-32i64)
			{
				*((_QWORD*)v10 + 4) = v17;
				*((_QWORD*)v10 + 5) = i;
			}
			*((_QWORD*)v9 + 3) = v10;
			if (v9 == *((int**)v19 + 3))
				*((_QWORD*)v19 + 3) = v10;
		}
		*((_QWORD*)v10 + 1) = v9;
		*((_QWORD*)v10 + 2) = 0i64;
		*((_QWORD*)v10 + 3) = 0i64;
		sub_1400081C0((__int64)v10, (_QWORD*)v19 + 1);
		i = v21;
	}
	v11 = (int*)*((_QWORD*)v19 + 2);
	while (v11 != v19)
	{
		v12 = (const void****)*((_QWORD*)v11 + 5);
		if (!*v12)
		{
			*v12 = v2;
			v12[1] = (const void***)*v2;
			*v2 = (const void**)v12;
			v13 = v12[1];
			if (v13)
				*v13 = (const void**)(v12 + 1);
		}
		v14 = *((_QWORD*)v11 + 3);
		if (v14)
		{
			v11 = (int*)*((_QWORD*)v11 + 3);
			for (j = *(int**)(v14 + 16); j; j = (int*)*((_QWORD*)j + 2))
				v11 = j;
		}
		else
		{
			for (k = *((_QWORD*)v11 + 1); v11 == *(int**)(k + 24); k = *(_QWORD*)(k + 8))
				v11 = (int*)k;
			if (*((_QWORD*)v11 + 3) != k)
				v11 = (int*)k;
		}
	}
	sub_140008410((__int64)v18);
	sub_14018B900((__int64)v19, 0);
	if (v21)
		sub_1401A4A00(&v21);
}
// 1403EAB3B: variable 'v17' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 1403EAA20: using guessed type char var_30[8];

