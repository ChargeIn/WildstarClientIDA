#include "../winhttp.h"

//----- (00000001407D6DA0) ----------------------------------------------------
__int64 __fastcall sub_1407D6DA0(__int64 a1, __int64 a2, __m128* a3)
{
	__int64 result; // rax
	float* v6; // rdi
	__m128* v7; // r8
	__m128 v8; // xmm7
	__m128 v9; // xmm1
	float v10; // xmm2_4
	__m128 v11; // xmm1
	float v12; // xmm0_4
	__m128i v13; // xmm1
	__m128 v14; // xmm1
	float v15; // xmm2_4
	__m128 v16; // xmm1
	float v17; // xmm0_4
	__m128i v18; // xmm1
	__m128 v19; // xmm2
	float v20; // xmm0_4
	__m128i v21; // xmm7
	double v22; // xmm7_8
	double v23; // xmm6_8
	float v24; // xmm9_4
	float v25; // xmm10_4
	float v26; // xmm8_4
	float v27; // xmm5_4
	__m128 v28; // [rsp+30h] [rbp-D0h] BYREF
	__m128 v29; // [rsp+40h] [rbp-C0h]
	__m128 v30; // [rsp+50h] [rbp-B0h]
	__int128 v31; // [rsp+60h] [rbp-A0h]
	__int128 v32; // [rsp+70h] [rbp-90h] BYREF
	double v33[8]; // [rsp+80h] [rbp-80h] BYREF
	__m128* v34[10]; // [rsp+C0h] [rbp-40h] BYREF

	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 176i64))(a1);
	if ((result & 1) != 0)
	{
		if (*(_QWORD*)(a1 + 432))
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 184i64))(a1);
			if ((_DWORD)result != -1 && *(_QWORD*)(a1 + 288) > (unsigned __int64)(unsigned int)result)
			{
				v6 = (float*)(*(_QWORD*)(a1 + 280) + 32i64 * (unsigned int)result);
				if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)v6 + 848i64))(*(_QWORD*)v6, 9i64))
				{
					(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)v6 + 880i64))(*(_QWORD*)v6, 9i64);
					v34[0] = a3;
					sub_1401AFC20((__int64*)v34, v33);
					*(_QWORD*)&v32 = v7;
					v34[0] = v7;
					*((_QWORD*)&v32 + 1) = v33;
					v34[1] = (__m128*)v33;
					sub_1401AFB10(v34, &v28);
					v8 = (__m128)0x40400000u;
					v9 = _mm_mul_ps(v28, v28);
					v10 = (float)(v9.m128_f32[0] + _mm_shuffle_ps(v9, v9, 85).m128_f32[0])
						+ _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
					v11 = (__m128)0x40400000u;
					v12 = fsqrt(v10);
					v11.m128_f32[0] = fmaxf(
						(float)((float)(3.0 - (float)((float)(v10 * (float)(1.0 / v12)) * (float)(1.0 / v12)))
							* 0.5)
						* (float)(1.0 / v12),
						0.0);
					v13 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v28);
					v28.m128_u64[0] = v13.m128i_i64[0];
					v28.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
					v14 = _mm_mul_ps(v29, v29);
					v15 = (float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0])
						+ _mm_shuffle_ps(v14, v14, 170).m128_f32[0];
					v16 = (__m128)0x40400000u;
					v17 = fsqrt(v15);
					v16.m128_f32[0] = fmaxf(
						(float)((float)(3.0 - (float)((float)(v15 * (float)(1.0 / v17)) * (float)(1.0 / v17)))
							* 0.5)
						* (float)(1.0 / v17),
						0.0);
					v18 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v29);
					v29.m128_u64[0] = v18.m128i_i64[0];
					v29.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v18, 8));
					v19 = _mm_mul_ps(v30, v30);
					v19.m128_f32[0] = (float)(v19.m128_f32[0] + _mm_shuffle_ps(v19, v19, 85).m128_f32[0])
						+ _mm_shuffle_ps(v19, v19, 170).m128_f32[0];
					v20 = 1.0 / fsqrt(v19.m128_f32[0]);
					*(_QWORD*)((char*)&v31 + 4) = 0i64;
					LODWORD(v31) = 0;
					v8.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v19.m128_f32[0] * v20) * v20)) * 0.5) * v20, 0.0);
					v21 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v30);
					v30.m128_u64[0] = v21.m128i_i64[0];
					v30.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v21, 8));
				}
				else
				{
					*(_QWORD*)&v22 = (unsigned int)dword_140C3B438;
					*(float*)&v22 = *(float*)&dword_140C3B438 * 0.0055555557;
					v23 = v22;
					*(float*)&v22 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * v6[3];
					*(float*)&v23 = *(float*)&v23 * v6[2];
					v24 = sub_1408FE3D0(v23);
					v25 = sub_1408FC950(v23);
					LODWORD(v23) = sub_1408FE3D0(v22);
					v26 = sub_1408FC950(v22);
					LODWORD(v22) = sub_1408FE3D0(0.0);
					v27 = sub_1408FC950(0.0);
					v28.m128_f32[1] = *(float*)&v22 * v26;
					v28.m128_f32[0] = v27 * v26;
					v28.m128_u64[1] = COERCE_UNSIGNED_INT(-*(float*)&v23);
					v29.m128_f32[0] = (float)((float)(v27 * *(float*)&v23) * v24) - (float)(*(float*)&v22 * v25);
					v29.m128_f32[1] = (float)(v27 * v25) + (float)((float)(*(float*)&v22 * *(float*)&v23) * v24);
					v30.m128_f32[0] = (float)((float)(v27 * *(float*)&v23) * v25) + (float)(*(float*)&v22 * v24);
					v29.m128_u64[1] = COERCE_UNSIGNED_INT(v26 * v24);
					v30.m128_u64[1] = COERCE_UNSIGNED_INT(v26 * v25);
					v31 = xmmword_140C78440;
					v30.m128_f32[1] = (float)((float)(*(float*)&v22 * *(float*)&v23) * v25) - (float)(v27 * v24);
				}
				(*(void(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(a1 + 432) + 72i64))(*(_QWORD*)(a1 + 432), &v28);
				v32 = 0i64;
				(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
					qword_140C65670,
					2i64,
					&v32);
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 432) + 112i64))(*(_QWORD*)(a1 + 432));
				(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 432) + 320i64))(*(_QWORD*)(a1 + 432), 1i64);
				(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 432) + 296i64))(*(_QWORD*)(a1 + 432), 1i64);
				return (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 432) + 176i64))(
					*(_QWORD*)(a1 + 432),
					a1 + 2736);
			}
		}
	}
	return result;
}
// 1407D6E75: variable 'v7' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 1407D6DA0: using guessed type double var_F0[8];

