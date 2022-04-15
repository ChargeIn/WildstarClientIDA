//----- (00000001402672A0) ----------------------------------------------------
__int64 __fastcall sub_1402672A0(__m128* a1, unsigned int* a2, char a3)
{
	__m128 v3; // xmm4
	__m128 v4; // xmm1
	__m128 v5; // xmm5
	__m128 v6; // xmm4
	__m128 v7; // xmm5
	__m128 v8; // xmm2
	__m128 v9; // xmm1
	__m128 v10; // xmm0
	unsigned int v11; // edx
	__m128 v12; // xmm1
	__int64 v13; // r8
	__int64 result; // rax

	v3 = _mm_mul_ps(
		_mm_mul_ps(
			_mm_cvtepi32_ps((__m128i)_mm_and_ps(_mm_shuffle_ps((__m128) * a2, (__m128) * a2, 0), (__m128)xmmword_140B60D90)),
			(__m128)xmmword_140B60DE0),
		(__m128)xmmword_140C58780);
	v4 = _mm_andnot_ps((__m128)xmmword_140B608C0, (__m128)xmmword_140B60900);
	v5 = _mm_mul_ps(
		_mm_mul_ps(
			_mm_cvtepi32_ps((__m128i)_mm_and_ps(
				_mm_shuffle_ps(
					(__m128) * (unsigned int*)((char*)a2 + 2),
					(__m128) * (unsigned int*)((char*)a2 + 2),
					0),
				(__m128)xmmword_140B60D90)),
			(__m128)xmmword_140B60DE0),
		(__m128)xmmword_140C58780);
	v6 = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(v3, v3, 198), (__m128)xmmword_140B608C0), v4);
	v7 = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(v5, v5, 198), (__m128)xmmword_140B608C0), v4);
	if (a3 && *(_WORD*)a2 <= *((_WORD*)a2 + 1))
	{
		v8 = 0i64;
		v9 = _mm_mul_ps(_mm_sub_ps(v7, v6), (__m128)xmmword_140B7AC50);
	}
	else
	{
		v10 = _mm_sub_ps(v7, v6);
		v9 = _mm_mul_ps((__m128)xmmword_140B7AC10, v10);
		v8 = _mm_add_ps(_mm_mul_ps((__m128)xmmword_140B7AC70, v10), v6);
	}
	v11 = a2[1];
	v12 = _mm_add_ps(v9, v6);
	v13 = 16i64;
	do
	{
		result = v11 & 3;
		if ((v11 & 3) != 0)
		{
			result = (unsigned int)(result - 1);
			if ((_DWORD)result)
			{
				result = (unsigned int)(result - 1);
				if ((_DWORD)result)
					*a1 = v8;
				else
					*a1 = v12;
			}
			else
			{
				*a1 = v7;
			}
		}
		else
		{
			*a1 = v6;
		}
		++a1;
		v11 >>= 2;
		--v13;
	} while (v13);
	return result;
}
// 140B608C0: using guessed type __int128 xmmword_140B608C0;
// 140B60900: using guessed type __int128 xmmword_140B60900;
// 140B60D90: using guessed type __int128 xmmword_140B60D90;
// 140B60DE0: using guessed type __int128 xmmword_140B60DE0;
// 140B7AC10: using guessed type __int128 xmmword_140B7AC10;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7AC70: using guessed type __int128 xmmword_140B7AC70;
// 140C58780: using guessed type __int128 xmmword_140C58780;

