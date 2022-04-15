#include "../winhttp.h"

//----- (0000000140341860) ----------------------------------------------------
__m128 __fastcall sub_140341860(__int64 a1, __int64 a2, unsigned __int64 a3)
{
	unsigned __int64 v3; // rbx
	_QWORD* v4; // rsi
	__int128 v6; // xmm6
	unsigned __int64 v8; // r9
	__int64 v9; // rdx
	__m128 v10; // xmm1
	__int64 v11; // rax

	v3 = *(_QWORD*)(a1 + 16);
	v4 = (_QWORD*)(a1 + 8);
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
				v10 = _mm_mul_ps(*(__m128*)(*(_QWORD*)(a2 + 8 * v8) + 48i64), *(__m128*)(*(_QWORD*)(a2 + 8 * v8) + 48i64));
				*(float*)&v6 = *(float*)&v6
					+ (float)((float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 85).m128_f32[0])
						+ _mm_shuffle_ps(v10, v10, 170).m128_f32[0]);
			}
			v11 = *(_QWORD*)(a2 + 8 * v8++);
			v9 += 32i64;
			*(_OWORD*)(*v4 + v9 - 16) = *(_OWORD*)(v11 + 48);
			*(__m128*)(v9 + *v4 - 32) = _mm_sub_ps((__m128)0i64, *(__m128*)(*(_QWORD*)(a2 + 8 * v8 - 8) + 32i64));
		} while (v8 < a3);
	}
	return (__m128)v6;
}

