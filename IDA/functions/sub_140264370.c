#include "../winhttp.h"

//----- (0000000140264370) ----------------------------------------------------
void __fastcall sub_140264370(unsigned __int64 a1, const __m128i* a2, unsigned int a3)
{
	unsigned __int64 v4; // rcx
	unsigned __int64 v5; // r9
	unsigned __int64 v6; // rax
	unsigned __int64 v7; // r8
	__m128i si128; // xmm4
	__m128i v9; // xmm5
	__m128i v10; // xmm6
	__m128i v11; // xmm3
	const __m128i* v12; // rax
	__m128i v13; // xmm2
	unsigned __int64 v14; // r10
	const __m128i* v15; // rax
	unsigned __int64 v16; // r9
	__int32 v17; // r8d
	int v18; // ecx

	v4 = 0i64;
	v5 = a3;
	if (a3)
	{
		if (a3 >= 4ui64)
		{
			v6 = (unsigned __int64)&a2[-1].m128i_u64[1] + 4 * a3 + 4;
			v7 = a1 + 4 * (a3 - 1i64);
			if (a1 > v6 || v7 < (unsigned __int64)a2)
			{
				si128 = _mm_load_si128((const __m128i*) & xmmword_140B7A9E0);
				v9 = _mm_load_si128((const __m128i*) & xmmword_140B7B640);
				v10 = _mm_load_si128((const __m128i*) & xmmword_140B7AAB0);
				v11 = _mm_cvtsi32_si128(0x10u);
				v12 = a2;
				do
				{
					v13 = _mm_loadu_si128(v12);
					v4 += 4i64;
					++v12;
					*(const __m128i*)((char*)&v12[-1] + a1 - (_QWORD)a2) = _mm_or_si128(
						_mm_or_si128(
							_mm_sll_epi32(_mm_and_si128(v13, si128), v11),
							_mm_and_si128(v13, v9)),
						_mm_srl_epi32(_mm_and_si128(v13, v10), v11));
				} while (v4 < v5 - (v5 & 3));
			}
		}
		if (v4 < v5)
		{
			v14 = a1 - (_QWORD)a2;
			v15 = &a2[v4 / 4];
			v16 = v5 - v4;
			do
			{
				v17 = v15->m128i_i32[0];
				v18 = v15->m128i_u8[2];
				v15 = (const __m128i*)((char*)v15 + 4);
				*(__int32*)((char*)&v15->m128i_i32[-1] + v14) = v17 & 0xFF00FF00 | v18 | ((unsigned __int8)v17 << 16);
				--v16;
			} while (v16);
		}
	}
}
// 140B7A9E0: using guessed type __int128 xmmword_140B7A9E0;
// 140B7AAB0: using guessed type __int128 xmmword_140B7AAB0;
// 140B7B640: using guessed type __int128 xmmword_140B7B640;

