#include "../winhttp.h"

//----- (000000014036F190) ----------------------------------------------------
__int64 __fastcall sub_14036F190(__int64 a1, _OWORD* a2, __m128* a3, __int64 a4)
{
	__m128 v6; // xmm3
	float v8; // xmm5_4
	__m128 v9; // xmm2
	__m128 v10; // xmm4
	__m128 v11; // xmm1
	unsigned __int32 v12; // xmm10_4
	__int64* v13; // rcx
	__int64 v14; // rax
	__m128 v15; // xmm2
	__int64 v16; // rax
	__m128 v17; // xmm3
	__m128 v18; // xmm6
	int v19; // ecx
	__m128 v20; // xmm11
	float v21; // xmm1_4
	float v22; // xmm12_4
	float v23; // xmm8_4
	float v24; // xmm4_4
	float v25; // xmm6_4
	__m128 v26; // xmm7
	__m128 v27; // xmm5
	int v28; // ecx
	__m128 v29; // xmm1
	int v30; // ecx
	__m128 v31; // xmm14
	__m128 v32; // xmm14
	__m128 v33; // xmm5
	__m128 v34; // xmm7
	float v35; // xmm4_4
	float v36; // xmm6_4
	__m128* v37; // rax
	__int128 v38; // xmm0
	__int128 v39; // xmm0
	__m128 v40; // xmm0
	__m128 v41; // xmm1
	__int64 result; // rax
	__m128 v43; // xmm0
	__m128 v44; // [rsp+38h] [rbp-D0h] BYREF
	int v45; // [rsp+4Ch] [rbp-BCh]
	__int64 v46[3]; // [rsp+54h] [rbp-B4h] BYREF
	float v47; // [rsp+6Ch] [rbp-9Ch]
	__int64 v48; // [rsp+70h] [rbp-98h]
	__int64 v49; // [rsp+78h] [rbp-90h]
	float v50; // [rsp+80h] [rbp-88h]
	__int64 v51; // [rsp+84h] [rbp-84h]
	int v52; // [rsp+8Ch] [rbp-7Ch]
	float v53; // [rsp+90h] [rbp-78h]
	int v54; // [rsp+94h] [rbp-74h]
	__int128 v55[4]; // [rsp+98h] [rbp-70h] BYREF
	__int128 v56[4]; // [rsp+D8h] [rbp-30h] BYREF
	__m128 v57[4]; // [rsp+118h] [rbp+10h] BYREF
	__m128 v58; // [rsp+158h] [rbp+50h] BYREF
	__m128 v59[4]; // [rsp+168h] [rbp+60h] BYREF
	__m128* v60; // [rsp+1A8h] [rbp+A0h] BYREF
	__int64 v61; // [rsp+1B0h] [rbp+A8h]
	__m128 v62[4]; // [rsp+1B8h] [rbp+B0h] BYREF
	__m128 v63[6]; // [rsp+1F8h] [rbp+F0h] BYREF

	v6 = (__m128) * (unsigned int*)(a4 + 56);
	v6.m128_f32[0] = v6.m128_f32[0] / *(float*)(a4 + 40);
	v9 = (__m128)0x3F800000u;
	v8 = v6.m128_f32[0] * v6.m128_f32[0];
	v9.m128_f32[0] = (float)((float)(1.0 / *(float*)(a4 + 20)) * (float)(1.0 / *(float*)(a4 + 20)))
		+ (float)((float)(1.0 / *(float*)a4) * (float)(1.0 / *(float*)a4));
	v10 = v9;
	if (*(float*)(a4 + 44) != 0.0)
	{
		v10.m128_f32[0] = v9.m128_f32[0] * v8;
		v9.m128_f32[0] = v9.m128_f32[0] * 1024.0;
	}
	v11 = v10;
	v11.m128_f32[0] = (float)((float)((float)((float)(v10.m128_f32[0] + v8) - v9.m128_f32[0]) - 1024.0) * 0.5)
		/ (float)(v6.m128_f32[0] - 32.0);
	if (v11.m128_f32[0] > v6.m128_f32[0])
	{
		if (v11.m128_f32[0] < 32.0)
		{
			v6.m128_f32[0] = (float)((float)(v6.m128_f32[0] - v11.m128_f32[0]) * (float)(v6.m128_f32[0] - v11.m128_f32[0]))
				+ v10.m128_f32[0];
			v12 = _mm_sqrt_ps(v6).m128_u32[0];
		}
		else
		{
			v11 = (__m128)0x42000000u;
			v12 = _mm_sqrt_ps(v9).m128_u32[0];
		}
	}
	else
	{
		v11 = v6;
		v12 = _mm_sqrt_ps(v10).m128_u32[0];
	}
	v13 = *(__int64**)(a1 + 5496);
	v14 = *v13;
	v15 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0i64, _mm_xor_ps(v11, (__m128)xmmword_140B7B530)), (__m128)0i64);
	v44 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v15, v15, 85), a3[1]), _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), *a3)),
			_mm_mul_ps(_mm_shuffle_ps(v15, v15, 170), a3[2])),
		a3[3]);
	v16 = (*(__int64(__fastcall**)(__int64*))(v14 + 24))(v13);
	v17 = (__m128)0x3F800000u;
	v20 = (__m128)0x3F800000u;
	v18 = _mm_shuffle_ps(v44, v44, 85);
	v17.m128_f32[0] = 1.0 / *((float*)&xmmword_140C7AC50 + 1);
	v18.m128_f32[0] = v18.m128_f32[0] * 65536.0;
	v15.m128_f32[0] = (float)*(int*)(v16 + 4);
	v19 = (int)v18.m128_f32[0];
	v20.m128_f32[0] = 1.0 / v15.m128_f32[0];
	v21 = (float)((float)(*(float*)&v12 * 2.0) * (float)(1.0 / *((float*)&xmmword_140C7AC50 + 1)))
		* (float)(v15.m128_f32[0] * 0.00048828125);
	v22 = 1.0 / v21;
	v23 = (float)(1.0 / v15.m128_f32[0]) * v21;
	v24 = (float)(1.0 / v21) * v15.m128_f32[0];
	if ((int)v18.m128_f32[0] != 0x80000000 && (float)v19 != v18.m128_f32[0])
		v18.m128_f32[0] = (float)(v19 - (_mm_movemask_ps(_mm_unpacklo_ps(v18, v18)) & 1));
	v25 = v18.m128_f32[0] * 0.000015258789;
	v17.m128_f32[0] = v17.m128_f32[0] * v25;
	v44.m128_f32[1] = v25;
	v26 = _mm_sub_ps(v44, _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), (__m128)xmmword_140C7AC50));
	v27 = v26;
	v27.m128_f32[0] = v26.m128_f32[0] * v24;
	v28 = (int)(float)(v26.m128_f32[0] * v24);
	if (v28 != 0x80000000 && (float)v28 != v27.m128_f32[0])
		v27 = (__m128)COERCE_UNSIGNED_INT((float)(v28 - (_mm_movemask_ps(_mm_unpacklo_ps(v27, v27)) & 1)));
	v27.m128_f32[0] = v27.m128_f32[0] * v23;
	v29 = _mm_shuffle_ps(v26, v26, 170);
	v29.m128_f32[0] = v29.m128_f32[0] * v24;
	v30 = (int)v29.m128_f32[0];
	if ((int)v29.m128_f32[0] != 0x80000000 && (float)v30 != v29.m128_f32[0])
		v29 = (__m128)COERCE_UNSIGNED_INT((float)(v30 - (_mm_movemask_ps(_mm_unpacklo_ps(v29, v29)) & 1)));
	v29.m128_f32[0] = v29.m128_f32[0] * v23;
	v31 = _mm_shuffle_ps((__m128)xmmword_140C7AC50, (__m128)xmmword_140C7AC50, 136);
	v63[0].m128_u64[0] = (unsigned __int64)v55;
	v32 = _mm_mul_ps(v31, v31);
	v33 = _mm_add_ps(_mm_sub_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(v27, v29), (__m128)0i64), v26), v44);
	v55[0] = xmmword_140B7A330;
	v34 = _mm_shuffle_ps(v33, v33, 85);
	v35 = fminf(
		(float)((float)((float)(*(float*)&v12 * 1.4142135) + *(float*)(a1 + 136))
			* *((float*)&xmmword_140C7AC50 + 1))
		/ fsqrt(v32.m128_f32[0] + _mm_shuffle_ps(v32, v32, 85).m128_f32[0]),
		*(float*)&dword_140C7AC74);
	v55[1] = xmmword_140B7A8C0;
	v36 = fmaxf(v35, v34.m128_f32[0] + *(float*)&v12);
	v55[2] = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)(unsigned int)xmmword_140C7AC50, (__m128)DWORD2(xmmword_140C7AC50)),
		_mm_unpacklo_ps((__m128)DWORD1(xmmword_140C7AC50), (__m128)0i64));
	v55[3] = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(v33, _mm_shuffle_ps(v33, v33, 170)),
		_mm_unpacklo_ps(v34, (__m128)0x3F800000u));
	sub_1401AFC20((__int64*)v63, (double*)v57[0].m128_u64);
	v46[1] = 0i64;
	v46[2] = 0i64;
	v47 = v22 * 2.0;
	v48 = 0i64;
	v49 = 0i64;
	v51 = 0i64;
	*((float*)v46 + 1) = v22 * 2.0;
	v52 = 0;
	v54 = 1065353216;
	v50 = 1.0
		/ (float)((float)(v34.m128_f32[0] - v36) - (float)(v34.m128_f32[0] - (float)(v34.m128_f32[0] - *(float*)&v12)));
	v53 = v50 * (float)(v34.m128_f32[0] - v36);
	v37 = sub_1401B20F0(v63, (__m128*)((char*)v46 + 4));
	sub_14036EC90(a1, v57, v55, (__int64)v46 + 4, (unsigned __int64)v37);
	v44.m128_u64[0] = (unsigned __int64)a3;
	*(_OWORD*)(a1 + 1152) = *a2;
	v38 = a2[1];
	v44.m128_u64[1] = (unsigned __int64)v57;
	*(_OWORD*)(a1 + 1168) = v38;
	v39 = a2[2];
	v58.m128_u64[1] = v44.m128_u64[1];
	*(_OWORD*)(a1 + 1184) = v39;
	*(_OWORD*)(a1 + 1200) = a2[3];
	*(__m128*)(a1 + 1216) = *a3;
	*(__m128*)(a1 + 1232) = a3[1];
	*(__m128*)(a1 + 1248) = a3[2];
	*(__m128*)(a1 + 1264) = a3[3];
	v58.m128_u64[0] = v44.m128_u64[0];
	sub_1401AFB10((__m128**) & v58, v59);
	v60 = v59;
	v61 = (__int64)v46 + 4;
	sub_1401AFB10(&v60, (__m128*)(a1 + 1344));
	v20.m128_f32[0] = (float)(v20.m128_f32[0] + 1.0) * 0.5;
	v56[0] = xmmword_140B7A310;
	v56[1] = xmmword_140B7A5A0;
	v56[2] = xmmword_140B7A700;
	v60 = v57;
	v61 = (__int64)v46 + 4;
	v56[3] = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps(v20, (__m128)0i64), _mm_unpacklo_ps(v20, (__m128)0x3F800000u));
	sub_1401AFB10(&v60, v62);
	v44.m128_u64[0] = (unsigned __int64)v62;
	v63[0].m128_u64[0] = (unsigned __int64)v62;
	v44.m128_u64[1] = (unsigned __int64)v56;
	v63[0].m128_u64[1] = (unsigned __int64)v56;
	sub_1401AFB10((__m128**)v63, &v58);
	sub_1402C8730(a1 + 3504, a1 + 2720);
	sub_140262C40(a1 + 3504, (__m128*)(a1 + 960), (__int128*)(a1 + 1088));
	sub_140359A20(a1);
	sub_140359E70((__m128*)a1);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 504i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
	v44.m128_u64[1] = *(_QWORD*)(a1 + 5488);
	v44.m128_i32[0] = 1;
	v45 = 0;
	(*(void(__fastcall**)(__int64, __m128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v44,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	v44.m128_u64[1] = *(_QWORD*)(a1 + 5496);
	v44.m128_i32[0] = 1;
	v45 = 0;
	(*(void(__fastcall**)(__int64, __m128*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
		qword_140C65670,
		&v44,
		1i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 632i64))(qword_140C65670, 1i64);
	sub_140361040(a1);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
	v40 = v58;
	v41 = v59[1];
	*(_QWORD*)(a1 + 3496) = *(_QWORD*)(a1 + 5496);
	result = 0i64;
	*(__m128*)(a1 + 3344) = v40;
	*(__m128*)(a1 + 3360) = v59[0];
	v43 = v59[2];
	*(__m128*)(a1 + 3376) = v41;
	*(__m128*)(a1 + 3392) = v43;
	return result;
}
// 140B7A310: using guessed type __int128 xmmword_140B7A310;
// 140B7A330: using guessed type __int128 xmmword_140B7A330;
// 140B7A5A0: using guessed type __int128 xmmword_140B7A5A0;
// 140B7A700: using guessed type __int128 xmmword_140B7A700;
// 140B7A8C0: using guessed type __int128 xmmword_140B7A8C0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C7AC50: using guessed type __int128 xmmword_140C7AC50;
// 140C7AC74: using guessed type int dword_140C7AC74;
// 14036F190: using guessed type __m128 var_1F0[4];
// 14036F190: using guessed type __m128 var_150[4];

