#include "../winhttp.h"

//----- (00000001405D49D0) ----------------------------------------------------
__int64 __fastcall sub_1405D49D0(__int64 a1, __m128* a2, __m128* a3, __m128* a4, __m128* a5, __m128* a6, __int128* a7)
{
	__int128 v7; // xmm8
	__int64 result; // rax
	__m128* v9; // rbx
	int v10; // r13d
	__int32 v12; // ecx
	__int128* v14; // rdx
	__int32 v17; // ecx
	__int64 v18; // rcx
	__int64* v19; // rcx
	__int64 v20; // rax
	unsigned int v21; // edx
	__int64 v22; // rbx
	__int64 v23; // rcx
	__m128 v24; // xmm1
	int v25; // edx
	__int64* v26; // rcx
	__int64 v27; // rax
	float v28; // xmm1_4
	int v29; // eax
	__m128 v30; // xmm0
	__m128 v31; // xmm1
	__int128 v32; // xmm0
	unsigned int v33; // edx
	int v34; // eax
	__int64 v35; // rbx
	int v36; // eax
	float v37; // xmm11_4
	float v38; // xmm3_4
	float v39; // xmm9_4
	float v40; // xmm7_4
	float v41; // xmm4_4
	float v42; // xmm6_4
	float v43; // xmm13_4
	float v44; // xmm10_4
	float v45; // xmm9_4
	float v46; // xmm11_4
	float v47; // xmm12_4
	float v48; // xmm7_4
	float v49; // xmm2_4
	__m128 v50; // xmm1
	__m128 v51; // xmm0
	__int128 v52; // xmm0
	int v53; // edx
	__int64 v54; // rax
	__m128* v55; // rsi
	__int64 v56; // rbx
	float v57; // xmm6_4
	__m128 v58; // xmm0
	int v59; // r13d
	__m128 v60; // xmm1
	_QWORD* v61; // [rsp+80h] [rbp-88h] BYREF
	__m128* v62; // [rsp+88h] [rbp-80h]
	int v63[4]; // [rsp+98h] [rbp-70h] BYREF
	__int128 v64; // [rsp+A8h] [rbp-60h]
	__m128 v65; // [rsp+B8h] [rbp-50h]
	__m128 v66; // [rsp+C8h] [rbp-40h]
	__m128 v67; // [rsp+D8h] [rbp-30h] BYREF
	__int128 v68; // [rsp+E8h] [rbp-20h] BYREF
	__int128 v69[7]; // [rsp+F8h] [rbp-10h] BYREF
	void* retaddr; // [rsp+1D0h] [rbp+C8h] BYREF

	result = (__int64)&retaddr;
	v9 = a6;
	v10 = dword_140C636A8;
	v12 = a4->m128_i32[0];
	v14 = a7;
	v62 = a6;
	if (!v12)
	{
		if (!*(_DWORD*)(a1 + 688) || *(_DWORD*)(a1 + 1044))
		{
			v24 = 0i64;
			result = (unsigned int)(dword_140C636A8 - *(_DWORD*)(a1 + 720));
			v24.m128_f32[0] = (float)(int)result;
			*a5 = _mm_add_ps(a4[1], _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v24, v24, 0), a4[2]), (__m128)xmmword_140B7AB40));
		}
		else
		{
			result = *(_QWORD*)(a1 + 8);
			*a5 = _mm_sub_ps(*(__m128*)(*(_QWORD*)result + 32i64), *(__m128*)(*(_QWORD*)result + 192i64));
		}
		goto LABEL_19;
	}
	v17 = v12 - 1;
	if (v17)
	{
		v18 = (unsigned int)(v17 - 1);
		if (!(_DWORD)v18)
		{
			v21 = a4[1].m128_u32[0];
			v61 = 0i64;
			result = sub_140633CB0(v18, v21, &v61);
			v22 = (__int64)v61;
			if ((int)result >= 0)
			{
				v69[0] = 0i64;
				result = (*(__int64(__fastcall**)(_QWORD*, _QWORD, __m128*, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int32, __int128*, int))(*v61 + 144i64))(
					v61,
					*v61,
					a5,
					0i64,
					0i64,
					0i64,
					0i64,
					0i64,
					0i64,
					0i64,
					a4[1].m128_i32[1],
					v69,
					-1082130432);
			}
			if (v22)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v22 + 8i64))(v22);
			v9 = v62;
			goto LABEL_18;
		}
		if ((_DWORD)v18 != 1)
		{
			*a5 = 0i64;
			goto LABEL_19;
		}
		result = a4[1].m128_u32[0];
		if ((_DWORD)result)
		{
			result = sub_1403D90D0(qword_140C65898, result);
			if (result)
			{
				v19 = *(__int64**)(result + 5864);
				if (v19)
				{
					v20 = *v19;
					if (!a4[1].m128_i32[1])
					{
						result = (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, int*, _QWORD))(v20 + 1064))(
							v19,
							a4[1].m128_u32[2],
							0i64,
							0i64,
							0i64,
							0i64,
							v63,
							0i64);
						v14 = a7;
						if ((int)result >= 0)
							*a5 = v66;
						goto LABEL_19;
					}
					result = (*(__int64(__fastcall**)(__int64*, _QWORD, int*, __int64))(v20 + 888))(
						v19,
						a4[1].m128_u32[2],
						v63,
						1i64);
					*a5 = v66;
				}
			}
		LABEL_18:
			v14 = a7;
		}
	}
	else
	{
		result = a4[1].m128_u32[0];
		if ((_DWORD)result)
		{
			result = sub_1403D90D0(qword_140C65898, result);
			v14 = a7;
			if (result)
				*a5 = *(__m128*)(result + 4656);
		}
	}
LABEL_19:
	if (!a2->m128_i32[0])
	{
		if (!*(_DWORD*)(a1 + 688) || *(_DWORD*)(a1 + 1044))
		{
			v59 = v10 - *(_DWORD*)(a1 + 720);
			v60 = 0i64;
			result = (unsigned int)v59;
			v60.m128_f32[0] = (float)v59;
			v58 = _mm_add_ps(a2[1], _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v60, v60, 0), a2[2]), (__m128)xmmword_140B7AB40));
		}
		else
		{
			result = *(_QWORD*)(a1 + 8);
			v58 = *(__m128*)(*(_QWORD*)result + 32i64);
		}
		*a3 = v58;
		*v9 = _mm_sub_ps(*a5, *a3);
		goto LABEL_69;
	}
	if (a2->m128_i32[0] == 1)
	{
		v53 = a2[1].m128_i32[0];
		if (v53)
		{
			v54 = sub_1403D90D0(qword_140C65898, v53);
			v55 = (__m128*)v54;
			if (v54)
			{
				v56 = *(_QWORD*)(v54 + 5864);
				if (v56 && (*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)v56 + 1072i64))(*(_QWORD*)(v54 + 5864)))
				{
					*a3 = v55[286];
					v57 = v55[300].m128_f32[1];
					a3->m128_f32[1] = (float)((*(float(__fastcall**)(__int64))(*(_QWORD*)v56 + 1096i64))(v56) * v57)
						+ a3->m128_f32[1];
				}
				else
				{
					*a3 = v55[291];
				}
			}
		}
		*v62 = _mm_sub_ps(*a5, *a3);
		result = (__int64)a7;
		*a7 = xmmword_140C77870;
	}
	else
	{
		v23 = (unsigned int)(a2->m128_i32[0] - 2);
		if (a2->m128_i32[0] == 2)
		{
			v33 = a2[1].m128_u32[0];
			v61 = 0i64;
			v34 = sub_140633CB0(v23, v33, &v61);
			v35 = (__int64)v61;
			if (v34 < 0)
			{
				v67 = (__m128)xmmword_140C78450;
			}
			else
			{
				v68 = 0i64;
				(*(void(__fastcall**)(_QWORD*, _QWORD, __m128*, _QWORD, _QWORD, __m128*, _QWORD, _QWORD, _QWORD, _QWORD**, __int32, __int128*, int))(*v61 + 144i64))(
					v61,
					*v61,
					a3,
					0i64,
					0i64,
					&v67,
					0i64,
					0i64,
					0i64,
					&v61,
					a2[1].m128_i32[1],
					&v68,
					-1082130432);
				if (*(float*)&v61 == 0.0)
				{
					v36 = dword_140C4DEA0;
					if (*(_DWORD*)qword_140C63750 < dword_140C4DEA0)
						v36 = *(_DWORD*)qword_140C63750;
					*(float*)(a1 + 16) = (float)(*(float*)&dword_140C3B438 * 0.0055555557)
						* *((float*)&off_140C4DE90 + v36 + 8);
				}
				else
				{
					*(_DWORD*)(a1 + 16) = (_DWORD)v61;
				}
			}
			if (a2[1].m128_i32[2])
			{
				v69[6] = v7;
				v63[3] = 0;
				v37 = _mm_shuffle_ps(v67, v67, 85).m128_f32[0];
				v38 = v37 * 2.0;
				v39 = _mm_shuffle_ps(v67, v67, 170).m128_f32[0];
				v40 = _mm_shuffle_ps(v67, v67, 255).m128_f32[0];
				v41 = v39 * 2.0;
				v42 = v37 * (float)(v37 * 2.0);
				v43 = 1.0 - (float)(v67.m128_f32[0] * (float)(v67.m128_f32[0] * 2.0));
				v44 = v40 * (float)(v67.m128_f32[0] * 2.0);
				v45 = v39 * (float)(v39 * 2.0);
				*(float*)v63 = (float)(1.0 - v42) - v45;
				v46 = v37 * v41;
				v47 = (float)(v67.m128_f32[0] * v41) + (float)(v40 * v38);
				*(float*)&v63[2] = (float)(v67.m128_f32[0] * v41) - (float)(v40 * v38);
				v48 = v40 * v41;
				v65.m128_f32[0] = v47;
				*(float*)&v63[1] = (float)(v67.m128_f32[0] * v38) + v48;
				*((_QWORD*)&v64 + 1) = COERCE_UNSIGNED_INT(v46 + v44);
				v65.m128_f32[1] = v46 - v44;
				v49 = (float)(v67.m128_f32[0] * v38) - v48;
				*((float*)&v64 + 1) = v43 - v45;
				v65.m128_u64[1] = COERCE_UNSIGNED_INT(v43 - v42);
				v50 = _mm_sub_ps((__m128)0i64, v65);
				v66 = (__m128)xmmword_140B7AD00;
				*v62 = v50;
				v51 = _mm_add_ps(v50, *a3);
				*(float*)&v64 = v49;
				*a5 = v51;
				v52 = v64;
			}
			else
			{
				*v62 = _mm_sub_ps(*a5, *a3);
				v52 = xmmword_140C77870;
			}
			result = (__int64)a7;
			*a7 = v52;
			if (v35)
				return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v35 + 8i64))(v35);
		}
		else
		{
			if (a2->m128_i32[0] != 3)
			{
				*a3 = 0i64;
				*v9 = _mm_sub_ps(*a5, (__m128)0i64);
			LABEL_69:
				*v14 = xmmword_140C77870;
				return result;
			}
			v25 = a2[1].m128_i32[0];
			if (v25)
			{
				result = sub_1403D90D0(qword_140C65898, v25);
				if (result)
				{
					v26 = *(__int64**)(result + 5864);
					if (v26)
					{
						v27 = *v26;
						if (a2[1].m128_i32[1])
						{
							(*(void(__fastcall**)(__int64*, _QWORD, int*, __int64))(v27 + 888))(v26, a2[1].m128_u32[2], v63, 1i64);
							v28 = 0.87266463;
							LODWORD(v61) = 1063216883;
						}
						else
						{
							(*(void(__fastcall**)(__int64*, _QWORD, _QWORD, _QWORD**, _QWORD, _QWORD, int*, _QWORD))(v27 + 1064))(
								v26,
								a2[1].m128_u32[2],
								0i64,
								&v61,
								0i64,
								0i64,
								v63,
								0i64);
							v28 = *(float*)&v61;
						}
						*a3 = v66;
						if (v28 == 0.0)
						{
							v29 = dword_140C4DEA0;
							if (*(_DWORD*)qword_140C63750 < dword_140C4DEA0)
								v29 = *(_DWORD*)qword_140C63750;
							*(float*)(a1 + 16) = (float)(*(float*)&dword_140C3B438 * 0.0055555557)
								* *((float*)&off_140C4DE90 + v29 + 8);
						}
						else
						{
							*(float*)(a1 + 16) = v28;
						}
						result = (__int64)a7;
						if (a2[1].m128_i32[3])
						{
							v30 = _mm_sub_ps((__m128)0i64, v65);
							*v9 = v30;
							v31 = v30;
							v32 = v64;
							*a5 = _mm_add_ps(v31, *a3);
							*a7 = v32;
						}
						else
						{
							*v9 = _mm_sub_ps(*a5, *a3);
							*a7 = xmmword_140C77870;
						}
					}
				}
			}
		}
	}
	return result;
}
// 1405D4EBC: variable 'v7' is possibly undefined
// 140B7AB40: using guessed type __int128 xmmword_140B7AB40;
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C4DE90: using guessed type __int64 (__fastcall *off_140C4DE90)();
// 140C4DEA0: using guessed type int dword_140C4DEA0;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C78450: using guessed type __int128 xmmword_140C78450;

