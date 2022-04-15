#include "../winhttp.h"

//----- (000000014047D830) ----------------------------------------------------
__int64 __fastcall sub_14047D830(__m128* a1, __m128* a2)
{
	__int64* v4; // rdi
	__m128 v5; // xmm1
	unsigned __int64 v6; // rsi
	float v7; // xmm6_4
	__int64 v8; // rax
	__int64 v9; // rax
	__m128 v10; // xmm2
	__m128 v11; // xmm1
	__int64 v12; // rax
	__m128 v13; // xmm2
	__m128 v14; // xmm1
	int v16; // [rsp+30h] [rbp-29h] BYREF
	int v17; // [rsp+34h] [rbp-25h]
	__m128 v18; // [rsp+40h] [rbp-19h] BYREF
	__m128 v19; // [rsp+50h] [rbp-9h] BYREF
	__int64 v20; // [rsp+60h] [rbp+7h] BYREF
	int v21; // [rsp+68h] [rbp+Fh]
	__int64 v22; // [rsp+70h] [rbp+17h]
	__int64 v23; // [rsp+78h] [rbp+1Fh]
	int v24; // [rsp+80h] [rbp+27h]
	__int64 v25; // [rsp+88h] [rbp+2Fh]
	__int64 v26; // [rsp+D0h] [rbp+77h] BYREF
	__int64 v27; // [rsp+D8h] [rbp+7Fh] BYREF

	v4 = *(__int64**)(qword_140C65898 + 29256);
	if (!v4)
		return 0i64;
	v5 = _mm_mul_ps(*a2, *a2);
	if ((float)((float)(v5.m128_f32[0] + _mm_shuffle_ps(v5, v5, 85).m128_f32[0]) + _mm_shuffle_ps(v5, v5, 170).m128_f32[0]) <= *(float*)&dword_140C45918)
		return 0i64;
	v6 = a1[208].m128_u64[1];
	v7 = 0.0;
	v18 = a1[286];
	if (v6)
	{
		v7 = sub_14047A940(a1) * *(float*)(v6 + 140);
	}
	else
	{
		v8 = sub_14022D500(a1[13].m128_u32[2]);
		if (v8)
			v7 = *(float*)(v8 + 40);
	}
	v9 = *v4;
	v18.m128_f32[1] = v18.m128_f32[1] + fmaxf(2.0, v7);
	v27 = 0i64;
	v20 = 16449i64;
	v21 = 0;
	v22 = 0i64;
	v23 = 0i64;
	v24 = 0;
	v25 = 0i64;
	v16 = 0;
	v17 = 1065353216;
	if ((*(unsigned int(__fastcall**)(__int64*, __m128*, __m128*, int*, __int64*, __int64*))(v9 + 424))(
		v4,
		&v18,
		a2,
		&v16,
		&v27,
		&v20))
	{
		if (!(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v27 + 24i64))(v27)
			|| (v10 = _mm_sub_ps(*a2, a1[286]),
				v11 = _mm_mul_ps(v10, v10),
				(float)((float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0])
					+ _mm_shuffle_ps(v11, v11, 170).m128_f32[0]) >= *(float*)&dword_140C45918))
		{
			v12 = *v4;
			v19 = _mm_add_ps(*a2, (__m128)xmmword_140B7A4B0);
			v26 = 0i64;
			v20 = 16449i64;
			v21 = 0;
			v22 = 0i64;
			v23 = 0i64;
			v24 = 0;
			v25 = 0i64;
			v16 = 0;
			v17 = 1065353216;
			if ((*(unsigned int(__fastcall**)(__int64*, __m128*, __m128*, int*, __int64*, __int64*))(v12 + 424))(
				v4,
				&v18,
				&v19,
				&v16,
				&v26,
				&v20))
			{
				if (!(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v26 + 24i64))(v26)
					|| (v13 = _mm_sub_ps(v19, a1[286]),
						v14 = _mm_mul_ps(v13, v13),
						(float)((float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0])
							+ _mm_shuffle_ps(v14, v14, 170).m128_f32[0]) >= *(float*)&dword_140C45918))
				{
					if (v26)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 8i64))(v26);
					if (v27)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
					return 0i64;
				}
			}
			if (v26)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 8i64))(v26);
		}
	}
	if (v27)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
	return 1i64;
}
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140C45918: using guessed type int dword_140C45918;
// 140C65898: using guessed type __int64 qword_140C65898;

