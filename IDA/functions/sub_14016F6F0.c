#include "../winhttp.h"

//----- (000000014016F6F0) ----------------------------------------------------
unsigned __int64 __fastcall sub_14016F6F0(__int64 a1)
{
	int v2; // r14d
	int v3; // esi
	char v4; // al
	__int64 v5; // rax
	int v6; // ecx
	unsigned __int64 result; // rax
	unsigned int v8; // esi
	int v9; // r14d
	unsigned __int64 v10; // rcx
	__int64 v11; // rbx
	__int64 v12; // rcx
	_QWORD** v13; // rcx
	int v14; // edx
	_QWORD* i; // rax
	bool v16; // r13
	__int64 v17; // rcx
	__int64 v18; // r8
	__int64 v19; // rdx
	__int64 v20; // rax
	__int64 v21; // rdx
	_QWORD* v22; // rdx
	bool v23; // cl
	_QWORD* v24; // rax
	bool v25; // zf
	int v26; // ecx
	int v27; // edx
	bool v28; // r12
	__int64 v29; // r8
	__int64 v30; // r9
	__int64 j; // rcx
	__int64 v32; // rax
	__int64 v33; // r15
	unsigned int v34; // edx
	unsigned int v35; // r14d
	__int64 v36; // rsi
	_QWORD* v37; // rcx
	__int64 v38; // rcx
	_QWORD* v39; // rcx
	__int64 v40; // r13
	unsigned __int64 v41; // r8
	__m128* v42; // r8
	_QWORD* v43; // rcx
	_QWORD* v44; // rcx
	_QWORD* v45; // rcx
	_QWORD* v46; // rcx
	int v47; // xmm0_4
	unsigned __int64 v48; // r8
	unsigned int v49; // r15d
	int v50; // r12d
	int v51; // esi
	__int64 v52; // rdx
	int v53; // eax
	int v54; // r14d
	unsigned int v55; // eax
	_QWORD* v56; // r11
	unsigned __int64 v57; // rbx
	_QWORD* v58; // r11
	int v59; // r10d
	int v60; // esi
	int v61; // eax
	__m128* v62; // r8
	int v63; // ecx
	unsigned int v64; // ebx
	int v65; // r8d
	unsigned int v66; // esi
	int v67; // eax
	unsigned int v68; // r10d
	int v69; // edx
	unsigned int v70; // r14d
	__int64 v71; // r8
	unsigned __int64 v72; // rax
	unsigned __int64 v73; // r11
	__int64 v74; // r9
	__int128* v75; // rax
	__int128 v76; // xmm0
	char v77; // al
	unsigned __int64 v78; // rdx
	__int64 v79; // r10
	int v80; // r11d
	__int128* v81; // rcx
	__m128i v82; // xmm3
	int v83; // ebx
	int v84; // r10d
	float v85; // xmm1_4
	__int64 v86; // rsi
	int v87; // ecx
	__int64 v88; // rdx
	unsigned int v89; // [rsp+50h] [rbp-B0h] BYREF
	int v90; // [rsp+54h] [rbp-ACh]
	int v91; // [rsp+58h] [rbp-A8h] BYREF
	int v92; // [rsp+5Ch] [rbp-A4h]
	int v93; // [rsp+60h] [rbp-A0h]
	int v94; // [rsp+64h] [rbp-9Ch]
	__int64 v95; // [rsp+68h] [rbp-98h]
	unsigned int v96[2]; // [rsp+70h] [rbp-90h] BYREF
	unsigned int v97; // [rsp+78h] [rbp-88h]
	int v98; // [rsp+7Ch] [rbp-84h]
	int v99; // [rsp+80h] [rbp-80h]
	unsigned int v100; // [rsp+84h] [rbp-7Ch] BYREF
	int v101; // [rsp+88h] [rbp-78h]
	int v102; // [rsp+8Ch] [rbp-74h]
	int v103; // [rsp+90h] [rbp-70h]
	__int64 v104; // [rsp+98h] [rbp-68h] BYREF
	int v105; // [rsp+A0h] [rbp-60h]
	int v106; // [rsp+A4h] [rbp-5Ch]
	int v107; // [rsp+A8h] [rbp-58h]
	int v108; // [rsp+ACh] [rbp-54h]
	int v109; // [rsp+B0h] [rbp-50h]
	unsigned __int64 v110; // [rsp+B8h] [rbp-48h]
	unsigned __int64 v111; // [rsp+C0h] [rbp-40h]
	__m128 v112; // [rsp+D0h] [rbp-30h] BYREF
	__m128 v113; // [rsp+E0h] [rbp-20h]
	__int128 v114; // [rsp+F0h] [rbp-10h] BYREF
	__int128 v115; // [rsp+100h] [rbp+0h] BYREF
	__int128 v116; // [rsp+110h] [rbp+10h] BYREF
	__int128 v117; // [rsp+120h] [rbp+20h] BYREF
	__int128 v118; // [rsp+130h] [rbp+30h] BYREF
	__m128 v119[9]; // [rsp+140h] [rbp+40h] BYREF

	sub_140170080(a1);
	if (*(_BYTE*)(a1 + 1368))
		sub_14016E890(a1);
	v2 = *(_DWORD*)(a1 + 716);
	v3 = *(_DWORD*)(a1 + 720);
	v109 = *(_DWORD*)(a1 + 724);
	v107 = v109;
	v108 = *(_DWORD*)(a1 + 728);
	v4 = *(_BYTE*)(a1 + 664);
	v105 = v2;
	v106 = v3;
	if ((v4 & 0x10) != 0)
	{
		v3 += *(_DWORD*)(a1 + 1372);
		v106 = v3;
	}
	v5 = *(_QWORD*)(a1 + 464);
	if (v5)
		v6 = *(_DWORD*)(v5 + 1300);
	else
		v6 = 0;
	result = *(_QWORD*)(a1 + 1584);
	v8 = v3 - *(_DWORD*)(a1 + 1608);
	v9 = v2 - v6;
	v10 = 0i64;
	v90 = v9;
	v99 = v8;
	v111 = result;
	v110 = 0i64;
	while (v10 < v111)
	{
		v11 = *(int*)(*(_QWORD*)(a1 + 1576) + 4 * v10);
		if ((int)v11 < 0 || (int)v11 >= (int)((__int64)(*(_QWORD*)(a1 + 1424) - *(_QWORD*)(a1 + 1416)) >> 3))
			v95 = 0i64;
		else
			v95 = *(_QWORD*)(*(_QWORD*)(a1 + 1416) + 8 * v11);
		if ((int)v11 >= 0
			&& (int)v11 < (int)((__int64)(*(_QWORD*)(a1 + 1424) - *(_QWORD*)(a1 + 1416)) >> 3)
			&& (v12 = *(_QWORD*)(*(_QWORD*)(a1 + 1416) + 8 * v11)) != 0)
		{
			v13 = *(_QWORD***)(v12 + 96);
			v14 = 0;
			for (i = *v13; i != v13; ++v14)
				i = (_QWORD*)*i;
			v16 = v14 != 0;
		}
		else
		{
			v16 = 0;
		}
		if ((unsigned int)(v11 + 1) <= 1)
			goto LABEL_30;
		if ((int)v11 < 0)
			goto LABEL_30;
		v17 = (__int64)(*(_QWORD*)(a1 + 1424) - *(_QWORD*)(a1 + 1416)) >> 3;
		if ((int)v11 >= (int)v17)
			goto LABEL_30;
		v18 = *(_QWORD*)(a1 + 1416);
		v19 = *(_QWORD*)(v18 + 8 * v11);
		if (v19
			&& (v20 = *(int*)(v19 + 104), (int)v20 >= 0)
			&& (int)v20 < (int)v17
			&& (v21 = *(_QWORD*)(v18 + 8 * v20)) != 0
			&& (v22 = *(_QWORD**)(v21 + 96), v23 = 0, v24 = (_QWORD*)*v22, (_QWORD*)*v22 != v22))
		{
			while (!v23)
			{
				v25 = *((_DWORD*)v24 + 4) == (_DWORD)v11;
				v24 = (_QWORD*)*v24;
				v23 = v25;
				if (v24 == v22)
					goto LABEL_30;
			}
			v26 = *((_DWORD*)v24 + 4);
		}
		else
		{
		LABEL_30:
			v26 = -1;
		}
		v27 = -2;
		v28 = v26 != -1;
		if ((int)v11 >= 0)
		{
			v29 = (__int64)(*(_QWORD*)(a1 + 1424) - *(_QWORD*)(a1 + 1416)) >> 3;
			if ((int)v11 < (int)v29)
			{
				v30 = *(_QWORD*)(a1 + 1416);
				for (j = *(_QWORD*)(v30 + 8 * v11); j; ++v27)
				{
					v32 = *(int*)(j + 104);
					if ((int)v32 < 0 || (int)v32 >= (int)v29)
						j = 0i64;
					else
						j = *(_QWORD*)(v30 + 8 * v32);
				}
			}
		}
		v89 = v11;
		if (v27 > 128)
			v27 = 128;
		v33 = v27;
		v119[1].m128_i8[v27] = v28;
		result = v8 + (unsigned int)sub_14016E100(a1, (int*)&v89);
		v89 = result;
		if ((int)result < v106)
			goto LABEL_137;
		v34 = v9;
		v96[1] = v8;
		v35 = 0;
		v36 = 0i64;
		v98 = result;
		for (v96[0] = v34; v36 < v33; v96[0] = v34)
		{
			if (v35 >= 0x80)
				break;
			v34 += 16;
			v25 = v119[1].m128_i8[v36] == 0;
			v97 = v34;
			if (!v25 && (*(_BYTE*)(a1 + 664) & 2) == 0)
			{
				v37 = *(_QWORD**)(a1 + 1024);
				v118 = xmmword_140B7B240;
				if (v37)
				{
					sub_140103CF0(
						v37,
						v96,
						(__m128*) & v118,
						0,
						COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1032)) * *(float*)(a1 + 1036)));
					v34 = v97;
				}
			}
			++v36;
			++v35;
		}
		v38 = *(_QWORD*)(a1 + 664);
		v97 = v34 + 16;
		if ((v38 & 2) != 0)
		{
			if (!v16)
				goto LABEL_55;
		}
		else if (!v16)
		{
			if (v28)
			{
				v39 = *(_QWORD**)(a1 + 1120);
				v119[0] = (__m128)xmmword_140B7B240;
				if (v39)
					sub_140103CF0(
						v39,
						v96,
						v119,
						0,
						COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1128)) * *(float*)(a1 + 1132)));
			}
			else
			{
				v43 = *(_QWORD**)(a1 + 1072);
				v117 = xmmword_140B7B240;
				if (v43)
					sub_140103CF0(
						v43,
						v96,
						(__m128*) & v117,
						0,
						COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1080)) * *(float*)(a1 + 1084)));
			}
		LABEL_55:
			v40 = v95;
			goto LABEL_56;
		}
		v40 = v95;
		if ((v38 & 4) == 0)
		{
			if (*(_BYTE*)(v95 + 108))
			{
				v44 = *(_QWORD**)(a1 + 1216);
				v115 = xmmword_140B7B240;
				if (v44)
					sub_140103CF0(
						v44,
						v96,
						(__m128*) & v115,
						0,
						COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1224)) * *(float*)(a1 + 1228)));
			}
			else
			{
				v45 = *(_QWORD**)(a1 + 1168);
				v116 = xmmword_140B7B240;
				if (v45)
					sub_140103CF0(
						v45,
						v96,
						(__m128*) & v116,
						0,
						COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1176)) * *(float*)(a1 + 1180)));
			}
		}
	LABEL_56:
		v92 = v99;
		v93 = v109;
		v94 = v89;
		v25 = (*(_BYTE*)(a1 + 664) & 1) == 0;
		v91 = v97 + 2;
		if (v25 && *(_DWORD*)(a1 + 1568) == (_DWORD)v11)
		{
			v41 = *(unsigned int*)(a1 + 1364);
			if (v41 >= *(_QWORD*)(qword_140C63678 + 48))
				v42 = *(__m128**)(qword_140C63678 + 40);
			else
				v42 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v41);
			v46 = *(_QWORD**)(a1 + 1312);
			if (!v46)
				goto LABEL_78;
			*(float*)&v47 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1320)) * *(float*)(a1 + 1324);
		}
		else
		{
			v48 = *(unsigned int*)(a1 + 1360);
			if (v48 >= *(_QWORD*)(qword_140C63678 + 48))
				v42 = *(__m128**)(qword_140C63678 + 40);
			else
				v42 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v48);
			v46 = *(_QWORD**)(a1 + 1264);
			if (!v46)
				goto LABEL_78;
			*(float*)&v47 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1272)) * *(float*)(a1 + 1276);
		}
		sub_140103CF0(v46, (unsigned int*)&v91, v42, 0, v47);
	LABEL_78:
		(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65680 + 144i64))(
			qword_140C65680,
			1i64,
			v42);
		v49 = v91;
		v50 = v92;
		v51 = v94;
		if ((int)v11 >= 0
			&& (int)v11 < (int)((__int64)(*(_QWORD*)(a1 + 1424) - *(_QWORD*)(a1 + 1416)) >> 3)
			&& (v52 = *(_QWORD*)(*(_QWORD*)(a1 + 1416) + 8 * v11)) != 0)
		{
			v53 = *(_DWORD*)(v52 + 116);
		}
		else
		{
			v53 = 0;
		}
		v54 = v53 + v91;
		v91 += v53 + 2;
		v55 = sub_140141F10(qword_140C63678, (__m128*) & xmmword_140C67350);
		v56 = *(_QWORD**)(v40 + 32);
		v57 = v55;
		v100 = v49;
		v101 = v50;
		v102 = v54;
		v103 = v51;
		if (v56)
		{
			sub_140101470(v56, (int*)&v104);
			if (SHIDWORD(v104) > 0 && (int)v104 > 0)
			{
				v59 = v54 - v49;
				if ((int)(v54 - v49) > 0)
				{
					v60 = v51 - v50;
					if (v60 > 0)
					{
						if (SHIDWORD(v104) <= v60 && (int)v104 <= v59)
						{
							v101 = v50 + (v60 - HIDWORD(v104)) / 2;
							v61 = HIDWORD(v104) + v101;
							v100 = v54 - v104;
							goto LABEL_95;
						}
						if (SHIDWORD(v104) / v60 <= (int)v104 / v59)
						{
							v101 = v50 + (v60 - v59 * HIDWORD(v104) / (int)v104) / 2;
							v61 = v59 * HIDWORD(v104) / (int)v104 + v101;
						LABEL_95:
							v103 = v61;
						}
						else
						{
							v100 = v54 - v60 * (int)v104 / SHIDWORD(v104);
						}
						if (v57 >= *(_QWORD*)(qword_140C63678 + 48))
							v62 = *(__m128**)(qword_140C63678 + 40);
						else
							v62 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v57);
						sub_140103CF0(
							v58,
							&v100,
							v62,
							0,
							COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(v40 + 40)) * *(float*)(v40 + 44)));
					}
				}
			}
		}
		else
		{
			v104 = 0i64;
		}
		sub_1401429A0(qword_140C63678, v57);
		v63 = v107;
		v64 = v93;
		v65 = v108;
		v66 = v94;
		v67 = v105;
		v68 = v91;
		v69 = v106;
		v70 = v92;
		if (v93 < v107)
			v63 = v93;
		if (v94 < v108)
			v65 = v94;
		if (v105 < v91)
			v67 = v91;
		if (v106 < v92)
			v69 = v92;
		if (v67 >= v63 || v69 >= v65)
			goto LABEL_135;
		v71 = qword_140C63678;
		v72 = *(unsigned int*)(a1 + 708);
		v73 = *(_QWORD*)(qword_140C63678 + 48);
		v74 = *(_QWORD*)(qword_140C63678 + 40);
		if (v72 >= v73)
			v75 = *(__int128**)(qword_140C63678 + 40);
		else
			v75 = (__int128*)(v74 + 32 * v72);
		v76 = *v75;
		v77 = *(_BYTE*)(a1 + 664) >> 3;
		v114 = v76;
		if ((v77 & 1) != 0)
		{
			v78 = *(unsigned int*)(v40 + 120);
			if (v78 < v73)
			{
				v79 = 32i64 * (unsigned int)v78;
				v80 = *(_DWORD*)(v79 + v74 + 16);
				if ((unsigned int)(v80 - 1) <= 0xFFFFFFFD)
					*(_DWORD*)(v79 + v74 + 16) = v80 + 1;
			}
			if (v78 >= *(_QWORD*)(v71 + 48))
				v81 = *(__int128**)(v71 + 40);
			else
				v81 = (__int128*)(*(_QWORD*)(v71 + 40) + 32 * v78);
			v114 = *v81;
			sub_1401429A0(v71, v78);
			v66 = v94;
			v64 = v93;
			v70 = v92;
			v68 = v91;
		}
		v82 = _mm_cvtsi32_si128(v64);
		v83 = 0;
		v112 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v68), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v70), _mm_cvtsi32_si128(0))));
		v113 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(v82, _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v66), _mm_cvtsi32_si128(0))));
		if ((int)sub_14016DC20(a1) <= 0)
		{
		LABEL_135:
			v9 = v90;
		}
		else
		{
			v85 = v112.m128_f32[0];
			v86 = 0i64;
			do
			{
				if (*(_QWORD*)(a1 + 1400) > 1ui64)
				{
					if (*(_DWORD*)(a1 + 1400) > v83)
						v87 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1392) + v86) + 4i64);
					else
						v87 = 0;
				}
				else
				{
					v87 = *(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 716);
				}
				v9 = v90;
				if (!v83)
					v87 += v90 - v84;
				v85 = (float)v87 + v85;
				v113.m128_f32[0] = v85;
				if ((unsigned __int64)(unsigned int)v83 < *(_QWORD*)(v40 + 24))
				{
					v88 = *(_QWORD*)(*(_QWORD*)(v40 + 16) + 8i64 * (unsigned int)v83);
					if (v88)
					{
						(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __m128*, _DWORD, __int128*, int, _QWORD))(*(_QWORD*)qword_140C65680 + 280i64))(
							qword_140C65680,
							v88,
							0i64,
							-1i64,
							&v112,
							*(_DWORD*)(a1 + 704),
							&v114,
							1,
							0i64);
						v85 = v113.m128_f32[0];
					}
				}
				v112.m128_f32[0] = v85;
				++v83;
				v86 += 8i64;
			} while (v83 < (int)sub_14016DC20(a1));
		}
		result = v89;
	LABEL_137:
		v8 = result;
		v10 = v110 + 1;
		v99 = result;
		v110 = v10;
	}
	return result;
}
// 14016FC59: variable 'v42' is possibly undefined
// 14016FDD3: variable 'v58' is possibly undefined
// 14016FF72: variable 'v84' is possibly undefined
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C67350: using guessed type __int128 xmmword_140C67350;

