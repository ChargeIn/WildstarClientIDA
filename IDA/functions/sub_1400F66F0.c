//----- (00000001400F66F0) ----------------------------------------------------
_DWORD* __fastcall sub_1400F66F0(_DWORD* a1, __int64 a2, _WORD* a3, unsigned int a4)
{
	unsigned __int64 v6; // rbx
	__int64 v7; // rax
	__int64 v8; // rax
	int* v9; // rsi
	int* v10; // r14
	__int64 v11; // rax
	__int64 v12; // rdi
	unsigned __int64 v13; // rdi
	char* v14; // r12
	int* v15; // r15
	__int64 v16; // rax
	__int64 v18; // rdi
	signed __int64 v19; // rdi
	__int64 v20; // rsi
	unsigned __int64 v21; // r13
	char v22; // r9
	signed __int64 v23; // rdi
	char* v24; // rax
	__int64 v25; // rdx
	__m128* v26; // rax
	unsigned __int64 v27; // rcx
	int* v28; // rdi
	bool v29; // cf
	char* v30; // rsi
	char* v31; // r12
	unsigned __int64 v32; // rcx
	int* v33; // rcx
	signed __int64 v34; // rsi
	int* v35; // rax
	_DWORD* v36; // rsi
	__int64 v37; // rcx
	__int64 v38; // r8
	__int64 v39; // rdx
	int v40; // r9d
	int v42; // [rsp+20h] [rbp-40h]
	__int64 v43; // [rsp+30h] [rbp-30h] BYREF
	unsigned __int64 v44; // [rsp+38h] [rbp-28h] BYREF
	__m128 v45; // [rsp+40h] [rbp-20h] BYREF
	__m128 v46; // [rsp+50h] [rbp-10h] BYREF

	v45 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(a4), 0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v6 = (unsigned int)sub_140141F10(qword_140C63678, &v45);
	v7 = sub_1401A6B80(a2, a3);
	if (v7)
		v8 = sub_1401A4F40(v7 + 32);
	else
		v8 = 0i64;
	v9 = (int*)&unk_1409D457C;
	v10 = 0i64;
	if (v8)
		v9 = (int*)v8;
	v11 = 0i64;
	if (*(_WORD*)v9)
	{
		do
			++v11;
		while (*((_WORD*)v9 + v11));
	}
	v12 = (2 * v11) >> 1;
	if ((unsigned __int64)(v12 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v10 = sub_14018B280(2 * (v12 + 1), 0);
	v13 = 2 * v12;
	sub_1407DB590(v10, v9, v13);
	v14 = (char*)v10 + v13;
	if ((int*)((char*)v10 + v13))
		*(_WORD*)v14 = 0;
	v15 = 0i64;
	v16 = 0i64;
	while (asc_140A191C8[++v16] != 0)
		;
	v18 = (2 * v16) >> 1;
	if ((unsigned __int64)(v18 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v15 = sub_14018B280(2 * (v18 + 1), 0);
	v19 = 2 * v18;
	sub_1407DB590(v15, (int*)L" \r\n", v19);
	if ((int*)((char*)v15 + v19))
		*(_WORD*)((char*)v15 + v19) = 0;
	v43 = -1i64;
	v20 = (v14 - (char*)v10) >> 1;
	if (!v20)
		goto LABEL_37;
	v21 = (unsigned __int64)v15 + 2 * (v19 >> 1);
	v45.m128_u64[0] = (unsigned __int64)v15;
	v45.m128_u64[1] = v21;
	v46 = v45;
	v44 = (unsigned __int64)v10;
	v43 = (__int64)v10 + 2 * v20;
	sub_1400F94D0(&v45, &v43, (__int64*)&v44, &v46, v42);
	if ((int*)v45.m128_u64[0] == v10 || (v23 = (signed __int64)(v45.m128_u64[0] - (_QWORD)v10 - 2) >> 1, v23 == -1))
	{
	LABEL_37:
		v35 = sub_14018B280(16i64, 0);
		v28 = v35;
		if (v35)
			*(_WORD*)v35 = 0;
	}
	else
	{
		v45.m128_u64[0] = (unsigned __int64)v15;
		v45.m128_u64[1] = v21;
		v46 = v45;
		v24 = (char*)sub_1400F9810(v10, (__int64)v14, &v46, v22);
		if (v24 == v14)
			v25 = -1i64;
		else
			v25 = (v24 - (char*)v10) >> 1;
		v26 = &v45;
		if (v25 == -1)
			v25 = 0i64;
		v27 = v23 - v25 + 1;
		v45.m128_u64[0] = v20 - v25;
		v28 = 0i64;
		v29 = v20 - v25 < v27;
		v44 = v27;
		v30 = (char*)v10 + 2 * v25;
		if (!v29)
			v26 = (__m128*) & v44;
		v31 = (char*)v10 + 2 * v25 + 2 * v26->m128_u64[0];
		v32 = ((v31 - v30) >> 1) + 1;
		if (v32 <= 0x7FFFFFFFFFFFFFFEi64)
			v28 = sub_14018B280(2 * v32, 0);
		v33 = v28;
		if (v30 != v31)
		{
			v34 = v30 - (char*)v28;
			do
			{
				if (v33)
					*(_WORD*)v33 = *(_WORD*)((char*)v33 + v34);
				v33 = (int*)((char*)v33 + 2);
			} while ((char*)v33 + v34 != v31);
		}
		if (v33)
			*(_WORD*)v33 = 0;
	}
	if (v10)
		sub_14018B900((__int64)v10, 0);
	if (v15)
		sub_14018B900((__int64)v15, 0);
	if (v28 && *(_WORD*)v28)
	{
		v36 = a1;
		*a1 = sub_140142170(qword_140C63678, (unsigned __int16*)v28);
		sub_14018B900((__int64)v28, 0);
		v37 = qword_140C63678;
	}
	else
	{
		v38 = qword_140C63678;
		v36 = a1;
		*a1 = v6;
		if (v6 < *(_QWORD*)(v38 + 48))
		{
			v39 = *(_QWORD*)(v38 + 40);
			v40 = *(_DWORD*)(32 * v6 + v39 + 16);
			if ((unsigned int)(v40 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(32 * v6 + v39 + 16) = v40 + 1;
		}
		if (v28)
		{
			sub_14018B900((__int64)v28, 0);
			v38 = qword_140C63678;
		}
		v37 = v38;
	}
	sub_1401429A0(v37, v6);
	return v36;
}
// 1400F68B4: variable 'v42' is possibly undefined
// 1400F68F5: variable 'v22' is possibly undefined
// 140A191C8: using guessed type wchar_t asc_140A191C8[4];
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140C63678: using guessed type __int64 qword_140C63678;

