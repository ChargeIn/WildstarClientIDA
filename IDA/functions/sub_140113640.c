#include "../winhttp.h"

//----- (0000000140113640) ----------------------------------------------------
__int64 __fastcall sub_140113640(__m128* a1)
{
	__int64 result; // rax
	_WORD* v3; // rbx
	__m128i v4; // xmm1
	__m128i v5; // xmm3
	unsigned __int64 v6; // rdx
	__m128i v7; // xmm2
	__m128 v8; // xmm4
	__m128i v9; // xmm1
	__m128i v10; // xmm3
	__int64 v11; // rax
	unsigned __int64 v12; // r8
	__int64 v13; // r8
	__int128 v14; // [rsp+40h] [rbp-19h] BYREF
	__int64 v15; // [rsp+50h] [rbp-9h] BYREF
	float v16; // [rsp+60h] [rbp+7h]
	float v17; // [rsp+64h] [rbp+Bh]
	__m128 v18; // [rsp+70h] [rbp+17h] BYREF
	__m128 v19; // [rsp+80h] [rbp+27h]
	__m128 v20; // [rsp+90h] [rbp+37h] BYREF
	__m128 v21; // [rsp+A0h] [rbp+47h]

	result = qword_140C63650;
	v3 = *(_WORD**)(qword_140C63650 + 272);
	if (*v3)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 6i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 136i64))(qword_140C65680);
		v4 = _mm_cvtsi32_si128(a1[45].m128_u32[2]);
		v5 = _mm_cvtsi32_si128(a1[45].m128_u32[1]);
		v6 = a1[43].m128_u64[1];
		v7 = _mm_cvtsi32_si128(0);
		v15 = 0i64;
		v17 = 0.0;
		v8 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(v5, v7), _mm_unpacklo_epi32(v4, v7)));
		v9 = _mm_cvtsi32_si128(a1[45].m128_u32[0]);
		v10 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[44].m128_u32[3]), v7);
		v19 = v8;
		v16 = 400.0;
		v18 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(v10, _mm_unpacklo_epi32(v9, v7)));
		v14 = xmmword_140B7B240;
		(*(void(__fastcall**)(__int64, _QWORD, _WORD*, __int64, __int64*, int, __int128*, int))(*(_QWORD*)qword_140C65680
			+ 264i64))(
				qword_140C65680,
				*(_QWORD*)(v6 + 96),
				v3,
				-1i64,
				&v15,
				1024,
				&v14,
				1);
		v18.m128_i32[0] = a1[83].m128_i32[0];
		v19.m128_f32[0] = (float)(v16 - *(float*)&v15) + v18.m128_f32[0];
		v18.m128_f32[1] = (float)(a1[82].m128_f32[1] - (float)(v17 - *((float*)&v15 + 1))) - 16.0;
		v19.m128_f32[1] = (float)(v17 - *((float*)&v15 + 1)) + v18.m128_f32[1];
		v20 = _mm_sub_ps(v18, (__m128)xmmword_140B7B3C0);
		v21 = _mm_add_ps(v19, (__m128)xmmword_140B7B3C0);
		(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 96i64))(qword_140C65680, &v20);
		sub_140113580(a1, &v20);
		v11 = qword_140C63678;
		a1[86] = v20;
		a1[87] = v21;
		v12 = a1[72].m128_u32[2];
		if (v12 >= *(_QWORD*)(v11 + 48))
			v13 = *(_QWORD*)(v11 + 40);
		else
			v13 = *(_QWORD*)(v11 + 40) + 32 * v12;
		(*(void(__fastcall**)(__int64, _QWORD, _WORD*, __int64, __m128*, int, __int64, int))(*(_QWORD*)qword_140C65680
			+ 264i64))(
				qword_140C65680,
				*(_QWORD*)(a1[43].m128_u64[1] + 96),
				v3,
				-1i64,
				&v18,
				260,
				v13,
				1);
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	}
	return result;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B3C0: using guessed type __int128 xmmword_140B7B3C0;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;

