#include "../winhttp.h"

//----- (000000014071E3F0) ----------------------------------------------------
void __fastcall sub_14071E3F0(__m128* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	bool v4; // zf
	__m128* v5; // r15
	__m128 v6; // xmm12
	int v7; // ecx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rsi
	__m128 v12; // xmm0
	unsigned __int64 v13; // r14
	__m128* v14; // rsi
	__m128* v15; // rax
	__m128 v16; // xmm3
	__m128 v17; // xmm0
	__m128 v18; // xmm3
	__m128 v19; // xmm7
	__m128 v20; // xmm8
	__m128 v21; // xmm9
	__m128 v22; // xmm1
	float v23; // xmm2_4
	float v24; // xmm0_4
	__m128i v25; // xmm8
	__m128 v26; // xmm3
	__m128 v27; // xmm1
	float v28; // xmm2_4
	float v29; // xmm0_4
	__m128i v30; // xmm7
	__m128i v31; // xmm2
	__m128 v32; // xmm1
	__m128 v33; // xmm1
	float v34; // xmm4_4
	float v35; // xmm5_4
	float v36; // xmm3_4
	__m128 v37; // xmm0
	__m128 v38; // xmm1
	__m128 v39; // xmm0
	__m128 v40; // xmm2
	float v41; // xmm2_4
	double v42; // xmm6_8
	double v43; // xmm7_8
	double v44; // xmm8_8
	float v45; // xmm11_4
	float v46; // xmm10_4
	float v47; // xmm9_4
	float v48; // xmm0_4
	float v49; // xmm8_4
	float v50; // xmm9_4
	__m128 v51; // xmm12
	float v52; // xmm2_4
	float v53; // xmm7_4
	float v54; // xmm0_4
	__m128 v55; // xmm2
	float v56; // xmm0_4
	__m128 v57; // xmm2
	float v58; // xmm5_4
	__m128 v59; // xmm2
	__m128 v60; // xmm3
	__int32 v61; // eax
	__int64 v62; // rax
	__int64 v63; // r14
	__m128* v64; // rsi
	__m128* v65; // rax
	__m128 v66; // xmm6
	__int64 v67; // rsi
	__int64 v68; // rax
	__m128 v69; // xmm4
	__m128 v70; // xmm0
	__m128 v71; // xmm5
	__m128 v72; // xmm3
	float v73; // xmm1_4
	__m128 v74; // xmm0
	__m128 v75; // xmm4
	float v76; // xmm1_4
	float v77; // xmm0_4
	__m128 v78; // xmm1
	__m128 v79; // xmm0
	__m128 v80; // [rsp+28h] [rbp-E0h] BYREF
	__m128 v81; // [rsp+38h] [rbp-D0h]
	__m128 v82; // [rsp+48h] [rbp-C0h]
	__m128 v83; // [rsp+58h] [rbp-B0h]
	__m128 v84; // [rsp+68h] [rbp-A0h] BYREF
	__m128 v85; // [rsp+78h] [rbp-90h] BYREF
	__m128 v86; // [rsp+88h] [rbp-80h] BYREF
	__int128 v87; // [rsp+98h] [rbp-70h]
	__m128 v88; // [rsp+A8h] [rbp-60h]
	__int128 v89; // [rsp+B8h] [rbp-50h]
	__m128* v90; // [rsp+C8h] [rbp-40h] BYREF
	__m128* v91; // [rsp+D0h] [rbp-38h]

	v2 = sub_1403D90D0(qword_140C65898, a1[44].m128_i32[0]);
	v3 = sub_1403D90D0(qword_140C65898, a1[45].m128_i32[1]);
	v4 = a1[35].m128_i32[0] == 1;
	v5 = (__m128*)v3;
	v6 = *(__m128*)ymmword_140C78390.m256_f32;
	v86 = *(__m128*) & ymmword_140C78390.m256_f32[4];
	v87 = xmmword_140C783B0;
	v88 = (__m128)xmmword_140C783C0;
	v80 = *(__m128*)ymmword_140C78390.m256_f32;
	v81 = *(__m128*) & ymmword_140C78390.m256_f32[4];
	v82 = (__m128)xmmword_140C783B0;
	v83 = (__m128)xmmword_140C783C0;
	if (v4
		&& v2
		&& a1[44].m128_i32[1]
		&& ((v7 = *(_DWORD*)(v2 + 128), v7 != 18) ? (v8 = *(_QWORD*)(v2 + 5864)) : (v8 = *(_QWORD*)(v2 + 13976)),
			v8
			&& (v7 != 18 ? (v9 = *(_QWORD*)(v2 + 5864)) : (v9 = *(_QWORD*)(v2 + 13976)),
				(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 848i64))(v9))))
	{
		a1[44].m128_i32[2] = 1;
		if (*(_DWORD*)(v2 + 128) == 18)
			v10 = *(_QWORD*)(v2 + 13976);
		else
			v10 = *(_QWORD*)(v2 + 5864);
		v11 = *(_QWORD*)(qword_140C65898 + 29096);
		if (!v11)
			v11 = *(_QWORD*)(qword_140C65898 + 29088);
		v84.m128_u64[0] = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v10 + 880i64))(
			v10,
			a1[44].m128_u32[1],
			0i64);
		v84.m128_u64[1] = v11 + 160;
		v85.m128_u64[0] = v84.m128_u64[0];
		v85.m128_u64[1] = v11 + 160;
		sub_1401AFB10((__m128**) & v85, &v80);
		v4 = a1[44].m128_i32[3] == 0;
		v6 = v80;
		v86 = v81;
		v12 = v83;
		v87 = (__int128)v82;
		v88 = v83;
		if (!v4)
		{
			if (!v5)
				goto LABEL_33;
			v13 = v5[366].m128_u64[1];
			if (v13)
			{
				if ((*(unsigned int(__fastcall**)(unsigned __int64, _QWORD))(*(_QWORD*)v13 + 848i64))(
					v5[366].m128_u64[1],
					a1[46].m128_u32[0]))
				{
					v14 = *(__m128**)(qword_140C65898 + 29096);
					if (!v14)
						v14 = *(__m128**)(qword_140C65898 + 29088);
					v15 = (__m128*)(*(__int64(__fastcall**)(unsigned __int64, __m128*, _QWORD, _QWORD))(*(_QWORD*)v13 + 856i64))(
						v13,
						&v84,
						a1[46].m128_u32[0],
						0i64);
					v16 = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(*v15, *v15, 85), v14[11]),
								_mm_mul_ps(_mm_shuffle_ps(*v15, *v15, 0), v14[10])),
							_mm_mul_ps(_mm_shuffle_ps(*v15, *v15, 170), v14[12])),
						v14[13]);
				}
				else
				{
					v16 = v5[286];
				}
				if (fabs(v16.m128_f32[0] - v83.m128_f32[0]) > 0.0000099999997
					|| (v17 = _mm_shuffle_ps(v16, v16, 170),
						v17.m128_f32[0] = v17.m128_f32[0] - v83.m128_f32[2],
						v12 = _mm_and_ps(v17, (__m128)0x7FFFFFFFu),
						v12.m128_f32[0] > 0.0000099999997))
				{
					v18 = _mm_sub_ps(v16, v83);
					v19 = (__m128)0x40400000u;
					v20 = (__m128)0x40400000u;
					v21 = _mm_mul_ps(v80, v80);
					v22 = _mm_mul_ps(v18, v18);
					v21.m128_f32[0] = fsqrt(
						(float)(v21.m128_f32[0] + _mm_shuffle_ps(v21, v21, 85).m128_f32[0])
						+ _mm_shuffle_ps(v21, v21, 170).m128_f32[0]);
					v23 = (float)(v22.m128_f32[0] + _mm_shuffle_ps(v22, v22, 85).m128_f32[0])
						+ _mm_shuffle_ps(v22, v22, 170).m128_f32[0];
					v24 = fsqrt(v23);
					v20.m128_f32[0] = fmaxf(
						(float)((float)(3.0 - (float)((float)(v23 * (float)(1.0 / v24)) * (float)(1.0 / v24)))
							* 0.5)
						* (float)(1.0 / v24),
						0.0);
					v25 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v18);
					v82.m128_u64[0] = v25.m128i_i64[0];
					v82.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v25, 8));
					v26 = _mm_sub_ps(
						_mm_mul_ps(
							_mm_shuffle_ps(v82, v82, 210),
							_mm_shuffle_ps((__m128)xmmword_140B7A4B0, (__m128)xmmword_140B7A4B0, 201)),
						_mm_mul_ps(
							_mm_shuffle_ps(v82, v82, 201),
							_mm_shuffle_ps((__m128)xmmword_140B7A4B0, (__m128)xmmword_140B7A4B0, 210)));
					v27 = _mm_mul_ps(v26, v26);
					v28 = (float)(v27.m128_f32[0] + _mm_shuffle_ps(v27, v27, 85).m128_f32[0])
						+ _mm_shuffle_ps(v27, v27, 170).m128_f32[0];
					v29 = fsqrt(v28);
					v19.m128_f32[0] = fmaxf(
						(float)((float)(3.0 - (float)((float)(v28 * (float)(1.0 / v29)) * (float)(1.0 / v29)))
							* 0.5)
						* (float)(1.0 / v29),
						0.0);
					v30 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v26);
					v80.m128_u64[0] = v30.m128i_i64[0];
					v80.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v30, 8));
					v31 = (__m128i)_mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v80, v80, 210), _mm_shuffle_ps(v82, v82, 201)),
						_mm_mul_ps(_mm_shuffle_ps(v80, v80, 201), _mm_shuffle_ps(v82, v82, 210)));
					v81.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v31, 8));
					v80.m128_f32[0] = *(float*)v30.m128i_i32 * v21.m128_f32[0];
					v80.m128_f32[1] = *(float*)&v30.m128i_i32[1] * v21.m128_f32[0];
					v80.m128_f32[2] = v80.m128_f32[2] * v21.m128_f32[0];
					v81.m128_f32[0] = *(float*)v31.m128i_i32 * v21.m128_f32[0];
					v81.m128_f32[1] = *(float*)&v31.m128i_i32[1] * v21.m128_f32[0];
					v12 = (__m128)v25.m128i_u32[1];
					v82.m128_f32[0] = *(float*)v25.m128i_i32 * v21.m128_f32[0];
					v81.m128_f32[2] = v81.m128_f32[2] * v21.m128_f32[0];
					v82.m128_f32[1] = *(float*)&v25.m128i_i32[1] * v21.m128_f32[0];
					v82.m128_f32[2] = v82.m128_f32[2] * v21.m128_f32[0];
				}
			}
		}
	}
	else
	{
		v32 = a1[37];
		v80 = a1[36];
		v12 = a1[38];
		v81 = v32;
		v33 = a1[39];
		v82 = v12;
		v83 = v33;
		if (v2 && a1[35].m128_i32[0] != 1)
		{
			v34 = v83.m128_f32[0];
			v35 = v83.m128_f32[1];
			v12 = (__m128)v83.m128_u32[1];
			v83.m128_f32[0] = (float)((float)((float)(v83.m128_f32[1] * *(float*)(v2 + 4544))
				+ (float)(v83.m128_f32[0] * *(float*)(v2 + 4528)))
				+ (float)(v83.m128_f32[2] * *(float*)(v2 + 4560)))
				+ *(float*)(v2 + 4576);
			v83.m128_f32[1] = (float)((float)((float)(v34 * *(float*)(v2 + 4532))
				+ (float)(v83.m128_f32[1] * *(float*)(v2 + 4548)))
				+ (float)(v83.m128_f32[2] * *(float*)(v2 + 4564)))
				+ *(float*)(v2 + 4580);
			v83.m128_f32[2] = (float)((float)((float)(v35 * *(float*)(v2 + 4552)) + (float)(v34 * *(float*)(v2 + 4536)))
				+ (float)(v83.m128_f32[2] * *(float*)(v2 + 4568)))
				+ *(float*)(v2 + 4584);
		}
	}
	if (v5)
	{
		v36 = v5[300].m128_f32[1];
		v12.m128_f32[0] = v36;
		v84.m128_u64[0] = (unsigned __int64)&v86;
		v85.m128_f32[0] = v36;
		v85.m128_f32[1] = v36;
		v85.m128_f32[2] = v36;
		v37 = _mm_shuffle_ps(v12, v12, 0);
		v38 = _mm_mul_ps(*(__m128*)ymmword_140C78410.m256_f32, v37);
		v37.m128_f32[0] = v36;
		v84.m128_u64[1] = (unsigned __int64)&v80;
		v86 = v38;
		v39 = _mm_shuffle_ps(v37, v37, 0);
		v40 = _mm_mul_ps(*(__m128*) & ymmword_140C78410.m256_f32[4], v39);
		v39.m128_f32[0] = v36;
		v87 = (__int128)v40;
		v89 = xmmword_140C78440;
		v88 = _mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v39, v39, 0));
		v90 = &v86;
		v91 = &v80;
		sub_1401AFB10(&v90, &v80);
		v6 = v80;
		v86 = v81;
		v88 = v83;
		v87 = (__int128)v82;
	}
LABEL_33:
	v41 = a1[32].m128_f32[0];
	*(_QWORD*)&v42 = a1[32].m128_u32[1];
	*(_QWORD*)&v43 = a1[32].m128_u32[2];
	*(_QWORD*)&v44 = a1[32].m128_u32[3];
	v80.m128_f32[0] = v80.m128_f32[0] * v41;
	v80.m128_f32[1] = v80.m128_f32[1] * v41;
	v80.m128_f32[2] = v80.m128_f32[2] * v41;
	v81.m128_f32[1] = v81.m128_f32[1] * v41;
	v81.m128_f32[0] = v81.m128_f32[0] * v41;
	v82.m128_f32[0] = v82.m128_f32[0] * v41;
	v81.m128_f32[2] = v81.m128_f32[2] * v41;
	v82.m128_f32[2] = v82.m128_f32[2] * v41;
	v85.m128_u64[0] = __PAIR64__(LODWORD(v43), LODWORD(v42));
	v85.m128_i32[2] = LODWORD(v44);
	v82.m128_f32[1] = v82.m128_f32[1] * v41;
	v45 = sub_1408FE3D0(v42);
	v46 = sub_1408FC950(v42);
	v47 = sub_1408FE3D0(v43);
	LODWORD(v43) = sub_1408FC950(v43);
	LODWORD(v42) = sub_1408FE3D0(v44);
	v48 = sub_1408FC950(v44);
	v49 = 0.0;
	v86.m128_i32[3] = 0;
	v86.m128_f32[0] = (float)((float)(v47 * v45) * *(float*)&v42) + (float)(v48 * *(float*)&v43);
	v86.m128_f32[1] = *(float*)&v42 * v46;
	v86.m128_f32[2] = (float)((float)(*(float*)&v43 * v45) * *(float*)&v42) - (float)(v48 * v47);
	*(float*)&v87 = (float)((float)(v47 * v45) * v48) - (float)(*(float*)&v42 * *(float*)&v43);
	*((float*)&v87 + 1) = v48 * v46;
	v84.m128_u64[0] = (unsigned __int64)&v86;
	v89 = xmmword_140C78440;
	v84.m128_u64[1] = (unsigned __int64)&v80;
	v88.m128_f32[1] = -v45;
	v90 = &v86;
	v88.m128_f32[0] = v47 * v46;
	v91 = &v80;
	*((_QWORD*)&v87 + 1) = COERCE_UNSIGNED_INT((float)((float)(*(float*)&v43 * v45) * v48) + (float)(*(float*)&v42 * v47));
	v88.m128_u64[1] = COERCE_UNSIGNED_INT(*(float*)&v43 * v46);
	sub_1401AFB10(&v90, &v80);
	v50 = 1.0;
	if (*(_DWORD*)((*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 16))(a1) + 56))
	{
		v51 = _mm_mul_ps(v6, v6);
		v52 = 1.0
			/ fsqrt(
				(float)(v51.m128_f32[0] + _mm_shuffle_ps(v51, v51, 85).m128_f32[0])
				+ _mm_shuffle_ps(v51, v51, 170).m128_f32[0]);
		v80.m128_f32[0] = v80.m128_f32[0] * v52;
		v80.m128_f32[1] = v80.m128_f32[1] * v52;
		v80.m128_f32[2] = v80.m128_f32[2] * v52;
		v81.m128_f32[1] = v81.m128_f32[1] * v52;
		v81.m128_f32[0] = v81.m128_f32[0] * v52;
		v82.m128_f32[0] = v82.m128_f32[0] * v52;
		v81.m128_f32[2] = v81.m128_f32[2] * v52;
		v82.m128_f32[2] = v82.m128_f32[2] * v52;
		v82.m128_f32[1] = v82.m128_f32[1] * v52;
	}
	if (*(_DWORD*)((*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 16))(a1) + 60))
	{
		v53 = sub_1408FE3D0(COERCE_DOUBLE(1078530011i64));
		v54 = sub_1408FC950(COERCE_DOUBLE(1078530011i64));
		*(_QWORD*)&v87 = LODWORD(v53);
		v85.m128_i32[3] = 0;
		v85.m128_u64[0] = LODWORD(v54);
		*((_QWORD*)&v87 + 1) = LODWORD(v54);
		v85.m128_f32[2] = -v53;
		v80 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v80, v80, 85), (__m128)xmmword_140B7A4B0),
					_mm_mul_ps(_mm_shuffle_ps(v80, v80, 0), v85)),
				_mm_mul_ps(_mm_shuffle_ps(v80, v80, 170), (__m128)v87)),
			_mm_mul_ps(_mm_shuffle_ps(v80, v80, 255), (__m128)xmmword_140C78440));
		v81 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v81, v81, 85), (__m128)xmmword_140B7A4B0),
					_mm_mul_ps(_mm_shuffle_ps(v81, v81, 0), v85)),
				_mm_mul_ps(_mm_shuffle_ps(v81, v81, 170), (__m128)v87)),
			_mm_mul_ps(_mm_shuffle_ps(v81, v81, 255), (__m128)xmmword_140C78440));
		v82 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v82, v82, 85), (__m128)xmmword_140B7A4B0),
					_mm_mul_ps(_mm_shuffle_ps(v82, v82, 0), v85)),
				_mm_mul_ps(_mm_shuffle_ps(v82, v82, 170), (__m128)v87)),
			_mm_mul_ps(_mm_shuffle_ps(v82, v82, 255), (__m128)xmmword_140C78440));
		v83 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v83, v83, 85), (__m128)xmmword_140B7A4B0),
					_mm_mul_ps(_mm_shuffle_ps(v83, v83, 0), v85)),
				_mm_mul_ps(_mm_shuffle_ps(v83, v83, 170), (__m128)v87)),
			_mm_mul_ps(_mm_shuffle_ps(v83, v83, 255), (__m128)xmmword_140C78440));
	}
	if (*(_DWORD*)((*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 16))(a1) + 52))
	{
		v55 = _mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(a1[33], a1[33], 85), v81),
				_mm_mul_ps(_mm_shuffle_ps(a1[33], a1[33], 0), v80)),
			_mm_mul_ps(_mm_shuffle_ps(a1[33], a1[33], 170), v82));
		v83.m128_f32[0] = v83.m128_f32[0] + v55.m128_f32[0];
		v83.m128_f32[1] = v83.m128_f32[1] + _mm_shuffle_ps(v55, v55, 85).m128_f32[0];
		v56 = v83.m128_f32[2] + _mm_shuffle_ps(v55, v55, 170).m128_f32[0];
	}
	else
	{
		v87 = (__int128)v82;
		v85 = v80;
		v57 = _mm_mul_ps(v80, v80);
		v88 = v83;
		v86.m128_i32[3] = v81.m128_i32[3];
		v58 = 1.0
			/ fsqrt(
				(float)(v57.m128_f32[0] + _mm_shuffle_ps(v57, v57, 85).m128_f32[0])
				+ _mm_shuffle_ps(v57, v57, 170).m128_f32[0]);
		v85.m128_f32[1] = v80.m128_f32[1] * v58;
		v85.m128_f32[2] = v80.m128_f32[2] * v58;
		*(float*)&v87 = v82.m128_f32[0] * v58;
		v86.m128_f32[1] = v81.m128_f32[1] * v58;
		v86.m128_f32[2] = v81.m128_f32[2] * v58;
		v86.m128_f32[0] = v81.m128_f32[0] * v58;
		v59 = a1[33];
		v85.m128_f32[0] = v80.m128_f32[0] * v58;
		*((float*)&v87 + 1) = v82.m128_f32[1] * v58;
		*((float*)&v87 + 2) = v82.m128_f32[2] * v58;
		v60 = _mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v59, v59, 85), v86), _mm_mul_ps(_mm_shuffle_ps(v59, v59, 0), v85)),
			_mm_mul_ps(_mm_shuffle_ps(v59, v59, 170), (__m128)v87));
		v83.m128_f32[0] = v83.m128_f32[0] + v60.m128_f32[0];
		v83.m128_f32[1] = v83.m128_f32[1] + _mm_shuffle_ps(v60, v60, 85).m128_f32[0];
		v56 = v83.m128_f32[2] + _mm_shuffle_ps(v60, v60, 170).m128_f32[0];
	}
	v61 = a1[45].m128_i32[3];
	v83.m128_f32[2] = v56;
	if ((unsigned int)(v61 - 1) <= 1)
	{
		v62 = sub_1403D90D0(qword_140C65898, a1[45].m128_i32[1]);
		if (v62)
		{
			if (v2)
			{
				v63 = *(_QWORD*)(v62 + 5864);
				if (v63)
				{
					if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v63 + 848i64))(v63, a1[46].m128_u32[0]))
					{
						v64 = *(__m128**)(qword_140C65898 + 29096);
						if (!v64)
							v64 = *(__m128**)(qword_140C65898 + 29088);
						v65 = (__m128*)(*(__int64(__fastcall**)(__int64, __m128*, _QWORD, _QWORD))(*(_QWORD*)v63 + 856i64))(
							v63,
							&v84,
							a1[46].m128_u32[0],
							0i64);
						v66 = _mm_add_ps(
							_mm_add_ps(
								_mm_add_ps(
									_mm_mul_ps(_mm_shuffle_ps(*v65, *v65, 85), v64[11]),
									_mm_mul_ps(_mm_shuffle_ps(*v65, *v65, 0), v64[10])),
								_mm_mul_ps(_mm_shuffle_ps(*v65, *v65, 170), v64[12])),
							v64[13]);
						if (!*(_DWORD*)((*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 16))(a1) + 56))
							v50 = *(float*)(v2 + 4804);
						v67 = *(_QWORD*)(v2 + 3336);
						if (v67)
						{
							v49 = sub_14047A940((_QWORD*)v2) * *(float*)(v67 + 140);
						}
						else
						{
							v68 = sub_14022D500(*(_DWORD*)(v2 + 216));
							if (v68)
								v49 = *(float*)(v68 + 40);
						}
						v4 = a1[45].m128_i32[3] == 1;
						v69 = (__m128)0x40400000u;
						v70 = 0i64;
						v71 = _mm_sub_ps(v83, v66);
						v72 = _mm_mul_ps(v71, v71);
						v72.m128_f32[0] = (float)(v72.m128_f32[0] + _mm_shuffle_ps(v72, v72, 85).m128_f32[0])
							+ _mm_shuffle_ps(v72, v72, 170).m128_f32[0];
						v73 = 1.0 / fsqrt(v72.m128_f32[0]);
						v69.m128_f32[0] = fmaxf(
							(float)((float)(3.0 - (float)((float)(v72.m128_f32[0] * v73) * v73)) * 0.5) * v73,
							0.0);
						v70.m128_f32[0] = v49;
						v74 = _mm_shuffle_ps(v70, v70, 0);
						v75 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v69, v69, 0), v71), v74);
						v74.m128_f32[0] = v50;
						v84 = _mm_mul_ps(v75, _mm_shuffle_ps(v74, v74, 0));
						if (v4)
						{
							v76 = v83.m128_f32[1] - v84.m128_f32[1];
							v83.m128_f32[0] = v83.m128_f32[0] - v84.m128_f32[0];
							v77 = v83.m128_f32[2] - v84.m128_f32[2];
						}
						else
						{
							v76 = v83.m128_f32[1] + v84.m128_f32[1];
							v83.m128_f32[0] = v83.m128_f32[0] + v84.m128_f32[0];
							v77 = v83.m128_f32[2] + v84.m128_f32[2];
						}
						*(unsigned __int64*)((char*)v83.m128_u64 + 4) = __PAIR64__(LODWORD(v77), LODWORD(v76));
					}
				}
			}
		}
	}
	v78 = v82;
	a1[40] = v80;
	a1[41] = v81;
	v79 = v83;
	a1[42] = v78;
	a1[43] = v79;
}
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C78410: using guessed type __m256 ymmword_140C78410;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;

