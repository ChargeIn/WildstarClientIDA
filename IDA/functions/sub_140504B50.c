//----- (0000000140504B50) ----------------------------------------------------
__int64 __fastcall sub_140504B50(__int64 a1, int* a2, char a3, int* a4, int a5)
{
	__int64 v9; // rdi
	int* v10; // rcx
	__int64 v11; // rax
	bool v12; // zf
	int* v13; // rcx
	int* v14; // rbp
	unsigned __int64 v15; // r8
	unsigned __int64 v16; // rbx
	unsigned __int64 v17; // rbx
	__int64 v18; // rax
	__int64 v19; // rax
	wchar_t* v20; // rdx
	__int64 v21; // rax
	__int64 v22; // rax
	__int64 v23; // rax
	wchar_t* v24; // rdx
	__int64 v25; // rax
	__int64 v26; // rdx
	__int64 v27; // rcx
	__int64 v28; // rax
	__int64 i; // rax
	__int64 v30; // rax
	__int64 v31; // rax
	__int64 v32; // rax
	__int64 v33; // rax
	_QWORD* v34; // rax
	__int64 v35; // rax
	__int64 v36; // rax
	__int64 v37; // rax
	__int64 v38; // rax
	wchar_t* v39; // rdx
	__int64 v40; // rax
	__int64 v41; // rdx
	__int64 v42; // rcx
	__int64 v43; // rax
	__int64 j; // rax
	__int64 v45; // rax
	__int64 v46; // rax
	__int64 v47; // rax
	__int64 v48; // rax
	_QWORD* v49; // rax
	__int64 v50; // rax
	int v51; // edi
	int v52; // ebp
	__int64* v53; // rbx
	__int64 v54; // rcx
	__int64* v55; // rbx
	__int64 v56; // rcx
	__int64 v58; // [rsp+30h] [rbp-388h] BYREF
	__int64 v59; // [rsp+38h] [rbp-380h]
	__int64 v60[50]; // [rsp+50h] [rbp-368h] BYREF
	__int64(__fastcall * *v61)(); // [rsp+1E0h] [rbp-1D8h] BYREF
	char v62; // [rsp+1E8h] [rbp-1D0h] BYREF
	char v63; // [rsp+378h] [rbp-40h] BYREF

	sub_140503450((__int64)&v61);
	sub_140503450((__int64)v60);
	v9 = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	v10 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 8) = v10;
	*(_QWORD*)(a1 + 16) = v10;
	*(_QWORD*)(a1 + 24) = v10 + 4;
	if (v10)
		*(_WORD*)v10 = 0;
	v11 = 0i64;
	do
		v12 = aDoc_1[++v11] == 0;
	while (!v12);
	v13 = *(int**)(a1 + 8);
	v14 = (int*)&aDoc_1[v11];
	v15 = (__int64)(*(_QWORD*)(a1 + 16) - (_QWORD)v13) >> 1;
	v16 = (2 * v11) >> 1;
	if (v16 > v15)
	{
		sub_1407DB590(v13, (int*)L"<Doc>", 2 * v15);
		sub_14001C310((_QWORD*)a1, (int*)&aDoc_1[(__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 8)) >> 1], v14);
	}
	else
	{
		v17 = 2 * v16;
		sub_1407DB590(v13, (int*)L"<Doc>", v17);
		sub_14001C2B0(a1, (int*)(v17 + *(_QWORD*)(a1 + 8)), *(int**)(a1 + 16));
	}
	if (*(_QWORD*)a2)
	{
		v18 = 0i64;
		do
			v12 = aPAlign_0[++v18] == 0;
		while (!v12);
		sub_14001C310((_QWORD*)a1, (int*)L"<P Align=\"", (int*)&aPAlign_0[v18]);
		v19 = 0i64;
		if (a5 == 1)
		{
			v20 = L"Center";
			do
				v12 = aCenter_1[++v19] == 0;
			while (!v12);
		}
		else if (a5 == 2)
		{
			v20 = L"Right";
			do
				v12 = aRight_1[++v19] == 0;
			while (!v12);
		}
		else
		{
			v20 = L"Left";
			do
				v12 = aLeft_4[++v19] == 0;
			while (!v12);
		}
		sub_14001C310((_QWORD*)a1, (int*)v20, (int*)&v20[v19]);
		v21 = 0i64;
		do
			v12 = *((_WORD*)&unk_1409F0FB4 + ++v21) == 0;
		while (!v12);
		sub_14001C310((_QWORD*)a1, (int*)&unk_1409F0FB4, (int*)((char*)&unk_1409F0FB4 + 2 * v21));
		v22 = 0i64;
		do
			++v22;
		while (word_140A31AB8[v22]);
		sub_14001C310((_QWORD*)a1, (int*)word_140A31AB8, (int*)&word_140A31AB8[v22]);
		v23 = 0i64;
		do
			v12 = asc_140B100E4[++v23] == 0;
		while (!v12);
		sub_14001C310((_QWORD*)a1, (int*)L"=\"", (int*)&asc_140B100E4[v23]);
		if (a3)
		{
			v24 = off_140C2C918[0];
			v25 = 0i64;
			if (*off_140C2C918[0])
			{
				do
					++v25;
				while (off_140C2C918[0][v25]);
			}
		}
		else if (qword_140C65898
			&& ((v26 = a2[2], (unsigned int)(v26 - 1) > 0xD)
				? (v27 = 0i64)
				: (v27 = *(_QWORD*)(qword_140C65898 + 8 * v26 + 5616)),
				v27 < *(_QWORD*)a2))
		{
			v24 = off_140C2C930[0];
			v25 = 0i64;
			if (*off_140C2C930[0])
			{
				do
					++v25;
				while (off_140C2C930[0][v25]);
			}
		}
		else
		{
			v24 = off_140C2C910[0];
			v25 = 0i64;
			if (*off_140C2C910[0])
			{
				do
					++v25;
				while (off_140C2C910[0][v25]);
			}
		}
		sub_14001C310((_QWORD*)a1, (int*)v24, (int*)&v24[v25]);
		v28 = 0i64;
		do
			v12 = asc_140B10224[++v28] == 0;
		while (!v12);
		sub_14001C310((_QWORD*)a1, (int*)L"\" ", (int*)&asc_140B10224[v28]);
		if (a4)
		{
			for (i = 0i64; aFont[i]; ++i)
				;
			sub_14001C310((_QWORD*)a1, (int*)L"Font", (int*)&aFont[i]);
			v30 = 0i64;
			do
				v12 = asc_140B1021C[++v30] == 0;
			while (!v12);
			sub_14001C310((_QWORD*)a1, (int*)L"=\"", (int*)&asc_140B1021C[v30]);
			v31 = 0i64;
			if (*(_WORD*)a4)
			{
				do
					++v31;
				while (*((_WORD*)a4 + v31));
			}
			sub_14001C310((_QWORD*)a1, a4, (int*)((char*)a4 + 2 * v31));
			v32 = 0i64;
			do
				v12 = asc_140B1022C[++v32] == 0;
			while (!v12);
			sub_14001C310((_QWORD*)a1, (int*)L"\" ", (int*)&asc_140B1022C[v32]);
		}
		v33 = 0i64;
		do
			v12 = *((_WORD*)&unk_1409F10CC + ++v33) == 0;
		while (!v12);
		sub_14001C310((_QWORD*)a1, (int*)&unk_1409F10CC, (int*)((char*)&unk_1409F10CC + 2 * v33));
		sub_140503600((__int64)&v61, a2[2], a2[3], a2[4], a2[5]);
		v34 = sub_1405043E0((__int64)&v61, &v58, *a2, 1);
		sub_14001C310((_QWORD*)a1, (int*)v34[1], (int*)v34[2]);
		if (v59)
			sub_14018B900(v59, 0);
		v35 = 0i64;
		do
			v12 = aP_1[++v35] == 0;
		while (!v12);
		sub_14001C310((_QWORD*)a1, (int*)L"</P>", (int*)&aP_1[v35]);
	}
	if (*((_QWORD*)a2 + 3))
	{
		v36 = 0i64;
		do
			v12 = aPAlignRight[++v36] == 0;
		while (!v12);
		sub_14001C310((_QWORD*)a1, (int*)L"<P Align=\"Right\"", (int*)&aPAlignRight[v36]);
		v37 = 0i64;
		do
			++v37;
		while (word_140A31AB8[v37]);
		sub_14001C310((_QWORD*)a1, (int*)word_140A31AB8, (int*)&word_140A31AB8[v37]);
		v38 = 0i64;
		do
			v12 = asc_140B10214[++v38] == 0;
		while (!v12);
		sub_14001C310((_QWORD*)a1, (int*)L"=\"", (int*)&asc_140B10214[v38]);
		if (a3)
		{
			v39 = off_140C2C918[0];
			v40 = 0i64;
			if (*off_140C2C918[0])
			{
				do
					++v40;
				while (off_140C2C918[0][v40]);
			}
		}
		else if (qword_140C65898
			&& ((v41 = a2[8], (unsigned int)(v41 - 1) > 0xD)
				? (v42 = 0i64)
				: (v42 = *(_QWORD*)(qword_140C65898 + 8 * v41 + 5616)),
				v42 >= *((_QWORD*)a2 + 3)))
		{
			v39 = off_140C2C910[0];
			v40 = 0i64;
			if (*off_140C2C910[0])
			{
				do
					++v40;
				while (off_140C2C910[0][v40]);
			}
		}
		else
		{
			v39 = off_140C2C930[0];
			v40 = 0i64;
			if (*off_140C2C930[0])
			{
				do
					++v40;
				while (off_140C2C930[0][v40]);
			}
		}
		sub_14001C310((_QWORD*)a1, (int*)v39, (int*)&v39[v40]);
		v43 = 0i64;
		do
			v12 = asc_140B1020C[++v43] == 0;
		while (!v12);
		sub_14001C310((_QWORD*)a1, (int*)L"\" ", (int*)&asc_140B1020C[v43]);
		if (a4)
		{
			for (j = 0i64; aFont[j]; ++j)
				;
			sub_14001C310((_QWORD*)a1, (int*)L"Font", (int*)&aFont[j]);
			v45 = 0i64;
			do
				v12 = asc_140B101BC[++v45] == 0;
			while (!v12);
			sub_14001C310((_QWORD*)a1, (int*)L"=\"", (int*)&asc_140B101BC[v45]);
			v46 = 0i64;
			if (*(_WORD*)a4)
			{
				do
					++v46;
				while (*((_WORD*)a4 + v46));
			}
			sub_14001C310((_QWORD*)a1, a4, (int*)((char*)a4 + 2 * v46));
			v47 = 0i64;
			do
				v12 = asc_140B101B4[++v47] == 0;
			while (!v12);
			sub_14001C310((_QWORD*)a1, (int*)L"\" ", (int*)&asc_140B101B4[v47]);
		}
		v48 = 0i64;
		do
			v12 = *((_WORD*)&unk_1409F10AC + ++v48) == 0;
		while (!v12);
		sub_14001C310((_QWORD*)a1, (int*)&unk_1409F10AC, (int*)((char*)&unk_1409F10AC + 2 * v48));
		sub_140503600((__int64)v60, a2[8], a2[9], a2[10], a2[11]);
		v49 = sub_1405043E0((__int64)v60, &v58, a2[6], 1);
		sub_14001C310((_QWORD*)a1, (int*)v49[1], (int*)v49[2]);
		if (v59)
			sub_14018B900(v59, 0);
		v50 = 0i64;
		do
			v12 = aP_2[++v50] == 0;
		while (!v12);
		sub_14001C310((_QWORD*)a1, (int*)L"</P>", (int*)&aP_2[v50]);
	}
	do
		v12 = aDoc_2[++v9] == 0;
	while (!v12);
	sub_14001C310((_QWORD*)a1, (int*)L"</Doc>", (int*)&aDoc_2[v9]);
	v51 = 3;
	v52 = 3;
	v53 = (__int64*)&v62;
	v60[0] = (__int64)off_140B6A420;
	do
	{
		v54 = *(v53 - 6);
		v53 -= 11;
		if (v54)
			sub_14018B900(v54, 0);
		if (*v53)
			sub_14018B900(*v53, 0);
		--v52;
	} while (v52 >= 0);
	v61 = off_140B6A420;
	v55 = (__int64*)&v63;
	do
	{
		v56 = *(v55 - 6);
		v55 -= 11;
		if (v56)
			sub_14018B900(v56, 0);
		if (*v55)
			sub_14018B900(*v55, 0);
		--v51;
	} while (v51 >= 0);
	return a1;
}
// 140A31AA8: using guessed type wchar_t aFont[5];
// 140A31AB8: using guessed type __int16 word_140A31AB8[];
// 140B100C8: using guessed type wchar_t aLeft_4[5];
// 140B100D8: using guessed type wchar_t aRight_1[6];
// 140B100E4: using guessed type wchar_t asc_140B100E4[3];
// 140B100F0: using guessed type wchar_t aDoc_1[6];
// 140B10110: using guessed type wchar_t aCenter_1[7];
// 140B10120: using guessed type wchar_t aPAlign_0[11];
// 140B10170: using guessed type wchar_t aDoc_2[7];
// 140B101B4: using guessed type wchar_t asc_140B101B4[3];
// 140B101BC: using guessed type wchar_t asc_140B101BC[3];
// 140B101C8: using guessed type wchar_t aP_2[5];
// 140B101D8: using guessed type wchar_t aPAlignRight[17];
// 140B10200: using guessed type wchar_t aP_1[5];
// 140B1020C: using guessed type wchar_t asc_140B1020C[3];
// 140B10214: using guessed type wchar_t asc_140B10214[3];
// 140B1021C: using guessed type wchar_t asc_140B1021C[3];
// 140B10224: using guessed type wchar_t asc_140B10224[3];
// 140B1022C: using guessed type wchar_t asc_140B1022C[3];
// 140B6A420: using guessed type __int64 (__fastcall *off_140B6A420[3])();
// 140C2C910: using guessed type wchar_t *off_140C2C910[20];
// 140C2C918: using guessed type wchar_t *off_140C2C918[19];
// 140C2C930: using guessed type wchar_t *off_140C2C930[16];
// 140C65898: using guessed type __int64 qword_140C65898;

