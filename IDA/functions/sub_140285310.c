//----- (0000000140285310) ----------------------------------------------------
void __fastcall sub_140285310(__int64 a1, __m128* a2)
{
	__int64 v2; // rax
	__m128* v4; // rsi
	float v5; // xmm5_4
	float v6; // xmm8_4
	__int32 v7; // ecx
	__m128* v8; // rax
	__int32 v9; // ebx
	__m128 v10; // xmm4
	__m128 v11; // xmm3
	__m128 v12; // xmm3
	__m128 v13; // xmm2
	__m128 v14; // xmm4
	__int128 v15; // xmm0
	int v16; // xmm1_4
	__m128 v17; // xmm1
	__m128 v18; // xmm0
	__m128 v19; // xmm1
	__m128 v20; // xmm0
	__m128 v21; // xmm0
	__m128 v22; // xmm1
	__m128 v23; // xmm0
	__m128 v24; // xmm1
	__m128 v25; // xmm1
	unsigned __int64 v26; // rdx
	bool v27; // zf
	__m128 v28; // xmm1
	unsigned __int64* v29; // rdi
	unsigned __int64 v30; // r14
	__m128 v31; // xmm0
	__m128 v32; // xmm1
	__m128 v33; // xmm0
	__m128 v34; // xmm0
	__m128 v35; // xmm1
	__m128 v36; // xmm0
	__m128 v37; // xmm1
	__m128 v38; // xmm1
	unsigned __int64 v39; // rdx
	__int32 v40; // ebx
	__int64 v41; // rdx
	__m128 v42; // [rsp+40h] [rbp-B8h] BYREF
	__m128 v43; // [rsp+50h] [rbp-A8h]
	__m128 v44; // [rsp+60h] [rbp-98h]
	__m128 v45; // [rsp+70h] [rbp-88h]
	__int128 v46; // [rsp+80h] [rbp-78h] BYREF
	int v47; // [rsp+90h] [rbp-68h]
	int v48; // [rsp+94h] [rbp-64h]
	__m128 v49; // [rsp+A0h] [rbp-58h]
	int v50; // [rsp+B0h] [rbp-48h]
	int v51; // [rsp+B4h] [rbp-44h]

	v2 = *(_QWORD*)(a1 + 224);
	v4 = *(__m128**)(v2 + 24);
	if (v4[3].m128_i32[1])
	{
		v5 = a2->m128_f32[0];
		if (a2->m128_f32[0] >= a2[1].m128_f32[0] || (v6 = a2->m128_f32[1], v6 >= a2[1].m128_f32[1]))
		{
			v4[2].m128_u64[1] = 0i64;
			v4[3].m128_i32[1] = 0;
		}
		else
		{
			v7 = v4[3].m128_i32[0];
			v8 = *(__m128**)(v2 + 16);
			if (v7 && v8->m128_f32[1] == 0.0 && v8[1].m128_f32[0] == 0.0)
			{
				v9 = 0;
				v10 = _mm_min_ps(
					v4[1],
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(a2[1], a2[1], 0), *v8),
							_mm_mul_ps(_mm_shuffle_ps(a2[1], a2[1], 85), v8[1])),
						v8[3]));
				v11 = _mm_max_ps(
					*v4,
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), *v8),
							_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 85), v8[1])),
						v8[3]));
				if (v11.m128_f32[0] >= v10.m128_f32[0]
					|| _mm_shuffle_ps(v11, v11, 85).m128_f32[0] >= _mm_shuffle_ps(v10, v10, 85).m128_f32[0])
				{
					v4[2].m128_u64[1] = 0i64;
					LOBYTE(v9) = 0;
					v4[3].m128_i32[1] = v9;
				}
				else
				{
					*v4 = v11;
					v4[1] = v10;
					v4[2].m128_u64[1] = 0i64;
					LOBYTE(v9) = 1;
					v4[3].m128_i32[1] = v9;
				}
			}
			else
			{
				v12 = v8[1];
				v13 = *v8;
				v14 = v8[3];
				if (v7)
				{
					v15 = (__int128)*v4;
					v47 = v4->m128_i32[0];
					v16 = v4[1].m128_i32[0];
					v46 = v15;
					LODWORD(v15) = v4[1].m128_i32[1];
					v50 = v16;
					v17 = *a2;
					v48 = v15;
					v49 = v4[1];
					v51 = v4->m128_i32[1];
					v18 = _mm_shuffle_ps(v17, v17, 0);
					v19 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 85), v12);
					v20 = _mm_add_ps(_mm_mul_ps(v18, v13), v19);
					v19.m128_f32[0] = v5;
					v42 = _mm_add_ps(v20, v14);
					v21 = a2[1];
					v43 = _mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v13),
							_mm_mul_ps(_mm_shuffle_ps((__m128)a2[1].m128_u32[1], (__m128)a2[1].m128_u32[1], 0), v12)),
						v14);
					v22 = _mm_shuffle_ps(v21, v21, 0);
					v23 = _mm_mul_ps(_mm_shuffle_ps(v21, v21, 85), v12);
					v24 = _mm_add_ps(_mm_mul_ps(v22, v13), v23);
					v23.m128_f32[0] = v6;
					v44 = _mm_add_ps(v24, v14);
					v25 = (__m128)a2[1].m128_u32[0];
					v26 = v4[2].m128_u64[0] + 8;
					v4[2].m128_u64[1] = 8i64;
					v45 = _mm_add_ps(
						_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v25, v25, 0), v13), _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v12)),
						v14);
					sub_1402626B0((__int64*)(a1 + 328), v26);
					sub_140284D10(
						a1,
						(__int64)&v46,
						4i64,
						(__int64)&v42,
						4ui64,
						*(_QWORD*)(a1 + 328) + 16 * v4[2].m128_u64[0],
						&v4[2].m128_u64[1]);
					v27 = v4[2].m128_u64[1] == 0;
					v4[3].m128_i32[0] = 0;
					v4[3].m128_i32[1] = !v27;
				}
				else
				{
					v28 = *a2;
					v29 = &v4[2].m128_u64[1];
					v30 = v4[2].m128_u64[1];
					v31 = _mm_shuffle_ps(v28, v28, 0);
					v32 = _mm_mul_ps(_mm_shuffle_ps(v28, v28, 85), v12);
					v33 = _mm_add_ps(_mm_mul_ps(v31, v13), v32);
					v32.m128_f32[0] = v5;
					v42 = _mm_add_ps(v33, v14);
					v34 = a2[1];
					v43 = _mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v13),
							_mm_mul_ps(_mm_shuffle_ps((__m128)a2[1].m128_u32[1], (__m128)a2[1].m128_u32[1], 0), v12)),
						v14);
					v35 = _mm_shuffle_ps(v34, v34, 0);
					v36 = _mm_mul_ps(_mm_shuffle_ps(v34, v34, 85), v12);
					v37 = _mm_add_ps(_mm_mul_ps(v35, v13), v36);
					v36.m128_f32[0] = v6;
					v44 = _mm_add_ps(v37, v14);
					v38 = (__m128)a2[1].m128_u32[0];
					v39 = v4[2].m128_u64[0];
					v4[2].m128_u64[1] = v30 + 4;
					v45 = _mm_add_ps(
						_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v38, v38, 0), v13), _mm_mul_ps(_mm_shuffle_ps(v36, v36, 0), v12)),
						v14);
					sub_1402626B0((__int64*)(a1 + 328), v30 + 4 + v39);
					v40 = 0;
					if (v30 < 3)
					{
						*v29 = 0i64;
					}
					else
					{
						v41 = *(_QWORD*)(a1 + 328) + 16 * v4[2].m128_u64[0];
						sub_140284D10(a1, v41, v30, (__int64)&v42, 4ui64, v41, &v4[2].m128_u64[1]);
					}
					LOBYTE(v40) = *v29 != 0;
					v4[3].m128_i32[1] = v40;
				}
			}
		}
	}
}

