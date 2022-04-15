#include "../winhttp.h"

//----- (0000000140783690) ----------------------------------------------------
_DWORD* __fastcall sub_140783690(__int64 a1, _DWORD* a2, int a3, int a4, _DWORD* a5, __int64 a6)
{
	__m128 v6; // xmm6
	_DWORD* v10; // rax
	int v11; // r8d
	unsigned int v12; // ecx
	__int64 v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rax
	__m128 v16; // xmm6
	__m128 v17; // xmm7
	__m128 v18; // xmm8
	double v19; // xmm0_8
	float v20; // xmm5_4
	__m128 v21; // xmm0
	__m128i v22; // xmm6
	int v24; // r9d
	__int64 v25; // rdx
	__int64 v26; // r10
	__int64 v27; // r9
	__int64 v28; // rcx
	int v29; // r11d
	int v30; // edx
	__int64 v31; // rcx
	__m128 v32; // xmm3
	int v33[2]; // [rsp+30h] [rbp-48h] BYREF
	unsigned int v34; // [rsp+38h] [rbp-40h]

	if (a4)
	{
		v10 = sub_140787150(a1, v33, a3, a5, a6);
		*(_DWORD*)(a1 + 36) = *v10;
		*(_DWORD*)(a1 + 40) = v10[1];
		*(_DWORD*)(a1 + 44) = v10[2];
		goto LABEL_10;
	}
	v11 = *(_DWORD*)(a1 + 32);
	v12 = *(_DWORD*)(a1 + 4);
	if (v12 == 1)
	{
		v13 = *(unsigned int*)(a1 + 8);
	}
	else
	{
		v24 = *(_DWORD*)a1 - 1;
		v25 = v24 & (unsigned int)(*(_DWORD*)(a1 + 8) + 1);
		if (v12 > 2)
		{
			v26 = *(_QWORD*)(a1 + 16);
			do
			{
				if (v11 - *(_DWORD*)(v26 + 4 * v25) < 0)
					break;
				--* (_DWORD*)(a1 + 4);
				*(_DWORD*)(a1 + 8) = v25;
				v25 = v24 & (unsigned int)(v25 + 1);
			} while (*(_DWORD*)(a1 + 4) > 2u);
		}
		v27 = *(unsigned int*)(a1 + 8);
		v28 = *(_QWORD*)(a1 + 16);
		v29 = *(_DWORD*)(v28 + 4 * v27);
		if (v11 - v29 < 0)
		{
			v14 = 3 * v27;
			goto LABEL_6;
		}
		v13 = (unsigned int)v25;
		v30 = *(_DWORD*)(v28 + 4 * v25);
		if (v11 - v30 < 0)
		{
			v31 = *(_QWORD*)(a1 + 24);
			v32 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * (unsigned int*)(v31 + 12 * v27), (__m128) * (unsigned int*)(v31 + 12 * v27 + 8)),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(v31 + 12 * v27 + 4), (__m128)0i64));
			v6.m128_f32[0] = (float)(v11 - v29) / (float)(v30 - v29);
			v16 = _mm_add_ps(
				_mm_mul_ps(
					_mm_shuffle_ps(v6, v6, 0),
					_mm_sub_ps(
						_mm_unpacklo_ps(
							_mm_unpacklo_ps(
								(__m128) * (unsigned int*)(v31 + 12 * v13),
								(__m128) * (unsigned int*)(v31 + 12 * v13 + 8)),
							_mm_unpacklo_ps((__m128) * (unsigned int*)(v31 + 12 * v13 + 4), (__m128)0i64)),
						v32)),
				v32);
			v17 = _mm_shuffle_ps(v16, v16, 85);
			v18 = _mm_shuffle_ps(v16, v16, 170);
			goto LABEL_7;
		}
	}
	v14 = 3 * v13;
LABEL_6:
	v15 = *(_QWORD*)(a1 + 24);
	v16 = (__m128) * (unsigned int*)(v15 + 4 * v14);
	v17 = (__m128) * (unsigned int*)(v15 + 4 * v14 + 4);
	v18 = (__m128) * (unsigned int*)(v15 + 4 * v14 + 8);
LABEL_7:
	sub_140787150(a1, v33, a3, a5, a6);
	v19 = 0.0;
	if (a3 - *(_DWORD*)(a1 + 32) >= 0)
		*(float*)&v19 = (float)(a3 - *(_DWORD*)(a1 + 32)) * 0.001;
	*(float*)&v19 = (float)(*(float*)&v19 * -0.69314718) * 6.0240965;
	v20 = sub_1408FC7F0(v19);
	v21 = (__m128)v34;
	v21.m128_f32[0] = v20;
	v22 = (__m128i)_mm_add_ps(
		_mm_mul_ps(
			_mm_sub_ps(
				_mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 36), (__m128) * (unsigned int*)(a1 + 44)),
					_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 40), (__m128)0i64)),
				_mm_unpacklo_ps(_mm_unpacklo_ps(v16, v18), _mm_unpacklo_ps(v17, (__m128)0i64))),
			_mm_shuffle_ps(v21, v21, 0)),
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)(unsigned int)v33[0], (__m128)v34),
			_mm_unpacklo_ps((__m128)(unsigned int)v33[1], (__m128)0i64)));
	*(_DWORD*)(a1 + 36) = _mm_cvtsi128_si32(v22);
	*(_DWORD*)(a1 + 40) = _mm_cvtsi128_si32(_mm_srli_si128(v22, 4));
	*(_DWORD*)(a1 + 44) = _mm_cvtsi128_si32(_mm_srli_si128(v22, 8));
LABEL_10:
	*(_DWORD*)(a1 + 32) = a3;
	*a2 = *(_DWORD*)(a1 + 36);
	a2[1] = *(_DWORD*)(a1 + 40);
	a2[2] = *(_DWORD*)(a1 + 44);
	return a2;
}
// 1407838E8: variable 'v6' is possibly undefined

