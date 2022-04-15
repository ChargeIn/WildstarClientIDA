//----- (00000001400CF460) ----------------------------------------------------
__int64 __fastcall sub_1400CF460(__int64 a1, unsigned __int8 a2, _DWORD* a3)
{
	__int64 result; // rax
	__m128i v7; // xmm2
	__int64 v8; // r8
	int v9; // ecx
	int v10; // edx
	_QWORD* v11; // rcx
	unsigned int* v12; // rdx
	int v13; // xmm0_4
	int v14; // ecx
	int v15; // edx
	int v16; // esi
	__int64 v17; // rbx
	unsigned int* v18; // rax
	__int64 v19; // rdx
	__int64 v20; // rcx
	int v21; // r15d
	__int64 v22; // rbx
	__int64 v23; // rcx
	__int64 v24; // rax
	int v25; // edx
	int v26; // edx
	int v27; // ecx
	_QWORD* v28; // rax
	_QWORD* v29; // rbx
	__int64 v30; // rsi
	__int64 v31; // rcx
	unsigned __int64 v32; // rbx
	__int64 v33; // rcx
	__int64 v34; // r9
	__int64 v35; // rdx
	int v36; // r10d
	__m128* v37; // r8
	__int64 v38; // rax
	int v39; // edx
	int v40; // ecx
	_QWORD* v41; // rax
	_QWORD* v42; // rbx
	__int64 v43; // rsi
	__int64 v44; // rcx
	__int64 v45; // rax
	__int64 v46; // rcx
	__int64 v47; // rcx
	__int64 v48; // rax
	__int64 v49; // rcx
	__int64 v50; // rbx
	__int64 v51; // rsi
	__int64 v52; // rcx
	double v53; // xmm0_8
	__int64 v54; // rcx
	__int64 v55; // rbx
	__int64 v56; // rcx
	__int64 v57; // rax
	int v58; // edx
	int v59; // eax
	_QWORD* v60; // rax
	_QWORD* v61; // rbx
	__int64 v62; // rsi
	__int64 v63; // rbx
	__int64 v64; // rsi
	__int64 v65; // rcx
	int v66; // ecx
	int v67; // edx
	_QWORD* v68; // rcx
	int* v69; // rax
	int* v70; // rbx
	int* v71; // rax
	int v72; // xmm0_4
	__int64 v73; // rsi
	void(__fastcall * **v74)(_QWORD); // rsi
	__int64 v75; // rcx
	bool v76; // zf
	int v77; // eax
	int v78; // edx
	__int32 v79; // r8d
	__int32 v80; // r9d
	__int64 v81; // r10
	__int64 v82; // rcx
	int v83; // ecx
	int v84; // r10d
	int v85; // r11d
	int v86; // ebx
	double v87; // xmm1_8
	_DWORD* v88; // rax
	__int64 v89; // rax
	int v90; // ecx
	int* v91; // rdx
	__int16* v92; // r12
	int v93; // esi
	__int64 v94; // rax
	__int64 v95; // r14
	__int64 v96; // rbx
	__int64 v97; // r15
	__int64* v98; // rcx
	__int64 v99; // rcx
	__int64 v100; // rcx
	unsigned int v101; // edx
	unsigned int v102; // ecx
	unsigned int v103; // r8d
	unsigned int v104; // r9d
	__int64 v105; // r10
	float v106; // xmm0_4
	__int64 v107; // rax
	__m128i v108; // xmm3
	__m128i v109; // xmm2
	__int16* v110; // r8
	int v111; // ecx
	unsigned int* v112; // rax
	__m128i v113; // xmm3
	__m128i v114; // xmm1
	__int64 v115; // rbx
	__int32 v116; // ecx
	__int32 v117; // edx
	__int32 v118; // eax
	int v119; // ecx
	int v120; // eax
	int v121; // eax
	__int64 v122; // rax
	_QWORD* v123; // rcx
	_QWORD* v124; // rcx
	_QWORD* v125; // rcx
	_QWORD* v126; // rcx
	__m128i v127; // xmm1
	__m128i v128; // xmm3
	__m128i v129; // xmm2
	__m128 v130; // xmm4
	__m128i v131; // xmm1
	__m128i v132; // xmm3
	__int128 v133; // [rsp+40h] [rbp-C0h] BYREF
	__int32 v134; // [rsp+50h] [rbp-B0h] BYREF
	unsigned int v135; // [rsp+54h] [rbp-ACh]
	unsigned __int64 v136; // [rsp+58h] [rbp-A8h]
	__m128 v137[2]; // [rsp+60h] [rbp-A0h] BYREF
	__m128 v138; // [rsp+80h] [rbp-80h] BYREF
	__m128 v139; // [rsp+90h] [rbp-70h]
	int v140; // [rsp+A0h] [rbp-60h] BYREF
	unsigned int v141; // [rsp+A4h] [rbp-5Ch]
	int v142; // [rsp+A8h] [rbp-58h]
	int v143; // [rsp+ACh] [rbp-54h]
	__int32 v144; // [rsp+B0h] [rbp-50h] BYREF
	unsigned int v145; // [rsp+B4h] [rbp-4Ch]
	int v146; // [rsp+B8h] [rbp-48h]
	int v147; // [rsp+BCh] [rbp-44h]
	__int32 v148; // [rsp+C0h] [rbp-40h] BYREF
	unsigned int v149; // [rsp+C4h] [rbp-3Ch]
	unsigned __int64 v150; // [rsp+C8h] [rbp-38h]
	__int128 v151[2]; // [rsp+D0h] [rbp-30h] BYREF
	__m128 v152; // [rsp+F0h] [rbp-10h] BYREF
	__m128 v153; // [rsp+100h] [rbp+0h]
	int v154; // [rsp+150h] [rbp+50h] BYREF

	v134 = *(_DWORD*)(a1 + 716);
	v135 = *(_DWORD*)(a1 + 720);
	v136 = *(_QWORD*)(a1 + 724);
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 224i64))(qword_140C65680);
	if (!(_DWORD)result)
		return result;
	if (!*(_QWORD*)(a1 + 16) || (*(_DWORD*)(a1 + 656) & 0x8000000) != 0)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 136i64))(qword_140C65680);
	v7 = _mm_cvtsi32_si128(0);
	v139 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v136), v7),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(v136)), v7)));
	v138 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v134), v7),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v135), v7)));
	sub_1400CF390(a1, v138.m128_f32, 0);
	if ((*(_BYTE*)(a1 + 656) & 8) != 0)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 16i64);
		sub_1400C9E40((_QWORD*)a1);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 184i64))(qword_140C65680);
		v8 = *(_QWORD*)(a1 + 736);
		if (v8 && *(_QWORD*)v8)
		{
			if ((*(_DWORD*)(a1 + 656) & 0x800000i64) != 0 && !*(_QWORD*)(a1 + 744))
			{
				v137[0] = (__m128)xmmword_140B7B240;
				v9 = a3[3] - a3[1];
				v10 = a3[2] - *a3;
				*(_QWORD*)&v133 = qword_140C77760;
				*((_QWORD*)&v133 + 1) = __PAIR64__(v9, v10);
				v11 = *(_QWORD**)v8;
				if (*(_QWORD*)v8)
				{
					v12 = (unsigned int*)&v133;
					*(float*)&v13 = (float)(*(float*)&dword_140C63664 - *(float*)(v8 + 8)) * *(float*)(v8 + 12);
				LABEL_26:
					sub_140103CF0(v11, v12, v137, 0, v13);
					goto LABEL_27;
				}
				goto LABEL_27;
			}
			v137[0] = (__m128)xmmword_140B7B240;
			v14 = a3[3] - a3[1];
			v15 = a3[2] - *a3;
			*(_QWORD*)&v133 = qword_140C77760;
			*((_QWORD*)&v133 + 1) = __PAIR64__(v14, v15);
			if (*(_QWORD*)v8)
				sub_140103CF0(
					*(_QWORD**)v8,
					(unsigned int*)&v133,
					v137,
					1u,
					COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(v8 + 8)) * *(float*)(v8 + 12)));
			if ((*(_DWORD*)(a1 + 656) & 0x800000i64) == 0)
				goto LABEL_27;
			v137[0] = (__m128)xmmword_140B7B240;
		}
		else
		{
			if (*(_QWORD*)(a1 + 480))
			{
				v16 = 0;
				v17 = 0i64;
				do
				{
					if (*(_QWORD*)(v17 + *(_QWORD*)(a1 + 480)))
					{
						v137[0] = (__m128)xmmword_140B7B240;
						v18 = sub_1400CA470(a1, &v138, v16);
						v19 = *(_QWORD*)(v17 + *(_QWORD*)(a1 + 480));
						if (*(_QWORD*)v19)
							sub_140103CF0(
								*(_QWORD**)v19,
								v18,
								v137,
								0,
								COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(v19 + 8)) * *(float*)(v19 + 12)));
					}
					++v16;
					v17 += 8i64;
				} while (v16 < 8);
			}
			if ((*(_DWORD*)(a1 + 656) & 0x800000i64) == 0)
				goto LABEL_27;
			v137[0] = (__m128)xmmword_140B7B240;
		}
		v11 = *(_QWORD**)(a1 + 744);
		if (v11)
		{
			v12 = (unsigned int*)&v134;
			*(float*)&v13 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 752)) * *(float*)(a1 + 756);
			goto LABEL_26;
		}
	LABEL_27:
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	}
	v20 = *(_QWORD*)(a1 + 288);
	v21 = 1;
	if (!v20)
		goto LABEL_36;
	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20))
		goto LABEL_36;
	v22 = *(_QWORD*)(a1 + 288);
	if ((int)sub_1400FB720(v22, L"bDrawAdornments", 1) < 0)
		goto LABEL_36;
	v23 = *(_QWORD*)(v22 + 16);
	v24 = *(_QWORD*)(v23 + 16);
	v25 = *(_DWORD*)(v24 - 8);
	if (!v25 || v25 == 1 && !*(_DWORD*)(v24 - 16))
		v21 = 0;
	*(_QWORD*)(v23 + 16) -= 32i64;
	if (v21)
	{
	LABEL_36:
		v26 = a3[2] - *a3;
		v27 = a3[3] - a3[1];
		*(_QWORD*)&v133 = qword_140C77760;
		*((_QWORD*)&v133 + 1) = __PAIR64__(v27, v26);
		v28 = *(_QWORD**)(a1 + 304);
		v29 = (_QWORD*)*v28;
		if ((_QWORD*)*v28 != v28)
		{
			do
			{
				v30 = v29[2];
				if (*(int*)(v30 + 16) < 0)
				{
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
					sub_14010BCA0((float*)v30, (unsigned int*)&v133, *(_QWORD*)(a1 + 656));
				}
				v29 = (_QWORD*)*v29;
			} while (v29 != *(_QWORD**)(a1 + 304));
		}
	}
	v31 = *(_QWORD*)(a1 + 656);
	if ((v31 & 0x10) != 0)
	{
		if ((v31 & 0x800000) != 0)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		if (*(_QWORD*)(a1 + 792))
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 16i64);
			sub_1400C9D10((_QWORD*)a1);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 184i64))(qword_140C65680);
			v32 = *(unsigned int*)(a1 + 712);
			v33 = qword_140C63678;
			if (v32 >= *(_QWORD*)(qword_140C63678 + 48))
				goto LABEL_49;
			v34 = *(_QWORD*)(qword_140C63678 + 40);
			v35 = 32i64 * (unsigned int)v32;
			v36 = *(_DWORD*)(v35 + v34 + 16);
			if ((unsigned int)(v36 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v35 + v34 + 16) = v36 + 1;
			if (v32 >= *(_QWORD*)(v33 + 48))
				LABEL_49:
			v37 = *(__m128**)(v33 + 40);
			else
				v37 = (__m128*)(*(_QWORD*)(v33 + 40) + 32 * v32);
			v38 = *(_QWORD*)(a1 + 792);
			if (*(_QWORD*)v38)
			{
				sub_140103CF0(
					*(_QWORD**)v38,
					(unsigned int*)&v134,
					v37,
					0,
					COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(v38 + 8)) * *(float*)(v38 + 12)));
				v33 = qword_140C63678;
			}
			sub_1401429A0(v33, v32);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
		}
	}
	if (v21)
	{
		v39 = a3[2] - *a3;
		v40 = a3[3] - a3[1];
		*(_QWORD*)&v133 = qword_140C77760;
		*((_QWORD*)&v133 + 1) = __PAIR64__(v40, v39);
		v41 = *(_QWORD**)(a1 + 304);
		v42 = (_QWORD*)*v41;
		if ((_QWORD*)*v41 != v41)
		{
			do
			{
				v43 = v42[2];
				if (*(int*)(v43 + 16) >= 0)
				{
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
					sub_14010BCA0((float*)v43, (unsigned int*)&v133, *(_QWORD*)(a1 + 656));
				}
				v42 = (_QWORD*)*v42;
			} while (v42 != *(_QWORD**)(a1 + 304));
		}
	}
	v44 = *(_QWORD*)(a1 + 656);
	if ((v44 & 2) != 0 && ((v44 & 0x2000) == 0 || (v45 = *(_QWORD*)(a1 + 472)) != 0 && *(int*)(v45 + 1296) > 0))
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 20i64);
		sub_1400C9E40((_QWORD*)a1);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 184i64))(qword_140C65680);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v46 = *(_QWORD*)(a1 + 472);
		if (v46)
			sub_1400C4790(v46, (*(_BYTE*)(a1 + 28) & 8) != 0);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	}
	v47 = *(_QWORD*)(a1 + 656);
	if ((v47 & 4) != 0 && ((v47 & 0x2000) == 0 || (v48 = *(_QWORD*)(a1 + 464)) != 0 && *(int*)(v48 + 1296) > 0))
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 20i64);
		sub_1400C9E40((_QWORD*)a1);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 184i64))(qword_140C65680);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v49 = *(_QWORD*)(a1 + 464);
		if (v49)
			sub_1400C4790(v49, (*(_BYTE*)(a1 + 28) & 8) != 0);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
	v139 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v136), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(v136)), _mm_cvtsi32_si128(0))));
	v138 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v134), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v135), _mm_cvtsi32_si128(0))));
	(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 104i64))(qword_140C65680, &v138);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 232i64))(a1);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	v50 = *(_QWORD*)(a1 + 328);
	v139 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v136), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(v136)), _mm_cvtsi32_si128(0))));
	v138 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v134), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v135), _mm_cvtsi32_si128(0))));
	if (v50)
	{
		do
		{
			v51 = *(_QWORD*)(v50 + 208);
			if (*(_BYTE*)v50)
			{
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
				sub_1401502E0(v50, v138.m128_f32);
			}
			else
			{
				v52 = *(_QWORD*)(a1 + 344);
				if (v52)
				{
					v154 = *(_DWORD*)(v50 + 4);
					sub_1400E0890(v52, &v154);
				}
				sub_140150220(v50);
				sub_14018B900(v50, 0);
			}
			v50 = v51;
		} while (v51);
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
	v139 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v136), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(v136)), _mm_cvtsi32_si128(0))));
	v138 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v134), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v135), _mm_cvtsi32_si128(0))));
	(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 104i64))(qword_140C65680, &v138);
	v53 = (*(double(__fastcall**)(__int64))(*(_QWORD*)a1 + 72i64))(a1);
	sub_1400CE4E0((__int64*)a1, v53);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	v54 = *(_QWORD*)(a1 + 288);
	if (!v54
		|| !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v54 + 8i64))(v54)
		|| (v55 = *(_QWORD*)(a1 + 288), (int)sub_1400FB720(v55, L"bDrawChildren", 1) < 0)
		|| ((v56 = *(_QWORD*)(v55 + 16), v57 = *(_QWORD*)(v56 + 16), (v58 = *(_DWORD*)(v57 - 8)) == 0)
			|| v58 == 1 && !*(_DWORD*)(v57 - 16)
			? (v59 = 0)
			: (v59 = 1),
			*(_QWORD*)(v56 + 16) -= 32i64,
			v59))
	{
		v60 = *(_QWORD**)(a1 + 560);
		v61 = (_QWORD*)*v60;
		if ((_QWORD*)*v60 != v60)
		{
			do
			{
				v62 = v61[2];
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
				if ((*(_DWORD*)(v62 + 656) & 0x100) != 0)
				{
					v139 = _mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v136), _mm_cvtsi32_si128(0)),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(v136)), _mm_cvtsi32_si128(0))));
					v138 = _mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v134), _mm_cvtsi32_si128(0)),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v135), _mm_cvtsi32_si128(0))));
					(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 104i64))(qword_140C65680, &v138);
				}
				sub_1400D0A00(v62, a2);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
				v61 = (_QWORD*)*v61;
			} while (v61 != *(_QWORD**)(a1 + 560));
		}
	}
	v63 = *(_QWORD*)(a1 + 336);
	v139 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v136), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(v136)), _mm_cvtsi32_si128(0))));
	v138 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v134), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v135), _mm_cvtsi32_si128(0))));
	if (v63)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 136i64))(qword_140C65680);
		do
		{
			v64 = *(_QWORD*)(v63 + 208);
			if (*(_BYTE*)v63)
			{
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
				sub_1401502E0(v63, v138.m128_f32);
			}
			else
			{
				v65 = *(_QWORD*)(a1 + 344);
				if (v65)
				{
					v154 = *(_DWORD*)(v63 + 4);
					sub_1400E0890(v65, &v154);
				}
				sub_140150220(v63);
				sub_14018B900(v63, 0);
			}
			v63 = v64;
		} while (v64);
	}
	if ((*(_DWORD*)(a1 + 656) & 0x4000000) != 0 && (*(_BYTE*)(a1 + 28) & 8) == 0)
	{
		v66 = a3[3] - a3[1];
		v67 = a3[2] - *a3;
		*(_QWORD*)&v151[0] = qword_140C77760;
		*((_QWORD*)&v151[0] + 1) = __PAIR64__(v66, v67);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 136i64))(qword_140C65680);
		v68 = *(_QWORD**)(qword_140C63650 + 1848);
		v138 = (__m128)xmmword_140B7AC20;
		if (v68)
			sub_140103CF0(
				v68,
				(unsigned int*)v151,
				&v138,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(qword_140C63650 + 1856)) * *(float*)(qword_140C63650 + 1860)));
	}
	if ((*(_QWORD*)(a1 + 656) & 0x100000000i64) != 0 && *(float*)(a1 + 640) != *(float*)(a1 + 648))
	{
		if (!*(_QWORD*)(a1 + 800))
		{
			v69 = sub_14018B280(48i64, 0);
			v70 = v69;
			if (v69)
			{
				*((_QWORD*)v69 + 3) = 0i64;
				*((_QWORD*)v69 + 4) = 0i64;
				*((_QWORD*)v69 + 5) = 0i64;
				v71 = sub_14018B280(16i64, 0);
				*((_QWORD*)v70 + 3) = v71;
				*((_QWORD*)v70 + 4) = v71;
				*((_QWORD*)v70 + 5) = v71 + 4;
				if (v71)
					*(_WORD*)v71 = 0;
				v72 = dword_140C63664;
				*(_QWORD*)v70 = 0i64;
				v70[3] = 1065353216;
				v70[2] = v72;
			}
			else
			{
				v70 = 0i64;
			}
			v73 = *(_QWORD*)(a1 + 32);
			*(_QWORD*)(a1 + 800) = v70;
			if (v73
				&& (!*(_QWORD*)v70
					|| !sub_14002C740((__int64)(v70 + 4), L"CRB_WindowAnimationSprites:sprWinAnim_BirthLargeTemp")))
			{
				v74 = (void(__fastcall***)(_QWORD))sub_140108E80(
					v73 + 240,
					(const __m128i*)L"CRB_WindowAnimationSprites:sprWinAnim_BirthLargeTemp");
				if (v74)
				{
					v75 = 0i64;
					do
						v76 = aCrbWindowanima[++v75] == 0;
					while (!v76);
					sub_14001C480(
						(__int64)(v70 + 4),
						(int*)L"CRB_WindowAnimationSprites:sprWinAnim_BirthLargeTemp",
						(int*)&aCrbWindowanima[v75]);
				}
				if (v74 != *(void(__fastcall****)(_QWORD))v70)
				{
					if (v74)
						(**v74)(v74);
					if (*(_QWORD*)v70)
					{
						(*(void(__fastcall**)(_QWORD))(**(_QWORD**)v70 + 8i64))(*(_QWORD*)v70);
						*(_QWORD*)v70 = 0i64;
					}
					*(_QWORD*)v70 = v74;
				}
			}
		}
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
		v77 = a3[2] - *a3;
		v78 = a3[3] - a3[1];
		v79 = qword_140C77760;
		v80 = HIDWORD(qword_140C77760);
		v81 = *(_QWORD*)(a1 + 800);
		*((_QWORD*)&v133 + 1) = __PAIR64__(v78, v77);
		*(_QWORD*)&v133 = qword_140C77760;
		v82 = *(_QWORD*)v81;
		if (*(_QWORD*)v81)
		{
			if ((int)((__int64)(*(_QWORD*)(v82 + 96) - *(_QWORD*)(v82 + 88)) >> 3) > 0)
				v82 = **(_QWORD**)(v82 + 88);
			*(_QWORD*)&v87 = (unsigned int)dword_140C63664;
			*(float*)&v87 = (float)(*(float*)&dword_140C63664 - *(float*)(v81 + 8)) * *(float*)(v81 + 12);
			v88 = (_DWORD*)sub_140101180(v82, v87, 0i64);
			v78 = HIDWORD(v133);
			v80 = DWORD1(v133);
			v83 = v88[3] - v88[2];
			v84 = v88[9] - v88[8];
			v85 = v88[7] - v88[6];
			v86 = v88[13] - v88[12];
			v79 = v133;
			v77 = DWORD2(v133);
		}
		else
		{
			v83 = 0;
			v84 = 0;
			v85 = 0;
			v86 = 0;
		}
		HIDWORD(v133) = v86 + v78;
		LODWORD(v133) = v79 - v83;
		DWORD1(v133) = v80 - v84;
		DWORD2(v133) = v85 + v77;
		v137[1] = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v85 + v77), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v86 + v78), _mm_cvtsi32_si128(0))));
		v137[0] = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v79 - v83), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v80 - v84), _mm_cvtsi32_si128(0))));
		(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 96i64))(qword_140C65680, v137);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 136i64))(qword_140C65680);
		v89 = *(_QWORD*)(a1 + 800);
		v137[0] = (__m128)xmmword_140B7B240;
		if (*(_QWORD*)v89)
			sub_140103CF0(
				*(_QWORD**)v89,
				(unsigned int*)&v133,
				v137,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(v89 + 8)) * *(float*)(v89 + 12)));
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	}
	v90 = dword_140C3C5F0;
	v91 = (int*)qword_140C63750;
	v92 = &word_140B7B704;
	if (*(_DWORD*)qword_140C63750 < dword_140C3C5F0)
		v90 = *(_DWORD*)qword_140C63750;
	if (*((_BYTE*)&dword_140C3C600 + v90))
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v93 = 1;
		v94 = sub_1400E58C0(*(_QWORD*)(a1 + 32), (int*)L"CRB_Interface11");
		v95 = *(_QWORD*)(a1 + 32);
		v133 = xmmword_140B7B240;
		v96 = *(_QWORD*)(v95 + 2912);
		v97 = v94;
		if (v96)
		{
			if ((*(unsigned __int8(__fastcall**)(_QWORD))(*(_QWORD*)v96 + 136i64))(*(_QWORD*)(v95 + 2912))
				|| (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v96 + 152i64))(v96)
				|| (v98 = *(__int64**)(v96 + 680)) != 0i64
				&& ((v99 = *v98) != 0
					&& (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v99 + 64i64))(v99)
					&& *(_WORD*)(*(__int64(__fastcall**)(_QWORD))(***(_QWORD***)(v96 + 680) + 64i64))(**(_QWORD**)(v96 + 680))
					|| *(_QWORD*)(*(_QWORD*)(v96 + 680) + 24i64)))
			{
				v96 = *(_QWORD*)(v95 + 2912);
			}
			else
			{
				v96 = *(_QWORD*)(v95 + 2912);
				if ((*(_DWORD*)(v96 + 656) & 0x1000000) != 0)
					v96 = 0i64;
			}
		}
		if (v96 == a1)
		{
			v100 = *(_QWORD*)(a1 + 32);
			v133 = xmmword_140C77810;
			v93 = 2;
			v97 = sub_1400E58C0(v100, (int*)L"CRB_Interface11_BBO");
		}
		if (!v97)
			v97 = *(_QWORD*)(a1 + 696);
		v101 = v135;
		v102 = v134;
		v103 = v136;
		v104 = HIDWORD(v136);
		v105 = *(_QWORD*)(a1 + 656);
		v143 = v135 + v93;
		v140 = v134;
		v146 = v134 + v93;
		v141 = v135;
		v142 = v136;
		v144 = v134;
		v148 = v136 - v93;
		v145 = v135;
		v147 = HIDWORD(v136);
		v149 = v135;
		v137[0].m128_i32[1] = HIDWORD(v136) - v93;
		v150 = v136;
		v137[0].m128_i32[0] = v134;
		v137[0].m128_u64[1] = v136;
		if ((v105 & 0x4000) == 0 || (v105 & 0x100000) != 0)
		{
			v106 = *((float*)&v133 + 3);
		}
		else
		{
			v106 = 0.5;
			HIDWORD(v133) = 1056964608;
		}
		if (*(char*)(a1 + 28) >= 0)
			*((float*)&v133 + 3) = v106 * 0.5;
		v107 = qword_140C63650;
		if (*(_QWORD*)(qword_140C63650 + 1848))
		{
			sub_140103CF0(
				*(_QWORD**)(qword_140C63650 + 1848),
				(unsigned int*)&v144,
				(__m128*) & v133,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(qword_140C63650 + 1856)) * *(float*)(qword_140C63650 + 1860)));
			v104 = HIDWORD(v136);
			v103 = v136;
			v101 = v135;
			v102 = v134;
			v107 = qword_140C63650;
		}
		if (*(_QWORD*)(v107 + 1848))
		{
			sub_140103CF0(
				*(_QWORD**)(v107 + 1848),
				(unsigned int*)&v140,
				(__m128*) & v133,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(v107 + 1856)) * *(float*)(v107 + 1860)));
			v104 = HIDWORD(v136);
			v103 = v136;
			v101 = v135;
			v102 = v134;
			v107 = qword_140C63650;
		}
		if (*(_QWORD*)(v107 + 1848))
		{
			sub_140103CF0(
				*(_QWORD**)(v107 + 1848),
				(unsigned int*)&v148,
				(__m128*) & v133,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(v107 + 1856)) * *(float*)(v107 + 1860)));
			v104 = HIDWORD(v136);
			v103 = v136;
			v101 = v135;
			v102 = v134;
			v107 = qword_140C63650;
		}
		if (*(_QWORD*)(v107 + 1848))
		{
			sub_140103CF0(
				*(_QWORD**)(v107 + 1848),
				(unsigned int*)v137,
				(__m128*) & v133,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(v107 + 1856)) * *(float*)(v107 + 1860)));
			v104 = HIDWORD(v136);
			v103 = v136;
			v101 = v135;
			v102 = v134;
		}
		v108 = _mm_cvtsi32_si128(v103);
		v109 = _mm_cvtsi32_si128(0);
		v110 = &word_140B7B704;
		if (*(_QWORD*)(a1 + 536))
			v110 = *(__int16**)(a1 + 536);
		v153 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(v108, _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v104), v109)));
		v152 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v102), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v101), _mm_cvtsi32_si128(0))));
		(*(void(__fastcall**)(__int64, _QWORD, __int16*, __int64, __m128*, int, __int128*, int))(*(_QWORD*)qword_140C65680
			+ 264i64))(
				qword_140C65680,
				*(_QWORD*)(v97 + 96),
				v110,
				-1i64,
				&v152,
				5,
				&v133,
				1);
		v91 = (int*)qword_140C63750;
	}
	v111 = dword_140C3C630;
	if (*v91 < dword_140C3C630)
		v111 = *v91;
	result = v111;
	if (*((_BYTE*)&dword_140C3C640 + v111) && !*(_QWORD*)(a1 + 16))
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 3i64);
		(*(void(__fastcall**)(__int64, __m256*))(*(_QWORD*)qword_140C65680 + 80i64))(
			qword_140C65680,
			&ymmword_140C78390);
		v112 = sub_1400CB890(a1, &v138);
		v113 = _mm_cvtsi32_si128(*v112);
		v114 = _mm_cvtsi32_si128(v112[1]);
		v153 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v112[2]), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v112[3]), _mm_cvtsi32_si128(0))));
		v152 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(v113, _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(v114, _mm_cvtsi32_si128(0))));
		(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 96i64))(qword_140C65680, &v152);
		v115 = sub_1400E58C0(*(_QWORD*)(a1 + 32), (int*)L"CRB_Interface11");
		v133 = xmmword_140C77820;
		if (!v115)
			v115 = *(_QWORD*)(a1 + 696);
		v116 = *(_DWORD*)(a1 + 416);
		v117 = *(_DWORD*)(a1 + 412);
		LODWORD(v150) = *(_DWORD*)(a1 + 420);
		v149 = v116;
		HIDWORD(v150) = v116 + 1;
		v118 = *(_DWORD*)(a1 + 424);
		v137[0].m128_i32[1] = v116;
		v141 = v116;
		v137[0].m128_i32[3] = v118;
		v148 = v117;
		v137[0].m128_i32[2] = v117 + 1;
		v119 = *(_DWORD*)(a1 + 420);
		v120 = *(_DWORD*)(a1 + 424);
		v137[0].m128_i32[0] = v117;
		v144 = v117;
		v143 = v120;
		v142 = v119;
		v140 = v119 - 1;
		v121 = *(_DWORD*)(a1 + 424);
		v146 = v119;
		v147 = v121;
		v76 = *(_BYTE*)(a1 + 28) >= 0;
		v145 = v121 - 1;
		if (v76)
			*((float*)&v133 + 3) = *((float*)&v133 + 3) * 0.5;
		v122 = qword_140C63650;
		v123 = *(_QWORD**)(qword_140C63650 + 1848);
		if (v123)
		{
			sub_140103CF0(
				v123,
				(unsigned int*)v137,
				(__m128*) & v133,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(qword_140C63650 + 1856)) * *(float*)(qword_140C63650 + 1860)));
			v122 = qword_140C63650;
		}
		v124 = *(_QWORD**)(v122 + 1848);
		if (v124)
		{
			sub_140103CF0(
				v124,
				(unsigned int*)&v148,
				(__m128*) & v133,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(v122 + 1856)) * *(float*)(v122 + 1860)));
			v122 = qword_140C63650;
		}
		v125 = *(_QWORD**)(v122 + 1848);
		if (v125)
		{
			sub_140103CF0(
				v125,
				(unsigned int*)&v140,
				(__m128*) & v133,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(v122 + 1856)) * *(float*)(v122 + 1860)));
			v122 = qword_140C63650;
		}
		v126 = *(_QWORD**)(v122 + 1848);
		if (v126)
			sub_140103CF0(
				v126,
				(unsigned int*)&v144,
				(__m128*) & v133,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(v122 + 1856)) * *(float*)(v122 + 1860)));
		v127 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 424));
		v128 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 420));
		v129 = _mm_cvtsi32_si128(0);
		if (*(_QWORD*)(a1 + 536))
			v92 = *(__int16**)(a1 + 536);
		v130 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(v128, v129), _mm_unpacklo_epi32(v127, v129)));
		v131 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 416));
		v132 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 412)), _mm_cvtsi32_si128(0));
		v151[1] = (__int128)v130;
		v151[0] = (__int128)_mm_cvtepi32_ps(_mm_unpacklo_epi32(v132, _mm_unpacklo_epi32(v131, _mm_cvtsi32_si128(0))));
		(*(void(__fastcall**)(__int64, _QWORD, __int16*, __int64, __int128*, int, __int128*, int))(*(_QWORD*)qword_140C65680
			+ 264i64))(
				qword_140C65680,
				*(_QWORD*)(v115 + 96),
				v92,
				-1i64,
				v151,
				5,
				&v133,
				1);
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	}
	return result;
}
// 1400D0A00: using guessed type __int64 __fastcall sub_1400D0A00(_QWORD, _QWORD);
// 140A152B8: using guessed type wchar_t aBdrawchildren[14];
// 140A152D8: using guessed type wchar_t aBdrawadornment[16];
// 140A15318: using guessed type wchar_t aCrbInterface11_0[20];
// 140A15478: using guessed type wchar_t aCrbInterface11[16];
// 140A15498: using guessed type wchar_t aCrbInterface11_1[16];
// 140A154E0: using guessed type wchar_t aCrbWindowanima[53];
// 140B7AC20: using guessed type __int128 xmmword_140B7AC20;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C3C5F0: using guessed type int dword_140C3C5F0;
// 140C3C600: using guessed type int dword_140C3C600;
// 140C3C630: using guessed type int dword_140C3C630;
// 140C3C640: using guessed type int dword_140C3C640;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C77760: using guessed type __int64 qword_140C77760;
// 140C77810: using guessed type __int128 xmmword_140C77810;
// 140C77820: using guessed type __int128 xmmword_140C77820;
// 140C78390: using guessed type __m256 ymmword_140C78390;

