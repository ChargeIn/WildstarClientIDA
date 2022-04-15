//----- (00000001401B0CE0) ----------------------------------------------------
__int64 __fastcall sub_1401B0CE0(__int64 a1, __int64 a2, int* a3, __int64 a4, int a5)
{
	int v5; // edi
	int* v9; // rax
	int* v10; // rax
	__int64 v11; // r13
	int* v12; // rbx
	__int64 v13; // rsi
	__int64 v14; // rax
	int* v15; // r14
	__int64 v16; // rax
	int* v17; // r15
	__int64 v18; // r12
	_WORD* v19; // r8
	_QWORD* v20; // rax
	_QWORD* v21; // rcx
	int* v22; // r14
	__int64 v23; // rax
	bool v24; // zf
	__int64 v25; // r15
	__int64 v26; // r14
	__int64 v27; // rbx
	_QWORD* v28; // rax
	__int64 v29; // rax
	__int64 v30; // rax
	int* v31; // rsi
	__int64 v32; // rax
	__int64 v33; // r14
	__int64 v34; // r15
	__int64 v35; // r13
	unsigned __int64 v36; // rax
	int* v37; // r9
	char v38; // dl
	int* v39; // rdx
	__int64 v40; // rax
	int* v41; // rsi
	__int64 v42; // rax
	__int64 v43; // r14
	__int64 v44; // r14
	__int64 v45; // rsi
	_WORD* v46; // rdx
	unsigned __int64 v47; // rbx
	int* v48; // rdx
	__int64 v49; // rax
	char v50; // dl
	__int64 i; // rbx
	__int64 v52; // rcx
	__int64 j; // rbx
	__int64 v54; // rcx
	__int64 v55; // rsi
	__int64 v56; // rdi
	__int64 k; // rbx
	__int64 v58; // rcx
	char v60[8]; // [rsp+30h] [rbp-41h] BYREF
	int* v61; // [rsp+38h] [rbp-39h]
	_WORD* v62; // [rsp+40h] [rbp-31h]
	__int64 v63; // [rsp+48h] [rbp-29h]
	char v64[8]; // [rsp+50h] [rbp-21h] BYREF
	__int64 v65; // [rsp+58h] [rbp-19h]
	__int64 v66; // [rsp+60h] [rbp-11h]
	char v67[8]; // [rsp+70h] [rbp-1h] BYREF
	__int64 v68; // [rsp+78h] [rbp+7h]
	__int64 v69; // [rsp+80h] [rbp+Fh]

	*(_QWORD*)(a1 + 24) = a2;
	v5 = 0;
	*(_BYTE*)(a1 + 12) = 1;
	*(_QWORD*)(a1 + 16) = -1i64;
	*(_DWORD*)(a1 + 8) = 0;
	*(_QWORD*)a1 = off_140B5F040;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	v9 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 40) = v9;
	*(_QWORD*)(a1 + 48) = v9;
	*(_QWORD*)(a1 + 56) = v9 + 4;
	if (v9)
		*(_WORD*)v9 = 0;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	v10 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 72) = v10;
	*(_QWORD*)(a1 + 80) = v10;
	*(_QWORD*)(a1 + 88) = v10 + 4;
	if (v10)
		*(_WORD*)v10 = 0;
	v11 = a1 + 96;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	v12 = sub_14018B280(2i64, 0);
	*(_QWORD*)(a1 + 120) = (char*)v12 + 2;
	*(_QWORD*)(a1 + 104) = v12;
	*(_QWORD*)(a1 + 112) = v12;
	sub_1407DB590(v12, (int*)&word_140B7B704, 0i64);
	*(_QWORD*)(a1 + 112) = v12;
	if (v12)
		*(_WORD*)v12 = 0;
	v13 = a1 + 128;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 152) = 0i64;
	*(_DWORD*)(a1 + 160) = a5;
	v14 = 0i64;
	*(_QWORD*)(a1 + 168) = a4;
	if (*(_WORD*)a3)
	{
		do
			++v14;
		while (*((_WORD*)a3 + v14));
	}
	sub_14001C480(a1 + 96, a3, (int*)((char*)a3 + 2 * v14));
	if (a2)
	{
		if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 48i64))(a2))
			v15 = 0i64;
		else
			v15 = (int*)sub_1401A4F40(a2 + 24);
	}
	else
	{
		v15 = (int*)L"UNKNOWN";
	}
	v16 = 0i64;
	v17 = 0i64;
	v61 = 0i64;
	v63 = 0i64;
	if (*(_WORD*)v15)
	{
		do
			++v16;
		while (*((_WORD*)v15 + v16));
	}
	v18 = (2 * v16) >> 1;
	if ((unsigned __int64)(v18 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v17 = sub_14018B280(2 * (v18 + 1), 0);
		v61 = v17;
		v63 = (__int64)v17 + 2 * v18 + 2;
	}
	sub_1407DB590(v17, v15, 2 * v18);
	v19 = (_WORD*)v17 + v18;
	v62 = v19;
	if (v19)
		*v19 = 0;
	v20 = *(_QWORD**)(v13 + 16);
	if (v20 == *(_QWORD**)(v13 + 24))
	{
		sub_1400F8CF0((__int64*)v13, *(char**)(v13 + 16), (__int64)v60);
	}
	else
	{
		if (v20)
		{
			v21 = *(_QWORD**)(v13 + 16);
			v20[1] = 0i64;
			v20[2] = 0i64;
			v20[3] = 0i64;
			sub_14001C1B0(v21, v17, (__int64)v19);
		}
		*(_QWORD*)(v13 + 16) += 32i64;
	}
	if (v17)
		sub_14018B900((__int64)v17, 0);
	v22 = 0i64;
	v61 = 0i64;
	v63 = 0i64;
	v23 = 0i64;
	do
		v24 = asc_140B5F02C[++v23] == 0;
	while (!v24);
	v25 = (2 * v23) >> 1;
	if ((unsigned __int64)(v25 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v22 = sub_14018B280(2 * (v25 + 1), 0);
		v61 = v22;
		v63 = (__int64)v22 + 2 * v25 + 2;
	}
	sub_1407DB590(v22, (int*)L"/", 2 * v25);
	v62 = (_WORD*)v22 + v25;
	if (v62)
		*((_WORD*)v22 + v25) = 0;
	sub_14018F570((__int64)v64, v11, (__int64)v60, 34, 92);
	if (v22)
		sub_14018B900((__int64)v22, 0);
	v26 = (v66 - v65) >> 5;
	if (v26)
	{
		v27 = v65 + 8;
		do
		{
			v28 = *(_QWORD**)(v13 + 16);
			if (v28 == *(_QWORD**)(v13 + 24))
			{
				sub_1400F8CF0((__int64*)v13, *(char**)(v13 + 16), v27 - 8);
			}
			else
			{
				if (v28)
				{
					v28[1] = 0i64;
					v28[2] = 0i64;
					v28[3] = 0i64;
					sub_14001C1B0(v28, *(int**)v27, *(_QWORD*)(v27 + 8));
				}
				*(_QWORD*)(v13 + 16) += 32i64;
			}
			v27 += 32i64;
			--v26;
		} while (v26);
	}
	v29 = *(_QWORD*)(v13 + 16);
	v61 = 0i64;
	v30 = v29 - *(_QWORD*)(v13 + 8);
	v63 = 0i64;
	v31 = 0i64;
	*(_QWORD*)(a1 + 16) = (v30 >> 5) - 1;
	v32 = 0i64;
	do
		v24 = asc_140B5F030[++v32] == 0;
	while (!v24);
	v33 = (2 * v32) >> 1;
	if ((unsigned __int64)(v33 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v31 = sub_14018B280(2 * (v33 + 1), 0);
		v61 = v31;
		v63 = (__int64)v31 + 2 * v33 + 2;
	}
	sub_1407DB590(v31, (int*)L"[]", 2 * v33);
	v62 = (_WORD*)v31 + v33;
	if (v62)
		*((_WORD*)v31 + v33) = 0;
	sub_14018F570((__int64)v67, *(_QWORD*)(a1 + 136) + 32i64 * *(_QWORD*)(a1 + 16), (__int64)v60, 34, 92);
	if (v31)
		sub_14018B900((__int64)v31, 0);
	v34 = v69;
	v35 = v68;
	v36 = (v69 - v68) >> 5;
	if (v36 <= 1)
		goto LABEL_78;
	if (v36 == 2)
	{
		v39 = *(int**)(v68 + 8);
		v40 = 0i64;
		if (*(_WORD*)v39)
		{
			do
				++v40;
			while (*((_WORD*)v39 + v40));
		}
		sub_14001C480(*(_QWORD*)(a1 + 136) + 32i64 * *(_QWORD*)(a1 + 16), v39, (int*)((char*)v39 + 2 * v40));
		v41 = 0i64;
		v61 = 0i64;
		v63 = 0i64;
		v42 = 0i64;
		do
			v24 = asc_140B5F020[++v42] == 0;
		while (!v24);
		v43 = (2 * v42) >> 1;
		if ((unsigned __int64)(v43 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v41 = sub_14018B280(2 * (v43 + 1), 0);
			v61 = v41;
			v63 = (__int64)v41 + 2 * v43 + 2;
		}
		sub_1407DB590(v41, (int*)L"= \t\r\n", 2 * v43);
		v62 = (_WORD*)v41 + v43;
		if (v62)
			*((_WORD*)v41 + v43) = 0;
		sub_14018F570((__int64)v67, v35 + 32, (__int64)v60, 39, 92);
		if (v41)
			sub_14018B900((__int64)v41, 0);
		v44 = v68;
		v45 = v69;
		v46 = *(_WORD**)(v68 + 8);
		if (*v46 == 64 && (v47 = (v69 - v68) >> 5, v47 <= 2) && v47)
		{
			v48 = (int*)(v46 + 1);
			v49 = 0i64;
			if (*(_WORD*)v48)
			{
				do
					++v49;
				while (*((_WORD*)v48 + v49));
			}
			sub_14001C480(a1 + 32, v48, (int*)((char*)v48 + 2 * v49));
			if (v47 == 2 && v44 + 32 != a1 + 64)
				sub_14001C480(a1 + 64, *(int**)(v44 + 40), *(int**)(v44 + 48));
		}
		else
		{
			sub_1400035B0();
			*(_BYTE*)(a1 + 12) = v50;
			*(_QWORD*)(a1 + 16) = -1i64;
		}
		for (i = v44; i != v45; i += 32i64)
		{
			v52 = *(_QWORD*)(i + 8);
			if (v52)
				sub_14018B900(v52, 0);
		}
		sub_14018B900(v44, 0);
	LABEL_78:
		v37 = a3;
		goto LABEL_79;
	}
	sub_1400035B0();
	*(_BYTE*)(a1 + 12) = v38;
	*(_QWORD*)(a1 + 16) = -1i64;
LABEL_79:
	if (*(_QWORD*)(a1 + 16) == 1i64
		&& (unsigned __int64)((__int64)(*(_QWORD*)(*(_QWORD*)(a1 + 136) + 16i64)
			- *(_QWORD*)(*(_QWORD*)(a1 + 136) + 8i64)) >> 1) > 2
		&& *(_WORD*)v37 == 47
		&& *((_WORD*)v37 + 1) == 47)
	{
		v5 = 1;
	}
	*(_DWORD*)(a1 + 8) = v5;
	for (j = v35; j != v34; j += 32i64)
	{
		v54 = *(_QWORD*)(j + 8);
		if (v54)
			sub_14018B900(v54, 0);
	}
	if (v35)
		sub_14018B900(v35, 0);
	v55 = v65;
	v56 = v66;
	for (k = v65; k != v56; k += 32i64)
	{
		v58 = *(_QWORD*)(k + 8);
		if (v58)
			sub_14018B900(v58, 0);
	}
	if (v55)
		sub_14018B900(v55, 0);
	return a1;
}
// 1401B1147: variable 'v38' is possibly undefined
// 1401B12BF: variable 'v50' is possibly undefined
// 1401B1322: variable 'v37' is possibly undefined
// 140A45EA0: using guessed type wchar_t aUnknown_8[8];
// 140B5F020: using guessed type wchar_t asc_140B5F020[6];
// 140B5F02C: using guessed type wchar_t asc_140B5F02C[2];
// 140B5F030: using guessed type wchar_t asc_140B5F030[3];
// 140B5F040: using guessed type __int64 (__fastcall *off_140B5F040[9])();
// 140B7B704: using guessed type __int16 word_140B7B704;
// 1401B0CE0: using guessed type char var_90[8];
// 1401B0CE0: using guessed type char var_70[8];
// 1401B0CE0: using guessed type char var_50[8];

