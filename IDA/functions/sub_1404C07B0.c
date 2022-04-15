#include "../winhttp.h"

//----- (00000001404C07B0) ----------------------------------------------------
void __fastcall sub_1404C07B0(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	__m128 v5; // xmm1
	__m128i v6; // xmm2
	__int64 v7; // rax
	__m128 v8; // xmm1
	__m128 v9[4]; // [rsp+20h] [rbp-58h] BYREF
	unsigned __int64 v10; // [rsp+60h] [rbp-18h]

	v2 = *(_QWORD*)(a2 + 6408);
	v5 = *(__m128*)(v2 + 32);
	v6 = *(__m128i*)v2;
	v9[1] = *(__m128*)(v2 + 16);
	v9[2] = v5;
	v5.m128_u64[0] = *(_QWORD*)(v2 + 64);
	v9[3] = *(__m128*)(v2 + 48);
	v10 = v5.m128_u64[0];
	if (_mm_cvtsi128_si32(v6) == 78)
	{
		*(_DWORD*)(a1 + 652) = 1;
		sub_1404C3B50((__int64*)a1);
	}
	v7 = sub_140203DA0(*(_DWORD*)(a1 + 96));
	if (v7 && (*(_BYTE*)(v7 + 16) & 4) != 0)
	{
		(*(void(__fastcall**)(__int64, __m128*, _QWORD))(*(_QWORD*)a1 + 144i64))(a1, v9, 0i64);
		*(_DWORD*)(a2 + 3744) = 0;
		v8 = _mm_mul_ps(v9[0], v9[0]);
		v8.m128_f32[0] = fsqrt(
			(float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0])
			+ _mm_shuffle_ps(v8, v8, 170).m128_f32[0]);
		*(_DWORD*)(a2 + 3732) = v8.m128_i32[0];
		*(_DWORD*)(a2 + 3724) = v8.m128_i32[0];
	}
	sub_1404C6B10(a1);
}

