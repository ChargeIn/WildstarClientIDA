//----- (000000014036BEA0) ----------------------------------------------------
__int64 __fastcall sub_14036BEA0(__int64 a1, __m128* a2, __m128* a3, int* a4, __m128** a5, __int64 a6)
{
	__int64* v6; // r15
	__m128 v9; // xmm7
	__m128 v10; // xmm3
	__m128 v11; // xmm0
	__m128 v12; // xmm6
	__m128 v13; // xmm3
	__m128 v14; // xmm2
	__m128i v15; // xmm4
	float v16; // xmm1_4
	__m128 v17; // xmm4
	__m128i v18; // xmm0
	__m128i v19; // xmm3
	__int64 result; // rax
	__int64 v21; // r12
	int v22; // eax
	int v23; // ecx
	__m128 v24; // xmm0
	__int64(__fastcall * v25)(__int64, __int64); // rax
	__m128* v26; // rax
	__m128* v27; // rdi
	__m128* v28; // rdx
	int* v29; // rbx
	__int64 v30; // rdx
	__int64* v31; // r13
	__int64 v32; // rbx
	__int64 v33; // r15
	__int64* v34; // rax
	__m128* v35; // rax
	__m128* v36; // r8
	__int64 v37; // r10
	float v38; // xmm3_4
	_QWORD* v39; // rcx
	__int64 v40; // rcx
	__int64 v41; // rbx
	__int64 i; // rcx
	_QWORD* v43; // rdx
	__int64 v44; // rdx
	__int64* v45; // r13
	__int64 v46; // rbx
	unsigned int v47; // r13d
	__int64 v48; // r15
	__int64* v49; // rax
	__int64 v50; // rcx
	__int64 v51; // rax
	__m128* v52; // rax
	__m128* v53; // rdx
	__m128* v54; // r8
	__int64 v55; // r10
	float v56; // xmm3_4
	_QWORD* v57; // rcx
	__int64 v58; // rcx
	__int64 v59; // rbx
	__int64 j; // rcx
	_QWORD* v61; // rdx
	__int64 v62; // rdx
	__int64* v63; // r13
	__int64 v64; // rbx
	unsigned int v65; // edi
	__int64 v66; // r13
	__int64* v67; // rax
	__int64 v68; // rcx
	__int64 v69; // rax
	int v70; // r15d
	__m128* v71; // rax
	__m128* v72; // rdx
	__m128* v73; // r8
	__int64 v74; // r10
	float v75; // xmm3_4
	_QWORD* v76; // rcx
	__int64 v77; // rcx
	__int64 v78; // rbx
	unsigned int k; // r15d
	__int64 m; // rcx
	_QWORD* v81; // rdx
	__int64 v82; // rdx
	int v83; // r9d
	int v84; // r9d
	__m128 v85; // [rsp+38h] [rbp-99h] BYREF
	__m128 v86; // [rsp+48h] [rbp-89h] BYREF
	int v87[4]; // [rsp+58h] [rbp-79h] BYREF
	__int64(__fastcall * v88)(__int64, __int64); // [rsp+68h] [rbp-69h]
	__int64 v89; // [rsp+70h] [rbp-61h]
	int v90; // [rsp+78h] [rbp-59h]
	__int64 v91; // [rsp+80h] [rbp-51h]
	__m128* v92; // [rsp+88h] [rbp-49h] BYREF
	__int128 v93[2]; // [rsp+98h] [rbp-39h] BYREF
	__m128* v95; // [rsp+130h] [rbp+5Fh] BYREF
	int v96; // [rsp+138h] [rbp+67h] BYREF
	float v97; // [rsp+13Ch] [rbp+6Bh]
	__m128* v98; // [rsp+140h] [rbp+6Fh]

	v6 = (__int64*)a1;
	v9 = (__m128)(unsigned int)dword_140C43FB8;
	v10 = (__m128)(unsigned int)dword_140C43FB8;
	v11 = (__m128)(unsigned int)dword_140C43FB8;
	v10.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * a2->m128_f32[0]) + 0.5) * 2048.0;
	v11.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * a2->m128_f32[2]) + 0.5) * 2048.0;
	v12 = v10;
	v13 = (__m128)(unsigned int)dword_140C43FB8;
	v13.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * a3->m128_f32[0]) + 0.5) * 2048.0;
	v9.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * a3->m128_f32[2]) + 0.5) * 2048.0;
	v14 = (__m128)a3->m128_u32[1];
	v15 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 2264));
	v86 = _mm_unpacklo_ps(_mm_unpacklo_ps(v12, v11), _mm_unpacklo_ps((__m128)a2->m128_u32[1], (__m128)0i64));
	v16 = *((float*)a4 + 1);
	v96 = *a4;
	v17 = _mm_unpacklo_ps(_mm_cvtepi32_ps(v15), (__m128)COERCE_UNSIGNED_INT((float)*(int*)(a1 + 2268)));
	v18 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 2260));
	v97 = v16;
	v85 = _mm_sub_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(v13, v9), _mm_unpacklo_ps(v14, (__m128)0i64)), v86);
	v19 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 2256));
	v93[1] = (__int128)_mm_unpacklo_ps(v17, _mm_unpacklo_ps((__m128)(unsigned int)dword_140C7AC74, (__m128)0i64));
	v93[0] = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(_mm_cvtepi32_ps(v19), _mm_cvtepi32_ps(v18)),
		_mm_unpacklo_ps((__m128)(unsigned int)dword_140C7AC64, (__m128)0i64));
	result = sub_140351780((float*)v93, v86.m128_f32, v85.m128_f32, (float*)&v96);
	if (!(_DWORD)result)
		return result;
	v21 = a6;
	v22 = *(_DWORD*)a6;
	v23 = *(_DWORD*)(a6 + 4);
	v24 = (__m128) * (unsigned int*)(a6 + 32);
	v90 = *(_DWORD*)(a6 + 32);
	v87[0] = v22;
	v87[2] = *(_DWORD*)(a6 + 8);
	v25 = *(__int64(__fastcall**)(__int64, __int64))(a6 + 16);
	v87[1] = v23 & 0x8003F;
	v88 = v25;
	v89 = *(_QWORD*)(a6 + 24);
	v91 = *(_QWORD*)(a6 + 40);
	v26 = sub_14035C650((__int64)v6, &v86, &v85, (float*)&v96, v87);
	v27 = v26;
	v98 = v26;
	if (v26)
		v97 = (*(float(__fastcall**)(__m128*))(v26->m128_u64[0] + 16))(v26);
	if ((v87[0] & 4) != 0)
	{
		v29 = sub_14035C9F0((__int64)v6, &v86, &v85, (float*)&v96);
		if (v29)
		{
			if (v27)
				(*(void(__fastcall**)(__m128*))(v27->m128_u64[0] + 8))(v27);
			v30 = *(_QWORD*)v29;
			v27 = (__m128*)v29;
			v98 = (__m128*)v29;
			v97 = (*(float(__fastcall**)(int*))(v30 + 16))(v29);
		}
		v31 = v6 + 541;
		v32 = v6[541];
		if (v32)
		{
			while (1)
			{
				v33 = *(_QWORD*)(v32 + 232);
				if (v32 == *(_QWORD*)(v21 + 40))
					break;
				v35 = (__m128*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v32 + 80i64))(v32, 0i64);
				if (!(unsigned int)sub_1401B1850(v35 + 2, a2, a3, (float*)&v95)
					|| (v38 = v97, v24 = (__m128)(unsigned int)v95, *(float*)&v95 >= v97))
				{
					v39 = *(_QWORD**)(v32 + 224);
					if (v39)
						*v39 = *(_QWORD*)(v32 + 232);
					goto LABEL_21;
				}
				if ((unsigned int)sub_1401C9B90(v37, v28, v36, (float*)&v95)
					&& (v24 = (__m128)(unsigned int)v95, *(float*)&v95 < v38))
				{
					*(_DWORD*)(v32 + 200) = (_DWORD)v95;
				}
				else
				{
					sub_140370A40(v32);
				}
			LABEL_24:
				v32 = v33;
				if (!v33)
				{
					v6 = (__int64*)a1;
					goto LABEL_26;
				}
			}
			v34 = *(__int64**)(v32 + 224);
			if (v34)
				*v34 = v33;
		LABEL_21:
			v40 = *(_QWORD*)(v32 + 232);
			if (v40)
				*(_QWORD*)(v40 + 224) = *(_QWORD*)(v32 + 224);
			*(_QWORD*)(v32 + 232) = 0i64;
			*(_QWORD*)(v32 + 224) = 0i64;
			goto LABEL_24;
		}
	LABEL_26:
		sub_140370910(v31, (__int64)v28, (__int64(__fastcall*)(__int64, __int64, _QWORD))sub_140393A90);
		v41 = *v31;
		if (*v31)
		{
			do
			{
				v24 = (__m128)LODWORD(v97);
				if (v97 <= *(float*)(v41 + 200))
					break;
				if ((*(unsigned int(__fastcall**)(__int64, __m128*, __m128*, int*, __m128**, int*))(*(_QWORD*)v41
					+ 112i64))(
						v41,
						a2,
						a3,
						&v96,
						&v92,
						v87))
				{
					if (v27)
						(*(void(__fastcall**)(__m128*))(v27->m128_u64[0] + 8))(v27);
					v27 = v92;
					v97 = (*(float(__fastcall**)(__m128*))(v92->m128_u64[0] + 16))(v92);
				}
				v41 = *(_QWORD*)(v41 + 232);
			} while (v41);
			v98 = v27;
		}
		for (i = *v31; *v31; i = *v31)
		{
			v43 = *(_QWORD**)(i + 224);
			if (v43)
				*v43 = *(_QWORD*)(i + 232);
			v44 = *(_QWORD*)(i + 232);
			if (v44)
				*(_QWORD*)(v44 + 224) = *(_QWORD*)(i + 224);
			*(_QWORD*)(i + 224) = 0i64;
			*(_QWORD*)(i + 232) = 0i64;
		}
	}
	if ((v87[0] & 0x7F8) == 0)
		goto LABEL_77;
	v45 = v6 + 632;
	v46 = v6[632];
	v86.m128_u64[0] = (unsigned __int64)(v6 + 632);
	if (!v46)
		goto LABEL_63;
	v47 = 2 - ((v87[0] & 0x38) != 0);
	do
	{
		v48 = *(_QWORD*)(v46 + 1240);
		if (v46 == *(_QWORD*)(v21 + 40))
		{
			v49 = *(__int64**)(v46 + 1232);
			if (v49)
				*v49 = v48;
			v50 = *(_QWORD*)(v46 + 1240);
			if (v50)
				*(_QWORD*)(v50 + 1232) = *(_QWORD*)(v46 + 1232);
		}
		else
		{
			if (*(_DWORD*)(v21 + 8))
			{
				v51 = *(_QWORD*)v46;
				v85.m128_i32[0] = -1;
				(*(void(__fastcall**)(__int64, __m128*))(v51 + 32))(v46, &v85);
			}
			if (!*(_QWORD*)(v46 + 1296))
			{
				v52 = (__m128*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v46 + 80i64))(v46, v47);
				if ((unsigned int)sub_1401B1850(v52 + 2, a2, a3, (float*)&v95))
				{
					v56 = v97;
					v24 = (__m128)(unsigned int)v95;
					if (*(float*)&v95 < v97)
					{
						if ((unsigned int)sub_1401C9B90(v55, v53, v54, (float*)&v95))
						{
							v24 = (__m128)(unsigned int)v95;
							if (*(float*)&v95 < v56)
							{
								*(_DWORD*)(v46 + 1128) = (_DWORD)v95;
								goto LABEL_61;
							}
						}
					}
				}
			}
			v57 = *(_QWORD**)(v46 + 1232);
			if (v57)
				*v57 = *(_QWORD*)(v46 + 1240);
			v58 = *(_QWORD*)(v46 + 1240);
			if (v58)
				*(_QWORD*)(v58 + 1232) = *(_QWORD*)(v46 + 1232);
		}
		*(_QWORD*)(v46 + 1240) = 0i64;
		*(_QWORD*)(v46 + 1232) = 0i64;
	LABEL_61:
		v46 = v48;
	} while (v48);
	v45 = (__int64*)v86.m128_u64[0];
	v6 = (__int64*)a1;
LABEL_63:
	sub_1403707E0(v45, 0i64, (__int64(__fastcall*)(__int64, __int64, _QWORD))sub_1403792D0);
	v59 = *v45;
	if (*v45)
	{
		do
		{
			v24 = (__m128)LODWORD(v97);
			if (v97 <= *(float*)(v59 + 1128))
				break;
			if ((*(unsigned int(__fastcall**)(__int64, __m128*, __m128*, int*, __m128*, int*))(*(_QWORD*)v59 + 112i64))(
				v59,
				a2,
				a3,
				&v96,
				&v86,
				v87))
			{
				if (v27)
					(*(void(__fastcall**)(__m128*))(v27->m128_u64[0] + 8))(v27);
				v27 = (__m128*)v86.m128_u64[0];
				v97 = (*(float(__fastcall**)(unsigned __int64))(*(_QWORD*)v86.m128_u64[0] + 16i64))(v86.m128_u64[0]);
			}
			v59 = *(_QWORD*)(v59 + 1240);
		} while (v59);
		v98 = v27;
	}
	for (j = *v45; *v45; j = *v45)
	{
		v61 = *(_QWORD**)(j + 1232);
		if (v61)
			*v61 = *(_QWORD*)(j + 1240);
		v62 = *(_QWORD*)(j + 1240);
		if (v62)
			*(_QWORD*)(v62 + 1232) = *(_QWORD*)(j + 1232);
		*(_QWORD*)(j + 1232) = 0i64;
		*(_QWORD*)(j + 1240) = 0i64;
	}
LABEL_77:
	if ((v87[0] & 0xF800) == 0)
		goto LABEL_116;
	v63 = v6 + 662;
	v64 = v6[662];
	v85.m128_u64[0] = (unsigned __int64)(v6 + 662);
	if (!v64)
		goto LABEL_102;
	v65 = 2 - ((v87[0] & 0xB800) != 0);
	while (2)
	{
		v66 = *(_QWORD*)(v64 + 1112);
		if (v64 == *(_QWORD*)(v21 + 40))
		{
			v67 = *(__int64**)(v64 + 1104);
			if (v67)
				*v67 = v66;
			v68 = *(_QWORD*)(v64 + 1112);
			if (v68)
				*(_QWORD*)(v68 + 1104) = *(_QWORD*)(v64 + 1104);
			goto LABEL_99;
		}
		if (*(_DWORD*)(v21 + 8))
		{
			v69 = *(_QWORD*)v64;
			LODWORD(v93[0]) = -1;
			(*(void(__fastcall**)(__int64, __int128*))(v69 + 32))(v64, v93);
		}
		if (!*(_QWORD*)(v64 + 1168)
			&& ((v70 = 1, !v88) || (v70 = v88(v64, v89)) != 0)
			&& (v71 = (__m128*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v64 + 80i64))(v64, v65),
				(unsigned int)sub_1401B1850(v71 + 2, a2, a3, (float*)&v95))
			&& (v75 = v97, v24 = (__m128)(unsigned int)v95, *(float*)&v95 < v97)
			&& (unsigned int)sub_1401C9B90(v74, v72, v73, (float*)&v95)
			&& (v24 = (__m128)(unsigned int)v95, *(float*)&v95 < v75))
		{
			*(_DWORD*)(v64 + 964) = (_DWORD)v95;
			*(_DWORD*)(v64 + 968) = v70;
		}
		else
		{
			v76 = *(_QWORD**)(v64 + 1104);
			if (v76)
				*v76 = *(_QWORD*)(v64 + 1112);
			v77 = *(_QWORD*)(v64 + 1112);
			if (v77)
				*(_QWORD*)(v77 + 1104) = *(_QWORD*)(v64 + 1104);
		LABEL_99:
			*(_QWORD*)(v64 + 1104) = 0i64;
			*(_QWORD*)(v64 + 1112) = 0i64;
		}
		v64 = v66;
		if (v66)
			continue;
		break;
	}
	v27 = v98;
	v63 = (__int64*)v85.m128_u64[0];
LABEL_102:
	sub_1403706B0(v63, 0i64, (__int64(__fastcall*)(__int64, __int64, _QWORD))sub_14038C5D0);
	v78 = *v63;
	for (k = 0; v78; v78 = *(_QWORD*)(v78 + 1112))
	{
		if (*(_DWORD*)(v78 + 968) < k)
			break;
		v24 = (__m128)LODWORD(v97);
		if (v97 <= *(float*)(v78 + 964))
			break;
		if ((*(unsigned int(__fastcall**)(__int64, __m128*, __m128*, int*, __m128**, int*))(*(_QWORD*)v78 + 112i64))(
			v78,
			a2,
			a3,
			&v96,
			&v95,
			v87))
		{
			if (v27)
				(*(void(__fastcall**)(__m128*))(v27->m128_u64[0] + 8))(v27);
			v27 = v95;
			v97 = (*(float(__fastcall**)(__m128*))(v95->m128_u64[0] + 16))(v95);
			k = *(_DWORD*)(v78 + 968);
		}
	}
	for (m = *v63; *v63; m = *v63)
	{
		v81 = *(_QWORD**)(m + 1104);
		if (v81)
			*v81 = *(_QWORD*)(m + 1112);
		v82 = *(_QWORD*)(m + 1112);
		if (v82)
			*(_QWORD*)(v82 + 1104) = *(_QWORD*)(m + 1104);
		*(_QWORD*)(m + 1104) = 0i64;
		*(_QWORD*)(m + 1112) = 0i64;
	}
LABEL_116:
	if (!v27)
		return 0i64;
	if ((*(_DWORD*)(v21 + 4) & 0x7FFC0) != 0)
	{
		*(double*)v24.m128_u64 = (*(double(__fastcall**)(__m128*))(v27->m128_u64[0] + 16))(v27);
		v83 = *(_DWORD*)(v21 + 4);
		v85 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(*a3, *a2), _mm_shuffle_ps(v24, v24, 0)), *a2);
		if ((v83 & 0x1FC0) != 0)
			sub_14035CC90(a1, &v85, v27 + 2, v83);
		v84 = *(_DWORD*)(v21 + 4);
		if ((v84 & 0x7E000) != 0)
			sub_14035CD90(a1, &v85, (__int64)&v27[2], v84);
	}
	result = 1i64;
	*a5 = v27;
	return result;
}
// 14036C15A: variable 'v37' is possibly undefined
// 14036C15A: variable 'v28' is possibly undefined
// 14036C15A: variable 'v36' is possibly undefined
// 14036C394: variable 'v55' is possibly undefined
// 14036C394: variable 'v53' is possibly undefined
// 14036C394: variable 'v54' is possibly undefined
// 14036C5E4: variable 'v74' is possibly undefined
// 14036C5E4: variable 'v72' is possibly undefined
// 14036C5E4: variable 'v73' is possibly undefined
// 1403792D0: using guessed type __int64 __fastcall sub_1403792D0();
// 140C43FB8: using guessed type int dword_140C43FB8;
// 140C7AC64: using guessed type int dword_140C7AC64;
// 140C7AC74: using guessed type int dword_140C7AC74;

