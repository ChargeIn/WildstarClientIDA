#include "../winhttp.h"

//----- (0000000140715C00) ----------------------------------------------------
__int64 __fastcall sub_140715C00(unsigned int* a1, __int64 a2, __int64 a3, int a4)
{
	unsigned int v4; // xmm1_4
	unsigned int v6; // esi
	__int64 result; // rax
	float v10; // xmm6_4
	float v11; // xmm8_4
	float v12; // xmm7_4
	__m128 v13; // xmm5
	__m128 v14; // xmm3
	__m128 v15; // xmm12
	__m128 v16; // xmm2
	float v17; // xmm1_4
	int v18; // ecx
	float v19; // xmm2_4
	float v20; // xmm1_4
	int v21; // ecx
	float v22; // xmm3_4
	__m128 v23; // xmm2
	__m128 v24; // xmm1
	__m128 v25; // xmm7
	float v26; // xmm3_4
	int v27; // ecx
	__m128 v28; // xmm0
	__m128 v29; // xmm6
	float v30; // xmm1_4
	int v31; // ecx
	__m128 v32; // [rsp+20h] [rbp-98h] BYREF

	v4 = a1[1];
	v6 = a3;
	v32.m128_i32[0] = *a1;
	*(unsigned __int64*)((char*)v32.m128_u64 + 4) = __PAIR64__(a1[2], v4);
	result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, __m128*))(**((_QWORD**)a1 + 5) + 16i64))(
		*((_QWORD*)a1 + 5),
		a2,
		a3,
		&v32);
	v10 = v32.m128_f32[2];
	v11 = v32.m128_f32[1];
	v12 = v32.m128_f32[0];
	if (a4)
	{
		result = *((_QWORD*)a1 + 5);
		if (!*(_DWORD*)(result + 12) || *(_DWORD*)(a2 + 3412))
		{
			*((_OWORD*)a1 + 1) = 0i64;
			a1[8] = 0;
			a1[9] = v6;
		}
		else
		{
			v16 = (__m128) * a1;
			v13 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128)v32.m128_u32[1], (__m128)v32.m128_u32[2]),
				_mm_unpacklo_ps((__m128)v32.m128_u32[0], (__m128)0i64));
			v15 = (__m128)0xBFC90FDB;
			v14 = (__m128)a1[2];
			v14.m128_f32[0] = (float)((float)(v14.m128_f32[0] - _mm_shuffle_ps(v13, v13, 170).m128_f32[0]) + 3.1415927)
				* 0.15915494;
			v15.m128_f32[0] = fmaxf(-1.5707964, fminf(*((float*)a1 + 1) - v13.m128_f32[0], 1.5707964));
			v16.m128_f32[0] = (float)((float)(v16.m128_f32[0] - _mm_shuffle_ps(v13, v13, 85).m128_f32[0]) + 3.1415927)
				* 0.15915494;
			v17 = v16.m128_f32[0];
			v18 = (int)v16.m128_f32[0];
			if ((int)v16.m128_f32[0] != 0x80000000 && (float)v18 != v16.m128_f32[0])
			{
				result = _mm_movemask_ps(_mm_unpacklo_ps(v16, v16)) & 1;
				v17 = (float)(v18 - result);
			}
			v19 = v16.m128_f32[0] - v17;
			v20 = v14.m128_f32[0];
			v21 = (int)v14.m128_f32[0];
			v16.m128_f32[0] = (float)(v19 * 6.2831855) - 3.1415927;
			if ((int)v14.m128_f32[0] != 0x80000000 && (float)v21 != v14.m128_f32[0])
			{
				result = _mm_movemask_ps(_mm_unpacklo_ps(v14, v14)) & 1;
				v20 = (float)(v21 - result);
			}
			v14.m128_f32[0] = (float)((float)(v14.m128_f32[0] - v20) * 6.2831855) - 3.1415927;
			*((__m128*)a1 + 1) = _mm_unpacklo_ps(_mm_unpacklo_ps(v15, v14), _mm_unpacklo_ps(v16, (__m128)0i64));
			a1[8] = 1065353216;
		}
	}
	v22 = *((float*)a1 + 8);
	if (v22 > 0.0)
	{
		v23 = 0i64;
		result = v6 - a1[9];
		v23.m128_f32[0] = fmaxf(0.0, v22 - (float)((float)((float)(int)result * 0.001) * 2.0));
		a1[8] = v23.m128_i32[0];
		v32 = _mm_mul_ps(*((__m128*)a1 + 1), _mm_shuffle_ps(v23, v23, 0));
		v24 = _mm_shuffle_ps(v32, v32, 85);
		v24.m128_f32[0] = v24.m128_f32[0] + v12;
		v25 = v24;
		v25.m128_f32[0] = (float)(v24.m128_f32[0] + 3.1415927) * 0.15915494;
		v26 = v25.m128_f32[0];
		v27 = (int)v25.m128_f32[0];
		if ((int)v25.m128_f32[0] != 0x80000000 && (float)v27 != v25.m128_f32[0])
		{
			result = _mm_movemask_ps(_mm_unpacklo_ps(v25, v25)) & 1;
			v26 = (float)(v27 - result);
		}
		v28 = (__m128)v32.m128_u32[2];
		v28.m128_f32[0] = v32.m128_f32[2] + v10;
		v12 = (float)((float)(v25.m128_f32[0] - v26) * 6.2831855) - 3.1415927;
		v11 = fmaxf(-1.5707964, fminf(v32.m128_f32[0] + v11, 1.5707964));
		v29 = v28;
		v29.m128_f32[0] = (float)(v28.m128_f32[0] + 3.1415927) * 0.15915494;
		v30 = v29.m128_f32[0];
		v31 = (int)v29.m128_f32[0];
		if ((int)v29.m128_f32[0] != 0x80000000 && (float)v31 != v29.m128_f32[0])
		{
			result = _mm_movemask_ps(_mm_unpacklo_ps(v29, v29)) & 1;
			v30 = (float)(v31 - result);
		}
		v10 = (float)((float)(v29.m128_f32[0] - v30) * 6.2831855) - 3.1415927;
	}
	*(float*)a1 = v12;
	*((float*)a1 + 1) = v11;
	*((float*)a1 + 2) = v10;
	a1[9] = v6;
	return result;
}

