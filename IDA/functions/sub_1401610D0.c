#include "../winhttp.h"

//----- (00000001401610D0) ----------------------------------------------------
void __fastcall sub_1401610D0(__int64 a1, int a2, int a3)
{
	__int64 v3; // r14
	__int64 v4; // r15
	__int64 v6; // rax
	__int64 v7; // r13
	__int64 v8; // rax
	__int64 v9; // rdx
	unsigned int v10; // ebx
	__int64 v11; // rcx
	__int64 v12; // rdx
	__int64 v13; // rcx
	int v14; // r8d
	int v15; // r8d
	__int64 v16; // r11
	unsigned int* v17; // rdi
	bool v18; // zf
	char v19; // al
	__int64 v20; // rdx
	__int64 v21; // rcx
	int v22; // r8d
	char v23; // r12
	int v24; // r8d
	__int64 v25; // r11
	unsigned __int64 v26; // r8
	__m128* v27; // r8
	_QWORD* v28; // rcx
	int v29; // xmm0_4
	int v30; // edx
	int v31; // r8d
	__int64 v32; // r11
	unsigned __int64 v33; // r8
	unsigned __int64 v34; // r8
	__int64 v35; // r11
	unsigned __int64 v36; // r8
	unsigned __int64 v37; // r8
	int v38; // edx
	unsigned int v39; // r10d
	unsigned int v40; // r9d
	__int64 v41; // rdi
	float v42; // xmm1_4
	float v43; // xmm6_4
	unsigned __int64 v44; // r8
	unsigned __int64 v45; // rcx
	unsigned __int64 v46; // rax
	unsigned int v47; // edx
	float v48; // xmm2_4
	unsigned int v49; // edi
	__int64 v50; // r9
	__int64 v51; // r10
	__int64 v52; // r12
	__int64 v53; // rdx
	__int64 v54; // rcx
	int v55; // r8d
	char v56; // r12
	__int64 v57; // r9
	__int64 v58; // rdx
	int* v59; // rcx
	unsigned int v60; // r8d
	_QWORD* v61; // rcx
	int* v62[2]; // [rsp+58h] [rbp-39h] BYREF
	__m128 v63; // [rsp+68h] [rbp-29h] BYREF
	__m128 v64; // [rsp+78h] [rbp-19h]
	__int128 v65; // [rsp+88h] [rbp-9h] BYREF
	unsigned int v66; // [rsp+98h] [rbp+7h] BYREF
	unsigned int v67; // [rsp+9Ch] [rbp+Bh]
	unsigned int v68; // [rsp+A0h] [rbp+Fh]
	unsigned int v69; // [rsp+A4h] [rbp+13h]
	unsigned int v70; // [rsp+100h] [rbp+6Fh] BYREF
	int v71; // [rsp+108h] [rbp+77h]
	unsigned __int64 v72; // [rsp+110h] [rbp+7Fh] BYREF

	if (a3 < 0)
		return;
	v3 = a3;
	v4 = a2;
	if (a3 >= *(_DWORD*)(a1 + 1144) || a2 < 0 || a2 >= *(_DWORD*)(a1 + 1160))
		return;
	v6 = *(_QWORD*)(*(_QWORD*)(a1 + 1152) + 8i64 * a2);
	v7 = a3 >= *(_DWORD*)(v6 + 24) ? 0i64 : *(_QWORD*)(*(_QWORD*)(v6 + 16) + 8i64 * a3);
	if (!v7)
		return;
	v72 = __PAIR64__(a2, a3);
	sub_14015FAD0(a1, &v66, (int*)&v72);
	if ((int)v3 >= *(_DWORD*)(a1 + 1144)
		|| (int)v4 >= *(_DWORD*)(a1 + 1160)
		|| (v8 = *(_QWORD*)(*(_QWORD*)(a1 + 1152) + 8 * v4), (int)v3 >= *(_DWORD*)(v8 + 24)))
	{
		v9 = 0i64;
	}
	else
	{
		v9 = *(_QWORD*)(*(_QWORD*)(v8 + 16) + 8 * v3);
	}
	v11 = *(_QWORD*)(*(_QWORD*)(a1 + 1136) + 8 * v3);
	v70 = *(_DWORD*)(v9 + 160);
	v10 = v70;
	v71 = *(_DWORD*)(v11 + 72);
	if ((unsigned __int64)v70 < *(_QWORD*)(qword_140C63678 + 48))
	{
		v12 = *(_QWORD*)(qword_140C63678 + 40);
		v13 = 32i64 * v70;
		v14 = *(_DWORD*)(v13 + v12 + 16);
		if ((unsigned int)(v14 - 1) <= 0xFFFFFFFD)
			*(_DWORD*)(v13 + v12 + 16) = v14 + 1;
	}
	if (sub_14015EED0(a1, v4, v3))
	{
		v18 = sub_14015EF30(a1, v4, v15) == 0;
		v19 = *(_BYTE*)(a1 + 664);
		if (v18)
		{
			if (((v19 & 8) == 0 || *(_DWORD*)(a1 + 1040) != (_DWORD)v4)
				&& (*(_DWORD*)(a1 + 1040) != (_DWORD)v4 || *(_DWORD*)(a1 + 1044) != (_DWORD)v3))
			{
				goto LABEL_35;
			}
			v17 = (unsigned int*)(a1 + 2216);
		}
		else if ((v19 & 8) != 0 && *(_DWORD*)(a1 + 1040) == (_DWORD)v4
			|| *(_DWORD*)(a1 + 1040) == (_DWORD)v4 && *(_DWORD*)(a1 + 1044) == (_DWORD)v3)
		{
			v17 = (unsigned int*)(a1 + 2220);
		}
		else
		{
			v17 = (unsigned int*)(a1 + 2212);
		}
	}
	else
	{
		v17 = (unsigned int*)(a1 + 2224);
	}
	if (&v70 != v17)
	{
		sub_1401429A0(v16, v10);
		v16 = qword_140C63678;
		v70 = *v17;
		v10 = v70;
		if ((unsigned __int64)v70 < *(_QWORD*)(qword_140C63678 + 48))
		{
			v20 = *(_QWORD*)(qword_140C63678 + 40);
			v21 = 32i64 * v70;
			v22 = *(_DWORD*)(v21 + v20 + 16);
			if ((unsigned int)(v22 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v21 + v20 + 16) = v22 + 1;
		}
	}
LABEL_35:
	v23 = 1;
	if ((*(_BYTE*)(a1 + 664) & 8) == 0)
	{
		if (sub_14015EED0(a1, v4, v3))
		{
			if (sub_14015EF30(a1, v4, v24))
			{
				if (sub_14015EE90(a1, v30, v31))
				{
					v33 = *(unsigned int*)(a1 + 2200);
					if (v33 >= *(_QWORD*)(v32 + 48))
						v27 = *(__m128**)(v32 + 40);
					else
						v27 = (__m128*)(*(_QWORD*)(v32 + 40) + 32 * v33);
					v28 = *(_QWORD**)(a1 + 1768);
					if (!v28)
						goto LABEL_66;
					*(float*)&v29 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1776)) * *(float*)(a1 + 1780);
				}
				else
				{
					v34 = *(unsigned int*)(a1 + 2196);
					if (v34 >= *(_QWORD*)(v32 + 48))
						v27 = *(__m128**)(v32 + 40);
					else
						v27 = (__m128*)(*(_QWORD*)(v32 + 40) + 32 * v34);
					v28 = *(_QWORD**)(a1 + 1672);
					if (!v28)
						goto LABEL_66;
					*(float*)&v29 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1680)) * *(float*)(a1 + 1684);
				}
			}
			else if (sub_14015EE90(a1, v30, v31))
			{
				v36 = *(unsigned int*)(a1 + 2192);
				if (v36 >= *(_QWORD*)(v35 + 48))
					v27 = *(__m128**)(v35 + 40);
				else
					v27 = (__m128*)(*(_QWORD*)(v35 + 40) + 32 * v36);
				v28 = *(_QWORD**)(a1 + 1720);
				if (!v28)
					goto LABEL_66;
				*(float*)&v29 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1728)) * *(float*)(a1 + 1732);
			}
			else
			{
				v37 = *(unsigned int*)(a1 + 2188);
				if (v37 >= *(_QWORD*)(v35 + 48))
					v27 = *(__m128**)(v35 + 40);
				else
					v27 = (__m128*)(*(_QWORD*)(v35 + 40) + 32 * v37);
				v28 = *(_QWORD**)(a1 + 1624);
				if (!v28)
					goto LABEL_66;
				*(float*)&v29 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1632)) * *(float*)(a1 + 1636);
			}
		}
		else
		{
			v26 = *(unsigned int*)(a1 + 2204);
			if (v26 >= *(_QWORD*)(v25 + 48))
				v27 = *(__m128**)(v25 + 40);
			else
				v27 = (__m128*)(*(_QWORD*)(v25 + 40) + 32 * v26);
			v28 = *(_QWORD**)(a1 + 1816);
			if (!v28)
				goto LABEL_66;
			*(float*)&v29 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1824)) * *(float*)(a1 + 1828);
		}
		sub_140103CF0(v28, &v66, v27, 0, v29);
	LABEL_66:
		(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65680 + 144i64))(
			qword_140C65680,
			1i64,
			v27);
		v16 = qword_140C63678;
	}
	v38 = -*(_DWORD*)(a1 + 1088);
	v39 = v68 - *(_DWORD*)(a1 + 1092);
	v40 = v66 + *(_DWORD*)(a1 + 1092);
	v69 -= *(_DWORD*)(a1 + 1088);
	v67 -= v38;
	v66 = v40;
	v68 = v39;
	if (!(_DWORD)v3)
	{
		v40 += *(_DWORD*)(a1 + 1084);
		v66 = v40;
	}
	v41 = *(_QWORD*)(v7 + 184);
	if (v41)
	{
		v42 = (float)(int)(v39 - v40);
		if (v42 != *(float*)(v41 + 672))
			sub_140141100(v41, v42);
		sub_140141910(v41, v63.m128_f32);
		v43 = v63.m128_f32[1];
		if (v63.m128_f32[0] <= (float)(int)(v68 - v66) && v63.m128_f32[1] <= (float)(int)(v69 - v67))
			v23 = 0;
		v44 = *(_QWORD*)(a1 + 1176);
		v45 = *(_QWORD*)(v44 + 8);
		v46 = v44;
		v47 = v3 + 32 * (v4 + 1);
		while (v45)
		{
			if (*(_DWORD*)(v45 + 32) < v47)
			{
				v45 = *(_QWORD*)(v45 + 24);
			}
			else
			{
				v46 = v45;
				v45 = *(_QWORD*)(v45 + 16);
			}
		}
		if (v46 == v44 || v47 < *(_DWORD*)(v46 + 32))
		{
			LODWORD(v72) = v3 + 32 * (v4 + 1);
			BYTE4(v72) = 0;
			v62[0] = (int*)v46;
			sub_140032B30(a1 + 1168, (int**)&v63, (__int64*)v62, &v72);
			v46 = v63.m128_u64[0];
		}
		*(_BYTE*)(v46 + 36) = v23;
		if (v43 < (float)(int)(v69 - v67))
			v67 += (int)(v69 - (int)v43 - v67) / 2;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
		v64 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v68), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v69), _mm_cvtsi32_si128(0))));
		v63 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v66), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v67), _mm_cvtsi32_si128(0))));
		(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 104i64))(qword_140C65680, &v63);
		v48 = *(float*)(v41 + 828) + 1.0;
		v64 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v68), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v69), _mm_cvtsi32_si128(0))));
		v63 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v66), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v67), _mm_cvtsi32_si128(0))));
		sub_140141820(v41, (__int128*)&v63, v48);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	}
	else
	{
		v50 = *(_QWORD*)(v7 + 88);
		v51 = *(_QWORD*)(v7 + 56);
		v52 = *(_QWORD*)(v7 + 192);
		LODWORD(v72) = *(_DWORD*)(v7 + 164);
		v49 = v72;
		if ((unsigned __int64)(unsigned int)v72 < *(_QWORD*)(v16 + 48))
		{
			v53 = *(_QWORD*)(v16 + 40);
			v54 = 32i64 * (unsigned int)v72;
			v55 = *(_DWORD*)(v54 + v53 + 16);
			if ((unsigned int)(v55 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v54 + v53 + 16) = v55 + 1;
		}
		v56 = sub_1401606F0(a1, &v66, (__int64*)(v7 + 112), (unsigned int*)&v72, v52, &v70, v71, v51, v50, 0);
		sub_1401429A0(qword_140C63678, v49);
		v57 = *(_QWORD*)(a1 + 1176);
		v58 = *(_QWORD*)(v57 + 8);
		v59 = (int*)v57;
		v60 = v3 + 32 * (v4 + 1);
		while (v58)
		{
			if (*(_DWORD*)(v58 + 32) < v60)
			{
				v58 = *(_QWORD*)(v58 + 24);
			}
			else
			{
				v59 = (int*)v58;
				v58 = *(_QWORD*)(v58 + 16);
			}
		}
		if (v59 == (int*)v57 || v60 < v59[8])
		{
			LODWORD(v72) = v3 + 32 * (v4 + 1);
			v63.m128_u64[0] = (unsigned __int64)v59;
			BYTE4(v72) = 0;
			sub_140032B30(a1 + 1168, v62, (__int64*)&v63, &v72);
			v59 = v62[0];
		}
		*((_BYTE*)v59 + 36) = v56;
	}
	if (*(_BYTE*)(a1 + 1100) && *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1112) + 40i64) + 8 * v4) + 224i64))
	{
		v61 = *(_QWORD**)(a1 + 2040);
		v65 = xmmword_140B7B240;
		v66 = v67 + v68 - v69;
		if (v61)
			sub_140103CF0(
				v61,
				&v66,
				(__m128*) & v65,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2048)) * *(float*)(a1 + 2052)));
	}
	sub_1401429A0(qword_140C63678, v10);
}
// 140161205: variable 'v15' is possibly undefined
// 140161280: variable 'v16' is possibly undefined
// 1401612E9: variable 'v25' is possibly undefined
// 140161330: variable 'v24' is possibly undefined
// 140161340: variable 'v30' is possibly undefined
// 140161340: variable 'v31' is possibly undefined
// 140161350: variable 'v32' is possibly undefined
// 1401613E9: variable 'v35' is possibly undefined
// 140161481: variable 'v27' is possibly undefined
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;

