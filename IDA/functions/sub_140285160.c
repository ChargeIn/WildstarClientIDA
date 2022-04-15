//----- (0000000140285160) ----------------------------------------------------
__int64 __fastcall sub_140285160(__int64 a1, __m128* a2)
{
	__int64 v2; // rbp
	__m128* v4; // rsi
	__m128* v5; // rbp
	__int64 result; // rax
	__m128 v7; // xmm5
	unsigned __int64 v8; // rdx
	_QWORD* v9; // rbx
	__m128* v10; // rax

	v2 = *(_QWORD*)(a1 + 224);
	v4 = *(__m128**)(v2 + 24);
	if (a2[1].m128_f32[0] <= a2->m128_f32[0] || a2[1].m128_f32[1] <= a2->m128_f32[1])
	{
		result = 0i64;
		v4[3].m128_i32[1] = 0;
	}
	else
	{
		v5 = *(__m128**)(v2 + 16);
		if (v5->m128_f32[1] != 0.0 || v5[1].m128_f32[0] != 0.0)
		{
			v8 = v4[2].m128_u64[0];
			v9 = (_QWORD*)(a1 + 328);
			v4[2].m128_u64[1] = 4i64;
			sub_1402626B0((__int64*)(a1 + 328), v8 + 4);
			v10 = (__m128*)(*v9 + 16 * v4[2].m128_u64[0]);
			*v10 = _mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 85), v5[1]), _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), *v5)),
				v5[3]);
			v10[1] = _mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(*v5, _mm_shuffle_ps((__m128)a2->m128_u32[0], (__m128)a2->m128_u32[0], 0)),
					_mm_mul_ps(v5[1], _mm_shuffle_ps((__m128)a2[1].m128_u32[1], (__m128)a2[1].m128_u32[1], 0))),
				v5[3]);
			v10[2] = _mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(a2[1], a2[1], 85), v5[1]),
					_mm_mul_ps(_mm_shuffle_ps(a2[1], a2[1], 0), *v5)),
				v5[3]);
			v10[3] = _mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(*v5, _mm_shuffle_ps((__m128)a2[1].m128_u32[0], (__m128)a2[1].m128_u32[0], 0)),
					_mm_mul_ps(v5[1], _mm_shuffle_ps((__m128)a2->m128_u32[1], (__m128)a2->m128_u32[1], 0))),
				v5[3]);
			result = 0i64;
			v4[3].m128_i32[1] = 1;
			v4[3].m128_i32[0] = 0;
			return result;
		}
		result = 0i64;
		v7 = _mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(a2[1], a2[1], 0), *v5),
				_mm_mul_ps(_mm_shuffle_ps(a2[1], a2[1], 85), v5[1])),
			v5[3]);
		*v4 = _mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), *v5), _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 85), v5[1])),
			v5[3]);
		v4[1] = v7;
		v4[3].m128_i32[0] = 1;
		v4[3].m128_i32[1] = 1;
	}
	v4[2].m128_u64[1] = 0i64;
	return result;
}

