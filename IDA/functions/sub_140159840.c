#include "../winhttp.h"

//----- (0000000140159840) ----------------------------------------------------
bool __fastcall sub_140159840(__m128* a1, __int64 a2)
{
	int* v2; // rbx
	__int64 v4; // rax
	int* v5; // rsi
	__int64 v6; // rax
	__int64 v7; // rax
	int* v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rax
	int* v12; // rbx
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // rax
	__m128* v16; // rbx
	__m128i v17; // xmm1
	__m128i v18; // xmm1
	unsigned __int64 v19; // rcx
	__m128* v20; // rcx
	__m128 v21; // xmm0
	unsigned int v22; // edx
	__int64 v23; // rcx
	__m128i v24; // xmm1
	__m128i v25; // xmm1
	unsigned __int64 v26; // rcx
	__m128* v27; // rcx
	__m128 v28; // xmm0
	unsigned int v29; // edx
	__int64 v30; // rcx
	__m128i v31; // xmm1
	__m128i v32; // xmm1
	unsigned __int64 v33; // rcx
	__m128* v34; // rcx
	__m128 v35; // xmm0
	unsigned int v36; // edx
	__int64 v37; // rcx
	__m128i v38; // xmm1
	__m128i v39; // xmm1
	unsigned __int64 v40; // rcx
	__m128* v41; // rcx
	__m128 v42; // xmm0
	unsigned int v43; // edx
	__int64 v44; // rcx
	__m128i v45; // xmm1
	__m128i v46; // xmm1
	unsigned __int64 v47; // rcx
	__m128* v48; // rcx
	__m128 v49; // xmm0
	unsigned int v50; // edx
	__int64 v51; // rcx
	__m128i v52; // xmm1
	__m128i v53; // xmm1
	unsigned __int64 v54; // rcx
	__m128* v55; // rcx
	__m128 v56; // xmm0
	unsigned int v57; // edx
	__int64 v58; // rcx
	__m128i v59; // xmm1
	__m128i v60; // xmm1
	unsigned __int64 v61; // rcx
	__m128* v62; // rcx
	__m128 v63; // xmm0
	unsigned int v64; // edx
	__int64 v65; // rcx
	__m128i v66; // xmm1
	__m128i v67; // xmm1
	unsigned __int64 v68; // rcx
	__m128* v69; // rcx
	__m128 v70; // xmm0
	unsigned int v71; // edx
	__int64 v72; // rcx
	__m128i v73; // xmm1
	__m128i v74; // xmm1
	unsigned __int64 v75; // rcx
	__m128* v76; // rcx
	__m128 v77; // xmm0
	unsigned int v78; // edx
	__int64 v79; // rcx
	__m128i v80; // xmm1
	__m128i v81; // xmm1
	unsigned __int64 v82; // rcx
	__m128* v83; // rcx
	__m128 v84; // xmm0
	unsigned int v85; // edx
	__int64 v86; // rcx
	__int64 v87; // rdi
	__int64 v88; // rdi
	const wchar_t* v89; // rbx
	wchar_t* v90; // rax
	int v91; // ecx
	bool v92; // zf
	__int64 v93; // rdi
	const wchar_t* v94; // rbx
	wchar_t* v95; // rax
	int v96; // ecx
	bool v97; // zf
	__int64 v98; // rdi
	const wchar_t* v99; // rbx
	wchar_t* v100; // rax
	int v101; // ecx
	bool v102; // zf
	__int64 v103; // rax
	int* v104; // rdi
	int* v105; // r9
	__int64 v106; // rax
	__int64 v107; // rbx
	unsigned __int64 v108; // rbx
	__int64 v109; // rdi
	const wchar_t* v110; // rbx
	wchar_t* v111; // rax
	int v112; // ecx
	bool v113; // zf
	__int64 v114; // rax
	int* v115; // rdi
	__int64 v116; // rax
	__int64 v117; // rbx
	unsigned __int64 v118; // rbx
	int* v119; // rcx
	__int64 v120; // rcx
	__int64 v121; // rdi
	const wchar_t* v122; // rbx
	wchar_t* v123; // rax
	int v124; // ecx
	bool v125; // zf
	__int64 v126; // rax
	int* v127; // rdi
	__int64 v128; // rax
	__m128i* v129; // rsi
	__int64 v130; // rbx
	unsigned __int64 v131; // rbx
	__int16* v132; // rcx
	int* v133; // rsi
	__int64 v134; // rdi
	const wchar_t* v135; // rbx
	wchar_t* v136; // rax
	int v137; // ecx
	bool v138; // zf
	__int64 v139; // rax
	int* v140; // rdi
	__int64 v141; // rax
	__int64 v142; // rbx
	unsigned __int64 v143; // rbx
	_WORD* v144; // rcx
	int* v145; // rsi
	__int64 v146; // rdi
	const wchar_t* v147; // rbx
	wchar_t* v148; // rax
	int v149; // ecx
	bool v150; // zf
	__int64 v151; // rax
	int* v152; // rdi
	__int64 v153; // rax
	__int64 v154; // rbx
	unsigned __int64 v155; // rbx
	_WORD* v156; // rcx
	int* v157; // rsi
	__int64 v158; // rdi
	const wchar_t* v159; // rbx
	wchar_t* v160; // rax
	int v161; // edx
	bool v162; // zf
	__int64 v163; // rax
	int* v164; // rdi
	__int64 v165; // rax
	__int64 v166; // rbx
	unsigned __int64 v167; // rbx
	__int64 v168; // rdi
	const wchar_t* v169; // rbx
	wchar_t* v170; // rax
	int v171; // edx
	bool v172; // zf
	_WORD* v173; // rax
	__int64 v174; // rdi
	const wchar_t* v175; // rbx
	wchar_t* v176; // rax
	int v177; // edx
	bool v178; // zf
	_WORD* v179; // rax
	bool v180; // di
	int* v181; // rax
	void(__fastcall * **v182)(_QWORD); // rbx
	int* v183; // rax
	__int64 v184; // rdi
	int* v185; // rbx
	int* v186; // rdx
	int* v188; // rax
	__int64 v189; // rax
	int* v190; // rdx
	__int64 v191; // [rsp+48h] [rbp-59h]
	int* v192; // [rsp+50h] [rbp-51h]
	__int64 v193; // [rsp+58h] [rbp-49h] BYREF
	__m128i* v194; // [rsp+60h] [rbp-41h]
	int* v195; // [rsp+68h] [rbp-39h]
	__int64 v196; // [rsp+70h] [rbp-31h] BYREF
	int* v197; // [rsp+78h] [rbp-29h]
	_QWORD v198[13]; // [rsp+80h] [rbp-21h] BYREF
	unsigned int v200; // [rsp+118h] [rbp+77h] BYREF
	int v201; // [rsp+120h] [rbp+7Fh] BYREF

	v2 = (int*)a1[4].m128_u64[1];
	v4 = sub_1401A6B80(a2, L"Template");
	v5 = 0i64;
	if (v4)
		v6 = sub_1401A4F40(v4 + 32);
	else
		v6 = 0i64;
	if (v6)
		v2 = (int*)v6;
	v7 = 0i64;
	if (*(_WORD*)v2)
	{
		do
			++v7;
		while (*((_WORD*)v2 + v7));
	}
	sub_14001C480((__int64)&a1[4], v2, (int*)((char*)v2 + 2 * v7));
	v8 = (int*)a1[10].m128_u64[1];
	v9 = sub_1401A6B80(a2, L"Font");
	if (v9)
		v10 = sub_1401A4F40(v9 + 32);
	else
		v10 = 0i64;
	if (v10)
		v8 = (int*)v10;
	v11 = 0i64;
	if (*(_WORD*)v8)
	{
		do
			++v11;
		while (*((_WORD*)v8 + v11));
	}
	sub_14001C480((__int64)&a1[10], v8, (int*)((char*)v8 + 2 * v11));
	v12 = (int*)a1[6].m128_u64[1];
	v13 = sub_1401A6B80(a2, L"Base");
	if (v13)
		v14 = sub_1401A4F40(v13 + 32);
	else
		v14 = 0i64;
	if (v14)
		v12 = (int*)v14;
	v15 = 0i64;
	if (*(_WORD*)v12)
	{
		do
			++v15;
		while (*((_WORD*)v12 + v15));
	}
	sub_14001C480((__int64)&a1[6], v12, (int*)((char*)v12 + 2 * v15));
	v16 = a1;
	v17 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, a1[12]), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v18 = _mm_packus_epi16(v17, v17);
	v19 = (unsigned int)*sub_1400F66F0(&v200, a2, L"BGNormalColor", _mm_cvtsi128_si32(_mm_packus_epi16(v18, v18)));
	if (v19 >= *(_QWORD*)(qword_140C63678 + 48))
		v20 = *(__m128**)(qword_140C63678 + 40);
	else
		v20 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v19);
	v21 = *v20;
	v22 = v200;
	v23 = qword_140C63678;
	a1[12] = v21;
	sub_1401429A0(v23, v22);
	v24 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, a1[13]), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v25 = _mm_packus_epi16(v24, v24);
	v26 = (unsigned int)*sub_1400F66F0(&v200, a2, L"BGSelectedColor", _mm_cvtsi128_si32(_mm_packus_epi16(v25, v25)));
	if (v26 >= *(_QWORD*)(qword_140C63678 + 48))
		v27 = *(__m128**)(qword_140C63678 + 40);
	else
		v27 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v26);
	v28 = *v27;
	v29 = v200;
	v30 = qword_140C63678;
	a1[13] = v28;
	sub_1401429A0(v30, v29);
	v31 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, a1[14]), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v32 = _mm_packus_epi16(v31, v31);
	v33 = (unsigned int)*sub_1400F66F0(&v200, a2, L"BGNormalFocusColor", _mm_cvtsi128_si32(_mm_packus_epi16(v32, v32)));
	if (v33 >= *(_QWORD*)(qword_140C63678 + 48))
		v34 = *(__m128**)(qword_140C63678 + 40);
	else
		v34 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v33);
	v35 = *v34;
	v36 = v200;
	v37 = qword_140C63678;
	a1[14] = v35;
	sub_1401429A0(v37, v36);
	v38 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, a1[15]), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v39 = _mm_packus_epi16(v38, v38);
	v40 = (unsigned int)*sub_1400F66F0(&v200, a2, L"BGSelectedFocusColor", _mm_cvtsi128_si32(_mm_packus_epi16(v39, v39)));
	if (v40 >= *(_QWORD*)(qword_140C63678 + 48))
		v41 = *(__m128**)(qword_140C63678 + 40);
	else
		v41 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v40);
	v42 = *v41;
	v43 = v200;
	v44 = qword_140C63678;
	a1[15] = v42;
	sub_1401429A0(v44, v43);
	v45 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, a1[16]), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v46 = _mm_packus_epi16(v45, v45);
	v47 = (unsigned int)*sub_1400F66F0(&v200, a2, L"BGSelectedFocusColor", _mm_cvtsi128_si32(_mm_packus_epi16(v46, v46)));
	if (v47 >= *(_QWORD*)(qword_140C63678 + 48))
		v48 = *(__m128**)(qword_140C63678 + 40);
	else
		v48 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v47);
	v49 = *v48;
	v50 = v200;
	v51 = qword_140C63678;
	a1[16] = v49;
	sub_1401429A0(v51, v50);
	v52 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, a1[17]), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v53 = _mm_packus_epi16(v52, v52);
	v54 = (unsigned int)*sub_1400F66F0(&v200, a2, L"TextNormalColor", _mm_cvtsi128_si32(_mm_packus_epi16(v53, v53)));
	if (v54 >= *(_QWORD*)(qword_140C63678 + 48))
		v55 = *(__m128**)(qword_140C63678 + 40);
	else
		v55 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v54);
	v56 = *v55;
	v57 = v200;
	v58 = qword_140C63678;
	a1[17] = v56;
	sub_1401429A0(v58, v57);
	v59 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, a1[18]), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v60 = _mm_packus_epi16(v59, v59);
	v61 = (unsigned int)*sub_1400F66F0(&v200, a2, L"TextSelectedColor", _mm_cvtsi128_si32(_mm_packus_epi16(v60, v60)));
	if (v61 >= *(_QWORD*)(qword_140C63678 + 48))
		v62 = *(__m128**)(qword_140C63678 + 40);
	else
		v62 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v61);
	v63 = *v62;
	v64 = v200;
	v65 = qword_140C63678;
	a1[18] = v63;
	sub_1401429A0(v65, v64);
	v66 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, a1[19]), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v67 = _mm_packus_epi16(v66, v66);
	v68 = (unsigned int)*sub_1400F66F0(&v200, a2, L"TextNormalFocusColor", _mm_cvtsi128_si32(_mm_packus_epi16(v67, v67)));
	if (v68 >= *(_QWORD*)(qword_140C63678 + 48))
		v69 = *(__m128**)(qword_140C63678 + 40);
	else
		v69 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v68);
	v70 = *v69;
	v71 = v200;
	v72 = qword_140C63678;
	a1[19] = v70;
	sub_1401429A0(v72, v71);
	v73 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, a1[20]), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v74 = _mm_packus_epi16(v73, v73);
	v75 = (unsigned int)*sub_1400F66F0(
		&v200,
		a2,
		L"TextSelectedFocusColor",
		_mm_cvtsi128_si32(_mm_packus_epi16(v74, v74)));
	if (v75 >= *(_QWORD*)(qword_140C63678 + 48))
		v76 = *(__m128**)(qword_140C63678 + 40);
	else
		v76 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v75);
	v77 = *v76;
	v78 = v200;
	v79 = qword_140C63678;
	a1[20] = v77;
	sub_1401429A0(v79, v78);
	v80 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, a1[21]), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v81 = _mm_packus_epi16(v80, v80);
	v82 = (unsigned int)*sub_1400F66F0(&v200, a2, L"TextDisabledColor", _mm_cvtsi128_si32(_mm_packus_epi16(v81, v81)));
	if (v82 >= *(_QWORD*)(qword_140C63678 + 48))
		v83 = *(__m128**)(qword_140C63678 + 40);
	else
		v83 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v82);
	v84 = *v83;
	v85 = v200;
	v86 = qword_140C63678;
	a1[21] = v84;
	sub_1401429A0(v86, v85);
	v87 = sub_1401A5AE0(a2, L"MenuItem");
	v191 = v87;
	if (v87)
	{
		while (1)
		{
			v88 = *(_QWORD*)(v87 + 96);
			if (v88)
			{
				while (1)
				{
					v89 = L"Text";
					v90 = (wchar_t*)sub_1401A4F40(v88 + 8);
					if (v90 == L"Text")
						break;
					v91 = 0;
					if (!*v90)
						goto LABEL_63;
					do
					{
						if (!*v89 || *v90 != *v89)
							break;
						v92 = v91 == 0x7FFFFFFF;
						if (v91 == 0x7FFFFFFF)
							goto LABEL_61;
						++v90;
						++v89;
						++v91;
					} while (*v90);
					v92 = v91 == 0x7FFFFFFF;
				LABEL_61:
					if (v92)
						break;
					if (!*v90)
					{
					LABEL_63:
						if (!*v89)
							break;
					}
					v88 = *(_QWORD*)(v88 + 56);
					if (!v88)
						goto LABEL_67;
				}
				if (sub_1401A4F40(v88 + 32))
					break;
			}
		LABEL_67:
			v93 = *(_QWORD*)(v191 + 96);
			if (v93)
			{
				while (1)
				{
					v94 = L"TextId";
					v95 = (wchar_t*)sub_1401A4F40(v93 + 8);
					if (v95 == L"TextId")
						break;
					v96 = 0;
					if (!*v95)
						goto LABEL_77;
					do
					{
						if (!*v94 || *v95 != *v94)
							break;
						v97 = v96 == 0x7FFFFFFF;
						if (v96 == 0x7FFFFFFF)
							goto LABEL_75;
						++v95;
						++v94;
						++v96;
					} while (*v95);
					v97 = v96 == 0x7FFFFFFF;
				LABEL_75:
					if (v97)
						break;
					if (!*v95)
					{
					LABEL_77:
						if (!*v94)
							break;
					}
					v93 = *(_QWORD*)(v93 + 56);
					if (!v93)
						goto LABEL_277;
				}
				if (sub_1401A4F40(v93 + 32))
					break;
			}
		LABEL_277:
			v188 = sub_14018B280(232i64, 0);
			if (v188)
				v189 = sub_140158DB0((__int64)v188);
			else
				v189 = 0i64;
			v193 = v189;
			v190 = (int*)a1[3].m128_u64[0];
			if (v190 == (int*)a1[3].m128_u64[1])
			{
				sub_14010A1C0((__m128*)a1[2].m128_u64, v190, &v193);
			}
			else
			{
				if (v190)
					*(_QWORD*)v190 = v189;
				a1[3].m128_u64[0] += 8i64;
			}
		LABEL_274:
			v87 = sub_1401A5BC0(v191, L"MenuItem");
			v191 = v87;
			if (!v87)
			{
				v16 = a1;
				return (int)((__int64)(v16[3].m128_u64[0] - v16[2].m128_u64[1]) >> 3) > 0;
			}
		}
		v98 = *(_QWORD*)(v191 + 96);
		if (v98)
		{
			while (1)
			{
				v99 = L"Text";
				v100 = (wchar_t*)sub_1401A4F40(v98 + 8);
				if (v100 == L"Text")
					break;
				v101 = 0;
				if (!*v100)
					goto LABEL_91;
				do
				{
					if (!*v99 || *v100 != *v99)
						break;
					v102 = v101 == 0x7FFFFFFF;
					if (v101 == 0x7FFFFFFF)
						goto LABEL_89;
					++v100;
					++v99;
					++v101;
				} while (*v100);
				v102 = v101 == 0x7FFFFFFF;
			LABEL_89:
				if (v102)
					break;
				if (!*v100)
				{
				LABEL_91:
					if (!*v99)
						break;
				}
				v98 = *(_QWORD*)(v98 + 56);
				if (!v98)
					goto LABEL_93;
			}
			v103 = sub_1401A4F40(v98 + 32);
		}
		else
		{
		LABEL_93:
			v103 = 0i64;
		}
		v104 = (int*)&unk_1409DBDC4;
		v105 = 0i64;
		if (v103)
			v104 = (int*)v103;
		v192 = 0i64;
		v106 = 0i64;
		if (*(_WORD*)v104)
		{
			do
				++v106;
			while (*((_WORD*)v104 + v106));
		}
		v107 = (2 * v106) >> 1;
		if ((unsigned __int64)(v107 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v105 = sub_14018B280(2 * (v107 + 1), 0);
			v192 = v105;
		}
		v108 = 2 * v107;
		sub_1407DB590(v105, v104, v108);
		if ((int*)((char*)v192 + v108))
			*(_WORD*)((char*)v192 + v108) = 0;
		v109 = *(_QWORD*)(v191 + 96);
		if (v109)
		{
			while (1)
			{
				v110 = L"TextId";
				v111 = (wchar_t*)sub_1401A4F40(v109 + 8);
				if (v111 == L"TextId")
					break;
				v112 = 0;
				if (!*v111)
					goto LABEL_112;
				do
				{
					if (!*v110 || *v111 != *v110)
						break;
					v113 = v112 == 0x7FFFFFFF;
					if (v112 == 0x7FFFFFFF)
						goto LABEL_110;
					++v111;
					++v110;
					++v112;
				} while (*v111);
				v113 = v112 == 0x7FFFFFFF;
			LABEL_110:
				if (v113)
					break;
				if (!*v111)
				{
				LABEL_112:
					if (!*v110)
						break;
				}
				v109 = *(_QWORD*)(v109 + 56);
				if (!v109)
					goto LABEL_114;
			}
			v114 = sub_1401A4F40(v109 + 32);
		}
		else
		{
		LABEL_114:
			v114 = 0i64;
		}
		v115 = (int*)&unk_1409DBEDC;
		v193 = 0i64;
		if (v114)
			v115 = (int*)v114;
		v116 = 0i64;
		if (*(_WORD*)v115)
		{
			do
				++v116;
			while (*((_WORD*)v115 + v116));
		}
		v117 = (2 * v116) >> 1;
		if ((unsigned __int64)(v117 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v5 = sub_14018B280(2 * (v117 + 1), 0);
			v193 = (__int64)v5;
		}
		v118 = 2 * v117;
		sub_1407DB590(v5, v115, v118);
		v119 = (int*)((char*)v5 + v118);
		if ((int*)((char*)v5 + v118))
			*(_WORD*)v119 = 0;
		if (v5 != v119)
		{
			sub_1400E2630((__int64)v119, v198, (WCHAR*)v5, v192);
			v120 = (__int64)v192;
			v192 = (int*)v198[1];
			if (v120)
				sub_14018B900(v120, 0);
		}
		v121 = *(_QWORD*)(v191 + 96);
		if (v121)
		{
			while (1)
			{
				v122 = L"Image";
				v123 = (wchar_t*)sub_1401A4F40(v121 + 8);
				if (v123 == L"Image")
					break;
				v124 = 0;
				if (*v123)
				{
					do
					{
						if (!*v122 || *v123 != *v122)
							break;
						v125 = v124 == 0x7FFFFFFF;
						if (v124 == 0x7FFFFFFF)
							goto LABEL_134;
						++v123;
						++v122;
						++v124;
					} while (*v123);
					v125 = v124 == 0x7FFFFFFF;
				LABEL_134:
					if (v125)
						break;
				}
				if (!*v123 && !*v122)
					break;
				v121 = *(_QWORD*)(v121 + 56);
				if (!v121)
					goto LABEL_138;
			}
			v126 = sub_1401A4F40(v121 + 32);
		}
		else
		{
		LABEL_138:
			v126 = 0i64;
		}
		v127 = (int*)&unk_1409DBE8C;
		if (v126)
			v127 = (int*)v126;
		v128 = 0i64;
		v129 = 0i64;
		v194 = 0i64;
		if (*(_WORD*)v127)
		{
			do
				++v128;
			while (*((_WORD*)v127 + v128));
		}
		v130 = (2 * v128) >> 1;
		if ((unsigned __int64)(v130 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v129 = (__m128i*)sub_14018B280(2 * (v130 + 1), 0);
			v194 = v129;
		}
		v131 = v130;
		sub_1407DB590(v129->m128i_i32, v127, v131 * 2);
		v132 = &v129->m128i_i16[v131];
		v133 = 0i64;
		if (v132)
			*v132 = 0;
		v134 = *(_QWORD*)(v191 + 96);
		if (v134)
		{
			while (1)
			{
				v135 = L"Id";
				v136 = (wchar_t*)sub_1401A4F40(v134 + 8);
				if (v136 == L"Id")
					break;
				v137 = 0;
				if (!*v136)
					goto LABEL_157;
				do
				{
					if (!*v135 || *v136 != *v135)
						break;
					v138 = v137 == 0x7FFFFFFF;
					if (v137 == 0x7FFFFFFF)
						goto LABEL_155;
					++v136;
					++v135;
					++v137;
				} while (*v136);
				v138 = v137 == 0x7FFFFFFF;
			LABEL_155:
				if (v138)
					break;
				if (!*v136)
				{
				LABEL_157:
					if (!*v135)
						break;
				}
				v134 = *(_QWORD*)(v134 + 56);
				if (!v134)
					goto LABEL_159;
			}
			v139 = sub_1401A4F40(v134 + 32);
		}
		else
		{
		LABEL_159:
			v139 = 0i64;
		}
		v140 = (int*)&unk_1409DBFCC;
		v195 = 0i64;
		if (v139)
			v140 = (int*)v139;
		v141 = 0i64;
		if (*(_WORD*)v140)
		{
			do
				++v141;
			while (*((_WORD*)v140 + v141));
		}
		v142 = (2 * v141) >> 1;
		if ((unsigned __int64)(v142 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v133 = sub_14018B280(2 * (v142 + 1), 0);
			v195 = v133;
		}
		v143 = 2 * v142;
		sub_1407DB590(v133, v140, v143);
		v144 = (_WORD*)((char*)v133 + v143);
		v145 = 0i64;
		if (v144)
			*v144 = 0;
		v146 = *(_QWORD*)(v191 + 96);
		if (v146)
		{
			while (1)
			{
				v147 = L"InputName";
				v148 = (wchar_t*)sub_1401A4F40(v146 + 8);
				if (v148 == L"InputName")
					break;
				v149 = 0;
				if (!*v148)
					goto LABEL_178;
				do
				{
					if (!*v147 || *v148 != *v147)
						break;
					v150 = v149 == 0x7FFFFFFF;
					if (v149 == 0x7FFFFFFF)
						goto LABEL_176;
					++v148;
					++v147;
					++v149;
				} while (*v148);
				v150 = v149 == 0x7FFFFFFF;
			LABEL_176:
				if (v150)
					break;
				if (!*v148)
				{
				LABEL_178:
					if (!*v147)
						break;
				}
				v146 = *(_QWORD*)(v146 + 56);
				if (!v146)
					goto LABEL_180;
			}
			v151 = sub_1401A4F40(v146 + 32);
		}
		else
		{
		LABEL_180:
			v151 = 0i64;
		}
		v152 = (int*)&unk_1409DBF74;
		v197 = 0i64;
		if (v151)
			v152 = (int*)v151;
		v153 = 0i64;
		if (*(_WORD*)v152)
		{
			do
				++v153;
			while (*((_WORD*)v152 + v153));
		}
		v154 = (2 * v153) >> 1;
		if ((unsigned __int64)(v154 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v145 = sub_14018B280(2 * (v154 + 1), 0);
			v197 = v145;
		}
		v155 = 2 * v154;
		sub_1407DB590(v145, v152, v155);
		v156 = (_WORD*)((char*)v145 + v155);
		v157 = 0i64;
		if (v156)
			*v156 = 0;
		v158 = *(_QWORD*)(v191 + 96);
		if (v158)
		{
			while (1)
			{
				v159 = L"InputContext";
				v160 = (wchar_t*)sub_1401A4F40(v158 + 8);
				if (v160 == L"InputContext")
					break;
				v161 = 0;
				if (!*v160)
					goto LABEL_199;
				do
				{
					if (!*v159 || *v160 != *v159)
						break;
					v162 = v161 == 0x7FFFFFFF;
					if (v161 == 0x7FFFFFFF)
						goto LABEL_197;
					++v160;
					++v159;
					++v161;
				} while (*v160);
				v162 = v161 == 0x7FFFFFFF;
			LABEL_197:
				if (v162)
					break;
				if (!*v160)
				{
				LABEL_199:
					if (!*v159)
						break;
				}
				v158 = *(_QWORD*)(v158 + 56);
				if (!v158)
					goto LABEL_201;
			}
			v163 = sub_1401A4F40(v158 + 32);
		}
		else
		{
		LABEL_201:
			v163 = 0i64;
		}
		v164 = (int*)&unk_1409DBE54;
		if (v163)
			v164 = (int*)v163;
		v165 = 0i64;
		if (*(_WORD*)v164)
		{
			do
				++v165;
			while (*((_WORD*)v164 + v165));
		}
		v166 = (2 * v165) >> 1;
		if ((unsigned __int64)(v166 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v157 = sub_14018B280(2 * (v166 + 1), 0);
		v167 = 2 * v166;
		sub_1407DB590(v157, v164, v167);
		if ((int*)((char*)v157 + v167))
			*(_WORD*)((char*)v157 + v167) = 0;
		v201 = 0;
		v168 = *(_QWORD*)(v191 + 96);
		if (v168)
		{
			while (1)
			{
				v169 = L"Disabled";
				v170 = (wchar_t*)sub_1401A4F40(v168 + 8);
				if (v170 == L"Disabled")
					break;
				v171 = 0;
				if (*v170)
				{
					do
					{
						if (!*v169 || *v170 != *v169)
							break;
						v172 = v171 == 0x7FFFFFFF;
						if (v171 == 0x7FFFFFFF)
							goto LABEL_218;
						++v170;
						++v169;
						++v171;
					} while (*v170);
					v172 = v171 == 0x7FFFFFFF;
				LABEL_218:
					if (v172)
						break;
				}
				if (!*v170 && !*v169)
					break;
				v168 = *(_QWORD*)(v168 + 56);
				if (!v168)
					goto LABEL_230;
			}
			v173 = (_WORD*)sub_1401A4F40(v168 + 32);
			sub_1407DF428(v173, (__int64)L"%d", &v201);
		}
	LABEL_230:
		v200 = 0;
		v174 = *(_QWORD*)(v191 + 96);
		if (v174)
		{
			while (1)
			{
				v175 = L"CancelNode";
				v176 = (wchar_t*)sub_1401A4F40(v174 + 8);
				if (v176 == L"CancelNode")
					break;
				v177 = 0;
				if (*v176)
				{
					do
					{
						if (!*v175 || *v176 != *v175)
							break;
						v178 = v177 == 0x7FFFFFFF;
						if (v177 == 0x7FFFFFFF)
							goto LABEL_238;
						++v176;
						++v175;
						++v177;
					} while (*v176);
					v178 = v177 == 0x7FFFFFFF;
				LABEL_238:
					if (v178)
						break;
				}
				if (!*v176 && !*v175)
					break;
				v174 = *(_QWORD*)(v174 + 56);
				if (!v174)
					goto LABEL_244;
			}
			v179 = (_WORD*)sub_1401A4F40(v174 + 32);
			sub_1407DF428(v179, (__int64)L"%d", &v200);
		}
	LABEL_244:
		v180 = v200 != 0;
		v181 = sub_14018B280(384i64, 0);
		if (v181)
			v182 = (void(__fastcall***)(_QWORD))sub_140159190((__int64)v181, (__int64)a1);
		else
			v182 = 0i64;
		if (!(unsigned __int8)sub_140159840(v182, v191))
		{
			if (v182)
				(*v182)[1](v182);
			v182 = 0i64;
		}
		v183 = sub_14018B280(232i64, 0);
		if (v183)
		{
			v184 = sub_140158B40((__int64)v183, v192, a1[1].m128_i64[0], v194, v195, v182, v180);
			v196 = v184;
		}
		else
		{
			v184 = 0i64;
			v196 = 0i64;
		}
		*(_BYTE*)(v184 + 10) = v201 == 0;
		if (v182)
			(*v182)[1](v182);
		v185 = v197;
		sub_140158AD0(v184, v197, v157);
		v186 = (int*)a1[3].m128_u64[0];
		if (v186 == (int*)a1[3].m128_u64[1])
		{
			sub_14010A1C0((__m128*)a1[2].m128_u64, v186, &v196);
		}
		else
		{
			if (v186)
				*(_QWORD*)v186 = v184;
			a1[3].m128_u64[0] += 8i64;
		}
		if (v157)
			sub_14018B900((__int64)v157, 0);
		if (v185)
			sub_14018B900((__int64)v185, 0);
		if (v195)
			sub_14018B900((__int64)v195, 0);
		if (v194)
			sub_14018B900((__int64)v194, 0);
		if (v193)
			sub_14018B900(v193, 0);
		if (v192)
			sub_14018B900((__int64)v192, 0);
		v5 = 0i64;
		goto LABEL_274;
	}
	return (int)((__int64)(v16[3].m128_u64[0] - v16[2].m128_u64[1]) >> 3) > 0;
}
// 140159EAE: conditional instruction was optimized away because rdi.8!=0
// 140159F52: conditional instruction was optimized away because rdi.8!=0
// 14015A619: conditional instruction was optimized away because rdi.8!=0
// 14015A630: conditional instruction was optimized away because rdi.8!=0
// 14015A647: conditional instruction was optimized away because rdi.8!=0
// 14015A65E: conditional instruction was optimized away because rdi.8!=0
// 14015A675: conditional instruction was optimized away because rdi.8!=0
// 14015A68C: conditional instruction was optimized away because rdi.8!=0
// 14015A6A3: conditional instruction was optimized away because rdi.8!=0
// 14015A74A: conditional instruction was optimized away because rdi.8!=0
// 1409DBE84: using guessed type wchar_t aId_0[3];
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A31808: using guessed type wchar_t aTemplate[9];
// 140A31928: using guessed type wchar_t aBase[5];
// 140A31AA8: using guessed type wchar_t aFont[5];
// 140A31F00: using guessed type wchar_t aTextselectedco[18];
// 140A31F28: using guessed type wchar_t aTextnormalcolo[16];
// 140A31F48: using guessed type wchar_t aTextselectedfo[23];
// 140A31F78: using guessed type wchar_t aTextnormalfocu[21];
// 140A320D0: using guessed type wchar_t aTextdisabledco[18];
// 140A35588: using guessed type wchar_t aText_4[5];
// 140A35598: using guessed type wchar_t aMenuitem[9];
// 140A355B0: using guessed type wchar_t aImage_1[6];
// 140A355C0: using guessed type wchar_t aTextid_0[7];
// 140A35610: using guessed type wchar_t aBgselectedcolo[16];
// 140A35630: using guessed type wchar_t aBgnormalcolor[14];
// 140A35650: using guessed type wchar_t aBgselectedfocu[21];
// 140A35680: using guessed type wchar_t aBgnormalfocusc[19];
// 140A356A8: using guessed type wchar_t aInputname[10];
// 140A356C0: using guessed type wchar_t aCancelnode[11];
// 140A356D8: using guessed type wchar_t aInputcontext[13];
// 140A35750: using guessed type wchar_t aDisabled[9];
// 140A35788: using guessed type wchar_t aBgselectedfocu_0[21];
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C63678: using guessed type __int64 qword_140C63678;

