#include "../winhttp.h"

//----- (0000000140475020) ----------------------------------------------------
__int64 __fastcall sub_140475020(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	unsigned int a4,
	float a5,
	float a6,
	unsigned int a7)
{
	__m128 v7; // xmm0
	__m128 v8; // xmm1
	__m128* v13; // rdi
	__m128 v14; // xmm12
	__m128 v15; // xmm2
	__m128 v16; // xmm1
	__m128 v17; // xmm8
	__m128 v18; // xmm10
	__m128 v19; // xmm9
	__int64 v20; // r15
	int v21; // eax
	__m128 v22; // xmm0
	__m128 v23; // xmm2
	__m128 v24; // xmm6
	__m128 v25; // xmm1
	__m128 v26; // xmm2
	__m128 v27; // xmm0
	__m128 v28; // xmm6
	__m128* v29; // rax
	__m128 v30; // xmm1
	int v31; // eax
	__m128 v32; // xmm2
	__m128 v33; // xmm3
	float v34; // xmm0_4
	__int64 result; // rax
	float v36; // xmm1_4
	float v37; // xmm1_4
	__m128 v38; // [rsp+20h] [rbp-98h] BYREF
	char v39[80]; // [rsp+30h] [rbp-88h] BYREF

	v8 = (__m128)a7;
	*(double*)v7.m128_u64 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a3 + 64) + 120i64))(*(_QWORD*)(a3 + 64));
	v13 = *(__m128**)(qword_140C65898 + 29096);
	v14 = (__m128)xmmword_140C78440;
	v15 = _mm_shuffle_ps(v7, v7, 0);
	v8.m128_f32[0] = v15.m128_f32[0];
	v16 = _mm_shuffle_ps(v8, v8, 0);
	v17 = _mm_mul_ps((__m128)xmmword_140C78410, v16);
	v16.m128_f32[0] = _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
	v18 = _mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v15, v15, 0));
	v19 = _mm_mul_ps((__m128)xmmword_140C78420, _mm_shuffle_ps(v16, v16, 0));
	if (!v13)
		v13 = *(__m128**)(qword_140C65898 + 29088);
	v20 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v21 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 848i64))(*(_QWORD*)(a1 + 5864), a4);
	v22 = (__m128) * (unsigned int*)(a3 + 48);
	v23 = _mm_unpacklo_ps((__m128) * (unsigned int*)(a3 + 44), (__m128)0i64);
	if (v21)
	{
		v24 = _mm_add_ps(
			*(__m128*)(*(__int64(__fastcall**)(_QWORD, __m128*, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 856i64))(
				*(_QWORD*)(a1 + 5864),
				&v38,
				a4,
				0i64),
			_mm_unpacklo_ps(_mm_unpacklo_ps((__m128) * (unsigned int*)(a3 + 40), v22), v23));
		v25 = _mm_add_ps(
			*(__m128*)(*(__int64(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a3 + 64) + 136i64))(
				*(_QWORD*)(a3 + 64),
				v39),
			v24);
		v26 = _mm_mul_ps(_mm_shuffle_ps(v25, v25, 85), v19);
		v27 = _mm_mul_ps(_mm_shuffle_ps(v25, v25, 0), v17);
	}
	else
	{
		v28 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128) * (unsigned int*)(a3 + 40), v22), v23);
		v29 = *(__m128**)(qword_140C65898 + 29096);
		if (!v29)
			v29 = *(__m128**)(qword_140C65898 + 29088);
		v30 = *(__m128*)(a1 + 4656);
		v25 = _mm_add_ps(
			*(__m128*)(*(__int64(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a3 + 64) + 136i64))(
				*(_QWORD*)(a3 + 64),
				v39),
			_mm_add_ps(
				v28,
				_mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v30, v30, 85), v29[7]),
							_mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), v29[6])),
						_mm_mul_ps(_mm_shuffle_ps(v30, v30, 170), v29[8])),
					v29[9])));
		v26 = _mm_mul_ps(_mm_shuffle_ps(v25, v25, 0), v17);
		v27 = _mm_mul_ps(_mm_shuffle_ps(v25, v25, 85), v19);
	}
	v31 = *(_DWORD*)(v20 + 8);
	v32 = _mm_add_ps(_mm_add_ps(_mm_add_ps(v26, v27), _mm_mul_ps(_mm_shuffle_ps(v25, v25, 170), v18)), v14);
	v33 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v32, v32, 85), v13[15]),
				_mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v13[14])),
			_mm_mul_ps(_mm_shuffle_ps(v32, v32, 170), v13[16])),
		v13[17]);
	v38 = v33;
	v34 = _mm_shuffle_ps(v33, v33, 255).m128_f32[0];
	v33.m128_f32[0] = (float)(int)(float)((float)((float)((float)((float)(v33.m128_f32[0] * 0.5) * (float)(1.0 / v34))
		+ 0.5)
		* (float)v31)
		+ 0.5);
	result = a2;
	v33.m128_f32[0] = v33.m128_f32[0] - (float)(a5 * 0.5);
	v36 = (float)(int)(float)((float)((float)(0.5 - (float)((float)(v33.m128_f32[1] * 0.5) * (float)(1.0 / v34)))
		* (float)*(int*)(v20 + 12))
		+ 0.5);
	*(_DWORD*)a2 = v33.m128_i32[0];
	v37 = v36 - a6;
	*(float*)(a2 + 16) = v33.m128_f32[0] + a5;
	*(float*)(a2 + 4) = v37;
	*(float*)(a2 + 20) = v37 + a6;
	return result;
}
// 14047509F: variable 'v7' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;

