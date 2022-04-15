//----- (00000001401083B0) ----------------------------------------------------
char __fastcall sub_1401083B0(__int64 a1, __int64 a2)
{
	int* v2; // rbx
	__int64 v4; // rax
	int** v5; // r13
	int** v6; // r12
	int* v7; // rdi
	int* v8; // rsi
	__int64 v9; // rax
	__int64 v10; // rbx
	unsigned __int64 v11; // rbx
	int* v12; // r15
	__int64 v13; // rbx
	__int64 v14; // r14
	unsigned __int64 v15; // rdi
	__int64 v16; // rdi
	int* v17; // rax
	__int64 v18; // rdi
	unsigned __int64 v19; // rbx
	__int64 v20; // rbx
	int* v21; // rax
	__int64 i; // rdi
	unsigned __int64 v23; // rbx
	__int64 v24; // rbx
	int* v25; // rax
	int* v26; // r14
	int* v27; // rbx
	__int64 v28; // rax
	int* v29; // r15
	int* v30; // rbx
	__int64 v31; // rax
	int* v32; // rdi
	int* v33; // rbx
	__int64 v34; // rax
	__int64 v36; // [rsp+20h] [rbp-60h] BYREF
	int* v37; // [rsp+28h] [rbp-58h]
	int* v38; // [rsp+30h] [rbp-50h]
	__int64 v39; // [rsp+38h] [rbp-48h]
	__int64 v40; // [rsp+40h] [rbp-40h] BYREF
	int* v41; // [rsp+48h] [rbp-38h]
	int* v42; // [rsp+50h] [rbp-30h]
	__int64 v43; // [rsp+58h] [rbp-28h]
	__int64 v44; // [rsp+60h] [rbp-20h] BYREF
	int* v45; // [rsp+68h] [rbp-18h]
	int* v46; // [rsp+70h] [rbp-10h]
	__int64 v47; // [rsp+78h] [rbp-8h]

	v2 = *(int**)(a1 + 64);
	v4 = sub_1401A6C70(a2, (int*)L"Name");
	sub_1401A4C50(v4 + 32, v2);
	v5 = (int**)(a1 + 96);
	v6 = (int**)off_140A33098;
	do
	{
		v7 = *v6;
		v8 = 0i64;
		v9 = 0i64;
		if (*(_WORD*)*v6)
		{
			do
				++v9;
			while (*((_WORD*)v7 + v9));
		}
		v10 = (2 * v9) >> 1;
		if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v8 = sub_14018B280(2 * (v10 + 1), 0);
		v11 = 2 * v10;
		sub_1407DB590(v8, v7, v11);
		v12 = (int*)((char*)v8 + v11);
		if ((int*)((char*)v8 + v11))
			*(_WORD*)v12 = 0;
		v13 = 0i64;
		do
			++v13;
		while (word_140A1A928[v13]);
		v37 = 0i64;
		v38 = 0i64;
		v14 = ((char*)v12 - (char*)v8) >> 1;
		v39 = 0i64;
		v15 = v14 + v13 + 1;
		if (v15 <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v16 = 2 * v15;
			v17 = sub_14018B280(v16, 0);
			v37 = v17;
			v38 = v17;
			v39 = (__int64)v17 + v16;
			if (v17)
				*(_WORD*)v17 = 0;
		}
		sub_14001C310(&v36, v8, v12);
		sub_14001C310(&v36, (int*)word_140A1A928, (int*)&word_140A1A928[v13]);
		v18 = 0i64;
		do
			++v18;
		while (word_140A1A950[v18]);
		v45 = 0i64;
		v46 = 0i64;
		v47 = 0i64;
		v19 = v14 + v18 + 1;
		if (v19 <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v20 = 2 * v19;
			v21 = sub_14018B280(v20, 0);
			v45 = v21;
			v46 = v21;
			v47 = (__int64)v21 + v20;
			if (v21)
				*(_WORD*)v21 = 0;
		}
		sub_14001C310(&v44, v8, v12);
		sub_14001C310(&v44, (int*)word_140A1A950, (int*)&word_140A1A950[v18]);
		for (i = 0i64; aIcon[i]; ++i)
			;
		v41 = 0i64;
		v42 = 0i64;
		v43 = 0i64;
		v23 = v14 + i + 1;
		if (v23 <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v24 = 2 * v23;
			v25 = sub_14018B280(v24, 0);
			v41 = v25;
			v42 = v25;
			v43 = (__int64)v25 + v24;
			if (v25)
				*(_WORD*)v25 = 0;
		}
		sub_14001C310(&v40, v8, v12);
		sub_14001C310(&v40, (int*)L"Icon", (int*)&aIcon[i]);
		v26 = v37;
		v27 = v5[24];
		v28 = sub_1401A6C70(a2, v37);
		sub_1401A4C50(v28 + 32, v27);
		v29 = v41;
		v30 = *v5;
		v31 = sub_1401A6C70(a2, v41);
		sub_1401A4C50(v31 + 32, v30);
		v32 = v45;
		v33 = v5[48];
		v34 = sub_1401A6C70(a2, v45);
		sub_1401A4C50(v34 + 32, v33);
		if (v29)
			sub_14018B900((__int64)v29, 0);
		if (v32)
			sub_14018B900((__int64)v32, 0);
		if (v26)
			sub_14018B900((__int64)v26, 0);
		if (v8)
			sub_14018B900((__int64)v8, 0);
		++v6;
		v5 += 4;
	} while ((__int64)v6 < (__int64)off_140A330C8);
	return 1;
}
// 140A1A928: using guessed type __int16 word_140A1A928[];
// 140A1A940: using guessed type wchar_t aIcon[5];
// 140A1A950: using guessed type __int16 word_140A1A950[];
// 140A31790: using guessed type wchar_t aName_6[5];
// 140A33098: using guessed type wchar_t *off_140A33098[25];
// 140A330C8: using guessed type wchar_t *off_140A330C8[19];

