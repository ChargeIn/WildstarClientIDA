//----- (00000001408F6B80) ----------------------------------------------------
__int64 __fastcall sub_1408F6B80(_DWORD* a1, unsigned __int64 a2, unsigned int a3)
{
	__int64 result; // rax
	unsigned __int64 v4; // r9
	unsigned __int64 v5; // r8
	float v6; // xmm1_4
	unsigned int v7; // eax
	__m128i v8; // xmm0
	unsigned int v9; // eax
	__m128i v10; // xmm0
	unsigned int v11; // eax
	__m128i v12; // xmm0

	result = a3;
	v4 = a2;
	v5 = a2 + 4i64 * a3;
	if (a2 < v5)
	{
		v6 = *(float*)&dword_140C1AA28;
		result = (__int64)(v5 - a2 + 3) / 4;
		if (result >= 4)
		{
			do
			{
				v4 += 16i64;
				v7 = 214013 * *a1 + 2531011;
				v8 = _mm_cvtsi32_si128(v7);
				v9 = 214013 * v7 + 2531011;
				*(float*)(v4 - 16) = _mm_cvtepi32_ps(v8).m128_f32[0] * v6;
				v10 = _mm_cvtsi32_si128(v9);
				v11 = 214013 * v9 + 2531011;
				*(float*)(v4 - 12) = _mm_cvtepi32_ps(v10).m128_f32[0] * v6;
				v12 = _mm_cvtsi32_si128(v11);
				result = 214013 * v11 + 2531011;
				*a1 = result;
				*(float*)(v4 - 8) = _mm_cvtepi32_ps(v12).m128_f32[0] * v6;
				*(float*)(v4 - 4) = (float)(int)result * v6;
			} while ((__int64)v4 < (__int64)(v5 - 12));
		}
		for (; v4 < v5; *(float*)(v4 - 4) = (float)(int)result * v6)
		{
			v4 += 4i64;
			result = (unsigned int)(214013 * *a1 + 2531011);
			*a1 = result;
		}
	}
	return result;
}
// 140C1AA28: using guessed type int dword_140C1AA28;

