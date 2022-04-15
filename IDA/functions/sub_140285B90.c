//----- (0000000140285B90) ----------------------------------------------------
__int64 __fastcall sub_140285B90(__int64 a1, __m128* a2)
{
	_QWORD* v2; // r8
	__int64 result; // rax
	__m128 v5; // xmm8
	__m128 v6; // xmm10
	__m128* v7; // rcx
	__m128* v8; // rax
	__int32 v9; // r8d
	__m128 v10; // xmm4
	__m128 v11; // xmm5
	__m128 v12; // xmm1
	__m128 v13; // xmm5
	__m128 v14; // xmm4
	__m128 v15; // xmm6
	__m128 v16; // xmm2
	__m128 v17; // xmm0
	__m128 v18; // xmm3
	__m128 v19; // xmm2
	__m128 v20; // xmm3
	__m128 v21; // xmm1
	__m128 v22; // xmm2
	__m128 v23; // xmm3
	__m128 v24; // xmm0
	__m128 v25; // xmm3
	__m128 v26; // xmm1
	unsigned __int64 v27; // r8
	__m128 v28; // xmm2
	__int64 v29; // r11
	__m128 v30; // xmm3
	__m128 v31; // xmm0
	__m128 v32; // xmm3
	unsigned __int64 v33[2]; // [rsp+40h] [rbp-E8h] BYREF
	__m128 v34; // [rsp+50h] [rbp-D8h] BYREF
	__m128 v35; // [rsp+60h] [rbp-C8h]
	__m128 v36; // [rsp+70h] [rbp-B8h]
	__m128 v37; // [rsp+80h] [rbp-A8h]
	__m128 v38; // [rsp+90h] [rbp-98h] BYREF
	__m128 v39; // [rsp+A0h] [rbp-88h]
	__m128 v40; // [rsp+B0h] [rbp-78h]
	__m128 v41; // [rsp+C0h] [rbp-68h]

	v2 = *(_QWORD**)(a1 + 224);
	if (*(float*)(v2[6] + 12i64) == 0.0)
		return 0i64;
	v5 = (__m128)a2->m128_u32[0];
	if (v5.m128_f32[0] >= a2[1].m128_f32[0])
		return 0i64;
	v6 = (__m128)a2->m128_u32[1];
	if (v6.m128_f32[0] >= a2[1].m128_f32[1])
		return 0i64;
	v7 = (__m128*)v2[3];
	result = v7[3].m128_u32[1];
	if ((_DWORD)result == 1)
	{
		v8 = (__m128*)v2[2];
		v9 = v7[3].m128_i32[0];
		if (v9 && v8->m128_f32[1] == 0.0 && v8[1].m128_f32[0] == 0.0)
		{
			v10 = _mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(a2[1], a2[1], 0), *v8),
					_mm_mul_ps(_mm_shuffle_ps(a2[1], a2[1], 85), v8[1])),
				v8[3]);
			v11 = _mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), *v8), _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 85), v8[1])),
				v8[3]);
			if (v11.m128_f32[0] >= v7->m128_f32[0]
				&& v10.m128_f32[0] <= v7[1].m128_f32[0]
				&& _mm_shuffle_ps(v11, v11, 85).m128_f32[0] >= v7->m128_f32[1]
				&& _mm_shuffle_ps(v10, v10, 85).m128_f32[0] <= v7[1].m128_f32[1])
			{
				return 2i64;
			}
			v12 = _mm_min_ps(v7[1], v10);
			v38 = _mm_max_ps(*v7, v11);
			v39 = v12;
			return v38.m128_f32[0] < v12.m128_f32[0] && v38.m128_f32[1] < v39.m128_f32[1];
		}
		v13 = v8[1];
		v14 = *v8;
		v15 = v8[3];
		if (v9)
		{
			v16 = (__m128)v7[1].m128_u32[1];
			v34 = *v7;
			v17 = v7[1];
			v33[0] = 8i64;
			v18 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v34.m128_u32[0], (__m128)0i64), _mm_unpacklo_ps(v16, (__m128)0i64));
			v19 = _mm_unpacklo_ps((__m128)v7->m128_u32[1], (__m128)0i64);
			v36 = v17;
			v35 = v18;
			v20 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v7[1].m128_u32[0], (__m128)0i64), v19);
			v21 = *a2;
			v22 = _mm_unpacklo_ps((__m128)a2[1].m128_u32[1], (__m128)0i64);
			v37 = v20;
			v23 = _mm_unpacklo_ps(_mm_unpacklo_ps(v5, (__m128)0i64), v22);
			v38 = _mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v14), _mm_mul_ps(_mm_shuffle_ps(v21, v21, 85), v13)),
				v15);
			v24 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v14), _mm_mul_ps(_mm_shuffle_ps(v23, v23, 85), v13));
			v25 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[1].m128_u32[0], (__m128)0i64), _mm_unpacklo_ps(v6, (__m128)0i64));
			v39 = _mm_add_ps(v24, v15);
			v40 = _mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(a2[1], a2[1], 0), v14),
					_mm_mul_ps(_mm_shuffle_ps(a2[1], a2[1], 85), v13)),
				v15);
			v41 = _mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v25, v25, 0), v14), _mm_mul_ps(_mm_shuffle_ps(v25, v25, 85), v13)),
				v15);
			return sub_140284D10(a1, (__int64)&v34, 4i64, (__int64)&v38, 4ui64, 0i64, v33);
		}
		else
		{
			v26 = *a2;
			v27 = v7[2].m128_u64[1];
			v28 = _mm_unpacklo_ps((__m128)a2[1].m128_u32[1], (__m128)0i64);
			v29 = *(_QWORD*)(a1 + 328) + 16 * v7[2].m128_u64[0];
			v33[0] = v27 + 4;
			v30 = _mm_unpacklo_ps(_mm_unpacklo_ps(v5, (__m128)0i64), v28);
			v34 = _mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v14), _mm_mul_ps(_mm_shuffle_ps(v26, v26, 85), v13)),
				v15);
			v31 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), v14), _mm_mul_ps(_mm_shuffle_ps(v30, v30, 85), v13));
			v32 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[1].m128_u32[0], (__m128)0i64), _mm_unpacklo_ps(v6, (__m128)0i64));
			v35 = _mm_add_ps(v31, v15);
			v36 = _mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(a2[1], a2[1], 0), v14),
					_mm_mul_ps(_mm_shuffle_ps(a2[1], a2[1], 85), v13)),
				v15);
			v37 = _mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v14), _mm_mul_ps(_mm_shuffle_ps(v32, v32, 85), v13)),
				v15);
			if (v27 < 3)
				return 0i64;
			else
				return sub_140284D10(a1, v29, v27, (__int64)&v34, 4ui64, 0i64, v33);
		}
	}
	return result;
}

