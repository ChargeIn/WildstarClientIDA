//----- (0000000140782CD0) ----------------------------------------------------
__int64 __fastcall sub_140782CD0(__int64 a1, __m128* a2, __int64 a3, _DWORD* a4)
{
	__int64 result; // rax
	__m128 v7; // xmm2
	__m128* v8; // rax
	__m128 v9; // xmm2
	__m128 v10; // xmm3
	float v11; // xmm3_4
	__m128 v12; // xmm1
	__m128 v13; // xmm0
	_DWORD* v14; // rax
	__m128 v15; // [rsp+20h] [rbp-28h] BYREF
	__m128 v16; // [rsp+30h] [rbp-18h] BYREF

	result = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 56));
	if (result)
	{
		v7 = *(__m128*)(result + 4576);
		v8 = (__m128*)a2[240].m128_u64[0];
		if (v8)
			v7 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v7, v7, 85), v8[288]),
						_mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v8[287])),
					_mm_mul_ps(_mm_shuffle_ps(v7, v7, 170), v8[289])),
				v8[290]);
		v9 = _mm_sub_ps(v7, a2[247]);
		result = (unsigned int)(a2[264].m128_i32[2] - 1);
		v15 = v9;
		if ((unsigned int)result <= 2)
		{
			v15.m128_i32[1] = 0;
			v9 = v15;
		}
		v10 = _mm_mul_ps(v9, v9);
		v11 = (float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 85).m128_f32[0])
			+ _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
		if (v11 >= *(float*)&dword_140C4B928)
		{
			v12 = 0i64;
			v12.m128_f32[0] = 1.0 / fsqrt(v11);
			v13 = v12;
			v13.m128_f32[0] = (float)((float)((float)(v12.m128_f32[0] * v11) * v12.m128_f32[0]) - 3.0)
				* (float)(v12.m128_f32[0] * -0.5);
			v16 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v9);
			v14 = (_DWORD*)sub_1401B3170((__int64)&v15, v16.m128_f32);
			*a4 = *v14;
			a4[1] = v14[1];
			result = (unsigned int)v14[2];
			a4[2] = result;
		}
	}
	return result;
}
// 140C4B928: using guessed type int dword_140C4B928;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140782CD0: using guessed type __m128 var_18;

