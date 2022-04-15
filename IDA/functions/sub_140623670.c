#include "../winhttp.h"

//----- (0000000140623670) ----------------------------------------------------
void __fastcall sub_140623670(__int64 a1)
{
	__int64 v2; // rsi
	_WORD* v3; // r9
	__int64 v4; // rcx
	int* v5; // rax
	int* v6; // rbx
	int** v7; // rdx
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rax
	double v11; // xmm6_8
	float v12; // xmm8_4
	float v13; // xmm9_4
	float v14; // xmm7_4
	float v15; // xmm0_4
	unsigned int v16; // ecx
	__m128 v17; // xmm10
	__int64 v18; // rax
	__int64 v19; // r14
	__int64 v20; // rcx
	__m128 v21; // xmm6
	__m128 v22; // xmm5
	__m128 v23; // xmm1
	__int64* v24; // rbx
	__int64 v25; // rdi
	__int64 v26; // rax
	__m128 v27; // xmm0
	__m128 v28; // xmm2
	__m128 v29; // xmm9
	void(__fastcall * **v30)(_QWORD); // [rsp+40h] [rbp-C0h]
	__m128 v31; // [rsp+50h] [rbp-B0h] BYREF
	__m128 v32; // [rsp+60h] [rbp-A0h]
	__m128 v33; // [rsp+70h] [rbp-90h]
	__m256 v34; // [rsp+90h] [rbp-70h] BYREF
	__m128 v35; // [rsp+B0h] [rbp-50h]
	__m128 v36; // [rsp+C0h] [rbp-40h]
	__int64 v37; // [rsp+D0h] [rbp-30h]
	__m128 v38; // [rsp+E0h] [rbp-20h] BYREF
	__m128 v39; // [rsp+F0h] [rbp-10h]
	__m128 v40; // [rsp+100h] [rbp+0h]
	__m128 v41; // [rsp+110h] [rbp+10h]
	__int64 v42; // [rsp+120h] [rbp+20h]
	__m256* v43; // [rsp+130h] [rbp+30h] BYREF

	if (!*(_DWORD*)(a1 + 676) && !*(_DWORD*)(a1 + 684))
	{
		v2 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 904));
		if (v2)
		{
			v3 = *(_WORD**)(a1 + 888);
			if (v3)
			{
				if (*v3)
				{
					v4 = *(_QWORD*)(qword_140C65898 + 29256);
					v34 = ymmword_140C78390;
					v37 = 0i64;
					v35 = (__m128)xmmword_140C783B0;
					v36 = (__m128)xmmword_140C783C0;
					if ((*(int(__fastcall**)(__int64, _QWORD, __m256*))(*(_QWORD*)v4 + 176i64))(v4, 0i64, &v34) >= 0)
					{
						v5 = sub_14018B280(32i64, 0);
						v6 = v5;
						if (v5)
						{
							*(_QWORD*)v5 = 0i64;
							*((_QWORD*)v5 + 1) = 0i64;
							*((_QWORD*)v5 + 2) = 0i64;
							*((_QWORD*)v5 + 3) = 0i64;
						}
						else
						{
							v6 = 0i64;
						}
						sub_1400035C0(v6, v30);
						((void(__fastcall*)())(*v30)[1])();
						v7 = (int**)(a1 + 136);
						if (!*((_QWORD*)v6 + 2))
						{
							*((_QWORD*)v6 + 2) = v7;
							*((_QWORD*)v6 + 3) = *v7;
							*v7 = v6;
							v8 = *((_QWORD*)v6 + 3);
							if (v8)
								*(_QWORD*)(v8 + 16) = v6 + 6;
						}
						(*(void(__fastcall**)(_QWORD, int**))(**(_QWORD**)v6 + 152i64))(*(_QWORD*)v6, v7);
						v9 = ((__int64(__fastcall*)())(*v30)[41])();
						v31.m128_u64[0] = 150i64;
						v31.m128_u64[1] = 1065353216i64;
						v32 = 0ui64;
						(*(void(__fastcall**)(__int64, _QWORD, __m128*))(*(_QWORD*)v9 + 584i64))(v9, 0i64, &v31);
						v10 = ((__int64(__fastcall*)())(*v30)[41])();
						(*(void(__fastcall**)(__int64, void(__fastcall*)(__int64, __int64, __int64, int, int, _QWORD*), int*))(*(_QWORD*)v10 + 648i64))(
							v10,
							sub_140623D10,
							v6);
						*(_QWORD*)&v11 = (unsigned int)sub_14046BEC0(v2, *(_DWORD*)(a1 + 1000))[3];
						*(float*)&v11 = (float)(*(float*)&v11 * 6.2831855) + *(float*)(a1 + 1484);
						v12 = sub_1408FE3D0(0.0);
						v13 = sub_1408FC950(0.0);
						v14 = sub_1408FE3D0(v11);
						v15 = sub_1408FC950(v11);
						v32.m128_i32[3] = 0;
						v31.m128_f32[0] = v13 * v15;
						v31.m128_f32[1] = v12 * v15;
						v32.m128_f32[0] = (float)((float)(v13 * v14) * v12) - (float)(v12 * v13);
						v31.m128_u64[1] = COERCE_UNSIGNED_INT(-v14);
						v32.m128_f32[1] = (float)((float)(v12 * v14) * v12) + (float)(v13 * v13);
						v32.m128_f32[2] = v15 * v12;
						v33.m128_f32[0] = (float)(v12 * v12) + (float)((float)(v13 * v14) * v13);
						v33.m128_f32[1] = (float)((float)(v12 * v14) * v13) - (float)(v13 * v12);
						v16 = *(_DWORD*)(a1 + 996);
						v17 = (__m128)xmmword_140C78440;
						v33.m128_u64[1] = COERCE_UNSIGNED_INT(v15 * v13);
						v18 = sub_140237680(v16);
						v19 = v18;
						if (v18
							&& (v20 = *(_QWORD*)(v2 + 5864)) != 0
							&& (*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v20 + 848i64))(
								v20,
								*(unsigned int*)(v18 + 68)))
						{
							(*(void(__fastcall**)(_QWORD, _QWORD, __m256*, _QWORD))(**(_QWORD**)(v2 + 5864) + 888i64))(
								*(_QWORD*)(v2 + 5864),
								*(unsigned int*)(v19 + 68),
								&v34,
								0i64);
							v36.m128_u64[0] = 0i64;
							v36.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0i64, 8));
							v43 = &v34;
							sub_1401AFC20((__int64*)&v43, (double*)v38.m128_u64);
							v21 = v38;
							v22 = v39;
							v38 = _mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v31, v31, 85), v39),
										_mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v38)),
									_mm_mul_ps(_mm_shuffle_ps(v31, v31, 170), v40)),
								_mm_mul_ps(_mm_shuffle_ps(v31, v31, 255), v41));
							v39 = _mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v32, v32, 85), v39),
										_mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v21)),
									_mm_mul_ps(_mm_shuffle_ps(v32, v32, 170), v40)),
								_mm_mul_ps(_mm_shuffle_ps(v32, v32, 255), v41));
							v23 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 170), v40);
							v40 = _mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v33, v33, 85), v22),
										_mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v21)),
									_mm_mul_ps(_mm_shuffle_ps(v33, v33, 170), v40)),
								_mm_mul_ps(_mm_shuffle_ps(v33, v33, 255), v41));
							v41 = _mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v17, v17, 85), v22),
										_mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v21)),
									v23),
								_mm_mul_ps(_mm_shuffle_ps(v17, v17, 255), v41));
							v42 = 0i64;
							((void(__fastcall*)(void(__fastcall***)(_QWORD), __m128*))(*v30)[40])(v30, &v38);
							v24 = *(__int64**)(v2 + 5864);
							v25 = *v24;
							v26 = ((__int64(__fastcall*)())(*v30)[41])();
							(*(void(__fastcall**)(__int64*, _QWORD, __int64))(v25 + 896))(v24, *(unsigned int*)(v19 + 68), v26);
						}
						else
						{
							v27 = (__m128) * (unsigned int*)(a1 + 360);
							v28 = (__m128) * (unsigned int*)(a1 + 356);
							v37 = 0i64;
							v29 = _mm_unpacklo_ps(
								_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 352), v27),
								_mm_unpacklo_ps(v28, (__m128)0x3F800000u));
							*(__m128*)v34.m256_f32 = _mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), (__m128)xmmword_140C78410),
										_mm_mul_ps(_mm_shuffle_ps(v31, v31, 85), (__m128)xmmword_140C78420)),
									_mm_mul_ps(_mm_shuffle_ps(v31, v31, 170), (__m128)xmmword_140C78430)),
								_mm_mul_ps(_mm_shuffle_ps(v31, v31, 255), v29));
							*(__m128*)& v34.m256_f32[4] = _mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v32, v32, 85), (__m128)xmmword_140C78420),
										_mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), (__m128)xmmword_140C78410)),
									_mm_mul_ps(_mm_shuffle_ps(v32, v32, 170), (__m128)xmmword_140C78430)),
								_mm_mul_ps(_mm_shuffle_ps(v32, v32, 255), v29));
							v35 = _mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v33, v33, 85), (__m128)xmmword_140C78420),
										_mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), (__m128)xmmword_140C78410)),
									_mm_mul_ps(_mm_shuffle_ps(v33, v33, 170), (__m128)xmmword_140C78430)),
								_mm_mul_ps(_mm_shuffle_ps(v33, v33, 255), v29));
							v36 = _mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v17, v17, 85), (__m128)xmmword_140C78420),
										_mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), (__m128)xmmword_140C78410)),
									_mm_mul_ps(_mm_shuffle_ps(v17, v17, 170), (__m128)xmmword_140C78430)),
								_mm_mul_ps(_mm_shuffle_ps(v17, v17, 255), v29));
							((void(__fastcall*)(void(__fastcall***)(_QWORD), __m256*))(*v30)[40])(v30, &v34);
						}
					}
				}
			}
		}
	}
}
// 1406237D1: variable 'v30' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 140623670: using guessed type __m128 var_180;

