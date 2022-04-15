#include "../winhttp.h"

//----- (0000000140168600) ----------------------------------------------------
__int64 __fastcall sub_140168600(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	__m128i* a4,
	__m128i* a5,
	__m128i* a6,
	_QWORD* a7,
	_OWORD* a8,
	__int64 a9,
	__int64 a10)
{
	__int64 v12; // rcx
	__m128i si128; // xmm1
	__int64 v14; // rdx
	__int64 v15; // rdx
	__int64 v16; // rdx
	_OWORD* v17; // rax
	__int64 v18; // rcx
	int v19; // ecx
	int v20; // edx
	int v21; // r8d
	__m128 v23[2]; // [rsp+40h] [rbp-28h] BYREF

	sub_1400C5920(a1, a2, a3, a7, a8, a9, a10);
	*(_QWORD*)a1 = off_140B5CD40;
	sub_1401095E0(a1 + 1024);
	sub_1401095E0(a1 + 1072);
	sub_1401095E0(a1 + 1120);
	sub_1401095E0(a1 + 1168);
	sub_1401095E0(a1 + 1216);
	sub_1401095E0(a1 + 1264);
	v12 = qword_140C63678;
	si128 = _mm_load_si128((const __m128i*) & xmmword_140B7B6F0);
	*(_QWORD*)(a1 + 1416) = 0i64;
	*(_QWORD*)(a1 + 1408) = 0i64;
	v23[0] = _mm_mul_ps(
		_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(si128, (__m128i)0i64), (__m128i)0i64), 198)),
		(__m128)xmmword_140B7AB70);
	*(_DWORD*)(a1 + 1444) = sub_140141F10(v12, v23);
	v14 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 432) |= 8ui64;
	if (v14)
		sub_140109710((__int64*)(a1 + 1024), v14 + 240, a4, 0);
	v15 = *(_QWORD*)(a1 + 32);
	if (v15)
		sub_140109710((__int64*)(a1 + 1072), v15 + 240, a5, 0);
	v16 = *(_QWORD*)(a1 + 32);
	if (v16)
		sub_140109710((__int64*)(a1 + 1168), v16 + 240, a6, 0);
	*(_DWORD*)(a1 + 1312) = 0;
	*(_QWORD*)(a1 + 1316) = 1065353216i64;
	*(_QWORD*)(a1 + 1324) = 1065353216i64;
	*(_QWORD*)(a1 + 1332) = 1086918619i64;
	*(_DWORD*)(a1 + 704) = 37;
	v17 = (_OWORD*)(a1 + 1344);
	v18 = 4i64;
	do
	{
		*v17++ = 0i64;
		--v18;
	} while (v18);
	v19 = *(_DWORD*)(a1 + 720);
	v20 = *(_DWORD*)(a1 + 724);
	v21 = *(_DWORD*)(a1 + 728);
	*(_DWORD*)(a1 + 1428) = *(_DWORD*)(a1 + 716);
	*(_DWORD*)(a1 + 1432) = v19;
	*(_DWORD*)(a1 + 1436) = v20;
	*(_DWORD*)(a1 + 1440) = v21;
	return a1;
}
// 140B5CD40: using guessed type __int64 (__fastcall *off_140B5CD40[25])();
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B6F0: using guessed type __int128 xmmword_140B7B6F0;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140168600: using guessed type __m128 var_28[2];

