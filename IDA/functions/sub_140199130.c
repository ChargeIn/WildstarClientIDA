//----- (0000000140199130) ----------------------------------------------------
__int64 __fastcall sub_140199130(int* a1)
{
	_QWORD* v1; // r15
	__int64 v2; // rbx
	int* v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rcx
	__int64 v6; // rbx
	__int64 v7; // rsi
	bool v8; // zf
	__int64 v9; // rax
	__int64 v10; // rax
	unsigned __int64 v11; // rdi
	__int64 v12; // rdi
	int* v13; // rax
	int* v14; // rdi
	__int64 v15; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 k; // rbx
	__int64 m; // rbx
	__int64 n; // rbx
	int* v21; // rax
	int* v22; // r14
	int* v23; // rax
	__int64 v24; // rsi
	int v25; // ebx
	int* v27; // rbx
	int* v28; // rax
	int* v29; // r15
	__m128i* v30; // rsi
	const __m128i* v31; // rdi
	int* v32; // rax
	__int64 v33; // r12
	int* v34; // r14
	__int64 ii; // rax
	__int64 v36; // rdi
	signed __int64 v37; // rdi
	int* v38; // r13
	int* v39; // r12
	unsigned __int64 v40; // rdx
	unsigned __int64 v41; // rcx
	int* v42; // rax
	__int64 v43; // rsi
	unsigned __int64 v44; // rdi
	__int64 v45; // rdi
	int* v46; // rax
	int* v47; // rdi
	__int64 v48; // r15
	__int64 v49; // rsi
	unsigned __int64 v50; // rdi
	__int64 v51; // rdi
	int* v52; // rax
	int* v53; // rdi
	__int64 jj; // rdi
	__int64 v55; // [rsp+20h] [rbp-60h] BYREF
	int* v56; // [rsp+28h] [rbp-58h]
	int* v57; // [rsp+30h] [rbp-50h]
	__int64 v58; // [rsp+38h] [rbp-48h]
	char v59[8]; // [rsp+40h] [rbp-40h] BYREF
	int* v60; // [rsp+48h] [rbp-38h]
	int* v61; // [rsp+50h] [rbp-30h]
	int* v62; // [rsp+58h] [rbp-28h]
	__int64 v63; // [rsp+60h] [rbp-20h] BYREF
	int* v64; // [rsp+68h] [rbp-18h]
	int* v65; // [rsp+70h] [rbp-10h]
	int* v66; // [rsp+78h] [rbp-8h]
	int* v67; // [rsp+C0h] [rbp+40h] BYREF
	unsigned __int64 v68; // [rsp+C8h] [rbp+48h]
	__int64 v69; // [rsp+D0h] [rbp+50h]

	v67 = a1;
	v1 = (_QWORD*)qword_140C63748;
	v69 = qword_140C63748;
	v2 = *(_QWORD*)(qword_140C63748 + 56);
	if (v2 != *(_QWORD*)(qword_140C63748 + 64))
	{
		do
		{
			(*(void(__fastcall**)(_QWORD, const wchar_t*))(v2 + 8))(*(_QWORD*)v2, L"FUNCTIONS");
			v2 += 16i64;
		} while (v2 != v1[8]);
	}
	v3 = sub_14018B280(16i64, 0);
	v4 = (__int64)v3;
	v64 = v3;
	v65 = v3;
	v66 = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	v5 = v1[3];
	v6 = *(_QWORD*)(v5 + 16);
	if (v6 == v5)
		goto LABEL_26;
	do
	{
		v7 = 0i64;
		do
			v8 = *(_WORD*)&asc_1409E203C[2 * v7++ + 2] == 0;
		while (!v8);
		v9 = *(_QWORD*)(v6 + 48);
		v56 = 0i64;
		v10 = v9 - *(_QWORD*)(v6 + 40);
		v57 = 0i64;
		v58 = 0i64;
		v11 = (v10 >> 1) + v7 + 1;
		if (v11 <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v12 = 2 * v11;
			v13 = sub_14018B280(v12, 0);
			v56 = v13;
			v57 = v13;
			v58 = (__int64)v13 + v12;
			if (v13)
				*(_WORD*)v13 = 0;
		}
		sub_14001C310(&v55, *(int**)(v6 + 40), *(int**)(v6 + 48));
		sub_14001C310(&v55, (int*)" ", (int*)&asc_1409E203C[2 * v7]);
		v14 = v56;
		sub_14001C310(&v63, v56, v57);
		if (v14)
			sub_14018B900((__int64)v14, 0);
		v15 = *(_QWORD*)(v6 + 24);
		if (v15)
		{
			v6 = *(_QWORD*)(v6 + 24);
			for (i = *(_QWORD*)(v15 + 16); i; i = *(_QWORD*)(i + 16))
				v6 = i;
		}
		else
		{
			for (j = *(_QWORD*)(v6 + 8); v6 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
				v6 = j;
			if (*(_QWORD*)(v6 + 24) != j)
				v6 = j;
		}
	} while (v6 != v1[3]);
	v4 = (__int64)v64;
	if (v64 == v65)
		goto LABEL_26;
	if (v64)
	{
		for (k = v1[7]; k != v1[8]; k += 16i64)
			(*(void(__fastcall**)(_QWORD, __int64))(k + 8))(*(_QWORD*)k, v4);
	LABEL_26:
		if (v4)
			sub_14018B900(v4, 0);
	}
	for (m = v1[7]; m != v1[8]; m += 16i64)
		(*(void(__fastcall**)(_QWORD, void*))(m + 8))(*(_QWORD*)m, &unk_1409E2074);
	for (n = v1[7]; n != v1[8]; n += 16i64)
		(*(void(__fastcall**)(_QWORD, const wchar_t*))(n + 8))(*(_QWORD*)n, L"VARIABLES");
	v21 = sub_14018B280(16i64, 0);
	v22 = v21;
	v60 = v21;
	v61 = v21;
	v62 = v21 + 4;
	if (v21)
		*(_WORD*)v21 = 0;
	v23 = sub_14018B280(16i64, 0);
	v24 = (__int64)v23;
	v64 = v23;
	v65 = v23;
	v66 = v23 + 4;
	if (v23)
		*(_WORD*)v23 = 0;
	v67 = 0i64;
	v25 = sub_14019D2A0((__int64)(v23 + 4), &v67);
	if (v25 < 0)
	{
		if (v67)
			(*(void(__fastcall**)(int*))(*(_QWORD*)v67 + 8i64))(v67);
		if (v24)
			sub_14018B900(v24, 0);
		if (v22)
			sub_14018B900((__int64)v22, 0);
		return (unsigned int)v25;
	}
	v27 = v67;
	v68 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v67 + 16i64))(v67);
	v28 = 0i64;
	v67 = 0i64;
	if (!v68)
		goto LABEL_89;
	v29 = v60;
	do
	{
		v30 = *(__m128i**)((*(__int64(__fastcall**)(int*, int*))(*(_QWORD*)v27 + 24i64))(v27, v28) + 8);
		v31 = sub_1407DD988(v30, 0x2Eu);
		v32 = sub_14018B280(16i64, 0);
		v33 = (__int64)v32;
		if (v32)
			*(_WORD*)v32 = 0;
		v34 = 0i64;
		if (!v31)
		{
			for (ii = 0i64; v30->m128i_i16[ii]; ++ii)
				;
			v31 = (__m128i*)((char*)v30 + 2 * ii);
		}
		v36 = ((char*)v31 - (char*)v30) >> 1;
		if ((unsigned __int64)(v36 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v34 = sub_14018B280(2 * (v36 + 1), 0);
		v37 = 2 * v36;
		sub_1407DB590(v34, v30->m128i_i32, v37);
		v38 = (int*)((char*)v34 + v37);
		if ((int*)((char*)v34 + v37))
			*(_WORD*)v38 = 0;
		if (v33)
			sub_14018B900(v33, 0);
		v39 = v61;
		v40 = ((char*)v61 - (char*)v29) >> 1;
		if (v40 == v37 >> 1)
		{
			v41 = 0i64;
			if (!v40)
				goto LABEL_73;
			v42 = v34;
			while (*(_WORD*)((char*)v42 + (char*)v29 - (char*)v34) == *(_WORD*)v42)
			{
				++v41;
				v42 = (int*)((char*)v42 + 2);
				if (v41 >= v40)
					goto LABEL_73;
			}
		}
		if (v29 != v61)
		{
			v43 = 0i64;
			do
				++v43;
			while (*(_WORD*)&asc_1409E1FCC[2 * v43]);
			v56 = 0i64;
			v44 = v43 + v40 + 1;
			v57 = 0i64;
			v58 = 0i64;
			if (v44 <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v45 = 2 * v44;
				v46 = sub_14018B280(v45, 0);
				v56 = v46;
				v57 = v46;
				v58 = (__int64)v46 + v45;
				if (v46)
					*(_WORD*)v46 = 0;
			}
			sub_14001C310(&v55, v29, v39);
			sub_14001C310(&v55, (int*)" ", (int*)&asc_1409E1FCC[2 * v43]);
			v47 = v56;
			sub_14001C310(&v63, v56, v57);
			if (v47)
				sub_14018B900((__int64)v47, 0);
		}
		sub_14001C480((__int64)v59, v34, v38);
		v29 = v60;
		v39 = v61;
	LABEL_73:
		if (v34)
			sub_14018B900((__int64)v34, 0);
		v28 = (int*)((char*)v67 + 1);
		v67 = v28;
	} while ((unsigned __int64)v28 < v68);
	v8 = v29 == v39;
	v48 = v69;
	if (v8)
	{
		v22 = v60;
	}
	else
	{
		v49 = 0i64;
		do
			++v49;
		while (*(_WORD*)&asc_1409E1F94[2 * v49]);
		v22 = v60;
		v56 = 0i64;
		v57 = 0i64;
		v58 = 0i64;
		v50 = v49 + (((char*)v39 - (char*)v60) >> 1) + 1;
		if (v50 <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v51 = 2 * v50;
			v52 = sub_14018B280(v51, 0);
			v56 = v52;
			v57 = v52;
			v58 = (__int64)v52 + v51;
			if (v52)
				*(_WORD*)v52 = 0;
		}
		sub_14001C310(&v55, v22, v39);
		sub_14001C310(&v55, (int*)" ", (int*)&asc_1409E1F94[2 * v49]);
		v53 = v56;
		sub_14001C310(&v63, v56, v57);
		if (v53)
			sub_14018B900((__int64)v53, 0);
	}
	v24 = (__int64)v64;
	if (v64 != v65)
	{
		if (v64)
		{
			for (jj = *(_QWORD*)(v48 + 56); jj != *(_QWORD*)(v48 + 64); jj += 16i64)
				(*(void(__fastcall**)(_QWORD, __int64))(jj + 8))(*(_QWORD*)jj, v24);
		}
	}
LABEL_89:
	(*(void(__fastcall**)(int*))(*(_QWORD*)v27 + 8i64))(v27);
	if (v24)
		sub_14018B900(v24, 0);
	if (v22)
		sub_14018B900((__int64)v22, 0);
	return 0i64;
}
// 140199533: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 140A43F58: using guessed type wchar_t aFunctions[10];
// 140A43F70: using guessed type wchar_t aVariables[10];
// 140C63748: using guessed type __int64 qword_140C63748;
// 140199130: using guessed type char var_40[8];

