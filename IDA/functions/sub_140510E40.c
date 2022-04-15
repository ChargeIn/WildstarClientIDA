#include "../winhttp.h"

//----- (0000000140510E40) ----------------------------------------------------
__int64 __fastcall sub_140510E40(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v3; // r8
	_DWORD* v4; // rdx
	__int64 v5; // rax
	int v6; // ebp
	int v7; // ecx
	__int128* v8; // rax
	int v9; // edx
	int v10; // ecx
	__int64 i; // rsi
	__int64 v13; // rbx
	__int64 v14; // rax
	_DWORD* v15; // rdx
	unsigned __int64 v16; // r8
	_DWORD* v17; // rax
	void* v18; // rax
	__int64 v19; // rax
	int v20; // ecx
	BOOL v21; // eax
	int* v22; // rax
	__int64 v23; // rdx
	__int64 v24; // r8
	__int64 v25; // r9
	_WORD* v26; // rcx
	__int64 v27; // rdx
	unsigned __int64 v28; // r8
	__int16 v29; // ax
	void* v30; // rax
	__int64 v31; // rdx
	__int64 v32; // r8
	__int64 v33; // rax
	int v34; // ecx
	BOOL v35; // eax
	void* v36; // rax
	__int64 v37; // rax
	int v38; // ecx
	BOOL v39; // eax
	void* v40; // rax
	unsigned __int64 v41; // rdx
	__int64 v42; // rcx
	__m128* v43; // rax
	__m128 v44; // xmm6
	__m128i v45; // xmm1
	__m128i v46; // xmm1
	void* v47; // rax
	__int64 v48; // rax
	int v49; // ecx
	BOOL v50; // eax
	void* v51; // rax
	__int64 v52; // rcx
	int v53; // eax
	_DWORD* v54; // rcx
	BOOL v55; // eax
	void* v56; // rax
	__int64 v57; // rcx
	int v58; // eax
	_DWORD* v59; // rcx
	BOOL v60; // eax
	void* v61; // rax
	__int64 v62; // rcx
	int v63; // eax
	_DWORD* v64; // rcx
	BOOL v65; // eax
	void* v66; // rax
	__int64 v67; // rcx
	int v68; // eax
	_DWORD* v69; // rcx
	BOOL v70; // eax
	void* v71; // rax
	__int64 v72; // rdx
	__int64 v73; // rax
	int v74; // ecx
	BOOL v75; // eax
	__int64 v76; // rdx
	__int64 v77; // rdx
	__int64 v78; // rdx
	void* v79; // rax
	__int64 v80; // rdx
	__int64 v81; // r8
	__int64 v82; // rax
	int v83; // ecx
	__int128 v84; // [rsp+20h] [rbp-58h] BYREF
	int* v85; // [rsp+30h] [rbp-48h]
	int* v86; // [rsp+38h] [rbp-40h]
	unsigned __int64 v87; // [rsp+80h] [rbp+8h] BYREF

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2] != 5)
		sub_140056570(a1, 1u, "not a table");
	sub_140058710((__int64)a1, (unsigned __int64*)"type", 4ui64);
	v3 = a1[2];
	v4 = dword_140A12138;
	if (a1[3] < v3)
		v4 = (_DWORD*)a1[3];
	sub_14005E8E0((__int64)a1, (__int64)v4, (int*)(v3 - 16), v3 - 16);
	v5 = a1[2];
	v6 = 0;
	v7 = *(_DWORD*)(v5 - 8);
	v8 = (__int128*)(v5 - 16);
	if (v7 != 3)
	{
		if (v7 != 4 || !sub_14005AC80((char*)(*(_QWORD*)v8 + 32i64), &v87))
		{
			v9 = 0;
			goto LABEL_12;
		}
		DWORD2(v84) = 3;
		v8 = &v84;
		*(_QWORD*)&v84 = v87;
	}
	v9 = (int)*(double*)v8;
LABEL_12:
	v10 = 0;
	for (i = qword_140C65898 + 7200; *(_DWORD*)i != v9; i += 288i64)
	{
		if ((unsigned int)++v10 >= 0x3F)
			return 0i64;
	}
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v13 = a1[2];
	v14 = sub_140062650((__int64)a1, (unsigned __int64*)"normal", 6ui64);
	*(_DWORD*)(v13 + 8) = 4;
	v15 = dword_140A12138;
	*(_QWORD*)v13 = v14;
	a1[2] += 16i64;
	v16 = a1[2];
	if (a1[3] < v16)
		v15 = (_DWORD*)a1[3];
	sub_14005E8E0((__int64)a1, (__int64)v15, (int*)(v16 - 16), v16 - 16);
	v17 = (_DWORD*)(a1[2] - 16i64);
	if (v17 != dword_140A12138 && v17[2] == 5)
	{
		sub_140058710((__int64)a1, (unsigned __int64*)"useFontFace", 0xBui64);
		v18 = sub_1400580E0((__int64)a1, -2);
		sub_14005E8E0((__int64)a1, (__int64)v18, (int*)(a1[2] - 16i64), a1[2] - 16i64);
		v19 = a1[2];
		v20 = *(_DWORD*)(v19 - 8);
		v21 = v20 && (v20 != 1 || *(_DWORD*)(v19 - 16));
		*(_DWORD*)(i + 248) = v21;
		a1[2] -= 16i64;
		if (*(_DWORD*)(i + 248))
		{
			v22 = sub_14018B280(16i64, 0);
			*((_QWORD*)&v84 + 1) = v22;
			v85 = v22;
			v86 = v22 + 4;
			if (v22)
				*(_WORD*)v22 = 0;
			sub_140510930((__int64)a1, v23, v24, &v84);
			v25 = *((_QWORD*)&v84 + 1);
			v26 = (_WORD*)(i + 16);
			v27 = 32i64;
			v28 = *((_QWORD*)&v84 + 1) - (i + 16);
			while (v27 != -2147483614)
			{
				v29 = *(_WORD*)((char*)v26 + v28);
				if (!v29)
					break;
				*v26++ = v29;
				if (!--v27)
				{
					--v26;
					break;
				}
			}
			*v26 = 0;
			if (v25)
				sub_14018B900(v25, 0);
		}
		sub_140058710((__int64)a1, (unsigned __int64*)"useFontSize", 0xBui64);
		v30 = sub_1400580E0((__int64)a1, -2);
		sub_14005E8E0((__int64)a1, (__int64)v30, (int*)(a1[2] - 16i64), a1[2] - 16i64);
		v33 = a1[2];
		v34 = *(_DWORD*)(v33 - 8);
		v35 = v34 && (v34 != 1 || *(_DWORD*)(v33 - 16));
		*(_DWORD*)(i + 252) = v35;
		a1[2] -= 16i64;
		if (*(_DWORD*)(i + 252))
			sub_140510A10((__int64)a1, v31, v32, (int*)(i + 80));
		sub_140058710((__int64)a1, (unsigned __int64*)"useFontColor", 0xCui64);
		v36 = sub_1400580E0((__int64)a1, -2);
		sub_14005E8E0((__int64)a1, (__int64)v36, (int*)(a1[2] - 16i64), a1[2] - 16i64);
		v37 = a1[2];
		v38 = *(_DWORD*)(v37 - 8);
		v39 = v38 && (v38 != 1 || *(_DWORD*)(v37 - 16));
		*(_DWORD*)(i + 256) = v39;
		a1[2] -= 16i64;
		if (*(_DWORD*)(i + 256))
		{
			sub_140058710((__int64)a1, (unsigned __int64*)"fontColor", 9ui64);
			v40 = sub_1400580E0((__int64)a1, -2);
			sub_14005E8E0((__int64)a1, (__int64)v40, (int*)(a1[2] - 16i64), a1[2] - 16i64);
			v84 = xmmword_140B7B240;
			sub_140143880((unsigned int*)&v87, a1, 0xFFFFFFFF, (__m128*) & v84);
			v41 = (unsigned int)v87;
			v42 = qword_140C63678;
			a1[2] -= 16i64;
			if (v41 >= *(_QWORD*)(v42 + 48))
				v43 = *(__m128**)(v42 + 40);
			else
				v43 = (__m128*)(*(_QWORD*)(v42 + 40) + 32i64 * (unsigned int)v41);
			v44 = *v43;
			sub_1401429A0(v42, v41);
			v45 = _mm_shuffle_epi32(
				_mm_cvttps_epi32(
					_mm_add_ps(
						_mm_mul_ps(
							_mm_min_ps(_mm_max_ps((__m128)0i64, v44), (__m128)xmmword_140B7B240),
							(__m128)xmmword_140B7B470),
						(__m128)xmmword_140B7AC50)),
				198);
			v46 = _mm_packus_epi16(v45, v45);
			*(_DWORD*)(i + 84) = _mm_cvtsi128_si32(_mm_packus_epi16(v46, v46));
		}
		sub_140058710((__int64)a1, (unsigned __int64*)"useFontFlags", 0xCui64);
		v47 = sub_1400580E0((__int64)a1, -2);
		sub_14005E8E0((__int64)a1, (__int64)v47, (int*)(a1[2] - 16i64), a1[2] - 16i64);
		v48 = a1[2];
		v49 = *(_DWORD*)(v48 - 8);
		v50 = v49 && (v49 != 1 || *(_DWORD*)(v48 - 16));
		*(_DWORD*)(i + 260) = v50;
		a1[2] -= 16i64;
		if (*(_DWORD*)(i + 260))
		{
			*(_DWORD*)(i + 88) = 0;
			sub_140058710((__int64)a1, (unsigned __int64*)"fontBold", 8ui64);
			v51 = sub_1400580E0((__int64)a1, -2);
			sub_14005E8E0((__int64)a1, (__int64)v51, (int*)(a1[2] - 16i64), a1[2] - 16i64);
			v52 = a1[2];
			v53 = *(_DWORD*)(v52 - 8);
			v54 = (_DWORD*)(v52 - 16);
			v55 = v53 && (v53 != 1 || *v54);
			a1[2] = v54;
			if (v55)
				*(_DWORD*)(i + 88) |= 2u;
			sub_140058710((__int64)a1, (unsigned __int64*)"fontItalic", 0xAui64);
			v56 = sub_1400580E0((__int64)a1, -2);
			sub_14005E8E0((__int64)a1, (__int64)v56, (int*)(a1[2] - 16i64), a1[2] - 16i64);
			v57 = a1[2];
			v58 = *(_DWORD*)(v57 - 8);
			v59 = (_DWORD*)(v57 - 16);
			v60 = v58 && (v58 != 1 || *v59);
			a1[2] = v59;
			if (v60)
				*(_DWORD*)(i + 88) |= 4u;
			sub_140058710((__int64)a1, (unsigned __int64*)"fontShadow", 0xAui64);
			v61 = sub_1400580E0((__int64)a1, -2);
			sub_14005E8E0((__int64)a1, (__int64)v61, (int*)(a1[2] - 16i64), a1[2] - 16i64);
			v62 = a1[2];
			v63 = *(_DWORD*)(v62 - 8);
			v64 = (_DWORD*)(v62 - 16);
			v65 = v63 && (v63 != 1 || *v64);
			a1[2] = v64;
			if (v65)
				*(_DWORD*)(i + 88) |= 8u;
			sub_140058710((__int64)a1, (unsigned __int64*)"fontOutline", 0xBui64);
			v66 = sub_1400580E0((__int64)a1, -2);
			sub_14005E8E0((__int64)a1, (__int64)v66, (int*)(a1[2] - 16i64), a1[2] - 16i64);
			v67 = a1[2];
			v68 = *(_DWORD*)(v67 - 8);
			v69 = (_DWORD*)(v67 - 16);
			v70 = v68 && (v68 != 1 || *v69);
			a1[2] = v69;
			if (v70)
				*(_DWORD*)(i + 88) |= 0x10u;
		}
		sub_140058710((__int64)a1, (unsigned __int64*)"useLocation", 0xBui64);
		v71 = sub_1400580E0((__int64)a1, -2);
		sub_14005E8E0((__int64)a1, (__int64)v71, (int*)(a1[2] - 16i64), a1[2] - 16i64);
		v73 = a1[2];
		v74 = *(_DWORD*)(v73 - 8);
		v75 = v74 && (v74 != 1 || *(_DWORD*)(v73 - 16));
		*(_DWORD*)(i + 264) = v75;
		a1[2] -= 16i64;
		if (*(_DWORD*)(i + 264))
		{
			*(_DWORD*)(i + 92) = sub_140510AC0((__int64)a1, v72, (unsigned __int64*)"location");
			*(_DWORD*)(i + 96) = sub_140510AC0((__int64)a1, v76, (unsigned __int64*)"attachment");
			sub_140510B80((__int64)a1, v77, (unsigned __int64*)"locationAngle", i + 100);
			sub_140510B80((__int64)a1, v78, (unsigned __int64*)"locationDistance", i + 104);
		}
		sub_140058710((__int64)a1, (unsigned __int64*)"useFormat", 9ui64);
		v79 = sub_1400580E0((__int64)a1, -2);
		sub_14005E8E0((__int64)a1, (__int64)v79, (int*)(a1[2] - 16i64), a1[2] - 16i64);
		v82 = a1[2];
		v83 = *(_DWORD*)(v82 - 8);
		if (v83 && (v83 != 1 || *(_DWORD*)(v82 - 16)))
			v6 = 1;
		*(_DWORD*)(i + 268) = v6;
		a1[2] -= 16i64;
		if (*(_DWORD*)(i + 268))
			sub_140510C50((__int64)a1, v80, v81, (_QWORD*)(i + 108));
	}
	a1[2] -= 16i64;
	return 1i64;
}
// 14051109B: conditional instruction was optimized away because rdx.8!=0
// 14051105B: variable 'v23' is possibly undefined
// 14051105B: variable 'v24' is possibly undefined
// 140511123: variable 'v31' is possibly undefined
// 140511123: variable 'v32' is possibly undefined
// 1405114DB: variable 'v72' is possibly undefined
// 1405114ED: variable 'v76' is possibly undefined
// 140511503: variable 'v77' is possibly undefined
// 140511516: variable 'v78' is possibly undefined
// 140511588: variable 'v80' is possibly undefined
// 140511588: variable 'v81' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65898: using guessed type __int64 qword_140C65898;

