//----- (000000014015D7F0) ----------------------------------------------------
__int64 __fastcall sub_14015D7F0(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	__int64 a4,
	int a5,
	_QWORD* a6,
	_OWORD* a7,
	__int64 a8,
	__int64 a9)
{
	int v11; // ebx
	int* v12; // rax
	_QWORD** v13; // r15
	int v14; // esi
	__int64 v15; // r13
	__int64 v16; // r14
	__m128i** v17; // rbx
	__int64* v18; // rsi
	__int64 v19; // r12
	int v20; // r11d
	int v21; // r10d
	_QWORD* v22; // r9
	int v23; // ecx
	__int64* v24; // rax
	int v25; // ecx
	int* v26; // rax
	int v27; // ecx
	__int64 v28; // r13
	__m128i** v29; // rbx
	__int64* v30; // rsi
	__int64 v31; // rbx
	_QWORD* v32; // rsi
	void(__fastcall * **v33)(_QWORD); // rbx
	__int64 v34; // rcx
	bool v35; // zf
	__int64 v36; // rbx
	_QWORD* v37; // rsi
	void(__fastcall * **v38)(_QWORD); // rbx
	__int64 v39; // rcx
	__m128i si128; // xmm8
	unsigned int* v41; // rsi
	unsigned __int64 v42; // rbx
	__int64 v43; // r8
	__int64 v44; // rdx
	__int64 v45; // rcx
	int v46; // r9d
	__m128i v47; // xmm10
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
	__m128i v60; // xmm9
	unsigned int* v61; // rsi
	unsigned __int64 v62; // rbx
	__int64 v63; // r8
	__int64 v64; // rdx
	__int64 v65; // rcx
	int v66; // r9d
	unsigned int* v67; // rsi
	unsigned __int64 v68; // rbx
	__int64 v69; // r8
	__int64 v70; // rdx
	__int64 v71; // rcx
	int v72; // r9d
	unsigned int* v73; // rsi
	unsigned __int64 v74; // rbx
	__int64 v75; // r8
	__int64 v76; // rdx
	__int64 v77; // rcx
	int v78; // r9d
	__m128i v79; // xmm8
	unsigned int* v80; // rsi
	unsigned __int64 v81; // rbx
	__int64 v82; // r8
	__int64 v83; // rdx
	__int64 v84; // rcx
	int v85; // r9d
	unsigned int* v86; // rsi
	unsigned __int64 v87; // rbx
	__int64 v88; // r8
	__int64 v89; // rdx
	__int64 v90; // rcx
	int v91; // r9d
	unsigned int* v92; // rsi
	unsigned __int64 v93; // rbx
	__int64 v94; // r8
	__int64 v95; // rdx
	__int64 v96; // rcx
	int v97; // r9d
	unsigned int* v98; // rsi
	unsigned __int64 v99; // rbx
	__int64 v100; // r8
	__int64 v101; // rdx
	__int64 v102; // rcx
	int v103; // r9d
	unsigned int* v104; // rsi
	unsigned __int64 v105; // rbx
	__int64 v106; // r8
	__int64 v107; // rdx
	__int64 v108; // rcx
	int v109; // r9d
	_QWORD v111[3]; // [rsp+40h] [rbp-C1h] BYREF
	const wchar_t* v112; // [rsp+58h] [rbp-A9h] BYREF
	const wchar_t* v113; // [rsp+60h] [rbp-A1h]
	const wchar_t* v114; // [rsp+68h] [rbp-99h]
	const wchar_t* v115; // [rsp+70h] [rbp-91h]
	const wchar_t* v116; // [rsp+78h] [rbp-89h]
	const wchar_t* v117; // [rsp+80h] [rbp-81h]
	unsigned int v118; // [rsp+ACh] [rbp-55h]
	__int64 v119; // [rsp+148h] [rbp+47h] BYREF
	int v120; // [rsp+160h] [rbp+5Fh] BYREF
	int v121; // [rsp+164h] [rbp+63h]

	sub_1400C5920(a1, a2, a3, a6, a7, a8, a9);
	v11 = 0;
	*(_DWORD*)(a1 + 1056) = 0;
	*(_DWORD*)(a1 + 1084) = 2;
	*(_DWORD*)(a1 + 1088) = 2;
	*(_DWORD*)(a1 + 1092) = 2;
	*(_DWORD*)(a1 + 1096) = 2;
	*(_BYTE*)(a1 + 1100) = 0;
	*(_QWORD*)(a1 + 1104) = 0i64;
	*(_QWORD*)(a1 + 1112) = 0i64;
	*(_QWORD*)a1 = off_140B5CAF0;
	*(_QWORD*)(a1 + 1128) = 0i64;
	*(_QWORD*)(a1 + 1120) = 0i64;
	*(_QWORD*)(a1 + 1144) = 0i64;
	*(_QWORD*)(a1 + 1136) = 0i64;
	*(_QWORD*)(a1 + 1160) = 0i64;
	*(_QWORD*)(a1 + 1152) = 0i64;
	v12 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 1184) = 0i64;
	v13 = (_QWORD**)(a1 + 1208);
	*(_QWORD*)(a1 + 1176) = v12;
	*(_BYTE*)v12 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 1176) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 1176) + 16i64) = *(_QWORD*)(a1 + 1176);
	*(_QWORD*)(*(_QWORD*)(a1 + 1176) + 24i64) = *(_QWORD*)(a1 + 1176);
	*(_QWORD*)(a1 + 1200) = 0i64;
	sub_1400C35F0(a1 + 1208);
	sub_1400C35F0(a1 + 1624);
	sub_1401095E0(a1 + 2040);
	sub_1401095E0(a1 + 2088);
	sub_1401095E0(a1 + 2136);
	*(_QWORD*)(a1 + 2184) = 0i64;
	*(_QWORD*)(a1 + 2192) = 0i64;
	*(_QWORD*)(a1 + 2200) = 0i64;
	*(_QWORD*)(a1 + 2208) = 0i64;
	*(_QWORD*)(a1 + 2216) = 0i64;
	*(_DWORD*)(a1 + 2224) = 0;
	*(_QWORD*)(a1 + 432) |= 0x40ui64;
	if (a4 && (v14 = a5, a5 > 0))
	{
		*(_QWORD*)(a1 + 664) |= 1ui64;
		if (v14 > 0)
		{
			do
			{
				if (v11 >= 32)
					break;
				sub_14015F870((_QWORD*)a1, a4 + 88i64 * v11++);
			} while (v11 < v14);
		}
	}
	else
	{
		sub_14015CBE0((__int64)&v112);
		*(_QWORD*)(a1 + 664) |= 8ui64;
		sub_14015F870((_QWORD*)a1, (__int64)&v112);
		sub_1401429A0(qword_140C63678, v118);
		if (v117)
			sub_14018B900((__int64)v117, 0);
		if (v113)
			sub_14018B900((__int64)v113, 0);
	}
	v15 = *(_QWORD*)(a1 + 32);
	v16 = 6i64;
	*(_QWORD*)(a1 + 1200) = *(_QWORD*)(a1 + 696);
	*(_QWORD*)(a1 + 1032) = -1i64;
	v112 = L"WhiteFill";
	*(_QWORD*)(a1 + 1040) = -1i64;
	v113 = L"WhiteFill";
	*(_QWORD*)(a1 + 1048) = -1i64;
	v114 = L"WhiteFill";
	*(_DWORD*)(a1 + 1068) = -1;
	v115 = L"WhiteFill";
	*(_DWORD*)(a1 + 1060) = -1;
	v116 = L"WhiteFill";
	*(_DWORD*)(a1 + 1028) = 16;
	v17 = (__m128i**) & v112;
	v18 = (__int64*)(a1 + 1624);
	v19 = 6i64;
	v117 = L"WhiteFill";
	do
	{
		if (v15)
			sub_140109710(v18, v15 + 240, *v17, 0);
		v18 += 6;
		++v17;
		--v19;
	} while (v19);
	sub_1400C3AD0(a1 + 1624, (_DWORD*)(a1 + 1960));
	if (a6)
	{
		sub_1400C3730(a1 + 1208, (__int64)(a6 + 81));
		v20 = 0;
		v119 = 0i64;
		v21 = 0;
		do
		{
			v22 = *v13;
			if (*v13)
			{
				sub_140101470(*v13, &v120);
				v23 = v120;
			}
			else
			{
				v23 = 0;
				v121 = 0;
				v120 = 0;
			}
			v24 = (__int64*)&a6;
			if (v20 >= v23)
				v24 = &v119;
			LODWORD(a6) = v23;
			v20 = *(_DWORD*)v24;
			LODWORD(v119) = *(_DWORD*)v24;
			if (v22)
			{
				sub_140101470(v22, (int*)&v111[1]);
				v25 = HIDWORD(v111[1]);
			}
			else
			{
				v25 = 0;
				v111[1] = 0i64;
			}
			v26 = (int*)&a6;
			if (v21 >= v25)
				v26 = (int*)&v119 + 1;
			LODWORD(a6) = v25;
			v13 += 6;
			v21 = *v26;
			HIDWORD(v119) = *v26;
			--v16;
		} while (v16);
		v27 = (int)*(float*)(*(_QWORD*)(a1 + 696) + 92i64) + 4;
		if (v27 < v21)
			v27 = v21;
	}
	else
	{
		v28 = *(_QWORD*)(a1 + 32);
		v29 = (__m128i**) & v112;
		v30 = (__int64*)(a1 + 1208);
		do
		{
			if (v28)
				sub_140109710(v30, v28 + 240, *v29, 0);
			v30 += 6;
			++v29;
			--v16;
		} while (v16);
		sub_1400C3AD0(a1 + 1208, (_DWORD*)(a1 + 1544));
		v27 = (int)*(float*)(*(_QWORD*)(a1 + 696) + 92i64) + 4;
	}
	v31 = *(_QWORD*)(a1 + 32);
	*(_DWORD*)(a1 + 1024) = v27;
	if (v31)
	{
		v32 = (_QWORD*)(a1 + 2088);
		if (!*(_QWORD*)(a1 + 2088) || !sub_14002C740(a1 + 2104, L"HoloArrowUpBtnNormal"))
		{
			v33 = (void(__fastcall***)(_QWORD))sub_140108E80(v31 + 240, (const __m128i*)L"HoloArrowUpBtnNormal");
			if (v33)
			{
				v34 = 0i64;
				do
					v35 = aHoloarrowupbtn[++v34] == 0;
				while (!v35);
				sub_14001C480(a1 + 2104, (int*)L"HoloArrowUpBtnNormal", (int*)&aHoloarrowupbtn[v34]);
			}
			if (v33 != (void(__fastcall***)(_QWORD)) * v32)
			{
				if (v33)
					(**v33)(v33);
				if (*v32)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v32 + 8i64))(*v32);
					*v32 = 0i64;
				}
				*v32 = v33;
			}
		}
	}
	v36 = *(_QWORD*)(a1 + 32);
	if (v36)
	{
		v37 = (_QWORD*)(a1 + 2136);
		if (!*(_QWORD*)(a1 + 2136) || !sub_14002C740(a1 + 2152, L"HoloArrowDownBtnNormal"))
		{
			v38 = (void(__fastcall***)(_QWORD))sub_140108E80(v36 + 240, (const __m128i*)L"HoloArrowDownBtnNormal");
			if (v38)
			{
				v39 = 0i64;
				do
					v35 = aHoloarrowdownb[++v39] == 0;
				while (!v35);
				sub_14001C480(a1 + 2152, (int*)L"HoloArrowDownBtnNormal", (int*)&aHoloarrowdownb[v39]);
			}
			if (v38 != (void(__fastcall***)(_QWORD)) * v37)
			{
				if (v38)
					(**v38)(v38);
				if (*v37)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v37 + 8i64))(*v37);
					*v37 = 0i64;
				}
				*v37 = v38;
			}
		}
	}
	si128 = _mm_load_si128((const __m128i*) & xmmword_140B7B6F0);
	*(__m128*)& v111[1] = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(_mm_unpacklo_epi8(si128, (__m128i)0i64), (__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v41 = (unsigned int*)(a1 + 2184);
	v42 = (unsigned int)sub_140141F10(qword_140C63678, (__m128*) & v111[1]);
	if ((_QWORD**)(a1 + 2184) == &a6)
	{
		v43 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v41);
		v43 = qword_140C63678;
		*v41 = v42;
		if (v42 < *(_QWORD*)(v43 + 48))
		{
			v44 = *(_QWORD*)(v43 + 40);
			v45 = 32i64 * (unsigned int)v42;
			v46 = *(_DWORD*)(v45 + v44 + 16);
			if ((unsigned int)(v46 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v45 + v44 + 16) = v46 + 1;
		}
	}
	sub_1401429A0(v43, v42);
	v47 = _mm_load_si128((const __m128i*) & xmmword_140B7B610);
	*(__m128*)& v111[1] = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(_mm_unpacklo_epi8(v47, (__m128i)0i64), (__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v48 = (unsigned int*)(a1 + 2188);
	v49 = (unsigned int)sub_140141F10(qword_140C63678, (__m128*) & v111[1]);
	if ((_QWORD**)(a1 + 2188) == &a6)
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
	*(__m128*)& v111[1] = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(_mm_unpacklo_epi8(si128, (__m128i)0i64), (__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v54 = (unsigned int*)(a1 + 2208);
	v55 = (unsigned int)sub_140141F10(qword_140C63678, (__m128*) & v111[1]);
	if ((_QWORD**)(a1 + 2208) == &a6)
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
	v60 = _mm_load_si128((const __m128i*) & xmmword_140B7B6C0);
	*(__m128*)& v111[1] = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(_mm_unpacklo_epi8(v60, (__m128i)0i64), (__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v61 = (unsigned int*)(a1 + 2196);
	v62 = (unsigned int)sub_140141F10(qword_140C63678, (__m128*) & v111[1]);
	if ((_QWORD**)(a1 + 2196) == &a6)
	{
		v63 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v61);
		v63 = qword_140C63678;
		*v61 = v62;
		if (v62 < *(_QWORD*)(v63 + 48))
		{
			v64 = *(_QWORD*)(v63 + 40);
			v65 = 32i64 * (unsigned int)v62;
			v66 = *(_DWORD*)(v65 + v64 + 16);
			if ((unsigned int)(v66 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v65 + v64 + 16) = v66 + 1;
		}
	}
	sub_1401429A0(v63, v62);
	*(__m128*)& v111[1] = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(_mm_unpacklo_epi8(si128, (__m128i)0i64), (__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v67 = (unsigned int*)(a1 + 2212);
	v68 = (unsigned int)sub_140141F10(qword_140C63678, (__m128*) & v111[1]);
	if ((_QWORD**)(a1 + 2212) == &a6)
	{
		v69 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v67);
		v69 = qword_140C63678;
		*v67 = v68;
		if (v68 < *(_QWORD*)(v69 + 48))
		{
			v70 = *(_QWORD*)(v69 + 40);
			v71 = 32i64 * (unsigned int)v68;
			v72 = *(_DWORD*)(v71 + v70 + 16);
			if ((unsigned int)(v72 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v71 + v70 + 16) = v72 + 1;
		}
	}
	sub_1401429A0(v69, v68);
	*(__m128*)& v111[1] = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(_mm_unpacklo_epi8(v47, (__m128i)0i64), (__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v73 = (unsigned int*)(a1 + 2192);
	v74 = (unsigned int)sub_140141F10(qword_140C63678, (__m128*) & v111[1]);
	if ((_QWORD**)(a1 + 2192) == &a6)
	{
		v75 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v73);
		v75 = qword_140C63678;
		*v73 = v74;
		if (v74 < *(_QWORD*)(v75 + 48))
		{
			v76 = *(_QWORD*)(v75 + 40);
			v77 = 32i64 * (unsigned int)v74;
			v78 = *(_DWORD*)(v77 + v76 + 16);
			if ((unsigned int)(v78 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v77 + v76 + 16) = v78 + 1;
		}
	}
	sub_1401429A0(v75, v74);
	v79 = _mm_load_si128((const __m128i*) & xmmword_140B7B6E0);
	*(__m128*)& v111[1] = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(_mm_unpacklo_epi8(v79, (__m128i)0i64), (__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v80 = (unsigned int*)(a1 + 2216);
	v81 = (unsigned int)sub_140141F10(qword_140C63678, (__m128*) & v111[1]);
	if ((_QWORD**)(a1 + 2216) == &a6)
	{
		v82 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v80);
		v82 = qword_140C63678;
		*v80 = v81;
		if (v81 < *(_QWORD*)(v82 + 48))
		{
			v83 = *(_QWORD*)(v82 + 40);
			v84 = 32i64 * (unsigned int)v81;
			v85 = *(_DWORD*)(v84 + v83 + 16);
			if ((unsigned int)(v85 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v84 + v83 + 16) = v85 + 1;
		}
	}
	sub_1401429A0(v82, v81);
	*(__m128*)& v111[1] = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(_mm_unpacklo_epi8(v60, (__m128i)0i64), (__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v86 = (unsigned int*)(a1 + 2200);
	v87 = (unsigned int)sub_140141F10(qword_140C63678, (__m128*) & v111[1]);
	if ((_QWORD**)(a1 + 2200) == &a6)
	{
		v88 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v86);
		v88 = qword_140C63678;
		*v86 = v87;
		if (v87 < *(_QWORD*)(v88 + 48))
		{
			v89 = *(_QWORD*)(v88 + 40);
			v90 = 32i64 * (unsigned int)v87;
			v91 = *(_DWORD*)(v90 + v89 + 16);
			if ((unsigned int)(v91 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v90 + v89 + 16) = v91 + 1;
		}
	}
	sub_1401429A0(v88, v87);
	*(__m128*)& v111[1] = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(_mm_unpacklo_epi8(v79, (__m128i)0i64), (__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v92 = (unsigned int*)(a1 + 2220);
	v93 = (unsigned int)sub_140141F10(qword_140C63678, (__m128*) & v111[1]);
	if ((_QWORD**)(a1 + 2220) == &a6)
	{
		v94 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v92);
		v94 = qword_140C63678;
		*v92 = v93;
		if (v93 < *(_QWORD*)(v94 + 48))
		{
			v95 = *(_QWORD*)(v94 + 40);
			v96 = 32i64 * (unsigned int)v93;
			v97 = *(_DWORD*)(v96 + v95 + 16);
			if ((unsigned int)(v97 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v96 + v95 + 16) = v97 + 1;
		}
	}
	sub_1401429A0(v94, v93);
	*(__m128*)& v111[1] = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B6A0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v98 = (unsigned int*)(a1 + 2224);
	v99 = (unsigned int)sub_140141F10(qword_140C63678, (__m128*) & v111[1]);
	if ((_QWORD**)(a1 + 2224) == &a6)
	{
		v100 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v98);
		v100 = qword_140C63678;
		*v98 = v99;
		if (v99 < *(_QWORD*)(v100 + 48))
		{
			v101 = *(_QWORD*)(v100 + 40);
			v102 = 32i64 * (unsigned int)v99;
			v103 = *(_DWORD*)(v102 + v101 + 16);
			if ((unsigned int)(v103 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v102 + v101 + 16) = v103 + 1;
		}
	}
	sub_1401429A0(v100, v99);
	v104 = (unsigned int*)(a1 + 2204);
	v105 = (unsigned int)sub_140142170(qword_140C63678, L"black");
	if ((_QWORD**)(a1 + 2204) == &a6)
	{
		v106 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v104);
		v106 = qword_140C63678;
		*v104 = v105;
		if (v105 < *(_QWORD*)(v106 + 48))
		{
			v107 = *(_QWORD*)(v106 + 40);
			v108 = 32i64 * (unsigned int)v105;
			v109 = *(_DWORD*)(v108 + v107 + 16);
			if ((unsigned int)(v109 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v108 + v107 + 16) = v109 + 1;
		}
	}
	sub_1401429A0(v106, v105);
	return a1;
}
// 14015DB41: variable 'v20' is possibly undefined
// 14015DB52: variable 'v22' is possibly undefined
// 14015DB7E: variable 'v21' is possibly undefined
// 140A362B8: using guessed type wchar_t aWhitefill_16[10];
// 140A362D0: using guessed type wchar_t aWhitefill_15[10];
// 140A362E8: using guessed type wchar_t aHoloarrowdownb[23];
// 140A36318: using guessed type wchar_t aHoloarrowupbtn[21];
// 140A36370: using guessed type wchar_t aBlack[6];
// 140A36380: using guessed type wchar_t aWhitefill_18[10];
// 140A36398: using guessed type wchar_t aWhitefill_17[10];
// 140A363B0: using guessed type wchar_t aWhitefill_20[10];
// 140A363C8: using guessed type wchar_t aWhitefill_19[10];
// 140B5CAF0: using guessed type __int64 (__fastcall *off_140B5CAF0[25])();
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B610: using guessed type __int128 xmmword_140B7B610;
// 140B7B6A0: using guessed type __int128 xmmword_140B7B6A0;
// 140B7B6C0: using guessed type __int128 xmmword_140B7B6C0;
// 140B7B6E0: using guessed type __int128 xmmword_140B7B6E0;
// 140B7B6F0: using guessed type __int128 xmmword_140B7B6F0;
// 140C63678: using guessed type __int64 qword_140C63678;

