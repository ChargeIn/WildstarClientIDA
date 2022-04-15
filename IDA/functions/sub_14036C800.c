#include "../winhttp.h"

//----- (000000014036C800) ----------------------------------------------------
__int64 __fastcall sub_14036C800(__int64 a1, __m128* a2, __m128* a3, int* a4, int** a5, __int64 a6)
{
	_QWORD* v8; // r13
	__m128 v10; // xmm7
	__m128 v11; // xmm3
	__m128 v12; // xmm0
	__m128 v13; // xmm6
	__m128 v14; // xmm0
	__m128 v15; // xmm2
	__m128 v16; // xmm3
	__m128i v17; // xmm2
	__m128 v18; // xmm1
	__m128i v19; // xmm0
	__m128 v20; // xmm3
	__m128 v21; // xmm6
	__m128i v22; // xmm2
	int* v23; // rax
	unsigned __int64 v24; // r12
	__m128* v25; // rax
	_QWORD* v26; // rbx
	__int64 v27; // rax
	__int64* v28; // rcx
	__m128* v29; // rax
	__m128* v30; // rdx
	__m128* v31; // r8
	__int64 v32; // r10
	float v33; // xmm3_4
	__int64 v34; // rcx
	_QWORD* v35; // rbx
	unsigned int v36; // r13d
	__int64 v37; // rax
	__int64* v38; // rcx
	__int64 v39; // rax
	__m128* v40; // rax
	__m128* v41; // rdx
	__m128* v42; // r8
	__int64 v43; // r10
	float v44; // xmm3_4
	__int64 v45; // rcx
	_QWORD* v46; // rbx
	unsigned int v47; // r13d
	__int64 v48; // rax
	__int64* v49; // rcx
	__int64 v50; // rax
	__m128* v51; // rax
	__m128* v52; // rdx
	__m128* v53; // r8
	__int64 v54; // r10
	float v55; // xmm3_4
	__int64 v56; // rcx
	int* v57; // rax
	int* v58; // rbx
	__int64 v59; // rax
	int* v60; // rax
	__int64 v61; // rdx
	int* v62; // rax
	__int64 i; // rcx
	__int64 v64; // rcx
	_QWORD* v65; // rdx
	__int64 v66; // rdx
	__int64 j; // rcx
	__int64 v68; // rcx
	_QWORD* v69; // rdx
	__int64 v70; // rdx
	__int64 k; // rcx
	__int64 v72; // rcx
	_QWORD* v73; // rdx
	__int64 v74; // rdx
	_QWORD* v75; // [rsp+30h] [rbp-D0h] BYREF
	int v76; // [rsp+38h] [rbp-C8h] BYREF
	float v77; // [rsp+3Ch] [rbp-C4h]
	float v78; // [rsp+40h] [rbp-C0h] BYREF
	float v79; // [rsp+44h] [rbp-BCh] BYREF
	_QWORD* v80; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v81; // [rsp+50h] [rbp-B0h] BYREF
	__m128* v82; // [rsp+58h] [rbp-A8h]
	__m128 v83; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v84; // [rsp+70h] [rbp-90h] BYREF
	__m128 v85; // [rsp+80h] [rbp-80h] BYREF
	int v86[4]; // [rsp+90h] [rbp-70h] BYREF
	int v87[4]; // [rsp+A0h] [rbp-60h] BYREF
	__int128 v88[2]; // [rsp+B0h] [rbp-50h] BYREF
	__m128 v89; // [rsp+D0h] [rbp-30h]
	__m128 v90; // [rsp+E0h] [rbp-20h]
	__m128 v91; // [rsp+F0h] [rbp-10h]

	v8 = (_QWORD*)a1;
	if (!a5)
		return 2147942487i64;
	v10 = (__m128)(unsigned int)dword_140C43FB8;
	v11 = (__m128)(unsigned int)dword_140C43FB8;
	v12 = (__m128)(unsigned int)dword_140C43FB8;
	v12.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * a2->m128_f32[2]) + 0.5) * 2048.0;
	v11.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * a2->m128_f32[0]) + 0.5) * 2048.0;
	v13 = _mm_unpacklo_ps(_mm_unpacklo_ps(v11, v12), _mm_unpacklo_ps((__m128)a2->m128_u32[1], (__m128)0i64));
	v14 = (__m128)(unsigned int)dword_140C43FB8;
	v14.m128_f32[0] = *(float*)&dword_140C43FB8 * a3->m128_f32[2];
	v15 = (__m128)a3->m128_u32[1];
	v85 = v13;
	v10.m128_f32[0] = *(float*)&dword_140C43FB8 * a3->m128_f32[0];
	v77 = *((float*)a4 + 1);
	v14.m128_f32[0] = (float)(v14.m128_f32[0] + 0.5) * 2048.0;
	v10.m128_f32[0] = (float)(v10.m128_f32[0] + 0.5) * 2048.0;
	v16 = _mm_unpacklo_ps(_mm_unpacklo_ps(v10, v14), _mm_unpacklo_ps(v15, (__m128)0i64));
	v76 = *a4;
	v17 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 2264));
	v18 = (__m128)COERCE_UNSIGNED_INT((float)*(int*)(a1 + 2268));
	v19 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 2260));
	v91 = v16;
	v20 = _mm_sub_ps(v16, v13);
	v21 = _mm_cvtepi32_ps(v17);
	v22 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 2256));
	v83 = v20;
	v89 = _mm_unpacklo_ps(_mm_unpacklo_ps(v21, v18), _mm_unpacklo_ps((__m128)(unsigned int)dword_140C7AC74, (__m128)0i64));
	v88[1] = (__int128)v89;
	v90 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(_mm_cvtepi32_ps(v22), _mm_cvtepi32_ps(v19)),
		_mm_unpacklo_ps((__m128)(unsigned int)dword_140C7AC64, (__m128)0i64));
	v88[0] = (__int128)v90;
	if (!(unsigned int)sub_140351780((float*)v88, v85.m128_f32, v83.m128_f32, (float*)&v76))
	{
		v23 = sub_14018B280(32i64, 0);
		if (v23)
		{
			*(_QWORD*)v23 = off_140B787C0;
			v23[6] = 1;
			*((_QWORD*)v23 + 1) = 0i64;
			*((_QWORD*)v23 + 2) = 0i64;
			*a5 = v23;
		}
		else
		{
			*a5 = 0i64;
		}
		return 1i64;
	}
	v24 = 0i64;
	v25 = sub_14035C650((__int64)v8, &v85, &v83, (float*)&v76, (_DWORD*)a6);
	v82 = v25;
	if (v25)
	{
		v24 = 1i64;
		v77 = (*(float(__fastcall**)(__m128*))(v25->m128_u64[0] + 16))(v25);
	}
	if ((*(_BYTE*)a6 & 4) != 0)
	{
		v26 = (_QWORD*)v8[541];
		++v24;
		if (v26)
		{
			while (1)
			{
				v27 = v26[29];
				v75 = (_QWORD*)v27;
				if (v26 == *(_QWORD**)(a6 + 40))
					break;
				v29 = (__m128*)(*(__int64(__fastcall**)(_QWORD*, _QWORD))(*v26 + 80i64))(v26, 0i64);
				if (!(unsigned int)sub_1401B1850(v29 + 2, a2, a3, &v78) || (v33 = v77, v78 >= v77))
				{
					v28 = (__int64*)v26[28];
					if (v28)
					{
						v27 = v26[29];
						goto LABEL_23;
					}
				LABEL_24:
					v34 = v26[29];
					if (v34)
						*(_QWORD*)(v34 + 224) = v26[28];
					v26[29] = 0i64;
					v26[28] = 0i64;
					goto LABEL_27;
				}
				if ((unsigned int)sub_1401C9B90(v32, v30, v31, &v78) && v78 < v33)
					++v24;
				else
					sub_140370A40((__int64)v26);
			LABEL_27:
				v26 = v75;
				if (!v75)
					goto LABEL_28;
			}
			v28 = (__int64*)v26[28];
			if (v28)
				LABEL_23:
			*v28 = v27;
			goto LABEL_24;
		}
	}
LABEL_28:
	if ((*(_DWORD*)a6 & 0x7F8) != 0)
	{
		v35 = (_QWORD*)v8[632];
		if (v35)
		{
			v36 = 2 - ((*(_DWORD*)a6 & 0x38) != 0);
			while (1)
			{
				v37 = v35[155];
				v75 = (_QWORD*)v37;
				if (v35 == *(_QWORD**)(a6 + 40))
					break;
				if (*(_DWORD*)(a6 + 8))
				{
					v39 = *v35;
					v86[0] = -1;
					(*(void(__fastcall**)(_QWORD*, int*))(v39 + 32))(v35, v86);
				}
				if (v35[162]
					|| (v40 = (__m128*)(*(__int64(__fastcall**)(_QWORD*, _QWORD))(*v35 + 80i64))(v35, v36),
						!(unsigned int)sub_1401B1850(v40 + 2, a2, a3, &v79))
					|| (v44 = v77, v79 >= v77))
				{
					v38 = (__int64*)v35[154];
					if (v38)
					{
						v37 = v35[155];
						goto LABEL_45;
					}
				LABEL_46:
					v45 = v35[155];
					if (v45)
						*(_QWORD*)(v45 + 1232) = v35[154];
					v35[154] = 0i64;
					v35[155] = 0i64;
					goto LABEL_49;
				}
				if ((unsigned int)sub_1401C9B90(v43, v41, v42, &v79) && v79 < v44)
					++v24;
				else
					sub_140371A90((__int64)v35);
			LABEL_49:
				v35 = v75;
				if (!v75)
				{
					v8 = (_QWORD*)a1;
					goto LABEL_51;
				}
			}
			v38 = (__int64*)v35[154];
			if (v38)
				LABEL_45:
			*v38 = v37;
			goto LABEL_46;
		}
	}
LABEL_51:
	if ((*(_DWORD*)a6 & 0xF800) == 0)
		goto LABEL_73;
	v46 = (_QWORD*)v8[662];
	if (!v46)
		goto LABEL_73;
	v47 = 2 - ((*(_DWORD*)a6 & 0xB800) != 0);
	do
	{
		v48 = v46[139];
		v80 = (_QWORD*)v48;
		if (v46 == *(_QWORD**)(a6 + 40))
		{
			v49 = (__int64*)v46[138];
			if (v49)
				goto LABEL_67;
		}
		else
		{
			if (*(_DWORD*)(a6 + 8))
			{
				v50 = *v46;
				v87[0] = -1;
				(*(void(__fastcall**)(_QWORD*, int*))(v50 + 32))(v46, v87);
			}
			if (!v46[146])
			{
				v51 = (__m128*)(*(__int64(__fastcall**)(_QWORD*, _QWORD))(*v46 + 80i64))(v46, v47);
				if ((unsigned int)sub_1401B1850(v51 + 2, a2, a3, (float*)&v75))
				{
					v55 = v77;
					if (*(float*)&v75 < v77 && (unsigned int)sub_1401C9B90(v54, v52, v53, (float*)&v75) && *(float*)&v75 < v55)
					{
						++v24;
						goto LABEL_71;
					}
				}
			}
			v49 = (__int64*)v46[138];
			if (v49)
			{
				v48 = v46[139];
			LABEL_67:
				*v49 = v48;
			}
		}
		v56 = v46[139];
		if (v56)
			*(_QWORD*)(v56 + 1104) = v46[138];
		v46[139] = 0i64;
		v46[138] = 0i64;
	LABEL_71:
		v46 = v80;
	} while (v80);
	v8 = (_QWORD*)a1;
LABEL_73:
	v57 = sub_14018B280(32i64, 0);
	v58 = v57;
	if (v57)
	{
		*(_QWORD*)v57 = off_140B787C0;
		v57[6] = 1;
		*((_QWORD*)v57 + 1) = 0i64;
		*((_QWORD*)v57 + 2) = 0i64;
	}
	else
	{
		v58 = 0i64;
	}
	*((_QWORD*)v58 + 1) = 0i64;
	v59 = 8 * v24;
	if (!is_mul_ok(v24, 8ui64))
		v59 = -1i64;
	v60 = sub_14018B280(v59, 0);
	v61 = (__int64)v82;
	*((_QWORD*)v58 + 2) = v60;
	if (v61)
		*(_QWORD*)&v60[2 * (*((_QWORD*)v58 + 1))++] = v61;
	if ((*(_BYTE*)a6 & 4) != 0)
	{
		v62 = sub_14035C9F0((__int64)v8, &v85, &v83, (float*)&v76);
		if (v62)
			*(_QWORD*)(*((_QWORD*)v58 + 2) + 8i64 * (*((_QWORD*)v58 + 1))++) = v62;
		for (i = v8[541]; i; i = v8[541])
		{
			if ((*(unsigned int(__fastcall**)(__int64, __m128*, __m128*, int*, _QWORD**, __int64))(*(_QWORD*)i + 112i64))(
				i,
				a2,
				a3,
				&v76,
				&v80,
				a6))
			{
				*(_QWORD*)(*((_QWORD*)v58 + 2) + 8i64 * (*((_QWORD*)v58 + 1))++) = v80;
			}
			v64 = v8[541];
			v65 = *(_QWORD**)(v64 + 224);
			if (v65)
				*v65 = *(_QWORD*)(v64 + 232);
			v66 = *(_QWORD*)(v64 + 232);
			if (v66)
				*(_QWORD*)(v66 + 224) = *(_QWORD*)(v64 + 224);
			*(_QWORD*)(v64 + 224) = 0i64;
			*(_QWORD*)(v64 + 232) = 0i64;
		}
	}
	if ((*(_DWORD*)a6 & 0x7F8) != 0)
	{
		for (j = v8[632]; j; j = v8[632])
		{
			if ((*(unsigned int(__fastcall**)(__int64, __m128*, __m128*, int*, __int64*, __int64))(*(_QWORD*)j + 112i64))(
				j,
				a2,
				a3,
				&v76,
				&v84,
				a6))
			{
				*(_QWORD*)(*((_QWORD*)v58 + 2) + 8i64 * (*((_QWORD*)v58 + 1))++) = v84;
			}
			v68 = v8[632];
			v69 = *(_QWORD**)(v68 + 1232);
			if (v69)
				*v69 = *(_QWORD*)(v68 + 1240);
			v70 = *(_QWORD*)(v68 + 1240);
			if (v70)
				*(_QWORD*)(v70 + 1232) = *(_QWORD*)(v68 + 1232);
			*(_QWORD*)(v68 + 1232) = 0i64;
			*(_QWORD*)(v68 + 1240) = 0i64;
		}
	}
	if ((*(_DWORD*)a6 & 0xF800) != 0)
	{
		for (k = v8[662]; k; k = v8[662])
		{
			if ((*(unsigned int(__fastcall**)(__int64, __m128*, __m128*, int*, __int64*, __int64))(*(_QWORD*)k + 112i64))(
				k,
				a2,
				a3,
				&v76,
				&v81,
				a6))
			{
				*(_QWORD*)(*((_QWORD*)v58 + 2) + 8i64 * (*((_QWORD*)v58 + 1))++) = v81;
			}
			v72 = v8[662];
			v73 = *(_QWORD**)(v72 + 1104);
			if (v73)
				*v73 = *(_QWORD*)(v72 + 1112);
			v74 = *(_QWORD*)(v72 + 1112);
			if (v74)
				*(_QWORD*)(v74 + 1104) = *(_QWORD*)(v72 + 1104);
			*(_QWORD*)(v72 + 1104) = 0i64;
			*(_QWORD*)(v72 + 1112) = 0i64;
		}
	}
	*a5 = v58;
	return 0i64;
}
// 14036CA9F: variable 'v32' is possibly undefined
// 14036CA9F: variable 'v30' is possibly undefined
// 14036CA9F: variable 'v31' is possibly undefined
// 14036CBC9: variable 'v43' is possibly undefined
// 14036CBC9: variable 'v41' is possibly undefined
// 14036CBC9: variable 'v42' is possibly undefined
// 14036CCF9: variable 'v54' is possibly undefined
// 14036CCF9: variable 'v52' is possibly undefined
// 14036CCF9: variable 'v53' is possibly undefined
// 140B787C0: using guessed type __int64 (__fastcall *off_140B787C0[5])();
// 140C43FB8: using guessed type int dword_140C43FB8;
// 140C7AC64: using guessed type int dword_140C7AC64;
// 140C7AC74: using guessed type int dword_140C7AC74;
// 14036C800: using guessed type int var_B0[4];
// 14036C800: using guessed type int var_A0[4];

