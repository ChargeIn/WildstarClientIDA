#include "../winhttp.h"

//----- (00000001407DD8D8) ----------------------------------------------------
const __m128i* __fastcall sub_1407DD8D8(const __m128i* a1, unsigned __int16 a2)
{
	const __m128i* v3; // r8
	__int64 v5; // rcx
	__int16 v6; // ax
	const __m128i* v8; // rdx
	__m128i v9; // xmm1
	__m128i v10; // xmm0
	int v11; // ecx
	__m128i v12; // xmm1
	__m128i v13; // xmm0
	unsigned __int8 v14; // zf
	int v15; // ecx

	v3 = a1;
	if (dword_140C0F7C0 >= 2)
	{
		v8 = 0i64;
		while ((((_BYTE)v3 + 1) & 0xE) != 0)
		{
			if (v3->m128i_i16[0] == a2)
				v8 = v3;
			if (!v3->m128i_i16[0])
				return v8;
			v3 = (const __m128i*)((char*)v3 + 2);
		}
		if (a2)
		{
			v12 = _mm_cvtsi32_si128(a2);
			while (1)
			{
				v13 = _mm_loadu_si128(v3);
				v15 = _mm_cmpistri(v12, v13, 65);
				v14 = _mm_cmpistrz(v12, v13, 65);
				if (_mm_cmpistrc(v12, v13, 65))
					v8 = (const __m128i*)((char*)v3 + 2 * v15);
				if (v14)
					break;
				++v3;
			}
			return v8;
		}
		v9 = _mm_cvtsi32_si128(0xFFFF0001);
		while (1)
		{
			v10 = _mm_loadu_si128(v3);
			v11 = _mm_cmpistri(v9, v10, 21);
			if (_mm_cmpistrz(v9, v10, 21))
				break;
			++v3;
		}
		return (const __m128i*)((char*)v3 + 2 * v11);
	}
	else
	{
		v5 = 0i64;
		do
		{
			v6 = v3->m128i_i16[0];
			v3 = (const __m128i*)((char*)v3 + 2);
		} while (v6);
		do
			v3 = (const __m128i*)((char*)v3 - 2);
		while (v3 != a1 && v3->m128i_i16[0] != a2);
		if (v3->m128i_i16[0] == a2)
			return v3;
		return (const __m128i*)v5;
	}
}
// 140C0F7C0: using guessed type int dword_140C0F7C0;

