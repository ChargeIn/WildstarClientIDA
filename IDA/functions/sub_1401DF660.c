#include "../winhttp.h"

//----- (00000001401DF660) ----------------------------------------------------
__int64 __fastcall sub_1401DF660(_QWORD* a1)
{
	_QWORD* v1; // r15
	__int64* v3; // rbx
	__int64 v4; // rsi
	unsigned int* v5; // rdi
	_QWORD* v6; // rcx
	__int64 v7; // rcx
	__int64 result; // rax
	int v9; // esi
	_QWORD* v10; // rbx
	int i; // edi
	__int64 v12; // rcx
	_QWORD* v13; // rbx
	int j; // edi
	__int64 v15; // rcx
	_QWORD* v16; // rbx
	int k; // edi
	__int64 v18; // rcx
	_QWORD* v19; // rbx
	int m; // edi
	__int64 v21; // rcx
	_QWORD* v22; // rbx
	int n; // edi
	__int64 v24; // rcx
	__int64 v25; // rcx
	int v26; // edi
	_QWORD* v27; // rbx
	int ii; // esi
	__int64 v29; // rcx
	_QWORD* v30; // rbx
	int jj; // esi
	__int64 v32; // rcx
	_QWORD* v33; // rbx
	__int64 v34; // rcx
	__int64 v35; // rcx
	__int64 v36; // rcx
	__int64 v37; // rcx
	__int64 v38; // rcx

	v1 = a1 + 363;
	v3 = a1 + 359;
	v4 = 4i64;
	*a1 = off_140B60160;
	v5 = (unsigned int*)(a1 + 363);
	do
	{
		if (*v3)
			sub_1401E5490(*v3, *v5);
		++v3;
		++v5;
		--v4;
	} while (v4);
	v6 = (_QWORD*)a1[398];
	if (v6)
		*v6 = a1[399];
	v7 = a1[399];
	if (v7)
		*(_QWORD*)(v7 + 3184) = a1[398];
	result = 0i64;
	v9 = 3;
	v10 = a1 + 389;
	a1[398] = 0i64;
	a1[399] = 0i64;
	for (i = 3; i >= 0; --i)
	{
		v12 = *--v10;
		if (v12)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
	}
	v13 = a1 + 383;
	for (j = 3; j >= 0; --j)
	{
		v15 = *--v13;
		if (v15)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
	}
	v16 = a1 + 379;
	for (k = 3; k >= 0; --k)
	{
		v18 = *--v16;
		if (v18)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
	}
	v19 = a1 + 375;
	for (m = 3; m >= 0; --m)
	{
		v21 = *--v19;
		if (v21)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v21 - 16) + 8i64))(v21 - 16);
	}
	v22 = a1 + 371;
	for (n = 3; n >= 0; --n)
	{
		v24 = *--v22;
		if (v24)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
	}
	do
	{
		v25 = *--v1;
		if (v25)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
		--v9;
	} while (v9 >= 0);
	v26 = 71;
	v27 = a1 + 257;
	for (ii = 71; ii >= 0; --ii)
	{
		v29 = *--v27;
		if (v29)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v29 + 8i64))(v29);
	}
	v30 = a1 + 185;
	for (jj = 71; jj >= 0; --jj)
	{
		v32 = *--v30;
		if (v32)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v32 + 8i64))(v32);
	}
	v33 = a1 + 113;
	do
	{
		v34 = *--v33;
		if (v34)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v34 + 8i64))(v34);
		--v26;
	} while (v26 >= 0);
	v35 = a1[38];
	if (v35)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v35 + 8i64))(v35);
	v36 = a1[37];
	if (v36)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v36 + 8i64))(v36);
	v37 = a1[36];
	if (v37)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v37 + 8i64))(v37);
	v38 = a1[35];
	if (v38)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v38 + 8i64))(v38);
	return result;
}
// 140B60160: using guessed type __int64 (__fastcall *off_140B60160[6])();

