#include "../winhttp.h"

//----- (000000014050FC80) ----------------------------------------------------
__int64 __fastcall sub_14050FC80(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // r14
	int v5; // r15d
	__int64 v6; // rax
	__int64 v7; // rsi
	__int64 v8; // rcx
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // ebp
	__int64 v12; // rbx
	__int64 v13; // rax
	__int64 v14; // rax
	__int64* v15; // rax
	int v16; // ebp
	__int64 v17; // rbx
	__int64 v18; // rax
	__int64 v19; // rax
	__int64* v20; // rax
	__int64 v21; // rcx
	__int16* v22; // rax
	__int64 v23; // rdx
	__int64 v24; // rbx
	__int64 v25; // rax
	__int64 v26; // rcx
	__int64 v27; // rbx
	__int64 v28; // rax
	int v29; // ebp
	__int64 v30; // rbx
	__int64 v31; // rax
	_DWORD* v32; // rcx
	__int64* v33; // rax
	__int64 v34; // rdx
	int v35; // ebp
	__int64 v36; // rbx
	__int64 v37; // rax
	_DWORD* v38; // rcx
	__int64* v39; // rax
	int v40; // ebp
	__int64 v41; // rbx
	__int64 v42; // rax
	__int64 v43; // rax
	__int64* v44; // rax
	int v45; // ebp
	__int64 v46; // rbx
	__int64 v47; // rax
	_DWORD* v48; // rcx
	__int64* v49; // rax
	__int64 v50; // rcx
	__int64 v51; // rbx
	__int64 v52; // rax
	__m128 v53; // xmm6
	__int64 v54; // rax
	__int64 v55; // rbp
	__int64 v56; // rbx
	__int64 v57; // rax
	__m128* v58; // r8
	char v59; // dl
	__int64 v60; // rax
	__int64 v61; // rbx
	__int64 v62; // rax
	__int64 v63; // r9
	int v64; // ebp
	__int64 v65; // rbx
	__int64 v66; // rax
	_DWORD* v67; // rcx
	__int64* v68; // rax
	int v69; // ebp
	__int64 v70; // rbx
	__int64 v71; // rax
	_DWORD* v72; // rcx
	__int64* v73; // rax
	int v74; // ebp
	__int64 v75; // rbx
	__int64 v76; // rax
	_DWORD* v77; // rcx
	__int64* v78; // rax
	int v79; // ebp
	__int64 v80; // rbx
	__int64 v81; // rax
	_DWORD* v82; // rcx
	__int64* v83; // rax
	int v84; // ebp
	__int64 v85; // rbx
	__int64 v86; // rax
	_DWORD* v87; // rcx
	__int64* v88; // rax
	int v89; // ebp
	__int64 v90; // rbx
	__int64 v91; // rax
	_DWORD* v92; // rcx
	__int64* v93; // rax
	int v94; // ebp
	__int64 v95; // rbx
	__int64 v96; // rax
	__int64 v97; // rax
	__int64* v98; // rax
	int v99; // ebp
	__int64 v100; // rbx
	__int64 v101; // rax
	__int64 v102; // rax
	__int64* v103; // rax
	float v104; // xmm6_4
	__int64 v105; // rbx
	__int64 v106; // rax
	__int64 v107; // rax
	__int64* v108; // rax
	float v109; // xmm6_4
	__int64 v110; // rbx
	__int64 v111; // rax
	__int64 v112; // rax
	__int64* v113; // rax
	int v114; // ebp
	__int64 v115; // rbx
	__int64 v116; // rax
	_DWORD* v117; // rcx
	__int64* v118; // rax
	__int64 v119; // rdx
	__int64 v120; // r8
	__int64 v122; // [rsp+20h] [rbp-58h] BYREF
	int v123; // [rsp+28h] [rbp-50h]

	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v2 = a1[2];
	v3 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	v4 = 7200i64;
	*(_QWORD*)v2 = v3;
	a1[2] += 16i64;
	v5 = 0;
	do
	{
		v6 = a1[2];
		v7 = qword_140C65898;
		++v5;
		*(_DWORD*)(v6 + 8) = 3;
		*(double*)v6 = (double)v5;
		v8 = a1[4];
		a1[2] += 16i64;
		if (*(_QWORD*)(v8 + 120) >= *(_QWORD*)(v8 + 112))
			sub_14005E2C0((__int64)a1);
		v9 = a1[2];
		v10 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v9 + 8) = 5;
		*(_QWORD*)v9 = v10;
		a1[2] += 16i64;
		v11 = *(_DWORD*)(v4 + v7);
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v12 = a1[2];
		v13 = sub_140062650((__int64)a1, (unsigned __int64*)"type", 4ui64);
		*(_DWORD*)(v12 + 8) = 4;
		*(_QWORD*)v12 = v13;
		a1[2] += 16i64;
		v14 = a1[2];
		*(_DWORD*)(v14 + 8) = 3;
		*(double*)v14 = (double)v11;
		a1[2] += 16i64;
		v15 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v15, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		v16 = *(_DWORD*)(v4 + v7 + 4) + 1;
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v17 = a1[2];
		v18 = sub_140062650((__int64)a1, (unsigned __int64*)"parent", 6ui64);
		*(_DWORD*)(v17 + 8) = 4;
		*(_QWORD*)v17 = v18;
		a1[2] += 16i64;
		v19 = a1[2];
		*(_DWORD*)(v19 + 8) = 3;
		*(double*)v19 = (double)v16;
		a1[2] += 16i64;
		v20 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v20, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		v22 = sub_14034BDD0(v21, *(_DWORD*)(v4 + v7 + 8));
		sub_1400F0090((__int64)a1, v23, (unsigned __int64*)"name", (unsigned __int16*)v22);
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v24 = a1[2];
		v25 = sub_140062650((__int64)a1, (unsigned __int64*)"normal", 6ui64);
		*(_DWORD*)(v24 + 8) = 4;
		*(_QWORD*)v24 = v25;
		v26 = a1[4];
		a1[2] += 16i64;
		if (*(_QWORD*)(v26 + 120) >= *(_QWORD*)(v26 + 112))
			sub_14005E2C0((__int64)a1);
		v27 = a1[2];
		v28 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v27 + 8) = 5;
		*(_QWORD*)v27 = v28;
		a1[2] += 16i64;
		v29 = *(_DWORD*)(v4 + v7 + 248);
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v30 = a1[2];
		v31 = sub_140062650((__int64)a1, (unsigned __int64*)"useFontFace", 0xBui64);
		*(_DWORD*)(v30 + 8) = 4;
		*(_QWORD*)v30 = v31;
		a1[2] += 16i64;
		v32 = (_DWORD*)a1[2];
		v32[2] = 1;
		*v32 = v29 != 0;
		a1[2] += 16i64;
		v33 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v33, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		sub_1400F0090((__int64)a1, v34, (unsigned __int64*)"fontFace", (unsigned __int16*)(v4 + v7 + 16));
		v35 = *(_DWORD*)(v4 + v7 + 252);
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v36 = a1[2];
		v37 = sub_140062650((__int64)a1, (unsigned __int64*)"useFontSize", 0xBui64);
		*(_DWORD*)(v36 + 8) = 4;
		*(_QWORD*)v36 = v37;
		a1[2] += 16i64;
		v38 = (_DWORD*)a1[2];
		v38[2] = 1;
		*v38 = v35 != 0;
		a1[2] += 16i64;
		v39 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v39, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		v40 = *(_DWORD*)(v4 + v7 + 80);
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v41 = a1[2];
		v42 = sub_140062650((__int64)a1, (unsigned __int64*)"fontSize", 8ui64);
		*(_DWORD*)(v41 + 8) = 4;
		*(_QWORD*)v41 = v42;
		a1[2] += 16i64;
		v43 = a1[2];
		*(_DWORD*)(v43 + 8) = 3;
		*(double*)v43 = (double)v40;
		a1[2] += 16i64;
		v44 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v44, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		v45 = *(_DWORD*)(v4 + v7 + 256);
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v46 = a1[2];
		v47 = sub_140062650((__int64)a1, (unsigned __int64*)"useFontColor", 0xCui64);
		*(_DWORD*)(v46 + 8) = 4;
		*(_QWORD*)v46 = v47;
		a1[2] += 16i64;
		v48 = (_DWORD*)a1[2];
		v48[2] = 1;
		*v48 = v45 != 0;
		a1[2] += 16i64;
		v49 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v49, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		v50 = a1[4];
		a1[2] -= 32i64;
		if (*(_QWORD*)(v50 + 120) >= *(_QWORD*)(v50 + 112))
			sub_14005E2C0((__int64)a1);
		v51 = a1[2];
		v52 = sub_140062650((__int64)a1, (unsigned __int64*)"fontColor", 9ui64);
		*(_DWORD*)(v51 + 8) = 4;
		*(_QWORD*)v51 = v52;
		a1[2] += 16i64;
		v53 = _mm_mul_ps(
			_mm_cvtepi32_ps(
				_mm_shuffle_epi32(
					_mm_unpacklo_epi16(
						_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v4 + v7 + 84)), 0), (__m128i)0i64),
						(__m128i)0i64),
					198)),
			(__m128)xmmword_140B7AB70);
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v54 = a1[5];
		if (v54 == a1[10])
			v55 = a1[15];
		else
			v55 = *(_QWORD*)(**(_QWORD**)(v54 + 8) + 24i64);
		v56 = a1[4];
		v57 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(v56 + 16))(
			*(_QWORD*)(v56 + 24),
			0i64,
			0i64,
			64i64);
		v58 = (__m128*)v57;
		if (!v57)
			sub_140061040((__int64)a1, 4);
		*(_QWORD*)(v56 + 120) += 64i64;
		v59 = *(_BYTE*)(a1[4] + 32i64);
		*(_BYTE*)(v57 + 8) = 7;
		*(_QWORD*)(v57 + 32) = 16i64;
		*(_QWORD*)(v57 + 16) = 0i64;
		*(_QWORD*)(v57 + 24) = v55;
		*(_BYTE*)(v57 + 9) = v59 & 3;
		*(_QWORD*)v57 = **(_QWORD**)(a1[4] + 176i64);
		**(_QWORD**)(a1[4] + 176i64) = v57;
		v60 = a1[2];
		*(_QWORD*)v60 = v58;
		*(_DWORD*)(v60 + 8) = 7;
		a1[2] += 16i64;
		v58[3] = v53;
		v61 = a1[4];
		v62 = sub_140062650((__int64)a1, (unsigned __int64*)"CColor", 6ui64);
		v63 = a1[2];
		v122 = v62;
		v123 = 4;
		sub_14005E8E0((__int64)a1, v61 + 160, (int*)&v122, v63);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		v64 = *(_DWORD*)(v4 + v7 + 260);
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v65 = a1[2];
		v66 = sub_140062650((__int64)a1, (unsigned __int64*)"useFontFlags", 0xCui64);
		*(_DWORD*)(v65 + 8) = 4;
		*(_QWORD*)v65 = v66;
		a1[2] += 16i64;
		v67 = (_DWORD*)a1[2];
		v67[2] = 1;
		*v67 = v64 != 0;
		a1[2] += 16i64;
		v68 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v68, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		v69 = *(_DWORD*)(v4 + v7 + 88) & 2;
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v70 = a1[2];
		v71 = sub_140062650((__int64)a1, (unsigned __int64*)"fontBold", 8ui64);
		*(_DWORD*)(v70 + 8) = 4;
		*(_QWORD*)v70 = v71;
		a1[2] += 16i64;
		v72 = (_DWORD*)a1[2];
		v72[2] = 1;
		*v72 = v69 != 0;
		a1[2] += 16i64;
		v73 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v73, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		v74 = *(_DWORD*)(v4 + v7 + 88) & 4;
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v75 = a1[2];
		v76 = sub_140062650((__int64)a1, (unsigned __int64*)"fontItalic", 0xAui64);
		*(_DWORD*)(v75 + 8) = 4;
		*(_QWORD*)v75 = v76;
		a1[2] += 16i64;
		v77 = (_DWORD*)a1[2];
		v77[2] = 1;
		*v77 = v74 != 0;
		a1[2] += 16i64;
		v78 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v78, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		v79 = *(_DWORD*)(v4 + v7 + 88) & 8;
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v80 = a1[2];
		v81 = sub_140062650((__int64)a1, (unsigned __int64*)"fontShadow", 0xAui64);
		*(_DWORD*)(v80 + 8) = 4;
		*(_QWORD*)v80 = v81;
		a1[2] += 16i64;
		v82 = (_DWORD*)a1[2];
		v82[2] = 1;
		*v82 = v79 != 0;
		a1[2] += 16i64;
		v83 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v83, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		v84 = *(_DWORD*)(v4 + v7 + 88) & 0x10;
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v85 = a1[2];
		v86 = sub_140062650((__int64)a1, (unsigned __int64*)"fontOutline", 0xBui64);
		*(_DWORD*)(v85 + 8) = 4;
		*(_QWORD*)v85 = v86;
		a1[2] += 16i64;
		v87 = (_DWORD*)a1[2];
		v87[2] = 1;
		*v87 = v84 != 0;
		a1[2] += 16i64;
		v88 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v88, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		v89 = *(_DWORD*)(v4 + v7 + 264);
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v90 = a1[2];
		v91 = sub_140062650((__int64)a1, (unsigned __int64*)"useLocation", 0xBui64);
		*(_DWORD*)(v90 + 8) = 4;
		*(_QWORD*)v90 = v91;
		a1[2] += 16i64;
		v92 = (_DWORD*)a1[2];
		v92[2] = 1;
		*v92 = v89 != 0;
		a1[2] += 16i64;
		v93 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v93, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		v94 = *(_DWORD*)(v4 + v7 + 92);
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v95 = a1[2];
		v96 = sub_140062650((__int64)a1, (unsigned __int64*)"location", 8ui64);
		*(_DWORD*)(v95 + 8) = 4;
		*(_QWORD*)v95 = v96;
		a1[2] += 16i64;
		v97 = a1[2];
		*(_DWORD*)(v97 + 8) = 3;
		*(double*)v97 = (double)v94;
		a1[2] += 16i64;
		v98 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v98, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		v99 = *(_DWORD*)(v4 + v7 + 96);
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v100 = a1[2];
		v101 = sub_140062650((__int64)a1, (unsigned __int64*)"attachment", 0xAui64);
		*(_DWORD*)(v100 + 8) = 4;
		*(_QWORD*)v100 = v101;
		a1[2] += 16i64;
		v102 = a1[2];
		*(_DWORD*)(v102 + 8) = 3;
		*(double*)v102 = (double)v99;
		a1[2] += 16i64;
		v103 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v103, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		v104 = *(float*)(v4 + v7 + 100);
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v105 = a1[2];
		v106 = sub_140062650((__int64)a1, (unsigned __int64*)"locationAngle", 0xDui64);
		*(_DWORD*)(v105 + 8) = 4;
		*(_QWORD*)v105 = v106;
		a1[2] += 16i64;
		v107 = a1[2];
		*(_DWORD*)(v107 + 8) = 3;
		*(double*)v107 = v104;
		a1[2] += 16i64;
		v108 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v108, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		v109 = *(float*)(v4 + v7 + 104);
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v110 = a1[2];
		v111 = sub_140062650((__int64)a1, (unsigned __int64*)"locationDistance", 0x10ui64);
		*(_DWORD*)(v110 + 8) = 4;
		*(_QWORD*)v110 = v111;
		a1[2] += 16i64;
		v112 = a1[2];
		*(_DWORD*)(v112 + 8) = 3;
		*(double*)v112 = v109;
		a1[2] += 16i64;
		v113 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v113, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		v114 = *(_DWORD*)(v4 + v7 + 268);
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v115 = a1[2];
		v116 = sub_140062650((__int64)a1, (unsigned __int64*)"useFormat", 9ui64);
		*(_DWORD*)(v115 + 8) = 4;
		*(_QWORD*)v115 = v116;
		a1[2] += 16i64;
		v117 = (_DWORD*)a1[2];
		v117[2] = 1;
		*v117 = v114 != 0;
		a1[2] += 16i64;
		v118 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v118, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		sub_140509F30((__int64)a1, v119, v120, (unsigned int*)(v4 + v7 + 108));
		sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		v4 += 288i64;
	} while ((unsigned int)v5 < 0x3F);
	return 1i64;
}
// 14050FE73: variable 'v21' is possibly undefined
// 14050FE85: variable 'v23' is possibly undefined
// 14050FF98: variable 'v34' is possibly undefined
// 140510896: variable 'v119' is possibly undefined
// 140510896: variable 'v120' is possibly undefined
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140C65898: using guessed type __int64 qword_140C65898;

