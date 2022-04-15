#include "../winhttp.h"

//----- (0000000140787150) ----------------------------------------------------
_DWORD* __fastcall sub_140787150(__int64 a1, _DWORD* a2, int a3, _DWORD* a4, __int64 a5)
{
	unsigned int v6; // ecx
	__int64 v9; // rdx
	int v10; // edx
	__int64 v11; // r8
	__int64 v12; // rdi
	__int64 v13; // rdx
	__int64 v14; // rax
	__m128i v15; // xmm4
	__int64 v16; // rcx
	int v17; // edx
	int v18; // ecx
	__int64 v19; // rcx
	__int64 v20; // rdx
	__m128 v21; // xmm2
	__m128 v22; // xmm3
	_DWORD* result; // rax
	__m128 v24; // xmm2
	__int64 v25; // rcx

	v6 = *(_DWORD*)(a1 + 4);
	if (v6 == 1)
	{
		if (a4)
			*a4 = 0;
		if (a5)
		{
			*(_QWORD*)a5 = 0i64;
			*(_DWORD*)(a5 + 8) = 0;
		}
		v9 = 3i64 * *(unsigned int*)(a1 + 8);
	LABEL_24:
		v25 = *(_QWORD*)(a1 + 24);
		*a2 = *(_DWORD*)(v25 + 4 * v9);
		a2[1] = *(_DWORD*)(v25 + 4 * v9 + 4);
		a2[2] = *(_DWORD*)(v25 + 4 * v9 + 8);
		return a2;
	}
	v10 = *(_DWORD*)a1 - 1;
	v11 = v10 & (unsigned int)(*(_DWORD*)(a1 + 8) + 1);
	if (v6 > 2)
	{
		v12 = *(_QWORD*)(a1 + 16);
		do
		{
			if (a3 - *(_DWORD*)(v12 + 4 * v11) < 0)
				break;
			--* (_DWORD*)(a1 + 4);
			*(_DWORD*)(a1 + 8) = v11;
			v11 = v10 & (unsigned int)(v11 + 1);
		} while (*(_DWORD*)(a1 + 4) > 2u);
	}
	if (a5)
	{
		v13 = *(_QWORD*)(a1 + 24);
		v14 = *(unsigned int*)(a1 + 8);
		v15 = (__m128i)_mm_sub_ps(
			_mm_unpacklo_ps(
				_mm_unpacklo_ps(
					(__m128) * (unsigned int*)(v13 + 12 * v11),
					(__m128) * (unsigned int*)(v13 + 12 * v11 + 8)),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(v13 + 12 * v11 + 4), (__m128)0i64)),
			_mm_unpacklo_ps(
				_mm_unpacklo_ps(
					(__m128) * (unsigned int*)(v13 + 12 * v14),
					(__m128) * (unsigned int*)(v13 + 12 * v14 + 8)),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(v13 + 12 * v14 + 4), (__m128)0i64)));
		*(_DWORD*)a5 = _mm_cvtsi128_si32(v15);
		*(_DWORD*)(a5 + 4) = _mm_cvtsi128_si32(_mm_srli_si128(v15, 4));
		*(_DWORD*)(a5 + 8) = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
	}
	v16 = *(_QWORD*)(a1 + 16);
	v17 = *(_DWORD*)(v16 + 4i64 * *(unsigned int*)(a1 + 8));
	if (a3 - v17 < 0)
	{
		if (a4)
			*a4 = 0;
		v9 = 3i64 * *(unsigned int*)(a1 + 8);
		goto LABEL_24;
	}
	v18 = *(_DWORD*)(v16 + 4 * v11);
	if (a3 - v18 >= 0)
	{
		if (a4)
			*a4 = 0;
		v9 = 3 * v11;
		goto LABEL_24;
	}
	if (a4)
		*a4 = v18 - v17;
	v19 = *(_QWORD*)(a1 + 24);
	v20 = *(unsigned int*)(a1 + 8);
	v21 = _mm_unpacklo_ps((__m128) * (unsigned int*)(v19 + 12 * v20 + 4), (__m128)0i64);
	v22 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128) * (unsigned int*)(v19 + 12 * v20), (__m128) * (unsigned int*)(v19 + 12 * v20 + 8)),
		v21);
	result = a2;
	v21.m128_f32[0] = (float)(a3 - *(_DWORD*)(*(_QWORD*)(a1 + 16) + 4 * v20))
		/ (float)(*(_DWORD*)(*(_QWORD*)(a1 + 16) + 4 * v11) - *(_DWORD*)(*(_QWORD*)(a1 + 16) + 4 * v20));
	v24 = _mm_add_ps(
		_mm_mul_ps(
			_mm_shuffle_ps(v21, v21, 0),
			_mm_sub_ps(
				_mm_unpacklo_ps(
					_mm_unpacklo_ps(
						(__m128) * (unsigned int*)(v19 + 12 * v11),
						(__m128) * (unsigned int*)(v19 + 12 * v11 + 8)),
					_mm_unpacklo_ps((__m128) * (unsigned int*)(v19 + 12 * v11 + 4), (__m128)0i64)),
				v22)),
		v22);
	*a2 = v24.m128_i32[0];
	a2[2] = _mm_shuffle_ps(v24, v24, 170).m128_u32[0];
	a2[1] = _mm_shuffle_ps(v24, v24, 85).m128_u32[0];
	return result;
}

