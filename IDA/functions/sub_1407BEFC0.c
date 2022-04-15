#include "../winhttp.h"

//----- (00000001407BEFC0) ----------------------------------------------------
__int64 sub_1407BEFC0(__int64 a1, const __m128i* a2, __int64 a3, ...)
{
	__int64 v4; // rcx
	__int64 result; // rax
	int* v7; // rax
	int* v8; // rdi
	int* v9; // rdx
	__int64 v10; // rax
	int* v11; // r8
	__int64 v12; // rax
	bool v13; // zf
	__int64 v14; // rdx
	unsigned int i; // ebx
	int* v16; // rdx
	__int64 v17; // rax
	__int64 v18; // rax
	__int64 v19; // rax
	int* v20; // rdx
	__int64 v21; // rax
	__int64 v22; // rax
	__int64 v23; // rax
	__int64 j; // rax
	int* v25; // r8
	int* v26; // rdx
	_WORD* v27; // rcx
	__int64 v28; // rax
	__int64 v29; // rax
	_WORD* v30; // rcx
	__int64 v31; // rax
	int* v32; // rdx
	__int64 v33; // rax
	__int64 v34; // rcx
	int v35; // ebx
	__int64 v36; // [rsp+20h] [rbp-28h] BYREF
	int* v37; // [rsp+28h] [rbp-20h]
	int* v38; // [rsp+30h] [rbp-18h]
	int* v39; // [rsp+38h] [rbp-10h]
	__int64 v40; // [rsp+88h] [rbp+40h] BYREF
	va_list va; // [rsp+88h] [rbp+40h]
	va_list va1; // [rsp+90h] [rbp+48h] BYREF

	va_start(va1, a3);
	va_start(va, a3);
	v40 = va_arg(va1, _QWORD);
	v36 = a1;
	v4 = *(_QWORD*)(a1 + 16);
	v37 = (int*)sub_1407BF410;
	result = (*(__int64(__fastcall**)(__int64, __int64, __int64*, _QWORD))(*(_QWORD*)v4 + 32i64))(
		v4,
		a1 + 40,
		&v36,
		0i64);
	if ((int)result < 0)
		return result;
	v7 = sub_14018B280(16i64, 0);
	v8 = v7;
	v37 = v7;
	v38 = v7;
	v39 = v7 + 4;
	if (v7)
		*(_WORD*)v7 = 0;
	v9 = *(int**)(*(_QWORD*)(a1 + 24) + 24i64);
	if (!v9 || !*(_WORD*)v9)
	{
		v12 = 0i64;
		do
			v13 = aSelect[++v12] == 0;
		while (!v13);
		if ((2 * v12) >> 1)
			sub_14001C310(&v36, (int*)L"SELECT ", (int*)&aSelect[v12]);
		else
			sub_1407DB590(v8, (int*)L"SELECT ", 0i64);
		v14 = *(_QWORD*)(a1 + 24);
		for (i = 0; i < *(_DWORD*)(v14 + 12); ++i)
		{
			v16 = *(int**)(*(_QWORD*)(v14 + 16) + 40i64 * i);
			v17 = 0i64;
			if (*(_WORD*)v16)
			{
				do
					++v17;
				while (*((_WORD*)v16 + v17));
			}
			sub_14001C310(&v36, v16, (int*)((char*)v16 + 2 * v17));
			if (i != *(_DWORD*)(*(_QWORD*)(a1 + 24) + 12i64) - 1)
			{
				v18 = 0i64;
				do
					v13 = asc_140B53B54[++v18] == 0;
				while (!v13);
				sub_14001C310(&v36, (int*)L", ", (int*)&asc_140B53B54[v18]);
			}
			v14 = *(_QWORD*)(a1 + 24);
		}
		v19 = 0i64;
		do
			v13 = aFrom[++v19] == 0;
		while (!v13);
		sub_14001C310(&v36, (int*)L" FROM ", (int*)&aFrom[v19]);
		v20 = **(int***)(a1 + 24);
		v21 = 0i64;
		if (*(_WORD*)v20)
		{
			do
				++v21;
			while (*((_WORD*)v20 + v21));
		}
		sub_14001C310(&v36, v20, (int*)((char*)v20 + 2 * v21));
		v22 = 0i64;
		v9 = (int*)word_1409FB80C;
		do
			v13 = word_1409FB80C[++v22] == 0;
		while (!v13);
		v11 = (int*)&word_1409FB80C[v22];
		goto LABEL_30;
	}
	v10 = 0i64;
	if (*(_WORD*)v9)
	{
		do
			++v10;
		while (*((_WORD*)v9 + v10));
	}
	v11 = (int*)((char*)v9 + 2 * v10);
	if ((2 * v10) >> 1)
	{
	LABEL_30:
		sub_14001C310(&v36, v9, v11);
		v8 = v37;
		goto LABEL_31;
	}
	sub_1407DB590(v8, v9, 0i64);
LABEL_31:
	if (a2 && a2->m128i_i16[0])
	{
		v23 = 0i64;
		do
			v13 = aWhere[++v23] == 0;
		while (!v13);
		sub_14001C310(&v36, (int*)L" WHERE ", (int*)&aWhere[v23]);
		for (j = 0i64; a2->m128i_i16[j]; ++j)
			;
		v25 = (__int32*)((char*)a2->m128i_i32 + 2 * j);
		v26 = (int*)a2;
	}
	else
	{
		v27 = *(_WORD**)(*(_QWORD*)(a1 + 24) + 32i64);
		if (!v27 || !*v27)
			goto LABEL_46;
		v28 = 0i64;
		do
			v13 = aWhere_0[++v28] == 0;
		while (!v13);
		sub_14001C310(&v36, (int*)L" WHERE ", (int*)&aWhere_0[v28]);
		v26 = *(int**)(*(_QWORD*)(a1 + 24) + 32i64);
		v29 = 0i64;
		if (*(_WORD*)v26)
		{
			do
				++v29;
			while (*((_WORD*)v26 + v29));
		}
		v25 = (int*)((char*)v26 + 2 * v29);
	}
	sub_14001C310(&v36, v26, v25);
	v8 = v37;
LABEL_46:
	if (!a2 || !sub_1407DF6E0(a2, (const __m128i*)L"ORDER BY"))
	{
		v30 = *(_WORD**)(*(_QWORD*)(a1 + 24) + 40i64);
		if (v30 && *v30)
		{
			v31 = 0i64;
			do
				v13 = aOrderBy_0[++v31] == 0;
			while (!v13);
			sub_14001C310(&v36, (int*)L" ORDER BY ", (int*)&aOrderBy_0[v31]);
			v32 = *(int**)(*(_QWORD*)(a1 + 24) + 40i64);
			v33 = 0i64;
			if (*(_WORD*)v32)
			{
				do
					++v33;
				while (*((_WORD*)v32 + v33));
			}
		}
		else
		{
			v33 = 0i64;
			v32 = (int*)L" ORDER BY ID";
			do
				v13 = aOrderById[++v33] == 0;
			while (!v13);
		}
		sub_14001C310(&v36, v32, (int*)((char*)v32 + 2 * v33));
		v8 = v37;
	}
	v34 = *(_QWORD*)(a1 + 16);
	v40 = 0i64;
	v35 = (*(__int64(__fastcall**)(__int64, int*, __int64*))(*(_QWORD*)v34 + 24i64))(v34, v8, (__int64*)va);
	if (v35 >= 0)
	{
		v35 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 40) + 40i64))(*(_QWORD*)(a1 + 40), v40);
		if (v35 >= 0)
			v35 = 0;
	}
	if (v40)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v40 + 16i64))(v40);
		v40 = 0i64;
	}
	if (v8)
		sub_14018B900((__int64)v8, 0);
	return (unsigned int)v35;
}
// 1409FB80C: using guessed type _WORD word_1409FB80C[124];
// 140B53B54: using guessed type wchar_t asc_140B53B54[3];
// 140B53D40: using guessed type wchar_t aSelect[8];
// 140B53D50: using guessed type wchar_t aFrom[7];
// 140B53D60: using guessed type wchar_t aWhere[8];
// 140B53D70: using guessed type wchar_t aWhere_0[8];
// 140B53D80: using guessed type wchar_t aOrderBy[9];
// 140B53D98: using guessed type wchar_t aOrderBy_0[11];
// 140B53DB0: using guessed type wchar_t aOrderById[13];

