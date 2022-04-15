#include "../winhttp.h"

//----- (00000001401502E0) ----------------------------------------------------
__int64 __fastcall sub_1401502E0(__int64 a1, float* a2)
{
	int v5; // edx
	int v6; // r8d
	unsigned int* v7; // rax
	__m128i v8; // xmm2
	__m128i v9; // xmm1
	__m128i v10; // xmm3
	__int64 v11; // rdx
	float v12; // xmm2_4
	__int64 v13; // rax
	unsigned __int64 v14; // r8
	__m128* v15; // r8
	_QWORD* v16; // rcx
	__int64 v17; // r11
	unsigned __int64 v18; // rdx
	__int64 v19; // rdx
	__m128 v20; // [rsp+50h] [rbp-B0h] BYREF
	__int128 v21; // [rsp+60h] [rbp-A0h] BYREF
	__m128 v22; // [rsp+70h] [rbp-90h] BYREF
	__m128 v23; // [rsp+80h] [rbp-80h]
	__int128 v24; // [rsp+90h] [rbp-70h] BYREF
	__int128 v25; // [rsp+A0h] [rbp-60h]
	__int128 v26[6]; // [rsp+D0h] [rbp-30h] BYREF

	if (*(_BYTE*)(a1 + 9))
		return sub_140150530(a1, a2);
	v5 = (int)a2[4];
	v6 = (int)a2[5];
	v20.m128_i32[1] = (int)a2[1];
	v20.m128_u64[1] = __PAIR64__(v6, v5);
	v20.m128_i32[0] = (int)*a2;
	v7 = sub_14014E8D0(a1 + 32, &v21, (unsigned int*)&v20);
	v8 = _mm_cvtsi32_si128(0);
	v9 = _mm_cvtsi32_si128(v7[1]);
	v10 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*v7), v8);
	v23 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v7[2]), v8),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v7[3]), v8)));
	v22 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(v10, _mm_unpacklo_epi32(v9, v8)));
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 1i64);
	v12 = *(float*)(a1 + 128);
	if (v12 != 0.0)
	{
		*((_QWORD*)&v24 + 1) = &v20;
		LODWORD(v24) = 1065353216;
		*(float*)&v25 = v12;
		*((_QWORD*)&v25 + 1) = &v21;
		v20 = _mm_mul_ps(_mm_add_ps(v23, v22), (__m128)xmmword_140B7AC50);
		v21 = 0i64;
		v26[1] = v25;
		v26[0] = v24;
		sub_1401B0840((int*)v26, (__int64)&v24);
		(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)qword_140C65680 + 88i64))(qword_140C65680, &v24);
	}
	v13 = qword_140C63678;
	v14 = *(unsigned int*)(a1 + 12);
	if (v14 >= *(_QWORD*)(qword_140C63678 + 48))
		v15 = *(__m128**)(qword_140C63678 + 40);
	else
		v15 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v14);
	v16 = *(_QWORD**)(a1 + 136);
	if (v16)
	{
		sub_140103E60(
			v16,
			&v22,
			v15,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 144)) * *(float*)(a1 + 148)));
		v13 = qword_140C63678;
	}
	v17 = *(_QWORD*)(a1 + 184);
	if (v17)
	{
		v18 = *(unsigned int*)(a1 + 16);
		if (v18 >= *(_QWORD*)(v13 + 48))
			v19 = *(_QWORD*)(v13 + 40);
		else
			v19 = *(_QWORD*)(v13 + 40) + 32 * v18;
		(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __m128*, _DWORD, __int64, int, _QWORD))(*(_QWORD*)qword_140C65680 + 280i64))(
			qword_140C65680,
			v17,
			0i64,
			-1i64,
			&v22,
			*(_DWORD*)(a1 + 192),
			v19,
			1,
			0i64);
	}
	return (*(__int64(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65680 + 72i64))(
		qword_140C65680,
		v11,
		v15);
}
// 1401504FE: variable 'v11' is possibly undefined
// 1401504FE: variable 'v15' is possibly undefined
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;

