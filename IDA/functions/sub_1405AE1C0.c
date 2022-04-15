//----- (00000001405AE1C0) ----------------------------------------------------
void __fastcall sub_1405AE1C0(__int64 a1, __int64 a2, int a3)
{
	__m128 v6; // xmm7
	__m128 v7; // xmm8
	__m128 v8; // xmm5
	__m128 v9; // xmm4
	__m128 v10; // xmm1
	float v11; // xmm2_4
	float v12; // xmm0_4
	__m128 v13; // xmm8
	__m128 v14; // xmm1
	float v15; // xmm2_4
	float v16; // xmm0_4
	__m128 v17; // xmm5
	__m128 v18; // xmm1
	float v19; // xmm2_4
	float v20; // xmm0_4
	__m128 v21; // xmm4
	__m128 v22; // xmm1
	float v23; // xmm2_4
	float v24; // xmm0_4
	__m128 v25; // xmm7
	__m128 v26; // xmm0
	unsigned int v27; // ecx
	__int64 v28; // rax
	_DWORD* v29; // rdi
	__m128 v30; // xmm1
	__int128 v31; // xmm0
	__int128 v32; // [rsp+28h] [rbp-E0h] BYREF
	__int64 v33; // [rsp+38h] [rbp-D0h]
	__int64 v34; // [rsp+40h] [rbp-C8h]
	unsigned __int64 v35; // [rsp+48h] [rbp-C0h]
	unsigned __int64 v36; // [rsp+50h] [rbp-B8h]
	__int64 v37; // [rsp+58h] [rbp-B0h]
	__int64 v38; // [rsp+60h] [rbp-A8h]
	unsigned int v39; // [rsp+68h] [rbp-A0h] BYREF
	__int64 v40; // [rsp+6Ch] [rbp-9Ch]
	int v41; // [rsp+74h] [rbp-94h]
	__m128 v42; // [rsp+78h] [rbp-90h]
	__m128 v43; // [rsp+88h] [rbp-80h] BYREF
	__m128 v44; // [rsp+98h] [rbp-70h]
	__m128 v45; // [rsp+A8h] [rbp-60h]
	__m128 v46; // [rsp+B8h] [rbp-50h]
	__m128 v47[4]; // [rsp+C8h] [rbp-40h] BYREF

	v32 = 0ui64;
	v33 = 0i64;
	v34 = 0i64;
	v35 = 0i64;
	v36 = 0i64;
	v37 = 0i64;
	v38 = 0i64;
	if (a2)
	{
		v33 = *(_QWORD*)(a2 + 88);
		(*(void(__fastcall**)(__int64, __m128*, __int64))(*(_QWORD*)a2 + 136i64))(a2, &v43, 1i64);
		v6 = (__m128)0x40400000u;
		v7 = (__m128)0x40400000u;
		v8 = (__m128)0x40400000u;
		v9 = (__m128)0x40400000u;
		v10 = _mm_mul_ps(v46, v46);
		v11 = (float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 85).m128_f32[0])
			+ _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
		v12 = fsqrt(v11);
		v7.m128_f32[0] = fmaxf(
			(float)((float)(3.0 - (float)((float)(v11 * (float)(1.0 / v12)) * (float)(1.0 / v12))) * 0.5)
			* (float)(1.0 / v12),
			0.0);
		v13 = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v46);
		v14 = _mm_mul_ps(v45, v45);
		v15 = (float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0])
			+ _mm_shuffle_ps(v14, v14, 170).m128_f32[0];
		v16 = fsqrt(v15);
		v8.m128_f32[0] = fmaxf(
			(float)((float)(3.0 - (float)((float)(v15 * (float)(1.0 / v16)) * (float)(1.0 / v16))) * 0.5)
			* (float)(1.0 / v16),
			0.0);
		v17 = _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v45);
		v18 = _mm_mul_ps(v44, v44);
		v19 = (float)(v18.m128_f32[0] + _mm_shuffle_ps(v18, v18, 85).m128_f32[0])
			+ _mm_shuffle_ps(v18, v18, 170).m128_f32[0];
		v20 = fsqrt(v19);
		v9.m128_f32[0] = fmaxf(
			(float)((float)(3.0 - (float)((float)(v19 * (float)(1.0 / v20)) * (float)(1.0 / v20))) * 0.5)
			* (float)(1.0 / v20),
			0.0);
		v21 = _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v44);
		v22 = _mm_mul_ps(v43, v43);
		v23 = (float)(v22.m128_f32[0] + _mm_shuffle_ps(v22, v22, 85).m128_f32[0])
			+ _mm_shuffle_ps(v22, v22, 170).m128_f32[0];
		v24 = fsqrt(v23);
		v6.m128_f32[0] = fmaxf(
			(float)((float)(3.0 - (float)((float)(v23 * (float)(1.0 / v24)) * (float)(1.0 / v24))) * 0.5)
			* (float)(1.0 / v24),
			0.0);
		v25 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), v43);
		v47[0] = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v25, _mm_shuffle_ps(v25, v25, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v25, v25, 85), (__m128)0i64));
		v47[1] = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v21, _mm_shuffle_ps(v21, v21, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v21, v21, 85), (__m128)0i64));
		v47[2] = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v17, _mm_shuffle_ps(v17, v17, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v17, v17, 85), (__m128)0i64));
		v47[3] = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v13, _mm_shuffle_ps(v13, v13, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v13, v13, 85), (__m128)0x3F800000u));
		sub_1401B1D60((float*)&v39, v47[0].m128_f32);
		v26 = v46;
		v27 = *(_DWORD*)(a2 + 96);
		v46.m128_u64[0] = 0i64;
		v42 = v26;
		v46.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0i64, 8));
		v28 = sub_140203DA0(v27);
		if (v28)
		{
			LODWORD(v34) = *(_DWORD*)(a2 + 96);
			if ((*(_BYTE*)(v28 + 16) & 4) != 0)
			{
				v29 = (_DWORD*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(a2 + 104));
				if (v29)
				{
					(*(void(__fastcall**)(__int64, __m128*, _QWORD))(*(_QWORD*)a2 + 144i64))(a2, v47, 0i64);
					v29[936] = 0;
					v30 = _mm_mul_ps(v47[0], v47[0]);
					v30.m128_f32[0] = fsqrt(
						(float)(v30.m128_f32[0] + _mm_shuffle_ps(v30, v30, 85).m128_f32[0])
						+ _mm_shuffle_ps(v30, v30, 170).m128_f32[0]);
					v29[933] = v30.m128_i32[0];
					v29[931] = v30.m128_i32[0];
				}
			}
			v31 = *(_OWORD*)(a1 + 8);
			HIDWORD(v34) = a3;
			v32 = v31;
			v35 = v42.m128_u64[0];
			v36 = __PAIR64__(v39, v42.m128_u32[2]);
			v37 = v40;
			LODWORD(v38) = v41;
			sub_1403F4900(qword_140C65898, 0x4E6u, (__int64)&v32);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

