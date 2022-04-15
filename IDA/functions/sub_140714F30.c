#include "../winhttp.h"

//----- (0000000140714F30) ----------------------------------------------------
__int64 __fastcall sub_140714F30(__m128* a1, __int64 a2, __int64 a3, int a4)
{
	__m128 v4; // xmm0
	unsigned __int64 v6; // rcx
	__int32 v8; // esi
	__int64 result; // rax
	__m128 v11; // xmm3
	float v12; // xmm4_4
	__m128 v13; // xmm2
	__m128 v14; // [rsp+20h] [rbp-18h] BYREF

	v4 = *a1;
	v6 = a1[2].m128_u64[1];
	v14 = v4;
	v8 = a3;
	result = (*(__int64(__fastcall**)(unsigned __int64, __int64, __int64, __m128*))(*(_QWORD*)v6 + 16i64))(
		v6,
		a2,
		a3,
		&v14);
	v11 = v14;
	if (a4)
	{
		result = a1[2].m128_i64[1];
		if (!*(_DWORD*)(result + 12) || *(_DWORD*)(a2 + 3412))
		{
			a1[1] = 0i64;
			a1[2].m128_i32[0] = 0;
			a1[2].m128_i32[1] = v8;
		}
		else
		{
			a1[1] = _mm_sub_ps(*a1, v14);
			a1[2].m128_i32[0] = 1065353216;
		}
	}
	v12 = a1[2].m128_f32[0];
	if (v12 > 0.0)
	{
		v13 = 0i64;
		result = (unsigned int)(v8 - a1[2].m128_i32[1]);
		v13.m128_f32[0] = fmaxf(0.0, v12 - (float)((float)((float)(int)result * 0.001) * 2.0));
		a1[2].m128_i32[0] = v13.m128_i32[0];
		v11 = _mm_add_ps(_mm_mul_ps(a1[1], _mm_shuffle_ps(v13, v13, 0)), v11);
	}
	*a1 = v11;
	a1[2].m128_i32[1] = v8;
	return result;
}
// 140714F30: using guessed type __m128 var_18;

