//----- (000000014004C4F0) ----------------------------------------------------
__int64 __fastcall sub_14004C4F0(__int64 a1)
{
	__int64 v2; // rax
	float v3; // xmm0_4
	__m128 v4; // xmm5
	__int64 v5; // r8
	__m128 v6; // xmm13
	__m128 v7; // xmm12
	__m128 v8; // xmm3
	__m128 v9; // xmm2
	__m128 v10; // xmm1
	__m128 v11; // xmm2
	__m128 v12; // xmm3
	float v13; // xmm0_4
	__m128 v14; // xmm2
	__m128 v15; // xmm1
	__m128 v16; // xmm2
	__int64 v17; // rcx
	__int64 result; // rax
	__int64 v19; // rcx
	__m128 v20; // [rsp+38h] [rbp-49h]
	__m128 v21; // [rsp+48h] [rbp-39h] BYREF
	__m128 v22; // [rsp+58h] [rbp-29h] BYREF
	__int64 v23; // [rsp+68h] [rbp-19h] BYREF
	int v24; // [rsp+70h] [rbp-11h]
	__int64 v25; // [rsp+78h] [rbp-9h]
	__int64 v26; // [rsp+80h] [rbp-1h]
	int v27; // [rsp+88h] [rbp+7h]
	__int64 v28; // [rsp+90h] [rbp+Fh]
	__int64 v29; // [rsp+E8h] [rbp+67h] BYREF
	int v30; // [rsp+F0h] [rbp+6Fh] BYREF
	int v31; // [rsp+F4h] [rbp+73h]

	v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v3 = *(float*)(a1 + 384);
	v4 = *(__m128*)(a1 + 128);
	v5 = v2;
	v6 = (__m128)COERCE_UNSIGNED_INT((float)*(int*)(qword_140C63650 + 716));
	v7 = (__m128)COERCE_UNSIGNED_INT((float)*(int*)(qword_140C63650 + 720));
	v6.m128_f32[0] = v6.m128_f32[0] * v3;
	v7.m128_f32[0] = v7.m128_f32[0] * v3;
	v8 = _mm_unpacklo_ps(_mm_unpacklo_ps(v6, (__m128)0i64), _mm_unpacklo_ps(v7, (__m128)0i64));
	v20.m128_f32[0] = (float)((float)((float)(v8.m128_f32[0] - (float)*(int*)v2) / (float)*(int*)(v2 + 8)) * 2.0) - 1.0;
	v20.m128_f32[1] = 1.0
		- (float)((float)((float)(_mm_shuffle_ps(v8, v8, 85).m128_f32[0] - (float)*(int*)(v2 + 4))
			/ (float)*(int*)(v2 + 12))
			* 2.0);
	v20.m128_f32[2] = (float)(_mm_shuffle_ps(v8, v8, 170).m128_f32[0] - *(float*)(v5 + 16))
		/ (float)(*(float*)(v5 + 20) - *(float*)(v5 + 16));
	v9 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), *(__m128*)(a1 + 240)),
				_mm_mul_ps(_mm_shuffle_ps(v20, v20, 85), *(__m128*)(a1 + 256))),
			_mm_mul_ps(_mm_shuffle_ps(v20, v20, 170), *(__m128*)(a1 + 272))),
		*(__m128*)(a1 + 288));
	v10 = _mm_shuffle_ps(v9, v9, 255);
	v11 = _mm_div_ps(v9, _mm_shuffle_ps(v10, v10, 0));
	v22 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), *(__m128*)(a1 + 112)),
				_mm_mul_ps(_mm_shuffle_ps(v11, v11, 85), v4)),
			_mm_mul_ps(_mm_shuffle_ps(v11, v11, 170), *(__m128*)(a1 + 144))),
		*(__m128*)(a1 + 160));
	v12 = _mm_unpacklo_ps(_mm_unpacklo_ps(v6, (__m128)0x3F7FFF58u), _mm_unpacklo_ps(v7, (__m128)0i64));
	v20.m128_f32[0] = (float)((float)((float)(v12.m128_f32[0] - (float)*(int*)v5) / (float)*(int*)(v5 + 8)) * 2.0) - 1.0;
	v10.m128_f32[0] = _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
	v12.m128_f32[0] = _mm_shuffle_ps(v12, v12, 170).m128_f32[0] - *(float*)(v2 + 16);
	v10.m128_f32[0] = (float)(v10.m128_f32[0] - (float)*(int*)(v2 + 4)) / (float)*(int*)(v2 + 12);
	v13 = *(float*)(v5 + 20) - *(float*)(v5 + 16);
	v30 = 0;
	v31 = 1065353216;
	v29 = 0i64;
	v23 = 4096i64;
	v24 = 0;
	v25 = 0i64;
	v26 = a1;
	v27 = 0;
	v20.m128_f32[1] = 1.0 - (float)(v10.m128_f32[0] * 2.0);
	v20.m128_f32[2] = v12.m128_f32[0] / v13;
	v14 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), *(__m128*)(a1 + 240)),
				_mm_mul_ps(_mm_shuffle_ps(v20, v20, 85), *(__m128*)(a1 + 256))),
			_mm_mul_ps(_mm_shuffle_ps(v20, v20, 170), *(__m128*)(a1 + 272))),
		*(__m128*)(a1 + 288));
	v15 = _mm_shuffle_ps(v14, v14, 255);
	v16 = _mm_div_ps(v14, _mm_shuffle_ps(v15, v15, 0));
	v21 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), *(__m128*)(a1 + 112)),
				_mm_mul_ps(_mm_shuffle_ps(v16, v16, 85), v4)),
			_mm_mul_ps(_mm_shuffle_ps(v16, v16, 170), *(__m128*)(a1 + 144))),
		*(__m128*)(a1 + 160));
	v17 = *(_QWORD*)(a1 + 392);
	v28 = 0i64;
	result = (*(__int64(__fastcall**)(__int64, __m128*, __m128*, int*, __int64*, __int64*, unsigned __int64, _DWORD))(*(_QWORD*)v17 + 424i64))(
		v17,
		&v22,
		&v21,
		&v30,
		&v29,
		&v23,
		v20.m128_u64[0],
		v12.m128_f32[0] / v13);
	if ((_DWORD)result)
	{
		v31 = (*(float(__fastcall**)(__int64))(*(_QWORD*)v29 + 16i64))(v29);
		v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v29 + 32i64))(v29);
		if (v19 || (result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v29 + 24i64))(v29), (v19 = result) != 0))
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v19 + 48i64))(v19);
			*(_DWORD*)(a1 + 456) = result;
		}
	}
	if (v29)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v29 + 8i64))(v29);
	return result;
}
// 14004C622: variable 'v20' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65670: using guessed type __int64 qword_140C65670;

