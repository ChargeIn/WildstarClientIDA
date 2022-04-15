#include "../winhttp.h"

//----- (000000014016C9A0) ----------------------------------------------------
__int64 __fastcall sub_14016C9A0(
	__int64 a1,
	__int64 a2,
	_DWORD* a3,
	__int64 a4,
	__int64 a5,
	__m128i* a6,
	int a7,
	int a8)
{
	__int64 v9; // rcx
	int* v13; // rax
	__int64 v14; // r8
	__int64 v15; // rbx
	__int64 v16; // rbp
	int* v17; // rax
	__int64 v18; // rbx
	int* v19; // rdx
	int* v20; // rsi
	__int64 v21; // rcx
	__int64 v22; // rcx
	__m128 v24[2]; // [rsp+30h] [rbp-28h] BYREF

	*(_QWORD*)a1 = a2;
	*(_QWORD*)(a1 + 8) = a4;
	v9 = a1 + 32;
	*(_QWORD*)(v9 - 8) = 0i64;
	*(_QWORD*)(v9 - 16) = 0i64;
	sub_1401095E0(v9);
	*(_QWORD*)(a1 + 80) = 0i64;
	v13 = sub_14018B280(24i64, 0);
	v14 = a5;
	*(_QWORD*)(a1 + 96) = v13;
	*(_QWORD*)v13 = v13;
	*(_QWORD*)(*(_QWORD*)(a1 + 96) + 8i64) = *(_QWORD*)(a1 + 96);
	*(_DWORD*)(a1 + 104) = *a3;
	*(_DWORD*)(a1 + 112) = a8;
	*(_DWORD*)(a1 + 120) = 0;
	if (v14)
	{
		a5 = 0i64;
		(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64, __int64*))(*(_QWORD*)qword_140C65680 + 40i64))(
			qword_140C65680,
			*(_QWORD*)(a4 + 96),
			v14,
			-1i64,
			&a5);
		v15 = *(_QWORD*)(a1 + 24);
		v16 = v15 + 1;
		v17 = sub_14018DB00(*(_QWORD*)(a1 + 16), v15 + 1, 8i64);
		*(_QWORD*)&v17[2 * v15] = a5;
	}
	else
	{
		v18 = *(_QWORD*)(a1 + 24);
		v16 = v18 + 1;
		v17 = sub_14018DB00(*(_QWORD*)(a1 + 16), v18 + 1, 8i64);
		*(_QWORD*)&v17[2 * v18] = 0i64;
	}
	v19 = *(int**)(a1 + 16);
	v20 = v17;
	if (v19 != v17)
	{
		sub_1407DB590(v17, v19, 8i64 * *(_QWORD*)(a1 + 24));
		v21 = *(_QWORD*)(a1 + 16);
		if (v21)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v21 - 16) + 8i64))(v21 - 16);
		*(_QWORD*)(a1 + 16) = v20;
	}
	*(_QWORD*)(a1 + 24) = v16;
	if (a2)
		sub_140109710((__int64*)(a1 + 32), a2 + 240, a6, 0);
	v22 = qword_140C63678;
	*(_BYTE*)(a1 + 108) = 1;
	sub_1401429A0(v22, *(_DWORD*)(a1 + 120));
	v24[0] = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B6F0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	*(_DWORD*)(a1 + 120) = sub_140141F10(qword_140C63678, v24);
	*(_DWORD*)(a1 + 116) = 16;
	return a1;
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B6F0: using guessed type __int128 xmmword_140B7B6F0;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;
// 14016C9A0: using guessed type __m128 var_28[2];

