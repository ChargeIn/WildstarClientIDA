//----- (0000000140105DA0) ----------------------------------------------------
char __fastcall sub_140105DA0(_QWORD* a1, __int64 a2)
{
	int* v2; // rbx
	__int64 v5; // rax
	int* v6; // rsi
	__int64 v7; // rbx
	__int64 v8; // rdi
	int* v9; // r14
	unsigned __int64 v10; // rdi
	char* v11; // r14
	int* v12; // rsi
	int* v13; // r12
	int* v14; // rcx
	__int64 v15; // rax
	__int64 v16; // r15
	__int64 v17; // rax
	int* v19; // r12
	__int64 v20; // rdi
	__int64* v21; // rax
	int* v22; // rdx
	__int64 v23; // rax
	char* v24; // rdi
	char* v25; // rsi
	unsigned __int64 v26; // rcx
	int* v27; // rcx
	__int64 v28; // rdi
	__int64 v29; // rcx
	__int64 v30; // rax
	unsigned int* v31; // r15
	int** v32; // r14
	__int64 v33; // rsi
	__int64 v34; // rdi
	__int64 v35; // rax
	int* v36; // rax
	unsigned int* v37; // r15
	int** v38; // r14
	__int64 v39; // rsi
	__int64 v40; // rdi
	__int64 v41; // rax
	int* v42; // rax
	__int64 v43; // rax
	__int64 v44; // r15
	__int64 v45; // r12
	__int64 v46; // rsi
	__int64 v47; // rdi
	__int64 v48; // rax
	int* v49; // rax
	__int64 v50; // rax
	__int64 v51; // rsi
	__int64 v52; // rdi
	__int64 v53; // rax
	int* v54; // rax
	__int64 v55; // rax
	__int64 v56; // rsi
	__int64 v57; // rdi
	__int64 v58; // rax
	int* v59; // rax
	__int64 v60; // rax
	unsigned int v61; // edi
	__int64 v62; // rsi
	__int64 v63; // rdi
	__int64 v64; // rax
	int* v65; // rax
	__int64 v66; // rax
	__int64 v67; // rax
	__int64 v68; // rdi
	__int64 v69; // rax
	int* v70; // rax
	__int64 v71; // rax
	__int64 v72; // rax
	int* v73; // rax
	unsigned __int16* v74; // rcx
	int* v76; // [rsp+20h] [rbp-E0h] BYREF
	_QWORD* v77; // [rsp+28h] [rbp-D8h]
	__int64 v78; // [rsp+30h] [rbp-D0h] BYREF
	unsigned __int16* v79; // [rsp+38h] [rbp-C8h]
	__int64 v80; // [rsp+40h] [rbp-C0h]
	__int64 v81; // [rsp+48h] [rbp-B8h]
	__int64 v82; // [rsp+50h] [rbp-B0h] BYREF
	int v83[6]; // [rsp+58h] [rbp-A8h] BYREF
	int v84[8]; // [rsp+70h] [rbp-90h] BYREF
	int v85[100]; // [rsp+90h] [rbp-70h] BYREF

	v2 = (int*)a1[9];
	v77 = a1;
	v5 = sub_1401A6C70(a2, (int*)L"Name");
	sub_1401A4C50(v5 + 32, v2);
	v6 = (int*)a1[13];
	v7 = 0i64;
	v8 = (__int64)(a1[14] - (_QWORD)v6) >> 1;
	v9 = 0i64;
	v76 = 0i64;
	if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v9 = sub_14018B280(2 * (v8 + 1), 0);
		v76 = v9;
	}
	v10 = 2 * v8;
	sub_1407DB590(v9, v6, v10);
	v11 = (char*)v9 + v10;
	if (v11)
		*(_WORD*)v11 = 0;
	v12 = (int*)&unk_1409D4D6C;
	v13 = 0i64;
	v14 = *(int**)(qword_140C63650 + 784);
	v15 = 0i64;
	v79 = 0i64;
	v81 = 0i64;
	if (v14)
		v12 = v14;
	if (*(_WORD*)v12)
	{
		do
			++v15;
		while (*((_WORD*)v12 + v15));
	}
	v16 = (2 * v15) >> 1;
	if ((unsigned __int64)(v16 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v13 = sub_14018B280(2 * (v16 + 1), 0);
		v79 = (unsigned __int16*)v13;
		v81 = (__int64)v13 + 2 * v16 + 2;
	}
	sub_1407DB590(v13, v12, 2 * v16);
	v80 = (__int64)v13 + 2 * v16;
	if (v80)
		*((_WORD*)v13 + v16) = 0;
	v17 = 0i64;
	while (*((_WORD*)&unk_1409D4DBC + ++v17) != 0)
		;
	sub_14001C310(&v78, (int*)&unk_1409D4DBC, (int*)((char*)&unk_1409D4DBC + 2 * v17));
	v19 = v76;
	v20 = (v80 - (__int64)v79) >> 1;
	if (!(unsigned int)sub_14018E3E0((__int64)v76, v79, v20))
	{
		v82 = -1i64;
		v21 = (__int64*)&v76;
		v22 = 0i64;
		v76 = (int*)(((v11 - (char*)v76) >> 1) - v20);
		if (v76 == (int*)-1i64)
			v21 = &v82;
		v23 = v20 + *v21;
		v24 = (char*)v19 + 2 * v20;
		v25 = (char*)v19 + 2 * v23;
		v26 = ((v25 - v24) >> 1) + 1;
		if (v26 <= 0x7FFFFFFFFFFFFFFEi64)
			v22 = sub_14018B280(2 * v26, 0);
		v27 = v22;
		if (v24 != v25)
		{
			v28 = v24 - (char*)v22;
			do
			{
				if (v27)
					*(_WORD*)v27 = *(_WORD*)((char*)v27 + v28);
				v27 = (int*)((char*)v27 + 2);
			} while ((char*)v27 + v28 != v25);
		}
		if (v27)
			*(_WORD*)v27 = 0;
		v29 = (__int64)v19;
		v76 = v22;
		v19 = v22;
		if (v29)
			sub_14018B900(v29, 0);
	}
	v30 = sub_1401A6C70(a2, (int*)L"Texture");
	sub_1401A4C50(v30 + 32, v19);
	v31 = (unsigned int*)v83;
	v32 = (int**)off_140A1AC20;
	v83[0] = *((_DWORD*)v77 + 33);
	v83[1] = *((_DWORD*)v77 + 34);
	v83[2] = *((_DWORD*)v77 + 35);
	v83[3] = *((_DWORD*)v77 + 36);
	v83[4] = *((_DWORD*)v77 + 37);
	v83[5] = *((_DWORD*)v77 + 38);
	v84[0] = *((_DWORD*)v77 + 39);
	v84[1] = *((_DWORD*)v77 + 40);
	v84[2] = *((_DWORD*)v77 + 41);
	v84[3] = *((_DWORD*)v77 + 42);
	v84[4] = *((_DWORD*)v77 + 43);
	v84[5] = *((_DWORD*)v77 + 44);
	do
	{
		v33 = sub_1401A6C70(a2, *v32);
		sub_1401A4C20(v85, 0xC8ui64, (__int64)L"%d", *v31);
		if ((*(_DWORD*)(v33 + 32) & 0x200) != 0)
			sub_14018B900(*(_QWORD*)(v33 + 40), 0);
		*(_DWORD*)(v33 + 32) = 0;
		*(_QWORD*)(v33 + 40) = 0i64;
		*(_QWORD*)(v33 + 48) = 0i64;
		v34 = 0i64;
		if (LOWORD(v85[0]))
		{
			do
				++v34;
			while (*((_WORD*)v85 + v34));
		}
		v35 = 2 * (v34 + 1);
		if (!is_mul_ok(v34 + 1, 2ui64))
			v35 = -1i64;
		v36 = sub_14018B280(v35, 0);
		*(_QWORD*)(v33 + 40) = v36;
		sub_1407DB590(v36, v85, 2 * v34 + 2);
		++v32;
		++v31;
		*(_QWORD*)(v33 + 48) = *(_QWORD*)(v33 + 40) + 2 * v34;
		*(_DWORD*)(v33 + 32) = 512;
	} while ((__int64)v32 < (__int64)&off_140A1AC50);
	v37 = (unsigned int*)v84;
	v38 = (int**)off_140A1ABD0;
	do
	{
		v39 = sub_1401A6C70(a2, *v38);
		sub_1401A4C20(v85, 0xC8ui64, (__int64)L"%d", *v37);
		if ((*(_DWORD*)(v39 + 32) & 0x200) != 0)
			sub_14018B900(*(_QWORD*)(v39 + 40), 0);
		*(_DWORD*)(v39 + 32) = 0;
		*(_QWORD*)(v39 + 40) = 0i64;
		*(_QWORD*)(v39 + 48) = 0i64;
		v40 = 0i64;
		if (LOWORD(v85[0]))
		{
			do
				++v40;
			while (*((_WORD*)v85 + v40));
		}
		v41 = 2 * (v40 + 1);
		if (!is_mul_ok(v40 + 1, 2ui64))
			v41 = -1i64;
		v42 = sub_14018B280(v41, 0);
		*(_QWORD*)(v39 + 40) = v42;
		sub_1407DB590(v42, v85, 2 * v40 + 2);
		v43 = *(_QWORD*)(v39 + 40);
		++v38;
		++v37;
		*(_DWORD*)(v39 + 32) = 512;
		*(_QWORD*)(v39 + 48) = v43 + 2 * v40;
	} while ((__int64)v38 < (__int64)off_140A1AC00);
	v44 = (__int64)v77;
	v45 = (__int64)v76;
	if (*((_BYTE*)v77 + 128))
	{
		v46 = sub_1401A6C70(a2, (int*)L"Stretchy");
		sub_1401A4C20(v85, 0xC8ui64, (__int64)L"%d", 1i64);
		if ((*(_DWORD*)(v46 + 32) & 0x200) != 0)
			sub_14018B900(*(_QWORD*)(v46 + 40), 0);
		*(_DWORD*)(v46 + 32) = 0;
		*(_QWORD*)(v46 + 40) = 0i64;
		*(_QWORD*)(v46 + 48) = 0i64;
		v47 = 0i64;
		if (LOWORD(v85[0]))
		{
			do
				++v47;
			while (*((_WORD*)v85 + v47));
		}
		v48 = 2 * (v47 + 1);
		if (!is_mul_ok(v47 + 1, 2ui64))
			v48 = -1i64;
		v49 = sub_14018B280(v48, 0);
		*(_QWORD*)(v46 + 40) = v49;
		sub_1407DB590(v49, v85, 2 * v47 + 2);
		v50 = *(_QWORD*)(v46 + 40);
		*(_DWORD*)(v46 + 32) = 512;
		*(_QWORD*)(v46 + 48) = v50 + 2 * v47;
	}
	if (*(_BYTE*)(v44 + 129))
	{
		v51 = sub_1401A6C70(a2, (int*)L"FlipX");
		sub_1401A4C20(v85, 0xC8ui64, (__int64)L"%d", 1i64);
		if ((*(_DWORD*)(v51 + 32) & 0x200) != 0)
			sub_14018B900(*(_QWORD*)(v51 + 40), 0);
		*(_DWORD*)(v51 + 32) = 0;
		*(_QWORD*)(v51 + 40) = 0i64;
		*(_QWORD*)(v51 + 48) = 0i64;
		v52 = 0i64;
		if (LOWORD(v85[0]))
		{
			do
				++v52;
			while (*((_WORD*)v85 + v52));
		}
		v53 = 2 * (v52 + 1);
		if (!is_mul_ok(v52 + 1, 2ui64))
			v53 = -1i64;
		v54 = sub_14018B280(v53, 0);
		*(_QWORD*)(v51 + 40) = v54;
		sub_1407DB590(v54, v85, 2 * v52 + 2);
		v55 = *(_QWORD*)(v51 + 40);
		*(_DWORD*)(v51 + 32) = 512;
		*(_QWORD*)(v51 + 48) = v55 + 2 * v52;
	}
	if (*(_BYTE*)(v44 + 130))
	{
		v56 = sub_1401A6C70(a2, (int*)L"FlipY");
		sub_1401A4C20(v85, 0xC8ui64, (__int64)L"%d", 1i64);
		if ((*(_DWORD*)(v56 + 32) & 0x200) != 0)
			sub_14018B900(*(_QWORD*)(v56 + 40), 0);
		*(_DWORD*)(v56 + 32) = 0;
		*(_QWORD*)(v56 + 40) = 0i64;
		*(_QWORD*)(v56 + 48) = 0i64;
		v57 = 0i64;
		if (LOWORD(v85[0]))
		{
			do
				++v57;
			while (*((_WORD*)v85 + v57));
		}
		v58 = 2 * (v57 + 1);
		if (!is_mul_ok(v57 + 1, 2ui64))
			v58 = -1i64;
		v59 = sub_14018B280(v58, 0);
		*(_QWORD*)(v56 + 40) = v59;
		sub_1407DB590(v59, v85, 2 * v57 + 2);
		v60 = *(_QWORD*)(v56 + 40);
		*(_DWORD*)(v56 + 32) = 512;
		*(_QWORD*)(v56 + 48) = v60 + 2 * v57;
	}
	v61 = *(_DWORD*)(v44 + 56);
	v62 = sub_1401A6C70(a2, (int*)L"StateBits");
	sub_1401A4C20(v85, 0xC8ui64, (__int64)L"%d", v61);
	if ((*(_DWORD*)(v62 + 32) & 0x200) != 0)
		sub_14018B900(*(_QWORD*)(v62 + 40), 0);
	*(_DWORD*)(v62 + 32) = 0;
	*(_QWORD*)(v62 + 40) = 0i64;
	*(_QWORD*)(v62 + 48) = 0i64;
	v63 = 0i64;
	if (LOWORD(v85[0]))
	{
		do
			++v63;
		while (*((_WORD*)v85 + v63));
	}
	v64 = 2 * (v63 + 1);
	if (!is_mul_ok(v63 + 1, 2ui64))
		v64 = -1i64;
	v65 = sub_14018B280(v64, 0);
	*(_QWORD*)(v62 + 40) = v65;
	sub_1407DB590(v65, v85, 2 * v63 + 2);
	v66 = *(_QWORD*)(v62 + 40);
	*(_DWORD*)(v62 + 32) = 512;
	*(_QWORD*)(v62 + 48) = v66 + 2 * v63;
	if (*(_BYTE*)(v44 + 180))
	{
		v67 = sub_1401A6C70(a2, (int*)L"Direction");
		v68 = v67;
		if ((*(_DWORD*)(v67 + 32) & 0x200) != 0)
			sub_14018B900(*(_QWORD*)(v67 + 40), 0);
		*(_DWORD*)(v68 + 32) = 0;
		*(_QWORD*)(v68 + 40) = 0i64;
		*(_QWORD*)(v68 + 48) = 0i64;
		do
			++v7;
		while (word_140A1A8C8[v7]);
		v69 = 2 * (v7 + 1);
		if (!is_mul_ok(v7 + 1, 2ui64))
			v69 = -1i64;
		v70 = sub_14018B280(v69, 0);
		*(_QWORD*)(v68 + 40) = v70;
		sub_1407DB590(v70, (int*)word_140A1A8C8, 2 * v7 + 2);
		*(_QWORD*)(v68 + 48) = *(_QWORD*)(v68 + 40) + 2 * v7;
	}
	else
	{
		v71 = sub_1401A6C70(a2, (int*)L"Direction");
		v68 = v71;
		if ((*(_DWORD*)(v71 + 32) & 0x200) != 0)
			sub_14018B900(*(_QWORD*)(v71 + 40), 0);
		*(_DWORD*)(v68 + 32) = 0;
		*(_QWORD*)(v68 + 40) = 0i64;
		*(_QWORD*)(v68 + 48) = 0i64;
		do
			++v7;
		while (word_140A1A978[v7]);
		v72 = 2 * (v7 + 1);
		if (!is_mul_ok(v7 + 1, 2ui64))
			v72 = -1i64;
		v73 = sub_14018B280(v72, 0);
		*(_QWORD*)(v68 + 40) = v73;
		sub_1407DB590(v73, (int*)word_140A1A978, 2 * v7 + 2);
		*(_QWORD*)(v68 + 48) = *(_QWORD*)(v68 + 40) + 2 * v7;
	}
	v74 = v79;
	*(_DWORD*)(v68 + 32) = 512;
	if (v74)
		sub_14018B900((__int64)v74, 0);
	if (v45)
		sub_14018B900(v45, 0);
	return 1;
}
// 1409E41F4: using guessed type wchar_t aD_19[3];
// 140A1A828: using guessed type wchar_t aTexture[8];
// 140A1A8B0: using guessed type wchar_t aDirection[10];
// 140A1A8C8: using guessed type __int16 word_140A1A8C8[];
// 140A1A8F0: using guessed type wchar_t aStretchy[9];
// 140A1A908: using guessed type wchar_t aFlipx[6];
// 140A1A918: using guessed type wchar_t aFlipy[6];
// 140A1A978: using guessed type __int16 word_140A1A978[];
// 140A1A9A0: using guessed type wchar_t aStatebits[10];
// 140A1ABD0: using guessed type wchar_t *off_140A1ABD0[17];
// 140A1AC00: using guessed type wchar_t *off_140A1AC00[11];
// 140A1AC20: using guessed type wchar_t *off_140A1AC20[7];
// 140A1AC50: using guessed type wchar_t *off_140A1AC50;
// 140A31790: using guessed type wchar_t aName_6[5];
// 140C63650: using guessed type __int64 qword_140C63650;

