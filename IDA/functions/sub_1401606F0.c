#include "../winhttp.h"

//----- (00000001401606F0) ----------------------------------------------------
char __fastcall sub_1401606F0(
	__int64 a1,
	unsigned int* a2,
	__int64* a3,
	unsigned int* a4,
	__int64 a5,
	unsigned int* a6,
	int a7,
	__int64 a8,
	__int64 a9,
	int a10)
{
	unsigned int v10; // r11d
	_QWORD* v13; // rcx
	__m128i v14; // xmm2
	__m128i v17; // xmm1
	int v18; // r9d
	int v19; // r10d
	int v20; // r11d
	int v21; // edi
	__int64 v22; // rax
	__int64 v23; // rdx
	__int64 v24; // rax
	__int64 v25; // rdx
	float v26; // xmm1_4
	unsigned __int64 v27; // rdx
	__int64 v28; // rdx
	int v29; // edi
	float v30; // xmm6_4
	char result; // al
	unsigned int v32[2]; // [rsp+58h] [rbp-59h] BYREF
	signed int v33; // [rsp+60h] [rbp-51h]
	unsigned int v34; // [rsp+64h] [rbp-4Dh]
	__int128 v35; // [rsp+68h] [rbp-49h] BYREF
	__m128 v36; // [rsp+78h] [rbp-39h] BYREF
	__m128 v37; // [rsp+88h] [rbp-29h]
	__int128 v38[3]; // [rsp+98h] [rbp-19h] BYREF
	int v39; // [rsp+E8h] [rbp+37h] BYREF
	int v40; // [rsp+ECh] [rbp+3Bh]

	v10 = *a2;
	v13 = (_QWORD*)*a3;
	v14 = _mm_cvtsi32_si128(0);
	v17 = _mm_cvtsi32_si128(a2[1]);
	v37 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[2]), v14),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[3]), v14)));
	v36 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), v14), _mm_unpacklo_epi32(v17, v14)));
	if (v13 && (sub_140101470(v13, &v39), v40 > 0) && v39 > 0 && v19 - v20 > 0 && (int)(a2[3] - v18) > 0)
	{
		sub_140160560(v32, a2, a3, a4, 1, *(_DWORD*)(a1 + 1096));
		v21 = a10;
		v38[1] = (__int128)_mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v33), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v34), _mm_cvtsi32_si128(0))));
		v38[0] = (__int128)_mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v32[0]), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v32[1]), _mm_cvtsi32_si128(0))));
		if (a10)
			v22 = *(_QWORD*)(a1 + 1200);
		else
			v22 = *(_QWORD*)(a1 + 696);
		v23 = *(_QWORD*)(v22 + 96);
		v35 = xmmword_140B7B240;
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64, __int128*, int, __int128*, int))(*(_QWORD*)qword_140C65680
			+ 264i64))(
				qword_140C65680,
				v23,
				a8,
				-1i64,
				v38,
				8,
				&v35,
				1);
		if (v21)
			v24 = *(_QWORD*)(a1 + 1200);
		else
			v24 = *(_QWORD*)(a1 + 696);
		v25 = *(_QWORD*)(v24 + 96);
		v35 = xmmword_140B7B240;
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64, __int128*, int, __int128*, int))(*(_QWORD*)qword_140C65680
			+ 264i64))(
				qword_140C65680,
				v25,
				a9,
				-1i64,
				v38,
				10,
				&v35,
				1);
		v26 = (float)v33;
	}
	else
	{
		v26 = v36.m128_f32[0];
		if (*(_BYTE*)(a1 + 1100))
			v26 = v36.m128_f32[0] + (float)*(int*)(a1 + 1028);
	}
	v27 = *a6;
	v36.m128_f32[0] = v26 + (float)*(int*)(a1 + 1096);
	if (v27 >= *(_QWORD*)(qword_140C63678 + 48))
		v28 = *(_QWORD*)(qword_140C63678 + 40);
	else
		v28 = *(_QWORD*)(qword_140C63678 + 40) + 32 * v27;
	v29 = a7;
	(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __m128*, int, __int64, int, _QWORD))(*(_QWORD*)qword_140C65680
		+ 280i64))(
			qword_140C65680,
			a5,
			0i64,
			-1i64,
			&v36,
			a7,
			v28,
			1,
			0i64);
	v30 = v37.m128_f32[0] - v36.m128_f32[0];
	v35 = xmmword_140B7B240;
	(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __m128*, int, __int128*, int, _QWORD))(*(_QWORD*)qword_140C65680 + 280i64))(
		qword_140C65680,
		a5,
		0i64,
		-1i64,
		&v36,
		v29 | 0x400,
		&v35,
		1,
		0i64);
	if ((float)(v37.m128_f32[0] - v36.m128_f32[0]) > v30)
		return 1;
	result = 0;
	if ((float)(v37.m128_f32[0] - v36.m128_f32[0]) > (float)(int)(a2[2] - *a2))
		return 1;
	return result;
}
// 1401607A4: variable 'v19' is possibly undefined
// 1401607A4: variable 'v20' is possibly undefined
// 1401607B6: variable 'v18' is possibly undefined
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;

