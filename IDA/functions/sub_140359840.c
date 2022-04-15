#include "../winhttp.h"

//----- (0000000140359840) ----------------------------------------------------
__int64 __fastcall sub_140359840(__m128* a1, __int64 a2, __m128* a3)
{
	__m128 v3; // xmm2
	__m128 v4; // xmm1
	__m128 v5; // xmm0
	__int64 result; // rax
	float v7; // xmm7_4
	float v8; // xmm0_4
	float v9; // xmm9_4
	float v10; // xmm4_4
	float v11; // xmm3_4
	float v12; // xmm9_4
	unsigned __int64 v13; // [rsp+0h] [rbp-58h]
	unsigned __int64 v14; // [rsp+10h] [rbp-48h]

	v3 = a1[102];
	v4 = a1[103];
	v5 = *a3;
	*(_QWORD*)(a2 + 4) = 0i64;
	*(_QWORD*)(a2 + 12) = 0i64;
	*(_QWORD*)(a2 + 24) = 0i64;
	v13 = _mm_add_ps(_mm_mul_ps(v5, v3), v4).m128_u64[0];
	v14 = _mm_add_ps(_mm_mul_ps(a3[1], v3), v4).m128_u64[0];
	if (a1[100].m128_i32[2])
	{
		*(_QWORD*)(a2 + 32) = 0i64;
		*(_DWORD*)(a2 + 44) = 0;
		*(_DWORD*)(a2 + 60) = 1065353216;
		result = a2;
		v7 = a1[100].m128_f32[3];
		*(float*)a2 = 2.0 / (float)(*(float*)&v14 - *(float*)&v13);
		v8 = v7 - a1[101].m128_f32[0];
		*(float*)(a2 + 20) = 2.0 / (float)(*((float*)&v14 + 1) - *((float*)&v13 + 1));
		*(float*)(a2 + 52) = (float)(*((float*)&v13 + 1) + *((float*)&v14 + 1))
			/ (float)(*((float*)&v13 + 1) - *((float*)&v14 + 1));
		*(float*)(a2 + 40) = 1.0 / v8;
		*(float*)(a2 + 48) = (float)(*(float*)&v13 + *(float*)&v14) / (float)(*(float*)&v13 - *(float*)&v14);
		*(float*)(a2 + 56) = (float)(1.0 / v8) * v7;
	}
	else
	{
		*(_QWORD*)(a2 + 48) = 0i64;
		*(_DWORD*)(a2 + 60) = 0;
		*(_DWORD*)(a2 + 44) = -1082130432;
		result = a2;
		v9 = a1[101].m128_f32[0];
		v10 = a1[100].m128_f32[3] * 2.0;
		v11 = 1.0 / (float)(*(float*)&v14 - *(float*)&v13);
		*(float*)(a2 + 32) = (float)(*(float*)&v13 + *(float*)&v14) * v11;
		*(float*)a2 = v11 * v10;
		*(float*)(a2 + 36) = (float)(*((float*)&v13 + 1) + *((float*)&v14 + 1))
			* (float)(1.0 / (float)(*((float*)&v14 + 1) - *((float*)&v13 + 1)));
		*(float*)(a2 + 20) = (float)(1.0 / (float)(*((float*)&v14 + 1) - *((float*)&v13 + 1))) * v10;
		v12 = v9 / (float)(a1[100].m128_f32[3] - v9);
		*(float*)(a2 + 40) = v12;
		*(float*)(a2 + 56) = v12 * a1[100].m128_f32[3];
	}
	return result;
}

