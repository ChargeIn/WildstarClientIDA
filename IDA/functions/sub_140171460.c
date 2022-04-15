//----- (0000000140171460) ----------------------------------------------------
__int64 __fastcall sub_140171460(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	__int64 v7; // r12
	unsigned __int64 i; // rbx
	wchar_t* v9; // rdx
	__int64 v10; // rax
	wchar_t* v11; // rax
	int v12; // r15d
	char* v13; // rbx
	int j; // edi
	__int64 v15; // rcx
	int v16; // ebx
	int* v17; // rax
	__int64 v18; // rdi
	__int64 v19; // rax
	_WORD* v20; // rax
	__int64 v21; // rax
	__m128i* v22; // rax
	__int64 v23; // rax
	__m128i* v24; // rax
	unsigned int* v25; // rax
	__int64 v26; // rcx
	unsigned int* v27; // rbx
	unsigned int* v28; // r12
	unsigned __int64 v29; // rax
	__int64 v30; // r8
	int v31; // edx
	unsigned int* v32; // rax
	__int64 v33; // rcx
	unsigned int* v34; // rbx
	unsigned int* v35; // r12
	unsigned __int64 v36; // rax
	__int64 v37; // r8
	int v38; // edx
	__int64 v39; // rax
	__m128i* v40; // rax
	__int64 v41; // rax
	__m128i* v42; // rax
	__int64 v43; // rax
	__m128i* v44; // rax
	__int64 v45; // rax
	__m128i* v46; // rax
	__int64 v47; // rax
	__m128i* v48; // rax
	__int64 v49; // rax
	_WORD* v50; // rax
	__int64 v51; // rax
	int* v52; // rax
	__int64 v53; // rax
	__m128i* v54; // rax
	__int64 v55; // rdx
	int v56; // ebx
	unsigned int v57; // ebx
	__int64* v58; // rbx
	unsigned int v59; // edx
	__int64 v60; // rcx
	int v62; // [rsp+28h] [rbp-D8h]
	int v63; // [rsp+28h] [rbp-D8h]
	int v64; // [rsp+28h] [rbp-D8h]
	int v65; // [rsp+28h] [rbp-D8h]
	int v66; // [rsp+28h] [rbp-D8h]
	int v67; // [rsp+28h] [rbp-D8h]
	bool v68; // [rsp+50h] [rbp-B0h] BYREF
	unsigned int v69; // [rsp+54h] [rbp-ACh] BYREF
	_QWORD* v70; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v71; // [rsp+60h] [rbp-A0h] BYREF
	int v72; // [rsp+68h] [rbp-98h] BYREF
	int v73; // [rsp+6Ch] [rbp-94h] BYREF
	_OWORD v74[4]; // [rsp+70h] [rbp-90h] BYREF
	__int64 v75; // [rsp+B0h] [rbp-50h]
	char v76[2816]; // [rsp+D0h] [rbp-30h] BYREF
	char v77; // [rsp+BF8h] [rbp+AF8h] BYREF

	v70 = a3;
	v71 = a4;
	sub_1400D45E0((__int64)v74, a1, a2, a5, 0i64);
	v7 = 0i64;
	for (i = 0i64; i < 5; ++i)
	{
		v9 = off_140A32F18[i];
		v68 = 0;
		v10 = sub_1401A6B80(a5, v9);
		if (v10)
		{
			v11 = (wchar_t*)sub_1401A4F40(v10 + 32);
			sub_1401A52E0(v11, &v68);
			if (v68)
				v7 |= 1i64 << i;
		}
	}
	v12 = 31;
	v13 = v76;
	for (j = 31; j >= 0; --j)
	{
		sub_14016C730((__int64)v13);
		v13 += 88;
	}
	v16 = sub_140170D60(v15, a5, (__int64)v76);
	v17 = sub_14018B280(2048i64, 0);
	if (v17)
		v18 = sub_14016CE10((__int64)v17, a1, a2, (__int64)v76, v16, v70, v74, v71, v7);
	else
		v18 = 0i64;
	v72 = 16;
	v19 = sub_1401A6B80(a5, L"MinimumNodeHeight");
	if (v19)
	{
		v20 = (_WORD*)sub_1401A4F40(v19 + 32);
		if ((unsigned int)sub_1407DF428(v20, (__int64)L"%d", &v72) == 1)
			*(_DWORD*)(v18 + 1376) = v72;
	}
	v21 = sub_1401A6B80(a5, L"SelectedBG");
	if (v21)
	{
		v22 = (__m128i*)sub_1401A4F40(v21 + 32);
		if (v22)
		{
			if (a1)
				sub_140109710((__int64*)(v18 + 1312), a1 + 240, v22, 0);
		}
	}
	v23 = sub_1401A6B80(a5, L"NormalBG");
	if (v23)
	{
		v24 = (__m128i*)sub_1401A4F40(v23 + 32);
		if (v24)
		{
			if (a1)
				sub_140109710((__int64*)(v18 + 1264), a1 + 240, v24, 0);
		}
	}
	v25 = sub_1400F66F0(&v69, a5, L"SelectedBG", 0xFFFF0000);
	v26 = qword_140C63678;
	v27 = (unsigned int*)(v18 + 1364);
	v28 = v25;
	if ((unsigned int*)(v18 + 1364) != v25)
	{
		sub_1401429A0(qword_140C63678, *v27);
		v29 = *v28;
		v26 = qword_140C63678;
		*v27 = v29;
		if (v29 < *(_QWORD*)(v26 + 48))
		{
			v30 = 32i64 * (unsigned int)v29 + *(_QWORD*)(v26 + 40);
			v31 = *(_DWORD*)(v30 + 16);
			if ((unsigned int)(v31 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v30 + 16) = v31 + 1;
		}
	}
	sub_1401429A0(v26, v69);
	v32 = sub_1400F66F0(&v69, a5, L"NormalBG", 0);
	v33 = qword_140C63678;
	v34 = (unsigned int*)(v18 + 1360);
	v35 = v32;
	if ((unsigned int*)(v18 + 1360) != v32)
	{
		sub_1401429A0(qword_140C63678, *v34);
		v36 = *v35;
		v33 = qword_140C63678;
		*v34 = v36;
		if (v36 < *(_QWORD*)(v33 + 48))
		{
			v37 = 32i64 * (unsigned int)v36 + *(_QWORD*)(v33 + 40);
			v38 = *(_DWORD*)(v37 + 16);
			if ((unsigned int)(v38 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v37 + 16) = v38 + 1;
		}
	}
	sub_1401429A0(v33, v69);
	v39 = sub_1401A6B80(a5, L"VLine");
	if (v39)
	{
		v40 = (__m128i*)sub_1401A4F40(v39 + 32);
		if (v40)
		{
			if (a1)
				sub_140109710((__int64*)(v18 + 1024), a1 + 240, v40, 0);
		}
	}
	v41 = sub_1401A6B80(a5, L"NodeLine");
	if (v41)
	{
		v42 = (__m128i*)sub_1401A4F40(v41 + 32);
		if (v42)
		{
			if (a1)
				sub_140109710((__int64*)(v18 + 1120), a1 + 240, v42, 0);
		}
	}
	v43 = sub_1401A6B80(a5, L"LastNodeLine");
	if (v43)
	{
		v44 = (__m128i*)sub_1401A4F40(v43 + 32);
		if (v44)
		{
			if (a1)
				sub_140109710((__int64*)(v18 + 1072), a1 + 240, v44, 0);
		}
	}
	v45 = sub_1401A6B80(a5, L"ExpandButton");
	if (v45)
	{
		v46 = (__m128i*)sub_1401A4F40(v45 + 32);
		if (v46)
		{
			if (a1)
				sub_140109710((__int64*)(v18 + 1168), a1 + 240, v46, 0);
		}
	}
	v47 = sub_1401A6B80(a5, L"CollapseButton");
	if (v47)
	{
		v48 = (__m128i*)sub_1401A4F40(v47 + 32);
		if (v48)
		{
			if (a1)
				sub_140109710((__int64*)(v18 + 1216), a1 + 240, v48, 0);
		}
	}
	v73 = *(_DWORD*)(v18 + 1372);
	v49 = sub_1401A6B80(a5, L"HeaderHeight");
	if (v49)
	{
		v50 = (_WORD*)sub_1401A4F40(v49 + 32);
		if ((unsigned int)sub_1407DF428(v50, (__int64)L"%d", &v73) == 1)
			*(_DWORD*)(v18 + 1372) = v73;
	}
	v51 = sub_1401A6B80(a5, L"HeaderFont");
	if (v51)
	{
		v52 = (int*)sub_1401A4F40(v51 + 32);
		if (v52)
			sub_1401708E0((__int64*)v18, v52);
	}
	v53 = sub_1401A6B80(a5, L"HeaderBG");
	if (v53)
	{
		v54 = (__m128i*)sub_1401A4F40(v53 + 32);
		if (v54)
		{
			v55 = *(_QWORD*)(v18 + 32);
			memset(&v74[1], 0, 48);
			*(_QWORD*)&v74[0] = 0i64;
			BYTE8(v74[0]) = 0;
			v75 = 0i64;
			sub_14010B330(v74, v55, v54, 0i64);
			sub_1400C3730(v18 + 1624, (__int64)v74);
		}
	}
	if (*(_BYTE*)(a1 + 2825))
	{
		v69 = 0;
		sub_14016DED0(v18, (int*)&v70, (int*)&v69, (__int64)L"Root", (__m128i*) & unk_1409DD524, v62, -2);
		v56 = (int)v70;
		sub_14016DED0(v18, (int*)&v69, (int*)&v70, (__int64)L"Child1", (__m128i*) & unk_1409DD53C, v63, -2);
		LODWORD(v70) = v56;
		sub_14016DED0(v18, (int*)&v71, (int*)&v70, (__int64)L"Child2", (__m128i*) & unk_1409DD5DC, v64, -2);
		v57 = v69;
		LODWORD(v70) = v69;
		sub_14016DED0(v18, (int*)&v71, (int*)&v70, (__int64)L"Grandchild1", (__m128i*) & unk_1409DD604, v65, -2);
		LODWORD(v70) = v57;
		sub_14016DED0(v18, (int*)&v71, (int*)&v70, (__int64)L"Grandchild2", (__m128i*) & unk_1409DD5A4, v66, -2);
		LODWORD(v70) = v57;
		sub_14016DED0(v18, (int*)&v71, (int*)&v70, (__int64)L"Grandchild3", (__m128i*) & unk_1409DD5B4, v67, -2);
	}
	v58 = (__int64*)&v77;
	do
	{
		v59 = *((_DWORD*)v58 - 11);
		v58 -= 11;
		sub_1401429A0(qword_140C63678, v59);
		if (*v58)
			sub_14018B900(*v58, 0);
		v60 = *(v58 - 4);
		if (v60)
			sub_14018B900(v60, 0);
		--v12;
	} while (v12 >= 0);
	return v18;
}
// 14017153E: variable 'v15' is possibly undefined
// 1401719A4: variable 'v62' is possibly undefined
// 1401719D9: variable 'v63' is possibly undefined
// 140171A0A: variable 'v64' is possibly undefined
// 140171A3F: variable 'v65' is possibly undefined
// 140171A70: variable 'v66' is possibly undefined
// 140171AA1: variable 'v67' is possibly undefined
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A31B88: using guessed type wchar_t aHeaderbg[9];
// 140A32150: using guessed type wchar_t aHeaderfont[11];
// 140A321F8: using guessed type wchar_t aHeaderheight[13];
// 140A32F18: using guessed type wchar_t *off_140A32F18[43];
// 140A381B0: using guessed type wchar_t aNodeline[9];
// 140A381C8: using guessed type wchar_t aVline[6];
// 140A381D8: using guessed type wchar_t aExpandbutton[13];
// 140A381F8: using guessed type wchar_t aLastnodeline[13];
// 140A38238: using guessed type wchar_t aSelectedbg[11];
// 140A38270: using guessed type wchar_t aNormalbg[9];
// 140A38288: using guessed type wchar_t aRoot_7[5];
// 140A38298: using guessed type wchar_t aChild1[7];
// 140A382A8: using guessed type wchar_t aMinimumnodehei[18];
// 140A382D0: using guessed type wchar_t aCollapsebutton[15];
// 140A382F0: using guessed type wchar_t aGrandchild2[12];
// 140A38308: using guessed type wchar_t aGrandchild3[12];
// 140A38320: using guessed type wchar_t aChild2[7];
// 140A38330: using guessed type wchar_t aGrandchild1[12];
// 140C63678: using guessed type __int64 qword_140C63678;

