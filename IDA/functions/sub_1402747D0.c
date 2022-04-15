#include "../winhttp.h"

//----- (00000001402747D0) ----------------------------------------------------
__int64 __fastcall sub_1402747D0(int* a1, int a2, float a3, int* a4, float* a5, __m128* a6)
{
	__m128 v9; // xmm6
	__m128 v10; // xmm4
	__m128 v11; // xmm3
	__m128 v12; // xmm4
	__m128 v13; // xmm5
	__m128 v14; // xmm1
	float v15; // xmm4_4
	__m128 v16; // xmm2
	float v17; // xmm6_4
	__m128 v18; // xmm3
	float v19; // xmm7_4
	float v20; // xmm8_4
	float v21; // xmm9_4
	float v22; // xmm2_4
	float v23; // xmm6_4
	float v24; // xmm5_4
	float v25; // xmm7_4
	int v26; // xmm9_4
	int v27; // xmm8_4
	__int64 result; // rax
	unsigned __int64 v29; // [rsp+38h] [rbp-49h]
	unsigned __int64 v30; // [rsp+38h] [rbp-49h]
	unsigned __int64 v31; // [rsp+58h] [rbp-29h]
	unsigned __int64 v32; // [rsp+68h] [rbp-19h]

	if (a6)
	{
		v9 = *a6;
		v10 = a6[1];
	}
	else
	{
		v11 = 0i64;
		v12 = 0i64;
		v13 = 0i64;
		v11.m128_f32[0] = (float)a1[2600];
		v13.m128_f32[0] = (float)a1[2601];
		v14 = 0i64;
		v9 = _mm_unpacklo_ps(_mm_unpacklo_ps(v11, (__m128)0i64), _mm_unpacklo_ps(v13, (__m128)0i64));
		v12.m128_f32[0] = (float)a1[2602] + v11.m128_f32[0];
		v14.m128_f32[0] = (float)a1[2603] + v13.m128_f32[0];
		v10 = _mm_unpacklo_ps(_mm_unpacklo_ps(v12, (__m128)0i64), _mm_unpacklo_ps(v14, (__m128)0i64));
	}
	v32 = _mm_sub_ps(v10, (__m128)xmmword_140B7AC50).m128_u64[0];
	v29 = _mm_sub_ps(v10, v9).m128_u64[0];
	v31 = _mm_sub_ps(v9, (__m128)xmmword_140B7AC50).m128_u64[0];
	if (a5)
	{
		v15 = *((float*)&v29 + 1);
		if (*((float*)&v29 + 1) <= 1.0)
		{
			v16 = 0i64;
		}
		else
		{
			v16 = (__m128) * ((unsigned int*)a5 + 5);
			v16.m128_f32[0] = (float)((float)(v16.m128_f32[0] - a5[1]) - 1.0) / (float)(*((float*)&v29 + 1) - 1.0);
		}
		v17 = *(float*)&v29;
		if (*(float*)&v29 <= 1.0)
		{
			v18 = 0i64;
		}
		else
		{
			v18 = (__m128) * ((unsigned int*)a5 + 4);
			v18.m128_f32[0] = (float)((float)(v18.m128_f32[0] - *a5) - 1.0) / (float)(*(float*)&v29 - 1.0);
		}
		v19 = a5[1];
		v20 = a5[4];
		v21 = a5[5];
		v30 = _mm_unpacklo_ps(_mm_unpacklo_ps(v18, (__m128)0i64), _mm_unpacklo_ps(v16, (__m128)0i64)).m128_u64[0];
		if (a4)
		{
			v22 = 1.0 / (float)*a4;
			v23 = (float)((float)(*a5 + 0.5) - (float)(*(float*)&v30 * 0.5)) * v22;
			v24 = 1.0 / (float)a4[1];
			v25 = (float)((float)(v19 + 0.5) - (float)(*((float*)&v30 + 1) * 0.5)) * v24;
			*(float*)&v26 = (float)((float)(v21 - 0.5) + (float)(*((float*)&v30 + 1) * 0.5)) * v24;
			*(float*)&v27 = (float)((float)(v20 - 0.5) + (float)(*(float*)&v30 * 0.5)) * v22;
		}
		else
		{
			*(float*)&v27 = (float)((float)(v20 - 0.5) + (float)(*(float*)&v30 * 0.5)) * (float)(1.0 / v17);
			v25 = (float)((float)(v19 + 0.5) - (float)(*((float*)&v30 + 1) * 0.5)) * (float)(1.0 / v15);
			*(float*)&v26 = (float)((float)(v21 - 0.5) + (float)(*((float*)&v30 + 1) * 0.5)) * (float)(1.0 / v15);
			v23 = (float)((float)(*a5 + 0.5) - (float)(*(float*)&v30 * 0.5)) * (float)(1.0 / v17);
		}
	}
	else
	{
		v26 = 1065353216;
		v27 = 1065353216;
		v25 = 0.0;
		v23 = 0.0;
	}
	result = (*(__int64(__fastcall**)(int*, __int64, _QWORD))(*(_QWORD*)a1 + 224i64))(a1, 112i64, 0i64);
	if (result)
	{
		*(_DWORD*)(result + 12) = 1065353216;
		*(_DWORD*)(result + 16) = a2;
		*(_DWORD*)(result + 40) = 1065353216;
		*(_DWORD*)(result + 44) = a2;
		*(_DWORD*)(result + 68) = 1065353216;
		*(_DWORD*)(result + 72) = a2;
		*(_QWORD*)result = v31;
		*(float*)(result + 8) = a3;
		*(_DWORD*)(result + 96) = 1065353216;
		*(_DWORD*)(result + 100) = a2;
		*(_DWORD*)(result + 28) = v31;
		*(_DWORD*)(result + 56) = v32;
		*(_QWORD*)(result + 20) = __PAIR64__(LODWORD(v25), LODWORD(v23));
		*(_DWORD*)(result + 84) = v32;
		*(_QWORD*)(result + 48) = __PAIR64__(v26, LODWORD(v23));
		*(_DWORD*)(result + 32) = HIDWORD(v32);
		*(_DWORD*)(result + 60) = HIDWORD(v31);
		*(_DWORD*)(result + 88) = HIDWORD(v32);
		*(float*)(result + 36) = a3;
		*(_QWORD*)(result + 76) = __PAIR64__(LODWORD(v25), v27);
		*(float*)(result + 64) = a3;
		*(float*)(result + 92) = a3;
		*(_QWORD*)(result + 104) = __PAIR64__(v26, v27);
		(*(void(__fastcall**)(int*))(*(_QWORD*)a1 + 232i64))(a1);
		return (*(__int64(__fastcall**)(int*, __int64, _QWORD))(*(_QWORD*)a1 + 648i64))(a1, 4i64, 0i64);
	}
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;

