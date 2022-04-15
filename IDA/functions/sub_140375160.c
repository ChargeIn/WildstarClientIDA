#include "../winhttp.h"

//----- (0000000140375160) ----------------------------------------------------
__int64 __fastcall sub_140375160(__m128* a1)
{
	__int64 v2; // rsi
	__int64 result; // rax
	unsigned __int64 v4; // rcx
	unsigned int v5; // ebp
	int v6; // r14d
	unsigned __int64 v7; // rcx
	unsigned __int64 v8; // rdx
	unsigned int v9; // r10d
	unsigned __int64 v10; // rax
	unsigned __int64 v11; // rcx
	unsigned __int64 v12; // rdx
	int v13; // ebp
	unsigned __int64 v14; // rcx
	unsigned __int64 v15; // rcx
	float v16; // xmm0_4
	float v17; // xmm1_4
	float v18; // xmm1_4
	int v19; // eax
	float v20; // xmm1_4
	int v21; // eax
	__m128 v22; // xmm6
	__m128 v23; // xmm0
	__m128 v24; // xmm7
	__m128 v25; // xmm0
	__m128 v26; // xmm6
	__m128 v27; // xmm0
	__m128 v28; // xmm7
	__m128 v29; // xmm0
	__m128 v30; // xmm6
	unsigned __int64 v31; // [rsp+A0h] [rbp+8h] BYREF
	unsigned __int64 v32; // [rsp+A8h] [rbp+10h] BYREF

	v2 = sub_140351080(*(_QWORD*)(a1[1].m128_u64[0] + 16), a1[1].m128_u32[2]);
	if (!v2)
		return 2147500037i64;
	v4 = a1[1].m128_u64[0];
	v5 = *(_DWORD*)(v4 + 160);
	if (v5 < (int)*(float*)(v4 + 164))
		v5 = (int)*(float*)(v4 + 164);
	v6 = dword_140B65808[*(int*)(v4 + 156)];
	v31 = 0i64;
	v7 = *(_QWORD*)(v2 + 16);
	if (v7)
	{
		if (v7 <= qword_140C3FE70)
			v8 = v7 + qword_140C3FE68;
		else
			v8 = 0i64;
	}
	else
	{
		v8 = 0i64;
	}
	if ((*(int(__fastcall**)(__int64, unsigned __int64, _QWORD, __int64, int, int, _DWORD, _DWORD, unsigned __int64*))(*(_QWORD*)qword_140C65670 + 80i64))(
		qword_140C65670,
		v8,
		v5,
		1i64,
		v6,
		21,
		0,
		0,
		&v31) >= 0)
	{
		v10 = a1[1].m128_u64[0];
		v32 = 0i64;
		if (*(int*)(v10 + 144) < 0
			|| ((v11 = *(_QWORD*)(v2 + 24)) != 0
				? (v11 <= qword_140C3FE70
					? (v12 = v11 + qword_140C3FE68)
					: (v12 = 0i64))
				: (v12 = 0i64),
				v13 = (*(__int64(__fastcall**)(__int64, unsigned __int64, _QWORD, __int64, int, int, _DWORD, _DWORD, unsigned __int64*))(*(_QWORD*)qword_140C65670 + 80i64))(
					qword_140C65670,
					v12,
					v5,
					1i64,
					v6,
					21,
					0,
					0,
					&v32),
				v13 >= 0))
		{
			v14 = a1[5].m128_u64[0];
			if (v14)
			{
				(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v14 + 8i64))(v14);
				a1[5].m128_u64[0] = 0i64;
			}
			v15 = a1[5].m128_u64[1];
			if (v15)
			{
				(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v15 + 8i64))(v15);
				a1[5].m128_u64[1] = 0i64;
			}
			v16 = 1.0;
			a1[5].m128_u64[0] = v31;
			a1[5].m128_u64[1] = v32;
			a1[2].m128_i32[1] = *(_DWORD*)(v2 + 32);
			v17 = *(float*)(v2 + 32);
			if (v17 != 0.0)
				v16 = 1.0 / v17;
			a1[2].m128_f32[2] = v16;
			v18 = *(float*)(v2 + 40) * *(float*)(v2 + 32);
			a1[2].m128_f32[3] = v18;
			if (v18 == 0.0)
				v19 = 1;
			else
				v19 = (int)(float)(1000.0 / fabs(v18));
			a1[3].m128_i32[0] = v19;
			v20 = *(float*)(v2 + 44);
			a1[3].m128_f32[1] = v20;
			if (v20 == 0.0)
				v21 = 1;
			else
				v21 = (int)(float)(6283.1855 / fabs(v20));
			a1[3].m128_i32[2] = v21;
			a1[3].m128_f32[3] = *(float*)(v2 + 68) + *(float*)(v2 + 56);
			a1[4].m128_i32[0] = *(_DWORD*)(v2 + 60);
			a1[4].m128_i32[1] = *(_DWORD*)(v2 + 64);
			a1[4].m128_i32[2] = *(_DWORD*)(v2 + 72);
			v22 = (__m128) * (unsigned int*)(v2 + 52);
			v23 = v22;
			v23.m128_f32[0] = sub_1408FE3D0(*(double*)v22.m128_u64);
			v24 = v23;
			v25 = v22;
			v25.m128_f32[0] = sub_1408FC950(*(double*)v22.m128_u64);
			a1[7] = _mm_mul_ps(
				_mm_shuffle_ps((__m128) * (unsigned int*)(v2 + 48), (__m128) * (unsigned int*)(v2 + 48), 0),
				_mm_unpacklo_ps(_mm_unpacklo_ps(v24, (__m128)0i64), _mm_unpacklo_ps(v25, (__m128)0i64)));
			v26 = (__m128) * (unsigned int*)(v2 + 36);
			v27 = v26;
			v27.m128_f32[0] = sub_1408FE3D0(*(double*)v26.m128_u64);
			v28 = v27;
			v29 = v26;
			v29.m128_f32[0] = sub_1408FC950(*(double*)v26.m128_u64);
			result = 0i64;
			v30 = _mm_xor_ps(v28, (__m128)xmmword_140B7B530);
			a1[8] = _mm_mul_ps(
				_mm_unpacklo_ps(_mm_unpacklo_ps(v29, (__m128)0i64), _mm_unpacklo_ps(v30, (__m128)0i64)),
				_mm_shuffle_ps((__m128)a1[2].m128_u32[1], (__m128)a1[2].m128_u32[1], 0));
			a1[9] = _mm_mul_ps(
				_mm_unpacklo_ps(_mm_unpacklo_ps(v28, (__m128)0i64), _mm_unpacklo_ps(v29, (__m128)0i64)),
				_mm_shuffle_ps((__m128)a1[2].m128_u32[1], (__m128)a1[2].m128_u32[1], 0));
			a1[10] = _mm_mul_ps(
				_mm_unpacklo_ps(_mm_unpacklo_ps(v29, (__m128)0i64), _mm_unpacklo_ps(v28, (__m128)0i64)),
				_mm_shuffle_ps((__m128)a1[2].m128_u32[2], (__m128)a1[2].m128_u32[2], 0));
			a1[11] = _mm_mul_ps(
				_mm_unpacklo_ps(_mm_unpacklo_ps(v30, (__m128)0i64), _mm_unpacklo_ps(v29, (__m128)0i64)),
				_mm_shuffle_ps((__m128)a1[2].m128_u32[2], (__m128)a1[2].m128_u32[2], 0));
			a1[2].m128_i32[0] = 0;
		}
		else
		{
			if (v31)
			{
				(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v31 + 8i64))(v31);
				v31 = 0i64;
			}
			sub_1400035B0();
			return (unsigned int)v13;
		}
	}
	else
	{
		sub_1400035B0();
		return v9;
	}
	return result;
}
// 14037527C: variable 'v9' is possibly undefined
// 140B65808: using guessed type int dword_140B65808[4];
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65670: using guessed type __int64 qword_140C65670;

