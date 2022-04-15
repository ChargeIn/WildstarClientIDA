//----- (00000001407CBBF0) ----------------------------------------------------
__int64 __fastcall sub_1407CBBF0(__int64 a1, __int64 a2, __m128* a3, __int128* a4, unsigned int a5)
{
	__m128 v5; // xmm1
	__m128 v6; // xmm6
	__m128 v7; // xmm3
	__m128 v8; // xmm4
	__int128 v9; // xmm0
	__int128 v10; // xmm1
	__m128 v11; // xmm7
	__int128 v12; // xmm0
	__m128 v13; // xmm6
	__int128 v14; // xmm1
	__int128 v15; // xmm0
	__m128 v16; // xmm0
	__m128 v17; // xmm8
	__m128 v18; // xmm4
	__m128 v19; // xmm7
	__m128 v20; // xmm8
	__m128 v21; // xmm9
	__m128 v22; // xmm6
	__m128* v23; // rax
	__int64 v24; // r10
	__m128* v25; // rdx
	char* v26; // rcx
	__m128 v27; // xmm3
	__m128* v28; // rax
	__int64 v29; // rdx
	__m128 v30; // xmm3
	__m128 v31; // xmm2
	__m128 v33[2]; // [rsp+38h] [rbp-D0h] BYREF
	__int128 v34; // [rsp+58h] [rbp-B0h]
	__int128 v35; // [rsp+68h] [rbp-A0h]
	_OWORD v36[3]; // [rsp+78h] [rbp-90h] BYREF
	__int128 v37; // [rsp+A8h] [rbp-60h]
	__int128 v38[4]; // [rsp+B8h] [rbp-50h] BYREF
	__m128 v39[6]; // [rsp+F8h] [rbp-10h] BYREF
	__m128 v40[6]; // [rsp+158h] [rbp+50h] BYREF

	v5 = *(__m128*)(a2 + 16);
	v6 = *a3;
	v7 = a3[1];
	v8 = a3[2];
	v33[0] = *(__m128*)a2;
	v9 = *(_OWORD*)(a2 + 32);
	v33[1] = v5;
	v10 = *(_OWORD*)(a2 + 48);
	v34 = v9;
	DWORD2(v34) = -1082130264;
	v11 = _mm_unpacklo_ps(v6, v7);
	v12 = (__int128)a3[3];
	v35 = v10;
	v36[0] = v6;
	v13 = _mm_unpackhi_ps(v6, v7);
	DWORD2(v35) = -1110651431;
	v14 = a4[1];
	v37 = v12;
	v38[0] = *a4;
	v15 = a4[2];
	v38[1] = v14;
	v38[2] = v15;
	v16 = _mm_unpacklo_ps(v8, (__m128)xmmword_140C78440);
	v36[2] = v8;
	v17 = v11;
	v18 = _mm_unpackhi_ps(v8, (__m128)xmmword_140C78440);
	v19 = _mm_shuffle_ps(v11, v16, 238);
	v20 = _mm_shuffle_ps(v17, v16, 68);
	v21 = _mm_shuffle_ps(v13, v18, 68);
	v22 = _mm_shuffle_ps(v13, v18, 238);
	v36[1] = v7;
	v37 = xmmword_140C78440;
	v38[3] = xmmword_140C78440;
	v23 = sub_1401B20F0(v40, v33);
	v25 = v23 + 6;
	if (v23 < &v23[6])
	{
		v26 = (char*)((char*)v39 - (char*)v23);
		do
		{
			_mm_prefetch(&v23[1].m128_i8[8], 0);
			v27 = *v23++;
			_mm_stream_ps(
				(float*)((char*)v23[-1].m128_f32 + (_QWORD)v26),
				_mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v27, v27, 85), v19), _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v20)),
						_mm_mul_ps(_mm_shuffle_ps(v27, v27, 170), v21)),
					_mm_mul_ps(_mm_shuffle_ps(v27, v27, 255), v22)));
		} while (v23 < v25);
	}
	_mm_sfence();
	v28 = v39;
	v29 = 6i64;
	do
	{
		v30 = *v28++;
		v31 = _mm_mul_ps(v30, v30);
		v31.m128_f32[0] = 1.0
			/ fsqrt(
				(float)(v31.m128_f32[0] + _mm_shuffle_ps(v31, v31, 85).m128_f32[0])
				+ _mm_shuffle_ps(v31, v31, 170).m128_f32[0]);
		v28[-1] = _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v30);
		--v29;
	} while (v29);
	return sub_1407CBE00(v24, (__int64)v33, (__int64)v36, v38, v39, a5);
}
// 1407CBDCB: variable 'v24' is possibly undefined
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 1407CBBF0: using guessed type __m128 var_B0[6];
// 1407CBBF0: using guessed type __m128 var_110[6];

