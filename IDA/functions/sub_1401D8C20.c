//----- (00000001401D8C20) ----------------------------------------------------
int* __fastcall sub_1401D8C20(__int64 a1)
{
	int* result; // rax
	__m128* v3; // rdx
	__int64 v4; // rcx
	int* v5; // rcx
	__m128 v6; // xmm3
	__m128 v7; // xmm2
	__m128 v8; // xmm2
	__m128 v9; // xmm3
	__m128 v10; // xmm3
	__m128 v11; // xmm2
	__m128 v12; // xmm1
	float v13; // xmm0_4

	if (*(_QWORD*)(a1 + 32))
		return *(int**)(a1 + 32);
	result = sub_14018B280(16i64 * *(unsigned int*)(a1 + 12), 0);
	v3 = *(__m128**)(a1 + 24);
	v4 = 4i64 * *(unsigned int*)(a1 + 12);
	*(_QWORD*)(a1 + 32) = result;
	v5 = &result[v4];
	if (result < v5)
	{
		do
		{
			v6 = v3[2];
			v7 = v3[1];
			result += 4;
			v3 += 3;
			v8 = _mm_sub_ps(v7, v3[-3]);
			v9 = _mm_sub_ps(v6, v3[-3]);
			v10 = _mm_sub_ps(
				_mm_mul_ps(_mm_shuffle_ps(v9, v9, 210), _mm_shuffle_ps(v8, v8, 201)),
				_mm_mul_ps(_mm_shuffle_ps(v9, v9, 201), _mm_shuffle_ps(v8, v8, 210)));
			v11 = _mm_mul_ps(v10, v10);
			v11.m128_f32[0] = (float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0])
				+ _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
			v12 = (__m128)0x40400000u;
			v13 = 1.0 / fsqrt(v11.m128_f32[0]);
			v12.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v11.m128_f32[0] * v13) * v13)) * 0.5) * v13, 0.0);
			*((__m128*)result - 1) = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v10);
		} while (result < v5);
		return *(int**)(a1 + 32);
	}
	return result;
}

