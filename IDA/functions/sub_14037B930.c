//----- (000000014037B930) ----------------------------------------------------
__int64 __fastcall sub_14037B930(__m128* a1)
{
	__m128 v1; // xmm1
	double v3; // xmm6_8
	__m128 v4; // xmm11
	float v5; // xmm3_4
	__m128 v6; // xmm14
	__m128i v7; // xmm13
	__m128 v8; // xmm2
	__m128 v9; // xmm0
	__m128 v10; // xmm10
	__m128 v11; // xmm12
	float v12; // xmm8_4
	float v13; // xmm9_4
	float v14; // xmm7_4
	__m128 v15; // xmm10
	__m128 v16; // xmm1
	__m128 v17; // xmm0
	__m128 v18; // xmm2
	__m128 v19; // xmm4
	__m128 v20; // xmm3
	__m128 v21; // xmm6
	__m128 v22; // xmm7
	__m128 v23; // xmm8
	__m128 v24; // xmm1
	__m128 v25; // xmm3
	__m128 v26; // xmm9
	__m128 v27; // xmm4
	__m128 v28; // xmm10
	__m128 v29; // xmm14
	__m128 v30; // xmm15
	unsigned __int64 v31; // rcx
	__int64 v32; // rax
	__m128 v33; // xmm6
	__m128 v34; // xmm7
	float v35; // xmm11_4
	__m128 v36; // xmm8
	__m128 v37; // xmm9
	unsigned __int64 v38; // rcx
	__int64 v39; // rax
	__m128 v41; // [rsp+20h] [rbp-128h]
	__m128 v42; // [rsp+30h] [rbp-118h]
	__m128 v43; // [rsp+40h] [rbp-108h]
	__m128 v44; // [rsp+50h] [rbp-F8h]
	__m128 v45; // [rsp+60h] [rbp-E8h]
	__m128 v46; // [rsp+70h] [rbp-D8h]
	__m128 v47; // [rsp+80h] [rbp-C8h]
	__int128 v48; // [rsp+90h] [rbp-B8h]
	float v49; // [rsp+150h] [rbp+8h]
	unsigned int v50; // [rsp+158h] [rbp+10h]

	v1 = 0i64;
	*(_QWORD*)&v3 = a1[4].m128_u32[0];
	v4 = _mm_mul_ps((__m128)xmmword_140C78420, (__m128)xmmword_140B7B240);
	v5 = (float)(*(_DWORD*)(a1->m128_u64[0] + 880) - a1[1].m128_i32[2]);
	v1.m128_f32[0] = v5 * 0.001;
	v6 = (__m128)xmmword_140C78440;
	*(float*)&v50 = v5 / (float)a1[9].m128_i32[0];
	v7 = (__m128i)_mm_add_ps(a1[2], _mm_mul_ps(a1[3], _mm_shuffle_ps(v1, v1, 0)));
	v8 = (__m128)a1[9].m128_u32[3];
	v8.m128_f32[0] = (float)((float)(v8.m128_f32[0] - a1[9].m128_f32[2]) * *(float*)&v50) + a1[9].m128_f32[2];
	v9 = _mm_shuffle_ps(v8, v8, 0);
	v10 = _mm_mul_ps((__m128)xmmword_140C78410, v9);
	v9.m128_f32[0] = v8.m128_f32[0] * a1[9].m128_f32[1];
	v49 = (float)((float)(a1[10].m128_f32[0] - a1[10].m128_f32[1]) * (float)(1.0 - *(float*)&v50)) + a1[10].m128_f32[1];
	v11 = _mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v9, v9, 0));
	v12 = sub_1408FE3D0(0.0);
	v13 = sub_1408FC950(0.0);
	v14 = sub_1408FE3D0(v3);
	v9.m128_f32[0] = sub_1408FC950(v3);
	v45.m128_f32[2] = -v14;
	v45.m128_f32[0] = v13 * v9.m128_f32[0];
	v45.m128_f32[1] = v12 * v9.m128_f32[0];
	v45.m128_i32[3] = 0;
	v46.m128_i32[3] = 0;
	v47.m128_i32[3] = 0;
	v46.m128_f32[0] = (float)((float)(v13 * v14) * v12) - (float)(v12 * v13);
	v46.m128_f32[1] = (float)((float)(v12 * v14) * v12) + (float)(v13 * v13);
	v46.m128_f32[2] = v9.m128_f32[0] * v12;
	v47.m128_f32[0] = (float)(v12 * v12) + (float)((float)(v13 * v14) * v13);
	v47.m128_f32[2] = v9.m128_f32[0] * v13;
	v47.m128_f32[1] = (float)((float)(v12 * v14) * v13) - (float)(v13 * v12);
	v41 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v10, v10, 85), v46), _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v45)),
			_mm_mul_ps(_mm_shuffle_ps(v10, v10, 170), v47)),
		_mm_mul_ps(_mm_shuffle_ps(v10, v10, 255), v6));
	v42 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 85), v46), _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), v45)),
			_mm_mul_ps(_mm_shuffle_ps(v4, v4, 170), v47)),
		_mm_mul_ps(_mm_shuffle_ps(v4, v4, 255), v6));
	v43 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v11, v11, 85), v46), _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v45)),
			_mm_mul_ps(_mm_shuffle_ps(v11, v11, 170), v47)),
		_mm_mul_ps(_mm_shuffle_ps(v11, v11, 255), v6));
	v15 = (__m128)v50;
	v16 = (__m128)a1[7].m128_u32[2];
	v16.m128_f32[0] = (float)((float)(v16.m128_f32[0] - a1[7].m128_f32[1]) * *(float*)&v50) + a1[7].m128_f32[1];
	v17 = _mm_shuffle_ps(v16, v16, 0);
	HIDWORD(v48) = HIDWORD(*(unsigned __int128*)&_mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v6, v6, 85), v46),
				_mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), v45)),
			_mm_mul_ps(_mm_shuffle_ps(v6, v6, 170), v47)),
		_mm_mul_ps(_mm_shuffle_ps(v6, v6, 255), v6)));
	*(_QWORD*)&v48 = v7.m128i_i64[0];
	DWORD2(v48) = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8));
	v18 = _mm_mul_ps((__m128)xmmword_140C78420, v17);
	v19 = _mm_mul_ps((__m128)xmmword_140C78410, v17);
	v20 = _mm_mul_ps((__m128)xmmword_140C78430, (__m128)0i64);
	v21 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140C78410, (__m128)xmmword_140C78410, 85), v18),
				_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140C78410, (__m128)xmmword_140C78410, 0), v19)),
			_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140C78410, (__m128)xmmword_140C78410, 170), v20)),
		_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140C78410, (__m128)xmmword_140C78410, 255), v6));
	v22 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140C78420, (__m128)xmmword_140C78420, 85), v18),
				_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140C78420, (__m128)xmmword_140C78420, 0), v19)),
			_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140C78420, (__m128)xmmword_140C78420, 170), v20)),
		_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140C78420, (__m128)xmmword_140C78420, 255), v6));
	v23 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140C78430, (__m128)xmmword_140C78430, 85), v18),
				_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140C78430, (__m128)xmmword_140C78430, 0), v19)),
			_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140C78430, (__m128)xmmword_140C78430, 170), v20)),
		_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140C78430, (__m128)xmmword_140C78430, 255), v6));
	v24 = _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140B7AF10, (__m128)xmmword_140B7AF10, 170), v20);
	v25 = (__m128)v50;
	v26 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140B7AF10, (__m128)xmmword_140B7AF10, 85), v18),
				_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140B7AF10, (__m128)xmmword_140B7AF10, 0), v19)),
			v24),
		_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140B7AF10, (__m128)xmmword_140B7AF10, 255), v6));
	v15.m128_f32[0] = (float)(*(float*)&v50 * a1[8].m128_f32[1]) + 0.5;
	v25.m128_f32[0] = (float)(*(float*)&v50 * a1[8].m128_f32[0]) + 0.5;
	v27 = _mm_unpacklo_ps(_mm_unpacklo_ps(v25, (__m128)0i64), _mm_unpacklo_ps(v15, (__m128)0x3F800000u));
	v28 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v21, v21, 85), (__m128)xmmword_140C78420),
				_mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), (__m128)xmmword_140C78410)),
			_mm_mul_ps(_mm_shuffle_ps(v21, v21, 170), (__m128)xmmword_140C78430)),
		_mm_mul_ps(_mm_shuffle_ps(v21, v21, 255), v27));
	v29 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v22, v22, 85), (__m128)xmmword_140C78420),
				_mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), (__m128)xmmword_140C78410)),
			_mm_mul_ps(_mm_shuffle_ps(v22, v22, 170), (__m128)xmmword_140C78430)),
		_mm_mul_ps(_mm_shuffle_ps(v22, v22, 255), v27));
	v30 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v23, v23, 85), (__m128)xmmword_140C78420),
				_mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), (__m128)xmmword_140C78410)),
			_mm_mul_ps(_mm_shuffle_ps(v23, v23, 170), (__m128)xmmword_140C78430)),
		_mm_mul_ps(_mm_shuffle_ps(v23, v23, 255), v27));
	v44 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v26, v26, 85), (__m128)xmmword_140C78420),
				_mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), (__m128)xmmword_140C78410)),
			_mm_mul_ps(_mm_shuffle_ps(v26, v26, 170), (__m128)xmmword_140C78430)),
		_mm_mul_ps(_mm_shuffle_ps(v26, v26, 255), v27));
	v31 = a1->m128_u64[1];
	if (v31)
	{
		v32 = (*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)v31 + 40i64))(v31);
		v33 = v41;
		v34 = v42;
		v35 = v49;
		v36 = v43;
		v37 = v44;
		*(__m128*)(v32 + 32) = v41;
		*(__m128*)(v32 + 48) = v42;
		*(__m128*)(v32 + 64) = v43;
		*(_OWORD*)(v32 + 80) = v48;
		*(__m128*)(v32 + 160) = v28;
		*(__m128*)(v32 + 176) = v29;
		*(__m128*)(v32 + 192) = v30;
		*(__m128*)(v32 + 208) = v44;
		*(float*)(v32 + 240) = v49;
		*(_DWORD*)(v32 + 256) = a1[10].m128_i32[2];
		*(_DWORD*)(v32 + 260) = a1[10].m128_i32[3];
		*(_DWORD*)(v32 + 252) = a1[7].m128_i32[0];
		(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)a1->m128_u64[1] + 48i64))(a1->m128_u64[1]);
	}
	else
	{
		v33 = v41;
		v34 = v42;
		v36 = v43;
		v35 = v49;
		v37 = v44;
	}
	v38 = a1[1].m128_u64[0];
	if (v38)
	{
		v39 = (*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)v38 + 40i64))(v38);
		*(__m128*)(v39 + 32) = v33;
		*(__m128*)(v39 + 48) = v34;
		*(__m128*)(v39 + 64) = v36;
		*(_OWORD*)(v39 + 80) = v48;
		*(__m128*)(v39 + 160) = v28;
		*(__m128*)(v39 + 176) = v29;
		*(__m128*)(v39 + 192) = v30;
		*(__m128*)(v39 + 208) = v37;
		*(float*)(v39 + 240) = v35;
		*(_DWORD*)(v39 + 256) = a1[10].m128_i32[2];
		*(_DWORD*)(v39 + 260) = a1[10].m128_i32[3];
		*(_DWORD*)(v39 + 252) = a1[7].m128_i32[0];
		(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)a1[1].m128_u64[0] + 48i64))(a1[1].m128_u64[0]);
	}
	return 0i64;
}
// 140B7AF10: using guessed type __int128 xmmword_140B7AF10;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;

