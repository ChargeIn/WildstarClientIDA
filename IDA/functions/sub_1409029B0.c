#include "../winhttp.h"

//----- (00000001409029B0) ----------------------------------------------------
void __fastcall sub_1409029B0(
	__int64 a1,
	__int64 a2,
	unsigned __int64 a3,
	unsigned __int64 a4,
	double a5,
	void* a6,
	__int64 a7,
	__int64 a8,
	__int64 a9,
	__int64 a10,
	__int64 a11,
	__int64 a12,
	int a13,
	int a14,
	int a15,
	int a16,
	int a17,
	__int64 a18,
	int a19,
	int a20,
	int a21,
	int a22,
	int a23,
	int a24,
	int a25,
	int a26,
	int a27,
	__int128* a28,
	int a29,
	__int128* a30,
	__int128* a31)
{
	__m128d v31; // xmm0
	__int64 v33; // rdx

	if (_mm_movemask_pd((__m128d)_mm_cmpgt_epi32(
		(__m128i)_mm_and_pd(v31, (__m128d)xmmword_140E4FA60),
		(__m128i)xmmword_140E4FA20)))
	{
		v33 = _mm_movemask_pd((__m128d)_mm_cmpgt_epi32(
			(__m128i)xmmword_140E4FB30,
			(__m128i)_mm_and_pd(v31, (__m128d)xmmword_140E4FA60))) ^ 3u;
		if ((_DWORD)v33)
			sub_140902E13(
				a1,
				v33,
				a3,
				a4,
				a5,
				a6,
				a7,
				a8,
				a9,
				a10,
				a11,
				a12,
				a13,
				a14,
				a15,
				a16,
				a17,
				a18,
				a19,
				a20,
				a21,
				a22,
				a23,
				a24,
				a25,
				a26,
				a27,
				a28,
				a29,
				a30,
				a31);
		else
			sub_140902E6B();
	}
}
// 140902D4A: ignored the value written to the shadow area of the succeeding call
// 1409029DF: variable 'v31' is possibly undefined
// 140E4FA20: using guessed type __int128 xmmword_140E4FA20;
// 140E4FA60: using guessed type __int128 xmmword_140E4FA60;
// 140E4FB30: using guessed type __int128 xmmword_140E4FB30;

