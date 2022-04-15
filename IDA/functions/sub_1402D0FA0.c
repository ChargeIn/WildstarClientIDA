#include "../winhttp.h"

//----- (00000001402D0FA0) ----------------------------------------------------
__int64 __fastcall sub_1402D0FA0(
	__m128* a1,
	__m128* a2,
	__m128* a3,
	__int64 a4,
	char a5,
	float* a6,
	int a7,
	__int64 a8)
{
	unsigned __int64 v8; // rax
	__m128 v13; // xmm4
	__m128 v14; // xmm3
	__int64* v15; // rcx
	__m128 v16; // xmm5
	__m128 v17; // xmm6
	__m128 v18; // xmm1
	__m128 v19; // xmm0
	__int64 result; // rax
	unsigned int v21; // ebx
	float v22; // xmm2_4
	__m128 v23; // xmm0
	__m128 v24; // xmm1
	__m128 v25; // xmm5
	__m128 v26; // xmm6
	__m128 v27; // xmm5
	__m128 v28; // xmm0
	__m128 v29; // xmm4
	__m128 v30; // xmm0
	__m128 v31; // xmm1
	__m128 v32; // xmm4
	__m128 v33; // xmm2
	float v34[4]; // [rsp+50h] [rbp-C8h] BYREF
	__m128 v35; // [rsp+60h] [rbp-B8h] BYREF
	__m128 v36[5]; // [rsp+70h] [rbp-A8h] BYREF

	v8 = a1->m128_u64[0];
	v35.m128_i32[0] = -1;
	(*(void(__fastcall**)(__m128*, __m128*))(v8 + 88))(a1, &v35);
	v13 = a1[9];
	v14 = a1[8];
	v15 = (__int64*)a1[1].m128_u64[1];
	v16 = a1[10];
	v17 = a1[11];
	v18 = *a3;
	v19 = _mm_shuffle_ps(*a3, *a3, 85);
	v36[0] = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), v14), _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 85), v13)),
			_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 170), v16)),
		v17);
	v35 = _mm_sub_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v14), _mm_mul_ps(v19, v13)),
				_mm_mul_ps(_mm_shuffle_ps(v18, v18, 170), v16)),
			v17),
		v36[0]);
	result = sub_1402D4020(v15, (__int64)v36, v35.m128_f32, a4, a5, v34, a7, (__m128*)a8, (__int64)&a1[18].m128_i64[1]);
	v21 = result;
	if ((_DWORD)result)
	{
		v22 = v34[0];
		if (a6)
			*a6 = v34[0];
		if (a8)
		{
			if ((a7 & 1) != 0)
				*(float*)(a8 + 32) = (float)((float)(a3->m128_f32[1] - a2->m128_f32[1]) * v22) + a2->m128_f32[1];
			if ((a7 & 2) != 0)
			{
				v23 = a1[9];
				v24 = a1[11];
				v25 = a1[8];
				v26 = _mm_unpackhi_ps(v25, v23);
				v27 = _mm_unpacklo_ps(v25, v23);
				v28 = a1[10];
				v29 = _mm_unpackhi_ps(v28, v24);
				v30 = _mm_unpacklo_ps(v28, v24);
				v31 = *(__m128*)a8;
				v36[4] = _mm_shuffle_ps(v26, v29, 238);
				v32 = _mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v31, v31, 85), _mm_shuffle_ps(v27, v30, 238)),
						_mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), _mm_shuffle_ps(v27, v30, 68))),
					_mm_mul_ps(_mm_shuffle_ps(v31, v31, 170), _mm_shuffle_ps(v26, v29, 68)));
				v33 = _mm_mul_ps(v32, v32);
				v33.m128_f32[0] = 1.0
					/ fsqrt(
						(float)(v33.m128_f32[0] + _mm_shuffle_ps(v33, v33, 85).m128_f32[0])
						+ _mm_shuffle_ps(v33, v33, 170).m128_f32[0]);
				*(__m128*)a8 = _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v32);
			}
			if ((a7 & 0x10) != 0)
				*(float*)(a8 + 52) = (*(float(__fastcall**)(__int64))(*(_QWORD*)a1->m128_u64[1] + 184i64))(a1->m128_i64[1]);
			if ((a7 & 0x2000) != 0)
				*(_DWORD*)(a8 + 168) = (*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 216))(a1);
			if ((a7 & 0x8000) != 0)
			{
				*(_DWORD*)(a8 + 208) = (*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 232))(a1);
				*(_QWORD*)(a8 + 212) = 0i64;
				*(_DWORD*)(a8 + 220) = 0;
			}
			return v21;
		}
	}
	return result;
}
// 1402D0FA0: using guessed type float var_C8[4];

