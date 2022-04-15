//----- (00000001406DB860) ----------------------------------------------------
__int64 __fastcall sub_1406DB860(__int64 a1)
{
	int v1; // eax
	int v2; // r8d
	_QWORD* v4; // rcx
	int v5; // r9d
	unsigned int v6; // edx
	int v7; // eax
	unsigned int v8; // r8d
	__m128i v9; // xmm3
	__int64 v10; // rdx
	__m128i v11; // xmm2
	int v13; // [rsp+30h] [rbp-68h] BYREF
	int v14; // [rsp+34h] [rbp-64h]
	unsigned int v15; // [rsp+38h] [rbp-60h]
	unsigned int v16; // [rsp+3Ch] [rbp-5Ch]
	__int128 v17; // [rsp+40h] [rbp-58h] BYREF
	__int128 v18[2]; // [rsp+50h] [rbp-48h] BYREF
	__int128 v19[2]; // [rsp+70h] [rbp-28h] BYREF

	v1 = *(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 716);
	v2 = *(_DWORD*)(a1 + 728) - *(_DWORD*)(a1 + 720);
	v17 = xmmword_140B7B120;
	v4 = *(_QWORD**)(a1 + 1024);
	v5 = (v1 - 512) / 2;
	v13 = v5;
	v6 = v5 + 512;
	v7 = (v2 - 512) / 2;
	v15 = v5 + 512;
	v8 = v7 + 512;
	v14 = v7;
	v16 = v7 + 512;
	if (v4)
	{
		sub_140103CF0(
			v4,
			(unsigned int*)&v13,
			(__m128*) & v17,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1032)) * *(float*)(a1 + 1036)));
		v8 = v16;
		v6 = v15;
		v7 = v14;
		v5 = v13;
	}
	v9 = _mm_cvtsi32_si128(v6);
	v10 = *(_QWORD*)(a1 + 2072);
	v11 = _mm_cvtsi32_si128(0);
	v18[1] = (__int128)_mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(v9, v11), _mm_unpacklo_epi32(_mm_cvtsi32_si128(v8), v11)));
	v19[1] = (__int128)_mm_cvtepi32_ps((__m128i)xmmword_140B7A440);
	v18[0] = (__int128)_mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), v11),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), v11)));
	v17 = xmmword_140B7B240;
	v19[0] = (__int128)_mm_cvtepi32_ps((__m128i)0i64);
	return (*(__int64(__fastcall**)(__int64, __int64, __int128*, __int128*, __int128*, int))(*(_QWORD*)qword_140C65680
		+ 240i64))(
			qword_140C65680,
			v10,
			v19,
			v18,
			&v17,
			1);
}
// 140B7A440: using guessed type __int128 xmmword_140B7A440;
// 140B7B120: using guessed type __int128 xmmword_140B7B120;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C65680: using guessed type __int64 qword_140C65680;

