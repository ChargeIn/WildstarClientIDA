//----- (0000000140524B20) ----------------------------------------------------
__int64 __fastcall sub_140524B20(__int64 a1, __int64 a2, __int64 a3, __m128i* a4, _QWORD* a5, _OWORD* a6)
{
	unsigned int* v8; // rsi
	int v9; // r14d
	int** v10; // rbx
	int* v11; // rcx
	int v12; // xmm0_4
	bool v13; // zf
	_DWORD* v14; // rax
	__int64 v15; // rax
	int v16; // ecx
	int v17; // eax
	__int64 v18; // rdx
	__int32 v19; // eax
	__int64 v20; // rbx
	unsigned int v21; // edx
	int v22; // eax
	__int64 v23; // rcx
	unsigned int* v24; // rsi
	unsigned __int64 v25; // rbx
	__int64 v26; // r8
	__int64 v27; // rdx
	__int64 v28; // rcx
	int v29; // r9d
	unsigned int* v30; // rsi
	unsigned __int64 v31; // rbx
	__int64 v32; // r8
	__int64 v33; // rdx
	__int64 v34; // rcx
	int v35; // r9d
	unsigned int* v36; // rsi
	unsigned __int64 v37; // rbx
	__int64 v38; // r8
	__int64 v39; // rdx
	__int64 v40; // rcx
	int v41; // r9d
	unsigned int* v42; // rsi
	unsigned __int64 v43; // rbx
	__int64 v44; // r8
	__int64 v45; // rdx
	__int64 v46; // rcx
	int v47; // r9d
	unsigned int* v48; // rsi
	unsigned __int64 v49; // rbx
	__int64 v50; // r8
	__int64 v51; // rdx
	__int64 v52; // rcx
	int v53; // r9d
	unsigned int* v54; // rsi
	unsigned __int64 v55; // rbx
	__int64 v56; // r8
	__int64 v57; // rdx
	__int64 v58; // rcx
	int v59; // r9d
	unsigned int* v60; // rsi
	unsigned __int64 v61; // rbx
	__int64 v62; // r8
	__int64 v63; // rdx
	__int64 v64; // rcx
	int v65; // r9d
	__int64 v66; // rbx
	void(__fastcall * **v67)(_QWORD); // rbx
	__int64 v68; // rcx
	__int64 v69; // rcx
	__int64 v70; // rbx
	void(__fastcall * **v71)(_QWORD); // rbx
	__int64 v72; // rcx
	__int64 v73; // rcx
	__int64 v74; // rbx
	void(__fastcall * **v75)(_QWORD); // rbx
	__int64 v76; // rcx
	__int64 v77; // rcx
	__int64 v78; // rbx
	void(__fastcall * **v79)(_QWORD); // rbx
	__int64 v80; // rcx
	__int64 v81; // rcx
	__int64 v82; // rbx
	void(__fastcall * **v83)(_QWORD); // rbx
	__int64 v84; // rcx
	__int64 v85; // rcx
	__int64 v86; // rbx
	void(__fastcall * **v87)(_QWORD); // rbx
	__int64 v88; // rcx
	__int64 v89; // rcx
	__int64 v90; // rbx
	void(__fastcall * **v91)(_QWORD); // rbx
	__int64 v92; // rcx
	__int64 v93; // rcx
	__int64 v94; // rbx
	void(__fastcall * **v95)(_QWORD); // rbx
	__int64 v96; // rcx
	__int64 v97; // rcx
	char v99; // [rsp+48h] [rbp-99h] BYREF
	__m128 v100; // [rsp+58h] [rbp-89h] BYREF
	__int64 v101; // [rsp+68h] [rbp-79h] BYREF
	char v102; // [rsp+70h] [rbp-71h]
	__int128 v103; // [rsp+78h] [rbp-69h]
	__int128 v104; // [rsp+88h] [rbp-59h]
	__int128 v105; // [rsp+98h] [rbp-49h]
	__int64 v106; // [rsp+A8h] [rbp-39h]
	__int64 v107[2]; // [rsp+B8h] [rbp-29h] BYREF
	int v108; // [rsp+C8h] [rbp-19h]

	sub_1400C5920(a1, a2, a3, a5, a6, 0i64, 0i64);
	*(_QWORD*)a1 = off_140B6C180;
	sub_1400C35F0(a1 + 1024);
	v8 = (unsigned int*)(a1 + 1440);
	*(_QWORD*)(a1 + 1440) = 0i64;
	*(_QWORD*)(a1 + 1448) = 0i64;
	*(_QWORD*)(a1 + 1456) = 0i64;
	*(_QWORD*)(a1 + 1472) = 0i64;
	*(_QWORD*)(a1 + 1480) = -1i64;
	v9 = 7;
	v10 = (int**)(a1 + 1520);
	do
	{
		*(v10 - 1) = 0i64;
		*v10 = 0i64;
		v10[1] = 0i64;
		v11 = sub_14018B280(16i64, 0);
		*(v10 - 1) = v11;
		*v10 = v11;
		v10[1] = v11 + 4;
		if (v11)
			*(_WORD*)v11 = 0;
		v12 = dword_140C63664;
		*(v10 - 4) = 0i64;
		*((_DWORD*)v10 - 5) = 1065353216;
		*((_DWORD*)v10 - 6) = v12;
		v10 += 6;
		--v9;
	} while (v9 >= 0);
	*(_QWORD*)(a1 + 1872) = 0i64;
	*(_QWORD*)(a1 + 1880) = 0i64;
	*(_QWORD*)(a1 + 1888) = 0i64;
	*(_QWORD*)(a1 + 1896) = 0i64;
	v107[0] = -2039584i64;
	*(_QWORD*)(a1 + 432) |= 0x40000000000ui64;
	v13 = *(_BYTE*)(a1 + 29) >= 0;
	v107[1] = -2039584i64;
	v108 = -8355712;
	if (v13)
	{
		v14 = sub_1400CB0E0(a1, &v100, a1 + 64);
		*(_DWORD*)(a1 + 396) = *v14;
		*(_DWORD*)(a1 + 400) = v14[1];
		*(_DWORD*)(a1 + 404) = v14[2];
		*(_DWORD*)(a1 + 408) = v14[3];
		*(_BYTE*)(a1 + 29) |= 0x80u;
		v15 = a1;
		do
		{
			if (!*(_DWORD*)(v15 + 392))
				break;
			*(_DWORD*)(v15 + 392) = 0;
			v15 = *(_QWORD*)(v15 + 16);
		} while (v15);
	}
	v16 = *(_DWORD*)(a1 + 408);
	v17 = *(_DWORD*)(a1 + 404);
	v18 = *(_QWORD*)(a1 + 32);
	v103 = 0i64;
	v104 = 0i64;
	v105 = 0i64;
	v19 = v17 - *(_DWORD*)(a1 + 396);
	v100.m128_i32[3] = v16 - *(_DWORD*)(a1 + 400);
	v100.m128_i32[2] = v19;
	v100.m128_u64[0] = 0i64;
	v101 = 0i64;
	v102 = 0;
	v106 = 0i64;
	sub_14010B330(&v101, v18, a4, 0i64);
	sub_1400C3730(a1 + 1024, (__int64)&v101);
	sub_1400C3AD0(a1 + 1024, &v100);
	v20 = 6i64;
	do
	{
		sub_1401429A0(qword_140C63678, *v8);
		v100 = _mm_mul_ps(
			_mm_cvtepi32_ps(
				_mm_shuffle_epi32(
					_mm_unpacklo_epi16(
						_mm_unpacklo_epi8(
							_mm_shuffle_epi32(_mm_cvtsi32_si128(*(unsigned int*)((char*)v8++ + (_QWORD)v107 - a1 - 1440)), 0),
							(__m128i)0i64),
						(__m128i)0i64),
					198)),
			(__m128)xmmword_140B7AB70);
		*(v8 - 1) = sub_140141F10(qword_140C63678, &v100);
		--v20;
	} while (v20);
	v21 = *(_DWORD*)(a1 + 1872);
	v100 = (__m128)xmmword_140C777D0;
	sub_1401429A0(qword_140C63678, v21);
	v22 = sub_140141F10(qword_140C63678, &v100);
	v23 = qword_140C63678;
	*(_DWORD*)(a1 + 1872) = v22;
	v24 = (unsigned int*)(a1 + 1876);
	v25 = (unsigned int)sub_140142170(v23, L"ItemQuality_Inferior");
	if ((char*)(a1 + 1876) == &v99)
	{
		v26 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v24);
		v26 = qword_140C63678;
		*v24 = v25;
		if (v25 < *(_QWORD*)(v26 + 48))
		{
			v27 = *(_QWORD*)(v26 + 40);
			v28 = 32i64 * (unsigned int)v25;
			v29 = *(_DWORD*)(v28 + v27 + 16);
			if ((unsigned int)(v29 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v28 + v27 + 16) = v29 + 1;
		}
	}
	sub_1401429A0(v26, v25);
	v30 = (unsigned int*)(a1 + 1880);
	v31 = (unsigned int)sub_140142170(qword_140C63678, L"ItemQuality_Average");
	if ((char*)(a1 + 1880) == &v99)
	{
		v32 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v30);
		v32 = qword_140C63678;
		*v30 = v31;
		if (v31 < *(_QWORD*)(v32 + 48))
		{
			v33 = *(_QWORD*)(v32 + 40);
			v34 = 32i64 * (unsigned int)v31;
			v35 = *(_DWORD*)(v34 + v33 + 16);
			if ((unsigned int)(v35 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v34 + v33 + 16) = v35 + 1;
		}
	}
	sub_1401429A0(v32, v31);
	v36 = (unsigned int*)(a1 + 1884);
	v37 = (unsigned int)sub_140142170(qword_140C63678, L"ItemQuality_Good");
	if ((char*)(a1 + 1884) == &v99)
	{
		v38 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v36);
		v38 = qword_140C63678;
		*v36 = v37;
		if (v37 < *(_QWORD*)(v38 + 48))
		{
			v39 = *(_QWORD*)(v38 + 40);
			v40 = 32i64 * (unsigned int)v37;
			v41 = *(_DWORD*)(v40 + v39 + 16);
			if ((unsigned int)(v41 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v40 + v39 + 16) = v41 + 1;
		}
	}
	sub_1401429A0(v38, v37);
	v42 = (unsigned int*)(a1 + 1888);
	v43 = (unsigned int)sub_140142170(qword_140C63678, L"ItemQuality_Excellent");
	if ((char*)(a1 + 1888) == &v99)
	{
		v44 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v42);
		v44 = qword_140C63678;
		*v42 = v43;
		if (v43 < *(_QWORD*)(v44 + 48))
		{
			v45 = *(_QWORD*)(v44 + 40);
			v46 = 32i64 * (unsigned int)v43;
			v47 = *(_DWORD*)(v46 + v45 + 16);
			if ((unsigned int)(v47 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v46 + v45 + 16) = v47 + 1;
		}
	}
	sub_1401429A0(v44, v43);
	v48 = (unsigned int*)(a1 + 1892);
	v49 = (unsigned int)sub_140142170(qword_140C63678, L"ItemQuality_Superb");
	if ((char*)(a1 + 1892) == &v99)
	{
		v50 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v48);
		v50 = qword_140C63678;
		*v48 = v49;
		if (v49 < *(_QWORD*)(v50 + 48))
		{
			v51 = *(_QWORD*)(v50 + 40);
			v52 = 32i64 * (unsigned int)v49;
			v53 = *(_DWORD*)(v52 + v51 + 16);
			if ((unsigned int)(v53 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v52 + v51 + 16) = v53 + 1;
		}
	}
	sub_1401429A0(v50, v49);
	v54 = (unsigned int*)(a1 + 1896);
	v55 = (unsigned int)sub_140142170(qword_140C63678, L"ItemQuality_Legendary");
	if ((char*)(a1 + 1896) == &v99)
	{
		v56 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v54);
		v56 = qword_140C63678;
		*v54 = v55;
		if (v55 < *(_QWORD*)(v56 + 48))
		{
			v57 = *(_QWORD*)(v56 + 40);
			v58 = 32i64 * (unsigned int)v55;
			v59 = *(_DWORD*)(v58 + v57 + 16);
			if ((unsigned int)(v59 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v58 + v57 + 16) = v59 + 1;
		}
	}
	sub_1401429A0(v56, v55);
	v60 = (unsigned int*)(a1 + 1900);
	v61 = (unsigned int)sub_140142170(qword_140C63678, L"ItemQuality_Artifact");
	if ((char*)(a1 + 1900) == &v99)
	{
		v62 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v60);
		v62 = qword_140C63678;
		*v60 = v61;
		if (v61 < *(_QWORD*)(v62 + 48))
		{
			v63 = *(_QWORD*)(v62 + 40);
			v64 = 32i64 * (unsigned int)v61;
			v65 = *(_DWORD*)(v64 + v63 + 16);
			if ((unsigned int)(v65 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v64 + v63 + 16) = v65 + 1;
		}
	}
	sub_1401429A0(v62, v61);
	v66 = *(_QWORD*)(a1 + 32);
	if (v66 && (!*(_QWORD*)(a1 + 1488) || !sub_14002C740(a1 + 1504, L"UI_RarityBorder_Grey")))
	{
		v67 = (void(__fastcall***)(_QWORD))sub_140108E80(v66 + 240, (const __m128i*)L"UI_RarityBorder_Grey");
		if (v67)
		{
			v68 = 0i64;
			do
				v13 = aUiRarityborder[++v68] == 0;
			while (!v13);
			sub_14001C480(a1 + 1504, (int*)L"UI_RarityBorder_Grey", (int*)&aUiRarityborder[v68]);
		}
		if (v67 != *(void(__fastcall****)(_QWORD))(a1 + 1488))
		{
			if (v67)
				(**v67)(v67);
			v69 = *(_QWORD*)(a1 + 1488);
			if (v69)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v69 + 8i64))(v69);
				*(_QWORD*)(a1 + 1488) = 0i64;
			}
			*(_QWORD*)(a1 + 1488) = v67;
		}
	}
	v70 = *(_QWORD*)(a1 + 32);
	if (v70 && (!*(_QWORD*)(a1 + 1536) || !sub_14002C740(a1 + 1552, L"UI_RarityBorder_Grey")))
	{
		v71 = (void(__fastcall***)(_QWORD))sub_140108E80(v70 + 240, (const __m128i*)L"UI_RarityBorder_Grey");
		if (v71)
		{
			v72 = 0i64;
			do
				v13 = aUiRarityborder_0[++v72] == 0;
			while (!v13);
			sub_14001C480(a1 + 1552, (int*)L"UI_RarityBorder_Grey", (int*)&aUiRarityborder_0[v72]);
		}
		if (v71 != *(void(__fastcall****)(_QWORD))(a1 + 1536))
		{
			if (v71)
				(**v71)(v71);
			v73 = *(_QWORD*)(a1 + 1536);
			if (v73)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v73 + 8i64))(v73);
				*(_QWORD*)(a1 + 1536) = 0i64;
			}
			*(_QWORD*)(a1 + 1536) = v71;
		}
	}
	v74 = *(_QWORD*)(a1 + 32);
	if (v74 && (!*(_QWORD*)(a1 + 1584) || !sub_14002C740(a1 + 1600, L"UI_RarityBorder_White")))
	{
		v75 = (void(__fastcall***)(_QWORD))sub_140108E80(v74 + 240, (const __m128i*)L"UI_RarityBorder_White");
		if (v75)
		{
			v76 = 0i64;
			do
				v13 = aUiRarityborder_1[++v76] == 0;
			while (!v13);
			sub_14001C480(a1 + 1600, (int*)L"UI_RarityBorder_White", (int*)&aUiRarityborder_1[v76]);
		}
		if (v75 != *(void(__fastcall****)(_QWORD))(a1 + 1584))
		{
			if (v75)
				(**v75)(v75);
			v77 = *(_QWORD*)(a1 + 1584);
			if (v77)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v77 + 8i64))(v77);
				*(_QWORD*)(a1 + 1584) = 0i64;
			}
			*(_QWORD*)(a1 + 1584) = v75;
		}
	}
	v78 = *(_QWORD*)(a1 + 32);
	if (v78 && (!*(_QWORD*)(a1 + 1632) || !sub_14002C740(a1 + 1648, L"UI_RarityBorder_Green")))
	{
		v79 = (void(__fastcall***)(_QWORD))sub_140108E80(v78 + 240, (const __m128i*)L"UI_RarityBorder_Green");
		if (v79)
		{
			v80 = 0i64;
			do
				v13 = aUiRarityborder_2[++v80] == 0;
			while (!v13);
			sub_14001C480(a1 + 1648, (int*)L"UI_RarityBorder_Green", (int*)&aUiRarityborder_2[v80]);
		}
		if (v79 != *(void(__fastcall****)(_QWORD))(a1 + 1632))
		{
			if (v79)
				(**v79)(v79);
			v81 = *(_QWORD*)(a1 + 1632);
			if (v81)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v81 + 8i64))(v81);
				*(_QWORD*)(a1 + 1632) = 0i64;
			}
			*(_QWORD*)(a1 + 1632) = v79;
		}
	}
	v82 = *(_QWORD*)(a1 + 32);
	if (v82 && (!*(_QWORD*)(a1 + 1680) || !sub_14002C740(a1 + 1696, L"UI_RarityBorder_Blue")))
	{
		v83 = (void(__fastcall***)(_QWORD))sub_140108E80(v82 + 240, (const __m128i*)L"UI_RarityBorder_Blue");
		if (v83)
		{
			v84 = 0i64;
			do
				v13 = aUiRarityborder_3[++v84] == 0;
			while (!v13);
			sub_14001C480(a1 + 1696, (int*)L"UI_RarityBorder_Blue", (int*)&aUiRarityborder_3[v84]);
		}
		if (v83 != *(void(__fastcall****)(_QWORD))(a1 + 1680))
		{
			if (v83)
				(**v83)(v83);
			v85 = *(_QWORD*)(a1 + 1680);
			if (v85)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v85 + 8i64))(v85);
				*(_QWORD*)(a1 + 1680) = 0i64;
			}
			*(_QWORD*)(a1 + 1680) = v83;
		}
	}
	v86 = *(_QWORD*)(a1 + 32);
	if (v86 && (!*(_QWORD*)(a1 + 1728) || !sub_14002C740(a1 + 1744, L"UI_RarityBorder_Purple")))
	{
		v87 = (void(__fastcall***)(_QWORD))sub_140108E80(v86 + 240, (const __m128i*)L"UI_RarityBorder_Purple");
		if (v87)
		{
			v88 = 0i64;
			do
				v13 = aUiRarityborder_4[++v88] == 0;
			while (!v13);
			sub_14001C480(a1 + 1744, (int*)L"UI_RarityBorder_Purple", (int*)&aUiRarityborder_4[v88]);
		}
		if (v87 != *(void(__fastcall****)(_QWORD))(a1 + 1728))
		{
			if (v87)
				(**v87)(v87);
			v89 = *(_QWORD*)(a1 + 1728);
			if (v89)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v89 + 8i64))(v89);
				*(_QWORD*)(a1 + 1728) = 0i64;
			}
			*(_QWORD*)(a1 + 1728) = v87;
		}
	}
	v90 = *(_QWORD*)(a1 + 32);
	if (v90 && (!*(_QWORD*)(a1 + 1776) || !sub_14002C740(a1 + 1792, L"UI_RarityBorder_Orange")))
	{
		v91 = (void(__fastcall***)(_QWORD))sub_140108E80(v90 + 240, (const __m128i*)L"UI_RarityBorder_Orange");
		if (v91)
		{
			v92 = 0i64;
			do
				v13 = aUiRarityborder_5[++v92] == 0;
			while (!v13);
			sub_14001C480(a1 + 1792, (int*)L"UI_RarityBorder_Orange", (int*)&aUiRarityborder_5[v92]);
		}
		if (v91 != *(void(__fastcall****)(_QWORD))(a1 + 1776))
		{
			if (v91)
				(**v91)(v91);
			v93 = *(_QWORD*)(a1 + 1776);
			if (v93)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v93 + 8i64))(v93);
				*(_QWORD*)(a1 + 1776) = 0i64;
			}
			*(_QWORD*)(a1 + 1776) = v91;
		}
	}
	v94 = *(_QWORD*)(a1 + 32);
	if (v94 && (!*(_QWORD*)(a1 + 1824) || !sub_14002C740(a1 + 1840, L"UI_RarityBorder_Pink")))
	{
		v95 = (void(__fastcall***)(_QWORD))sub_140108E80(v94 + 240, (const __m128i*)L"UI_RarityBorder_Pink");
		if (v95)
		{
			v96 = 0i64;
			do
				v13 = aUiRarityborder_6[++v96] == 0;
			while (!v13);
			sub_14001C480(a1 + 1840, (int*)L"UI_RarityBorder_Pink", (int*)&aUiRarityborder_6[v96]);
		}
		if (v95 != *(void(__fastcall****)(_QWORD))(a1 + 1824))
		{
			if (v95)
				(**v95)(v95);
			v97 = *(_QWORD*)(a1 + 1824);
			if (v97)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v97 + 8i64))(v97);
				*(_QWORD*)(a1 + 1824) = 0i64;
			}
			*(_QWORD*)(a1 + 1824) = v95;
		}
	}
	return a1;
}
// 140B127A8: using guessed type wchar_t aItemqualityInf[21];
// 140B127D8: using guessed type wchar_t aItemqualityGoo[17];
// 140B12800: using guessed type wchar_t aItemqualityAve[20];
// 140B128A0: using guessed type wchar_t aUiRarityborder_4[23];
// 140B128D0: using guessed type wchar_t aUiRarityborder_3[21];
// 140B12900: using guessed type wchar_t aUiRarityborder_6[21];
// 140B12930: using guessed type wchar_t aUiRarityborder_5[23];
// 140B12960: using guessed type wchar_t aUiRarityborder_0[21];
// 140B12990: using guessed type wchar_t aUiRarityborder[21];
// 140B129C0: using guessed type wchar_t aUiRarityborder_2[22];
// 140B129F0: using guessed type wchar_t aUiRarityborder_1[22];
// 140B12A20: using guessed type wchar_t aItemqualitySup[19];
// 140B12A48: using guessed type wchar_t aItemqualityExc[22];
// 140B12A78: using guessed type wchar_t aItemqualityArt[21];
// 140B12AA8: using guessed type wchar_t aItemqualityLeg[22];
// 140B6C180: using guessed type __int64 (__fastcall *off_140B6C180[25])();
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;

