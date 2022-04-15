//----- (00000001407CA8E0) ----------------------------------------------------
__int64 __fastcall sub_1407CA8E0(__int64 a1, unsigned __int64 a2, __int128* a3)
{
	__m128* v6; // rax
	__m128* v7; // rbx
	double v8; // xmm7_8
	double v9; // xmm6_8
	float v10; // xmm9_4
	float v11; // xmm10_4
	float v12; // xmm8_4
	float v13; // xmm0_4
	bool v14; // zf
	float v15; // xmm2_4
	float v16; // xmm4_4
	float v17; // xmm0_4
	unsigned int v18; // xmm8_4
	__m128 v19; // xmm10
	__m128 v20; // xmm6
	__m128 v21; // xmm5
	__m128 v22; // xmm4
	__m128 v23; // xmm7
	__m128 v24; // xmm8
	__m128 v25; // xmm9
	__int128 v26; // xmm1
	__int128 v27; // xmm0
	__int128 v28; // xmm1
	__int128* v29; // rax
	__int64 v30; // rdx
	__m128 v31; // xmm5
	__m128 v32; // xmm4
	__m128 v33; // xmm3
	__m128 v34; // xmm2
	char* v35; // rbx
	__int128 v36; // xmm0
	__m128 v38; // [rsp+30h] [rbp-D0h]
	__int128 v39[3]; // [rsp+40h] [rbp-C0h] BYREF
	int v40; // [rsp+70h] [rbp-90h]
	__int64 v41; // [rsp+74h] [rbp-8Ch]
	int v42; // [rsp+7Ch] [rbp-84h]
	__m128 v43; // [rsp+80h] [rbp-80h] BYREF
	__m128 v44; // [rsp+90h] [rbp-70h] BYREF
	__m128 v45; // [rsp+A0h] [rbp-60h]
	__m128 v46; // [rsp+B0h] [rbp-50h]
	__m128 v47; // [rsp+C0h] [rbp-40h]

	v6 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670
		+ 256i64))(
			qword_140C65670,
			496i64,
			0i64,
			0i64,
			0);
	v7 = v6;
	if (v6)
	{
		sub_140262D50((float*)(a1 + 3008), v6 + 8);
		*(_QWORD*)&v8 = (unsigned int)dword_140C3B438;
		*(float*)&v8 = *(float*)&dword_140C3B438 * 0.0055555557;
		v9 = v8;
		*(float*)&v8 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * *(float*)(a1 + 4324);
		*(float*)&v9 = *(float*)&v9 * *(float*)(a1 + 4320);
		v10 = sub_1408FE3D0(v9);
		v11 = sub_1408FC950(v9);
		LODWORD(v9) = sub_1408FE3D0(v8);
		v12 = sub_1408FC950(v8);
		LODWORD(v8) = sub_1408FE3D0(0.0);
		v13 = sub_1408FC950(0.0);
		v14 = (*(_BYTE*)(a1 + 24) & 2) == 0;
		v43.m128_f32[1] = *(float*)&v8 * v12;
		v43.m128_f32[0] = v13 * v12;
		v43.m128_u64[1] = COERCE_UNSIGNED_INT(-*(float*)&v9);
		v44.m128_f32[0] = (float)((float)(v13 * *(float*)&v9) * v10) - (float)(*(float*)&v8 * v11);
		v45.m128_f32[0] = (float)((float)(v13 * *(float*)&v9) * v11) + (float)(*(float*)&v8 * v10);
		v15 = (float)(v13 * v11) + (float)((float)(*(float*)&v8 * *(float*)&v9) * v10);
		v16 = (float)((float)(*(float*)&v8 * *(float*)&v9) * v11) - (float)(v13 * v10);
		v17 = v12;
		*(float*)&v18 = v12 * v11;
		v19 = (__m128)xmmword_140C78440;
		v44.m128_f32[1] = v15;
		v45.m128_f32[1] = v16;
		v44.m128_u64[1] = COERCE_UNSIGNED_INT(v17 * v10);
		v45.m128_u64[1] = v18;
		if (v14)
		{
			v25 = v45;
			v24 = v44;
			v23 = v43;
		}
		else
		{
			v20 = _mm_mul_ps(*(__m128*)ymmword_140C78410.m256_f32, (__m128)xmmword_140B7B240);
			v21 = _mm_mul_ps(*(__m128*) & ymmword_140C78410.m256_f32[4], (__m128)xmmword_140B7B5B0);
			v22 = _mm_mul_ps((__m128)xmmword_140C78430, (__m128)xmmword_140B7B240);
			v23 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v43, v43, 85), v21), _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0), v20)),
					_mm_mul_ps(_mm_shuffle_ps(v43, v43, 170), v22)),
				_mm_mul_ps(_mm_shuffle_ps(v43, v43, 255), (__m128)xmmword_140C78440));
			v24 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v44, v44, 0), v20), _mm_mul_ps(_mm_shuffle_ps(v44, v44, 85), v21)),
					_mm_mul_ps(_mm_shuffle_ps(v44, v44, 170), v22)),
				_mm_mul_ps(_mm_shuffle_ps(v44, v44, 255), (__m128)xmmword_140C78440));
			v25 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v45, v45, 0), v20), _mm_mul_ps(_mm_shuffle_ps(v45, v45, 85), v21)),
					_mm_mul_ps(_mm_shuffle_ps(v45, v45, 170), v22)),
				_mm_mul_ps(_mm_shuffle_ps(v45, v45, 255), (__m128)xmmword_140C78440));
			v19 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140C78440, (__m128)xmmword_140C78440, 0), v20),
						_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140C78440, (__m128)xmmword_140C78440, 85), v21)),
					_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140C78440, (__m128)xmmword_140C78440, 170), v22)),
				_mm_mul_ps(
					_mm_shuffle_ps((__m128)xmmword_140C78440, (__m128)xmmword_140C78440, 255),
					(__m128)xmmword_140C78440));
		}
		*v7 = v23;
		v7[1] = v24;
		v7[2] = v25;
		v38.m128_u64[1] = a2;
		v38.m128_u64[0] = (unsigned __int64)v39;
		v7[3] = v19;
		v26 = a3[1];
		v39[0] = *a3;
		v27 = a3[2];
		v39[1] = v26;
		v28 = a3[3];
		v39[2] = v27;
		v43 = v38;
		v42 = HIDWORD(v28);
		v41 = 0i64;
		v40 = 0;
		sub_1401AFB10((__m128**) & v43, &v44);
		v29 = (__int128*)(a1 + 4336);
		v30 = 16i64;
		v31 = _mm_unpackhi_ps(v44, v45);
		v32 = _mm_unpackhi_ps(v46, v47);
		v33 = _mm_unpacklo_ps(v44, v45);
		v34 = _mm_unpacklo_ps(v46, v47);
		v7[4] = _mm_shuffle_ps(v33, v34, 68);
		v7[5] = _mm_shuffle_ps(v33, v34, 238);
		v7[6] = _mm_shuffle_ps(v31, v32, 68);
		v7[7] = _mm_shuffle_ps(v31, v32, 238);
		v35 = (char*)v7 - a1;
		do
		{
			v36 = *v29++;
			*(__int128*)((char*)v29 + (_QWORD)v35 - 4112) = v36;
			--v30;
		} while (v30);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
	}
	return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 312i64))(a1, 1i64);
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140B7B5B0: using guessed type __int128 xmmword_140B7B5B0;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C78410: using guessed type __m256 ymmword_140C78410;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;

