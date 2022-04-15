#include "../winhttp.h"

//----- (0000000140364E90) ----------------------------------------------------
__int64 __fastcall sub_140364E90(_QWORD* a1)
{
	__int64 result; // rax
	_DWORD* i; // rbx
	int* v4; // rax
	_DWORD* v5; // r14
	__m128 v6; // xmm4
	__m128 v7; // xmm5
	__m128 v8; // xmm8
	__m128 v9; // xmm7
	__m128 v10; // xmm6
	__m128i v11; // xmm3
	__m128i v12; // xmm3
	__m128 v13; // xmm3
	__m128 v14; // xmm4
	__m128i v15; // xmm3
	__m128i v16; // xmm3
	__m128i v17; // xmm3
	__m128i v18; // xmm3
	__m128 v19; // xmm5
	__m128 v20; // xmm4
	__m128 v21; // xmm3
	__m128 v22; // xmm1
	_QWORD* v23; // rcx
	__int64 v24; // rcx
	_DWORD* j; // rbx
	int* v26; // rax
	_DWORD* v27; // r14
	__m128 v28; // xmm4
	__m128 v29; // xmm5
	__m128 v30; // xmm8
	__m128 v31; // xmm7
	__m128 v32; // xmm6
	__m128i v33; // xmm3
	__m128i v34; // xmm3
	__m128 v35; // xmm3
	__m128 v36; // xmm4
	__m128i v37; // xmm3
	__m128i v38; // xmm3
	__m128i v39; // xmm3
	__m128i v40; // xmm3
	__m128 v41; // xmm5
	__m128 v42; // xmm4
	__m128 v43; // xmm3
	__m128 v44; // xmm1
	_QWORD* v45; // rcx
	__int64 v46; // rcx
	__int64 v47; // rbx
	int* v48; // rax
	_DWORD* v49; // r14
	__m128 v50; // xmm4
	__m128 v51; // xmm5
	__m128 v52; // xmm8
	__m128 v53; // xmm7
	__m128 v54; // xmm6
	__m128i v55; // xmm3
	__m128i v56; // xmm3
	__m128 v57; // xmm3
	__m128 v58; // xmm4
	__m128i v59; // xmm3
	__m128i v60; // xmm3
	__m128i v61; // xmm3
	__m128i v62; // xmm3
	__m128 v63; // xmm5
	__m128 v64; // xmm4
	__m128 v65; // xmm3
	__m128 v66; // xmm1
	_QWORD* v67; // rcx
	__int64 v68; // rcx
	__int64 v69; // rbx
	int* v70; // rax
	_DWORD* v71; // r14
	__m128 v72; // xmm4
	__m128 v73; // xmm5
	__m128 v74; // xmm8
	__m128 v75; // xmm7
	__m128 v76; // xmm6
	__m128i v77; // xmm3
	__m128i v78; // xmm3
	__m128 v79; // xmm3
	__m128 v80; // xmm4
	__m128i v81; // xmm3
	__m128i v82; // xmm3
	__m128i v83; // xmm3
	__m128i v84; // xmm3
	__m128 v85; // xmm5
	__m128 v86; // xmm4
	__m128 v87; // xmm3
	__m128 v88; // xmm1
	_QWORD* v89; // rcx
	__int64 v90; // rcx
	unsigned int v91; // [rsp+50h] [rbp-B0h] BYREF
	unsigned int v92; // [rsp+54h] [rbp-ACh]
	unsigned int v93; // [rsp+58h] [rbp-A8h]
	unsigned int v94; // [rsp+60h] [rbp-A0h]
	unsigned int v95; // [rsp+64h] [rbp-9Ch]
	unsigned int v96; // [rsp+68h] [rbp-98h]
	__m128 v97; // [rsp+70h] [rbp-90h] BYREF
	__m128 v98; // [rsp+80h] [rbp-80h]
	__m128 v99; // [rsp+90h] [rbp-70h]
	__m128 v100; // [rsp+A0h] [rbp-60h]
	__m128 v101; // [rsp+B0h] [rbp-50h] BYREF
	__m128 v102; // [rsp+C0h] [rbp-40h]
	__m128 v103; // [rsp+D0h] [rbp-30h]
	__m128 v104; // [rsp+E0h] [rbp-20h]
	__m128* v105; // [rsp+F0h] [rbp-10h] BYREF
	_QWORD* v106; // [rsp+F8h] [rbp-8h]

	if (!a1[663] && !a1[633] && !a1[664] && !a1[634])
		return 0i64;
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 0i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 392i64))(qword_140C65670, 4294967288i64);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 312i64))(
		qword_140C65670,
		*(_QWORD*)(a1[2] + 344i64));
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1[2] + 88i64),
		0i64);
	(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 320i64))(
		qword_140C65670,
		*(_QWORD*)(a1[2] + 80i64),
		1i64);
	for (i = (_DWORD*)a1[663]; i; i = (_DWORD*)a1[663])
	{
		if ((*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)i + 256i64))(i))
		{
			if (!*((_QWORD*)i + 122))
			{
				i[248] = 0;
				result = (*(__int64(__fastcall**)(__int64, _DWORD*))(*(_QWORD*)qword_140C65670 + 176i64))(
					qword_140C65670,
					i + 244);
				if ((int)result < 0)
					return result;
			LABEL_13:
				v4 = (int*)(*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 224i64))(
					qword_140C65670,
					128i64,
					1i64);
				v5 = v4;
				if (v4)
				{
					sub_1407E4830(v4, 0i64, 0x80ui64);
					(*(void(__fastcall**)(_DWORD*, unsigned int*, _QWORD))(*(_QWORD*)i + 88i64))(i, &v91, 0i64);
					v6 = (__m128)v93;
					v7 = (__m128)v92;
					v8 = (__m128)v94;
					v9 = (__m128)v91;
					v10 = (__m128)v95;
					v11 = (__m128i)_mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128)v94, (__m128)v93),
						_mm_unpacklo_ps((__m128)v92, (__m128)0i64));
					*v5 = v91;
					v5[1] = v7.m128_i32[0];
					v5[2] = v6.m128_i32[0];
					v5[4] = _mm_cvtsi128_si32(v11);
					v5[5] = _mm_cvtsi128_si32(_mm_srli_si128(v11, 4));
					v5[6] = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
					v12 = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v9, v6), _mm_unpacklo_ps(v10, (__m128)0i64));
					v5[8] = _mm_cvtsi128_si32(v12);
					v5[9] = _mm_cvtsi128_si32(_mm_srli_si128(v12, 4));
					v5[10] = _mm_cvtsi128_si32(_mm_srli_si128(v12, 8));
					v13 = _mm_unpacklo_ps(v8, v6);
					v14 = (__m128)v96;
					v15 = (__m128i)_mm_unpacklo_ps(v13, _mm_unpacklo_ps(v10, (__m128)0i64));
					v5[12] = _mm_cvtsi128_si32(v15);
					v5[13] = _mm_cvtsi128_si32(_mm_srli_si128(v15, 4));
					v5[14] = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
					v16 = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v9, v14), _mm_unpacklo_ps(v7, (__m128)0i64));
					v5[16] = _mm_cvtsi128_si32(v16);
					v5[17] = _mm_cvtsi128_si32(_mm_srli_si128(v16, 4));
					v5[18] = _mm_cvtsi128_si32(_mm_srli_si128(v16, 8));
					v17 = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v8, v14), _mm_unpacklo_ps(v7, (__m128)0i64));
					v5[20] = _mm_cvtsi128_si32(v17);
					v5[21] = _mm_cvtsi128_si32(_mm_srli_si128(v17, 4));
					v5[22] = _mm_cvtsi128_si32(_mm_srli_si128(v17, 8));
					v18 = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v9, v14), _mm_unpacklo_ps(v10, (__m128)0i64));
					v5[24] = _mm_cvtsi128_si32(v18);
					v5[25] = _mm_cvtsi128_si32(_mm_srli_si128(v18, 4));
					v5[26] = _mm_cvtsi128_si32(_mm_srli_si128(v18, 8));
					v5[28] = v8.m128_i32[0];
					v5[29] = v10.m128_i32[0];
					v5[30] = v14.m128_i32[0];
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 232i64))(qword_140C65670);
					v105 = (__m128*)(*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)i + 56i64))(i);
					v106 = a1 + 184;
					sub_1401AFB10(&v105, &v97);
					v19 = _mm_unpackhi_ps(v97, v98);
					v20 = _mm_unpackhi_ps(v99, v100);
					v21 = _mm_unpacklo_ps(v97, v98);
					v22 = _mm_unpacklo_ps(v99, v100);
					v101 = _mm_shuffle_ps(v21, v22, 68);
					v102 = _mm_shuffle_ps(v21, v22, 238);
					v103 = _mm_shuffle_ps(v19, v20, 68);
					v104 = _mm_shuffle_ps(v19, v20, 238);
					(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65670 + 328i64))(
						qword_140C65670,
						64i64,
						&v101);
					(*(void(__fastcall**)(_QWORD))(**((_QWORD**)i + 122) + 24i64))(*((_QWORD*)i + 122));
					(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 656i64))(
						qword_140C65670,
						3i64,
						0i64);
					(*(void(__fastcall**)(_QWORD))(**((_QWORD**)i + 122) + 32i64))(*((_QWORD*)i + 122));
					i[248] = 1;
				}
				goto LABEL_15;
			}
			if (!i[248])
				goto LABEL_13;
			(*(void(__fastcall**)(_DWORD*, _QWORD, _QWORD, _QWORD))(*(_QWORD*)i + 264i64))(i, 0i64, 0i64, 0i64);
			if (!i[248])
				goto LABEL_13;
		}
	LABEL_15:
		v23 = (_QWORD*)*((_QWORD*)i + 140);
		if (v23)
			*v23 = *((_QWORD*)i + 141);
		v24 = *((_QWORD*)i + 141);
		if (v24)
			*(_QWORD*)(v24 + 1120) = *((_QWORD*)i + 140);
		*((_QWORD*)i + 141) = 0i64;
		*((_QWORD*)i + 140) = 0i64;
	}
	for (j = (_DWORD*)a1[664]; j; j = (_DWORD*)a1[664])
	{
		if ((*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)j + 256i64))(j))
		{
			if (!*((_QWORD*)j + 123))
			{
				j[249] = 0;
				result = (*(__int64(__fastcall**)(__int64, _DWORD*))(*(_QWORD*)qword_140C65670 + 176i64))(
					qword_140C65670,
					j + 246);
				if ((int)result < 0)
					return result;
			LABEL_27:
				v26 = (int*)(*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 224i64))(
					qword_140C65670,
					128i64,
					1i64);
				v27 = v26;
				if (v26)
				{
					sub_1407E4830(v26, 0i64, 0x80ui64);
					(*(void(__fastcall**)(_DWORD*, unsigned int*, __int64))(*(_QWORD*)j + 88i64))(j, &v91, 1i64);
					v28 = (__m128)v93;
					v29 = (__m128)v92;
					v30 = (__m128)v94;
					v31 = (__m128)v91;
					v32 = (__m128)v95;
					v33 = (__m128i)_mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128)v94, (__m128)v93),
						_mm_unpacklo_ps((__m128)v92, (__m128)0i64));
					*v27 = v91;
					v27[1] = v29.m128_i32[0];
					v27[2] = v28.m128_i32[0];
					v27[4] = _mm_cvtsi128_si32(v33);
					v27[5] = _mm_cvtsi128_si32(_mm_srli_si128(v33, 4));
					v27[6] = _mm_cvtsi128_si32(_mm_srli_si128(v33, 8));
					v34 = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v31, v28), _mm_unpacklo_ps(v32, (__m128)0i64));
					v27[8] = _mm_cvtsi128_si32(v34);
					v27[9] = _mm_cvtsi128_si32(_mm_srli_si128(v34, 4));
					v27[10] = _mm_cvtsi128_si32(_mm_srli_si128(v34, 8));
					v35 = _mm_unpacklo_ps(v30, v28);
					v36 = (__m128)v96;
					v37 = (__m128i)_mm_unpacklo_ps(v35, _mm_unpacklo_ps(v32, (__m128)0i64));
					v27[12] = _mm_cvtsi128_si32(v37);
					v27[13] = _mm_cvtsi128_si32(_mm_srli_si128(v37, 4));
					v27[14] = _mm_cvtsi128_si32(_mm_srli_si128(v37, 8));
					v38 = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v31, v36), _mm_unpacklo_ps(v29, (__m128)0i64));
					v27[16] = _mm_cvtsi128_si32(v38);
					v27[17] = _mm_cvtsi128_si32(_mm_srli_si128(v38, 4));
					v27[18] = _mm_cvtsi128_si32(_mm_srli_si128(v38, 8));
					v39 = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v30, v36), _mm_unpacklo_ps(v29, (__m128)0i64));
					v27[20] = _mm_cvtsi128_si32(v39);
					v27[21] = _mm_cvtsi128_si32(_mm_srli_si128(v39, 4));
					v27[22] = _mm_cvtsi128_si32(_mm_srli_si128(v39, 8));
					v40 = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v31, v36), _mm_unpacklo_ps(v32, (__m128)0i64));
					v27[24] = _mm_cvtsi128_si32(v40);
					v27[25] = _mm_cvtsi128_si32(_mm_srli_si128(v40, 4));
					v27[26] = _mm_cvtsi128_si32(_mm_srli_si128(v40, 8));
					v27[28] = v30.m128_i32[0];
					v27[29] = v32.m128_i32[0];
					v27[30] = v36.m128_i32[0];
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 232i64))(qword_140C65670);
					v105 = (__m128*)(*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)j + 56i64))(j);
					v106 = a1 + 184;
					sub_1401AFB10(&v105, &v101);
					v41 = _mm_unpackhi_ps(v101, v102);
					v42 = _mm_unpackhi_ps(v103, v104);
					v43 = _mm_unpacklo_ps(v101, v102);
					v44 = _mm_unpacklo_ps(v103, v104);
					v97 = _mm_shuffle_ps(v43, v44, 68);
					v98 = _mm_shuffle_ps(v43, v44, 238);
					v99 = _mm_shuffle_ps(v41, v42, 68);
					v100 = _mm_shuffle_ps(v41, v42, 238);
					(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65670 + 328i64))(
						qword_140C65670,
						64i64,
						&v97);
					(*(void(__fastcall**)(_QWORD))(**((_QWORD**)j + 123) + 24i64))(*((_QWORD*)j + 123));
					(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 656i64))(
						qword_140C65670,
						3i64,
						0i64);
					(*(void(__fastcall**)(_QWORD))(**((_QWORD**)j + 123) + 32i64))(*((_QWORD*)j + 123));
					j[249] = 1;
				}
				goto LABEL_29;
			}
			if (!j[249])
				goto LABEL_27;
			(*(void(__fastcall**)(_DWORD*, _QWORD, __int64))(*(_QWORD*)j + 264i64))(j, 0i64, 1i64);
			if (!j[249])
				goto LABEL_27;
		}
	LABEL_29:
		v45 = (_QWORD*)*((_QWORD*)j + 142);
		if (v45)
			*v45 = *((_QWORD*)j + 143);
		v46 = *((_QWORD*)j + 143);
		if (v46)
			*(_QWORD*)(v46 + 1136) = *((_QWORD*)j + 142);
		*((_QWORD*)j + 143) = 0i64;
		*((_QWORD*)j + 142) = 0i64;
	}
	v47 = a1[633];
	if (v47)
	{
		while (1)
		{
			if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v47 + 256i64))(v47))
				goto LABEL_40;
			if (!*(_QWORD*)(v47 + 1136))
				break;
			if (!*(_DWORD*)(v47 + 1152))
				goto LABEL_38;
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v47 + 264i64))(v47, 0i64, 0i64, 0i64);
			if (!*(_DWORD*)(v47 + 1152))
				goto LABEL_38;
			sub_140370AE0(v47);
		LABEL_45:
			v47 = a1[633];
			if (!v47)
				goto LABEL_46;
		}
		*(_DWORD*)(v47 + 1152) = 0;
		result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 176i64))(
			qword_140C65670,
			v47 + 1136);
		if ((int)result < 0)
			return result;
	LABEL_38:
		v48 = (int*)(*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 224i64))(
			qword_140C65670,
			128i64,
			1i64);
		v49 = v48;
		if (v48)
		{
			sub_1407E4830(v48, 0i64, 0x80ui64);
			(*(void(__fastcall**)(__int64, unsigned int*, _QWORD))(*(_QWORD*)v47 + 88i64))(v47, &v91, 0i64);
			v50 = (__m128)v93;
			v51 = (__m128)v92;
			v52 = (__m128)v94;
			v53 = (__m128)v91;
			v54 = (__m128)v95;
			v55 = (__m128i)_mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128)v94, (__m128)v93),
				_mm_unpacklo_ps((__m128)v92, (__m128)0i64));
			*v49 = v91;
			v49[1] = v51.m128_i32[0];
			v49[2] = v50.m128_i32[0];
			v49[4] = _mm_cvtsi128_si32(v55);
			v49[5] = _mm_cvtsi128_si32(_mm_srli_si128(v55, 4));
			v49[6] = _mm_cvtsi128_si32(_mm_srli_si128(v55, 8));
			v56 = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v53, v50), _mm_unpacklo_ps(v54, (__m128)0i64));
			v49[8] = _mm_cvtsi128_si32(v56);
			v49[9] = _mm_cvtsi128_si32(_mm_srli_si128(v56, 4));
			v49[10] = _mm_cvtsi128_si32(_mm_srli_si128(v56, 8));
			v57 = _mm_unpacklo_ps(v52, v50);
			v58 = (__m128)v96;
			v59 = (__m128i)_mm_unpacklo_ps(v57, _mm_unpacklo_ps(v54, (__m128)0i64));
			v49[12] = _mm_cvtsi128_si32(v59);
			v49[13] = _mm_cvtsi128_si32(_mm_srli_si128(v59, 4));
			v49[14] = _mm_cvtsi128_si32(_mm_srli_si128(v59, 8));
			v60 = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v53, v58), _mm_unpacklo_ps(v51, (__m128)0i64));
			v49[16] = _mm_cvtsi128_si32(v60);
			v49[17] = _mm_cvtsi128_si32(_mm_srli_si128(v60, 4));
			v49[18] = _mm_cvtsi128_si32(_mm_srli_si128(v60, 8));
			v61 = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v52, v58), _mm_unpacklo_ps(v51, (__m128)0i64));
			v49[20] = _mm_cvtsi128_si32(v61);
			v49[21] = _mm_cvtsi128_si32(_mm_srli_si128(v61, 4));
			v49[22] = _mm_cvtsi128_si32(_mm_srli_si128(v61, 8));
			v62 = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v53, v58), _mm_unpacklo_ps(v54, (__m128)0i64));
			v49[24] = _mm_cvtsi128_si32(v62);
			v49[25] = _mm_cvtsi128_si32(_mm_srli_si128(v62, 4));
			v49[26] = _mm_cvtsi128_si32(_mm_srli_si128(v62, 8));
			v49[28] = v52.m128_i32[0];
			v49[29] = v54.m128_i32[0];
			v49[30] = v58.m128_i32[0];
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 232i64))(qword_140C65670);
			v105 = (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v47 + 56i64))(v47);
			v106 = a1 + 184;
			sub_1401AFB10(&v105, &v101);
			v63 = _mm_unpackhi_ps(v101, v102);
			v64 = _mm_unpackhi_ps(v103, v104);
			v65 = _mm_unpacklo_ps(v101, v102);
			v66 = _mm_unpacklo_ps(v103, v104);
			v97 = _mm_shuffle_ps(v65, v66, 68);
			v98 = _mm_shuffle_ps(v65, v66, 238);
			v99 = _mm_shuffle_ps(v63, v64, 68);
			v100 = _mm_shuffle_ps(v63, v64, 238);
			(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65670 + 328i64))(
				qword_140C65670,
				64i64,
				&v97);
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v47 + 1136) + 24i64))(*(_QWORD*)(v47 + 1136));
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 656i64))(
				qword_140C65670,
				3i64,
				0i64);
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v47 + 1136) + 32i64))(*(_QWORD*)(v47 + 1136));
			*(_DWORD*)(v47 + 1152) = 1;
		}
	LABEL_40:
		v67 = *(_QWORD**)(v47 + 1248);
		if (v67)
			*v67 = *(_QWORD*)(v47 + 1256);
		v68 = *(_QWORD*)(v47 + 1256);
		if (v68)
			*(_QWORD*)(v68 + 1248) = *(_QWORD*)(v47 + 1248);
		*(_QWORD*)(v47 + 1248) = 0i64;
		*(_QWORD*)(v47 + 1256) = 0i64;
		goto LABEL_45;
	}
LABEL_46:
	v69 = a1[634];
	if (v69)
	{
		while (1)
		{
			if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v69 + 256i64))(v69))
				goto LABEL_52;
			if (!*(_QWORD*)(v69 + 1144))
				break;
			if (!*(_DWORD*)(v69 + 1156))
				goto LABEL_50;
			(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)v69 + 264i64))(v69, 0i64, 1i64);
			if (!*(_DWORD*)(v69 + 1156))
				goto LABEL_50;
			sub_140370A90(v69);
		LABEL_57:
			v69 = a1[634];
			if (!v69)
				return 0i64;
		}
		*(_DWORD*)(v69 + 1156) = 0;
		result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 176i64))(
			qword_140C65670,
			v69 + 1144);
		if ((int)result < 0)
			return result;
	LABEL_50:
		v70 = (int*)(*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 224i64))(
			qword_140C65670,
			128i64,
			1i64);
		v71 = v70;
		if (v70)
		{
			sub_1407E4830(v70, 0i64, 0x80ui64);
			(*(void(__fastcall**)(__int64, unsigned int*, __int64))(*(_QWORD*)v69 + 88i64))(v69, &v91, 1i64);
			v72 = (__m128)v93;
			v73 = (__m128)v92;
			v74 = (__m128)v94;
			v75 = (__m128)v91;
			v76 = (__m128)v95;
			v77 = (__m128i)_mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128)v94, (__m128)v93),
				_mm_unpacklo_ps((__m128)v92, (__m128)0i64));
			*v71 = v91;
			v71[1] = v73.m128_i32[0];
			v71[2] = v72.m128_i32[0];
			v71[4] = _mm_cvtsi128_si32(v77);
			v71[5] = _mm_cvtsi128_si32(_mm_srli_si128(v77, 4));
			v71[6] = _mm_cvtsi128_si32(_mm_srli_si128(v77, 8));
			v78 = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v75, v72), _mm_unpacklo_ps(v76, (__m128)0i64));
			v71[8] = _mm_cvtsi128_si32(v78);
			v71[9] = _mm_cvtsi128_si32(_mm_srli_si128(v78, 4));
			v71[10] = _mm_cvtsi128_si32(_mm_srli_si128(v78, 8));
			v79 = _mm_unpacklo_ps(v74, v72);
			v80 = (__m128)v96;
			v81 = (__m128i)_mm_unpacklo_ps(v79, _mm_unpacklo_ps(v76, (__m128)0i64));
			v71[12] = _mm_cvtsi128_si32(v81);
			v71[13] = _mm_cvtsi128_si32(_mm_srli_si128(v81, 4));
			v71[14] = _mm_cvtsi128_si32(_mm_srli_si128(v81, 8));
			v82 = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v75, v80), _mm_unpacklo_ps(v73, (__m128)0i64));
			v71[16] = _mm_cvtsi128_si32(v82);
			v71[17] = _mm_cvtsi128_si32(_mm_srli_si128(v82, 4));
			v71[18] = _mm_cvtsi128_si32(_mm_srli_si128(v82, 8));
			v83 = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v74, v80), _mm_unpacklo_ps(v73, (__m128)0i64));
			v71[20] = _mm_cvtsi128_si32(v83);
			v71[21] = _mm_cvtsi128_si32(_mm_srli_si128(v83, 4));
			v71[22] = _mm_cvtsi128_si32(_mm_srli_si128(v83, 8));
			v84 = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v75, v80), _mm_unpacklo_ps(v76, (__m128)0i64));
			v71[24] = _mm_cvtsi128_si32(v84);
			v71[25] = _mm_cvtsi128_si32(_mm_srli_si128(v84, 4));
			v71[26] = _mm_cvtsi128_si32(_mm_srli_si128(v84, 8));
			v71[28] = v74.m128_i32[0];
			v71[29] = v76.m128_i32[0];
			v71[30] = v80.m128_i32[0];
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 232i64))(qword_140C65670);
			v105 = (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v69 + 56i64))(v69);
			v106 = a1 + 184;
			sub_1401AFB10(&v105, &v101);
			v85 = _mm_unpackhi_ps(v101, v102);
			v86 = _mm_unpackhi_ps(v103, v104);
			v87 = _mm_unpacklo_ps(v101, v102);
			v88 = _mm_unpacklo_ps(v103, v104);
			v97 = _mm_shuffle_ps(v87, v88, 68);
			v98 = _mm_shuffle_ps(v87, v88, 238);
			v99 = _mm_shuffle_ps(v85, v86, 68);
			v100 = _mm_shuffle_ps(v85, v86, 238);
			(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65670 + 328i64))(
				qword_140C65670,
				64i64,
				&v97);
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v69 + 1144) + 24i64))(*(_QWORD*)(v69 + 1144));
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 656i64))(
				qword_140C65670,
				3i64,
				0i64);
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v69 + 1144) + 32i64))(*(_QWORD*)(v69 + 1144));
			*(_DWORD*)(v69 + 1156) = 1;
		}
	LABEL_52:
		v89 = *(_QWORD**)(v69 + 1264);
		if (v89)
			*v89 = *(_QWORD*)(v69 + 1272);
		v90 = *(_QWORD*)(v69 + 1272);
		if (v90)
			*(_QWORD*)(v90 + 1264) = *(_QWORD*)(v69 + 1264);
		*(_QWORD*)(v69 + 1264) = 0i64;
		*(_QWORD*)(v69 + 1272) = 0i64;
		goto LABEL_57;
	}
	return 0i64;
}
// 140C65670: using guessed type __int64 qword_140C65670;

