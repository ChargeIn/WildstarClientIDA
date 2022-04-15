//----- (0000000140628770) ----------------------------------------------------
__int64 __fastcall sub_140628770(float* a1, int* a2, __int64 a3)
{
	__int64 result; // rax
	__m128 v4; // xmm2
	float v5; // xmm4_4
	float v6; // xmm3_4
	float v7; // xmm1_4
	float v8; // xmm0_4

	if (!a3)
		return 2147942487i64;
	v4 = (__m128)0x3F800000u;
	v5 = (float)((float)*a2 - a1[52]) / (float)(a1[56] * 0.5);
	v6 = -(float)((float)((float)a2[1] - a1[53]) / (float)(a1[57] * 0.5));
	v7 = (float)(v6 * v6) + (float)(v5 * v5);
	if (v7 <= 1.0)
	{
		v4.m128_f32[0] = 1.0 - v7;
		*(float*)a3 = v5;
		*(float*)(a3 + 4) = v6;
		result = 0i64;
		*(_DWORD*)(a3 + 8) = _mm_sqrt_ps(v4).m128_u32[0];
	}
	else
	{
		*(_DWORD*)(a3 + 8) = 0;
		result = 0i64;
		v8 = fsqrt(v7);
		*(float*)(a3 + 4) = (float)(1.0 / v8) * v6;
		*(float*)a3 = (float)(1.0 / v8) * v5;
	}
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

