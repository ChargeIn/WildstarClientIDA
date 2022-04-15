//----- (000000014016A110) ----------------------------------------------------
__int64 __fastcall sub_14016A110(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	__int64 v7; // rax
	__int64 v8; // rax
	int* v9; // rdi
	__m128i* v10; // r9
	__int64 v11; // rax
	__int64 v12; // rbx
	unsigned __int64 v13; // rbx
	__int64 v14; // rax
	__int64 v15; // rax
	int* v16; // rdi
	__m128i* v17; // r9
	__int64 v18; // rax
	__int64 v19; // rbx
	unsigned __int64 v20; // rbx
	__int64 v21; // rax
	__int64 v22; // rax
	int* v23; // rdi
	__m128i* v24; // r9
	__int64 v25; // rax
	__int64 v26; // rbx
	unsigned __int64 v27; // rbx
	__int64 v28; // rax
	__int64 v29; // rax
	int* v30; // rdi
	__m128i* v31; // r9
	__int64 v32; // rax
	__int64 v33; // rbx
	unsigned __int64 v34; // rbx
	__int64 v35; // rax
	__int64 v36; // rax
	int* v37; // rdi
	__m128i* v38; // r9
	__int64 v39; // rax
	__int64 v40; // rbx
	unsigned __int64 v41; // rbx
	__int64 v42; // rax
	__int64 v43; // rax
	int* v44; // rdi
	__m128i* v45; // r9
	__int64 v46; // rax
	__int64 v47; // rbx
	unsigned __int64 v48; // rbx
	__int64 v49; // rax
	_WORD* v50; // rax
	__int64 v51; // rax
	_WORD* v52; // rax
	__int64 v53; // rax
	_WORD* v54; // rax
	__int64 v55; // rax
	_WORD* v56; // rax
	__int64 v57; // r12
	__int64 v58; // rdi
	unsigned __int64 i; // rbx
	wchar_t* v60; // rdx
	__int64 v61; // rax
	wchar_t* v62; // rax
	int* v63; // rax
	__int64 v64; // r13
	__int64 v65; // r12
	__int64 v66; // rdi
	float* v67; // rbx
	_OWORD* v68; // rsi
	__int64 v69; // r14
	__int64 v70; // rax
	_WORD* v71; // rax
	__int64 v72; // rax
	_WORD* v73; // rax
	__int64 v74; // rdx
	__int64 v75; // r15
	__int64 v76; // rdx
	__m128i* v77; // r14
	__int64 v78; // rdx
	__m128i* v79; // rsi
	__int64 j; // rdi
	const wchar_t* v81; // rbx
	wchar_t* v82; // rax
	int v83; // ecx
	bool v84; // zf
	WCHAR* v85; // rax
	WCHAR* v86; // rbx
	double v87; // xmm0_8
	__int64 v88; // rcx
	float v89; // xmm1_4
	__int64 k; // rdi
	const wchar_t* v91; // rbx
	wchar_t* v92; // rax
	int v93; // ecx
	bool v94; // zf
	WCHAR* v95; // rax
	WCHAR* v96; // rbx
	float v97; // xmm1_4
	unsigned __int64 v98; // rbx
	unsigned int* v99; // rdi
	__int64 v100; // r8
	__int64 v101; // rdx
	__int64 v102; // rcx
	int v103; // r9d
	bool v105; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v106; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v107; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v108; // [rsp+68h] [rbp-98h] BYREF
	_QWORD* v109; // [rsp+70h] [rbp-90h] BYREF
	__m128i* v110; // [rsp+78h] [rbp-88h]
	__m128i* v111; // [rsp+80h] [rbp-80h]
	__m128i* v112; // [rsp+88h] [rbp-78h]
	__m128i* v113; // [rsp+90h] [rbp-70h]
	__m128i* v114; // [rsp+98h] [rbp-68h]
	__m128i* v115; // [rsp+A0h] [rbp-60h]
	__int64 v116; // [rsp+A8h] [rbp-58h]
	_OWORD v117[6]; // [rsp+B0h] [rbp-50h] BYREF

	v116 = a4;
	v109 = a3;
	v106 = a5;
	v7 = sub_1401A6B80(a5, L"ProgressEmpty");
	if (v7)
		v8 = sub_1401A4F40(v7 + 32);
	else
		v8 = 0i64;
	v9 = (int*)&unk_1409DCD0C;
	v10 = 0i64;
	if (v8)
		v9 = (int*)v8;
	v11 = 0i64;
	v111 = 0i64;
	if (*(_WORD*)v9)
	{
		do
			++v11;
		while (*((_WORD*)v9 + v11));
	}
	v12 = (2 * v11) >> 1;
	if ((unsigned __int64)(v12 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v10 = (__m128i*)sub_14018B280(2 * (v12 + 1), 0);
		v111 = v10;
	}
	v13 = 2 * v12;
	sub_1407DB590(v10->m128i_i32, v9, v13);
	if (&v111->m128i_i8[v13])
		v111->m128i_i16[v13 / 2] = 0;
	v14 = sub_1401A6B80(v106, L"ProgressFull");
	if (v14)
		v15 = sub_1401A4F40(v14 + 32);
	else
		v15 = 0i64;
	v16 = (int*)&unk_1409DCCFC;
	v17 = 0i64;
	if (v15)
		v16 = (int*)v15;
	v18 = 0i64;
	v115 = 0i64;
	if (*(_WORD*)v16)
	{
		do
			++v18;
		while (*((_WORD*)v16 + v18));
	}
	v19 = (2 * v18) >> 1;
	if ((unsigned __int64)(v19 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v17 = (__m128i*)sub_14018B280(2 * (v19 + 1), 0);
		v115 = v17;
	}
	v20 = 2 * v19;
	sub_1407DB590(v17->m128i_i32, v16, v20);
	if (&v115->m128i_i8[v20])
		v115->m128i_i16[v20 / 2] = 0;
	v21 = sub_1401A6B80(v106, L"ProgressFill");
	if (v21)
		v22 = sub_1401A4F40(v21 + 32);
	else
		v22 = 0i64;
	v23 = (int*)&unk_1409DCC9C;
	v24 = 0i64;
	if (v22)
		v23 = (int*)v22;
	v25 = 0i64;
	v113 = 0i64;
	if (*(_WORD*)v23)
	{
		do
			++v25;
		while (*((_WORD*)v23 + v25));
	}
	v26 = (2 * v25) >> 1;
	if ((unsigned __int64)(v26 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v24 = (__m128i*)sub_14018B280(2 * (v26 + 1), 0);
		v113 = v24;
	}
	v27 = 2 * v26;
	sub_1407DB590(v24->m128i_i32, v23, v27);
	if (&v113->m128i_i8[v27])
		v113->m128i_i16[v27 / 2] = 0;
	v28 = sub_1401A6B80(v106, L"ProgressEdgeGlow");
	if (v28)
		v29 = sub_1401A4F40(v28 + 32);
	else
		v29 = 0i64;
	v30 = (int*)&unk_1409DCC8C;
	v31 = 0i64;
	if (v29)
		v30 = (int*)v29;
	v32 = 0i64;
	v110 = 0i64;
	if (*(_WORD*)v30)
	{
		do
			++v32;
		while (*((_WORD*)v30 + v32));
	}
	v33 = (2 * v32) >> 1;
	if ((unsigned __int64)(v33 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v31 = (__m128i*)sub_14018B280(2 * (v33 + 1), 0);
		v110 = v31;
	}
	v34 = 2 * v33;
	sub_1407DB590(v31->m128i_i32, v30, v34);
	if (&v110->m128i_i8[v34])
		v110->m128i_i16[v34 / 2] = 0;
	v35 = sub_1401A6B80(v106, L"TickOn");
	if (v35)
		v36 = sub_1401A4F40(v35 + 32);
	else
		v36 = 0i64;
	v37 = (int*)&unk_1409DCCDC;
	v38 = 0i64;
	if (v36)
		v37 = (int*)v36;
	v39 = 0i64;
	v112 = 0i64;
	if (*(_WORD*)v37)
	{
		do
			++v39;
		while (*((_WORD*)v37 + v39));
	}
	v40 = (2 * v39) >> 1;
	if ((unsigned __int64)(v40 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v38 = (__m128i*)sub_14018B280(2 * (v40 + 1), 0);
		v112 = v38;
	}
	v41 = 2 * v40;
	sub_1407DB590(v38->m128i_i32, v37, v41);
	if (&v112->m128i_i8[v41])
		v112->m128i_i16[v41 / 2] = 0;
	v42 = sub_1401A6B80(v106, L"TickOff");
	if (v42)
		v43 = sub_1401A4F40(v42 + 32);
	else
		v43 = 0i64;
	v44 = (int*)&unk_1409DCCBC;
	v45 = 0i64;
	if (v43)
		v44 = (int*)v43;
	v46 = 0i64;
	v114 = 0i64;
	if (*(_WORD*)v44)
	{
		do
			++v46;
		while (*((_WORD*)v44 + v46));
	}
	v47 = (2 * v46) >> 1;
	if ((unsigned __int64)(v47 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v45 = (__m128i*)sub_14018B280(2 * (v47 + 1), 0);
		v114 = v45;
	}
	v48 = 2 * v47;
	sub_1407DB590(v45->m128i_i32, v44, v48);
	if (&v114->m128i_i8[v48])
		v114->m128i_i16[v48 / 2] = 0;
	v107 = 0i64;
	v108 = 0i64;
	v49 = sub_1401A6B80(v106, L"TextX");
	if (v49)
	{
		v50 = (_WORD*)sub_1401A4F40(v49 + 32);
		sub_1407DF428(v50, (__int64)L"%d", &v107);
	}
	v51 = sub_1401A6B80(v106, L"TextY");
	if (v51)
	{
		v52 = (_WORD*)sub_1401A4F40(v51 + 32);
		sub_1407DF428(v52, (__int64)L"%d", (char*)&v107 + 4);
	}
	v53 = sub_1401A6B80(v106, L"TextWidth");
	if (v53)
	{
		v54 = (_WORD*)sub_1401A4F40(v53 + 32);
		sub_1407DF428(v54, (__int64)L"%d", &v108);
	}
	v55 = sub_1401A6B80(v106, L"TextHeight");
	if (v55)
	{
		v56 = (_WORD*)sub_1401A4F40(v55 + 32);
		sub_1407DF428(v56, (__int64)L"%d", (char*)&v108 + 4);
	}
	LODWORD(v108) = v107 + v108;
	HIDWORD(v108) += HIDWORD(v107);
	sub_1400D45E0((__int64)v117, a1, a2, v106, 0i64);
	v57 = v106;
	v58 = 0i64;
	for (i = 0i64; i < 0xF; ++i)
	{
		v60 = off_140A37550[i];
		v105 = 0;
		v61 = sub_1401A6B80(v57, v60);
		if (v61)
		{
			v62 = (wchar_t*)sub_1401A4F40(v61 + 32);
			sub_1401A52E0(v62, &v105);
			if (v105)
				v58 |= 1i64 << i;
		}
	}
	v63 = sub_14018B280(1456i64, 0);
	if (v63)
		v64 = sub_140168600((__int64)v63, a1, a2, v111, v115, v110, v109, v117, v116, v58);
	else
		v64 = 0i64;
	v65 = v106;
	v66 = 0i64;
	v67 = (float*)(v64 + 1348);
	v68 = (_OWORD*)(v64 + 1344);
	v69 = 4i64;
	do
	{
		*v68 = 0i64;
		v70 = sub_1401A6B80(v65, off_140A37500[v66]);
		if (v70)
		{
			v71 = (_WORD*)sub_1401A4F40(v70 + 32);
			if ((unsigned int)sub_1407DF428(v71, (__int64)L"%d", &v109) == 1)
				*(v67 - 1) = (float)(int)v109;
		}
		v72 = sub_1401A6B80(v65, off_140A37520[v66]);
		if (v72)
		{
			v73 = (_WORD*)sub_1401A4F40(v72 + 32);
			if ((unsigned int)sub_1407DF428(v73, (__int64)L"%d", &v106) == 1)
				*v67 = (float)(int)v106;
		}
		++v68;
		++v66;
		v67 += 4;
		--v69;
	} while (v69);
	v74 = *(_QWORD*)(v64 + 32);
	v75 = 0i64;
	if (v74)
		sub_140109710((__int64*)(v64 + 1120), v74 + 240, v113, 0);
	v76 = *(_QWORD*)(v64 + 32);
	v77 = v112;
	if (v76)
		sub_140109710((__int64*)(v64 + 1264), v76 + 240, v112, 0);
	v78 = *(_QWORD*)(v64 + 32);
	v79 = v114;
	if (v78)
		sub_140109710((__int64*)(v64 + 1216), v78 + 240, v114, 0);
	*(_QWORD*)(v64 + 1428) = v107;
	*(_QWORD*)(v64 + 1436) = v108;
	for (j = *(_QWORD*)(v65 + 96); ; j = *(_QWORD*)(j + 56))
	{
		if (!j)
			goto LABEL_115;
		v81 = L"RadialMin";
		v82 = (wchar_t*)sub_1401A4F40(j + 8);
		if (v82 == L"RadialMin")
			break;
		v83 = 0;
		if (*v82)
		{
			do
			{
				if (!*v81 || *v82 != *v81)
					break;
				v84 = v83 == 0x7FFFFFFF;
				if (v83 == 0x7FFFFFFF)
					goto LABEL_106;
				++v82;
				++v81;
				++v83;
			} while (*v82);
			v84 = v83 == 0x7FFFFFFF;
		LABEL_106:
			if (v84)
				break;
		}
		if (!*v82 && !*v81)
			break;
	}
	v85 = (WCHAR*)sub_1401A4F40(j + 32);
	v86 = v85;
	if (!v85)
	{
	LABEL_115:
		v89 = 0.0;
		goto LABEL_116;
	}
	v87 = *(double*)sub_1407DFE80(v85, 0i64).m128_u64;
	v88 = 0i64;
	v89 = v87;
	if (*v86)
	{
		do
			++v88;
		while (v86[v88]);
	}
	if (v86[v88 - 1] != 82)
		v89 = v89 * 0.017453292;
LABEL_116:
	while (v89 < 0.0)
		v89 = v89 + 6.2831855;
	for (; v89 > 6.2831855; v89 = v89 + -6.2831855)
		;
	*(float*)(v64 + 1336) = v89;
	for (k = *(_QWORD*)(v65 + 96); ; k = *(_QWORD*)(k + 56))
	{
		if (!k)
			goto LABEL_138;
		v91 = L"RadialMax";
		v92 = (wchar_t*)sub_1401A4F40(k + 8);
		if (v92 == L"RadialMax")
			break;
		v93 = 0;
		if (*v92)
		{
			do
			{
				if (!*v91 || *v92 != *v91)
					break;
				v94 = v93 == 0x7FFFFFFF;
				if (v93 == 0x7FFFFFFF)
					goto LABEL_129;
				++v92;
				++v91;
				++v93;
			} while (*v92);
			v94 = v93 == 0x7FFFFFFF;
		LABEL_129:
			if (v94)
				break;
		}
		if (!*v92 && !*v91)
			break;
	}
	v95 = (WCHAR*)sub_1401A4F40(k + 32);
	v96 = v95;
	if (!v95)
	{
	LABEL_138:
		v97 = 6.2831855;
		goto LABEL_139;
	}
	v97 = *(double*)sub_1407DFE80(v95, 0i64).m128_u64;
	if (*v96)
	{
		do
			++v75;
		while (v96[v75]);
	}
	if (v96[v75 - 1] != 82)
		v97 = v97 * 0.017453292;
LABEL_139:
	while (v97 < 0.0)
		v97 = v97 + 6.2831855;
	for (; v97 > 6.2831855; v97 = v97 + -6.2831855)
		;
	*(float*)(v64 + 1332) = v97;
	sub_1400F66F0(&v109, v65, L"BarColor", 0xFFFFFFFF);
	v98 = (unsigned int)v109;
	v99 = (unsigned int*)(v64 + 1444);
	if ((_QWORD**)(v64 + 1444) == &v109)
	{
		v100 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v99);
		v100 = qword_140C63678;
		*v99 = v98;
		if (v98 < *(_QWORD*)(v100 + 48))
		{
			v101 = *(_QWORD*)(v100 + 40);
			v102 = 32i64 * (unsigned int)v98;
			v103 = *(_DWORD*)(v102 + v101 + 16);
			if ((unsigned int)(v103 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v102 + v101 + 16) = v103 + 1;
		}
	}
	sub_1401429A0(v100, v98);
	if (v79)
		sub_14018B900((__int64)v79, 0);
	if (v77)
		sub_14018B900((__int64)v77, 0);
	if (v110)
		sub_14018B900((__int64)v110, 0);
	if (v113)
		sub_14018B900((__int64)v113, 0);
	if (v115)
		sub_14018B900((__int64)v115, 0);
	if (v111)
		sub_14018B900((__int64)v111, 0);
	return v64;
}
// 14016A8CA: conditional instruction was optimized away because rdi.8!=0
// 14016A9C9: conditional instruction was optimized away because rdi.8!=0
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A37080: using guessed type wchar_t aProgressfill[13];
// 140A370B0: using guessed type wchar_t aProgressempty[14];
// 140A370D0: using guessed type wchar_t aProgressfull[13];
// 140A37138: using guessed type wchar_t aTextwidth[10];
// 140A37150: using guessed type wchar_t aTexty[6];
// 140A37170: using guessed type wchar_t aTextheight[11];
// 140A37188: using guessed type wchar_t aTickon[7];
// 140A37198: using guessed type wchar_t aProgressedgegl[17];
// 140A371C0: using guessed type wchar_t aTextx[6];
// 140A371D0: using guessed type wchar_t aTickoff[8];
// 140A371E0: using guessed type wchar_t aRadialmax[10];
// 140A371F8: using guessed type wchar_t aRadialmin[10];
// 140A37210: using guessed type wchar_t aBarcolor[9];
// 140A37500: using guessed type wchar_t *[36];
// 140A37520: using guessed type wchar_t *[32];
// 140A37550: using guessed type wchar_t *off_140A37550[26];
// 140C63678: using guessed type __int64 qword_140C63678;
// 14016A110: using guessed type _OWORD var_E0[6];

