#include "../winhttp.h"

//----- (00000001402D4800) ----------------------------------------------------
__int64 __fastcall sub_1402D4800(__int64* a1, __int64 a2, __m128* a3, _DWORD* a4, __int64 a5, __int16 a6)
{
	__int64 v7; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rdi
	__int64 v15; // r14
	__int64 v16; // r8
	__int64 v17; // rdx
	__int64 v18; // rcx
	__int64 v19; // rax
	__m128 v20; // xmm5
	__m128 v21; // xmm4
	__m128 v22; // xmm1
	int v23[4]; // [rsp+30h] [rbp-68h] BYREF
	int v24[4]; // [rsp+40h] [rbp-58h] BYREF
	__int64 v25[2]; // [rsp+50h] [rbp-48h] BYREF
	int v26; // [rsp+60h] [rbp-38h]
	int v27; // [rsp+64h] [rbp-34h]
	int v28; // [rsp+68h] [rbp-30h]

	v7 = *a1;
	v23[0] = -1;
	if (v7)
	{
		if ((*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v7 + 32i64))(v7, v23))
		{
			sub_1402D3300(a1);
			if (*a1)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)*a1 + 8i64))(*a1);
				*a1 = 0i64;
			}
		}
	}
	v25[1] = (__int64)sub_1402D3C40;
	v25[0] = (__int64)a1;
	v27 = -1;
	v28 = 2139095039;
	v26 = 8;
	if (!(unsigned __int8)sub_1402D4F90(a1 + 6, a2, a3->m128_f32, 3.4028235e38, (__int64)v25))
		return 0i64;
	v12 = *a1;
	v23[0] = -1;
	if (v12)
	{
		if ((*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v12 + 32i64))(v12, v23))
		{
			sub_1402D3300(a1);
			if (*a1)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)*a1 + 8i64))(*a1);
				*a1 = 0i64;
			}
		}
	}
	v13 = *a1;
	v24[0] = -1;
	v14 = (unsigned int)(3 * v27);
	v15 = *(_QWORD*)(a1[2] + 96);
	if (v13)
	{
		if ((*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v13 + 32i64))(v13, v24))
		{
			sub_1402D3300(a1);
			if (*a1)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)*a1 + 8i64))(*a1);
				*a1 = 0i64;
			}
		}
	}
	v16 = *(_QWORD*)(a1[2] + 64);
	v17 = 3i64 * *(unsigned int*)(v15 + 4 * v14);
	v18 = 3i64 * *(unsigned int*)(v15 + 4 * v14 + 4);
	v19 = *(unsigned int*)(v15 + 4 * v14 + 8);
	v20 = _mm_sub_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v16 + 4 * v18), (__m128) * (unsigned int*)(v16 + 4 * v18 + 8)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v16 + 4 * v18 + 4), (__m128)0i64)),
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v16 + 4 * v17), (__m128) * (unsigned int*)(v16 + 4 * v17 + 8)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v16 + 4 * v17 + 4), (__m128)0i64)));
	v21 = _mm_sub_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v16 + 12 * v19), (__m128) * (unsigned int*)(v16 + 12 * v19 + 8)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v16 + 12 * v19 + 4), (__m128)0i64)),
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v16 + 4 * v17), (__m128) * (unsigned int*)(v16 + 4 * v17 + 8)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v16 + 4 * v17 + 4), (__m128)0i64)));
	v22 = _mm_mul_ps(
		*a3,
		_mm_sub_ps(
			_mm_mul_ps(_mm_shuffle_ps(v21, v21, 210), _mm_shuffle_ps(v20, v20, 201)),
			_mm_mul_ps(_mm_shuffle_ps(v21, v21, 201), _mm_shuffle_ps(v20, v20, 210))));
	if ((float)((float)(v22.m128_f32[0] + _mm_shuffle_ps(v22, v22, 85).m128_f32[0])
		+ _mm_shuffle_ps(v22, v22, 170).m128_f32[0]) > 0.0)
		return 0i64;
	*a4 = v28;
	if (a5)
	{
		if ((a6 & 0x2000) != 0)
			*(_DWORD*)(a5 + 168) = sub_1402D47B0((__int64)a1);
	}
	return 1i64;
}
// 1402D4800: using guessed type int var_58[4];

