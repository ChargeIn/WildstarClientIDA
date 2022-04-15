#include "../winhttp.h"

//----- (0000000140262570) ----------------------------------------------------
void __fastcall sub_140262570(__int64 a1, __int64 a2, __m128* a3)
{
	__int64 v5; // rax
	__m128 v6; // xmm4
	int v7; // r8d
	int v8; // r9d
	unsigned int v9; // edx
	unsigned int v10; // ecx
	__m128i v11; // xmm2
	float v12; // xmm1_4
	__m128 v13; // xmm5
	float v14; // xmm1_4
	__m128 v15; // xmm1
	__m128 v16; // xmm3
	unsigned __int64 v17; // [rsp+30h] [rbp-18h]

	if (a2)
	{
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 24i64))(a2);
		v6 = 0i64;
		v7 = *(_DWORD*)(v5 + 4);
		v8 = *(_DWORD*)(v5 + 8);
		v9 = v7;
		v10 = v8;
		if (v7 < (int)qword_140C77768)
			v9 = qword_140C77768;
		if (v8 < SHIDWORD(qword_140C77768))
			v10 = HIDWORD(qword_140C77768);
		v11 = _mm_cvtsi32_si128(0);
		v12 = *(float*)(a1 + 1764);
		v17 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v9), v11),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), v11))).m128_u64[0];
		if (v12 <= 1.0)
		{
			v13 = 0i64;
		}
		else
		{
			v13 = (__m128)HIDWORD(v17);
			v13.m128_f32[0] = (float)(*((float*)&v17 + 1) - 1.0) / (float)((float)(v12 - 1.0) * (float)v8);
		}
		v14 = *(float*)(a1 + 1760);
		if (v14 > 1.0)
		{
			v6 = (__m128)(unsigned int)v17;
			v6.m128_f32[0] = (float)(*(float*)&v17 - 1.0) / (float)((float)(v14 - 1.0) * (float)v7);
		}
		v15 = (__m128)0x3F000000u;
		v16 = (__m128)0x3F000000u;
		v16.m128_f32[0] = 0.5 / (float)v7;
		v15.m128_f32[0] = 0.5 / (float)v8;
		*a3 = _mm_unpacklo_ps(_mm_unpacklo_ps(v6, v16), _mm_unpacklo_ps(v13, v15));
	}
	else
	{
		*a3 = 0i64;
	}
}
// 140C77768: using guessed type __int64 qword_140C77768;

