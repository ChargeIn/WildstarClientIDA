#include "../winhttp.h"

//----- (00000001403417A0) ----------------------------------------------------
__m128 __fastcall sub_1403417A0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
	unsigned __int64 v3; // rsi
	__int64* v4; // rbx
	__int128 v6; // xmm6
	unsigned __int64 v8; // r9
	__int64 v9; // r8
	__m128 v10; // xmm2
	__m128 v11; // xmm1
	_OWORD* v12; // rax
	__int64 v13; // rcx

	v3 = *(_QWORD*)(a1 + 16);
	v4 = (__int64*)(a1 + 8);
	v6 = 0i64;
	sub_1402877C0((__int64*)(a1 + 8), a3);
	v8 = 0i64;
	if (a3)
	{
		v9 = 0i64;
		do
		{
			if (v8 < v3)
			{
				v10 = _mm_sub_ps(*(__m128*)(*v4 + v9 + 16), *(__m128*)(*(_QWORD*)(a2 + 8 * v8) + 16i64));
				v11 = _mm_mul_ps(v10, v10);
				*(float*)&v6 = *(float*)&v6
					+ (float)((float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0])
						+ _mm_shuffle_ps(v11, v11, 170).m128_f32[0]);
			}
			v12 = *(_OWORD**)(a2 + 8 * v8);
			v13 = *v4;
			++v8;
			v9 += 32i64;
			*(_OWORD*)(v9 + v13 - 32) = *v12;
			*(_OWORD*)(v9 + v13 - 16) = v12[1];
		} while (v8 < a3);
	}
	return (__m128)v6;
}

