#include "../winhttp.h"

//----- (00000001400CB470) ----------------------------------------------------
_DWORD* __fastcall sub_1400CB470(__int64 a1, _DWORD* a2)
{
	_DWORD* v4; // rax
	__int64 v5; // rax
	__m128 v6; // xmm6
	__m128i v7; // xmm3
	__m128i v8; // xmm1
	__int64 v9; // rbx
	__m128 v10; // xmm7
	int v11; // edx
	int v12; // r8d
	_DWORD* result; // rax
	int v14; // [rsp+30h] [rbp-D0h] BYREF
	float v15[3]; // [rsp+34h] [rbp-CCh] BYREF
	__m128 v16; // [rsp+40h] [rbp-C0h]
	__m128 v17; // [rsp+50h] [rbp-B0h]
	__m128 v18; // [rsp+60h] [rbp-A0h] BYREF
	__int128 v19; // [rsp+70h] [rbp-90h]
	__int128 v20; // [rsp+80h] [rbp-80h]
	__m128 v21; // [rsp+90h] [rbp-70h] BYREF
	__m128 v22; // [rsp+A0h] [rbp-60h] BYREF
	__m128 v23; // [rsp+B0h] [rbp-50h]
	__m128 v24; // [rsp+D0h] [rbp-30h]
	__int128 v25[6]; // [rsp+E0h] [rbp-20h] BYREF

	if (*(char*)(a1 + 29) >= 0)
	{
		v4 = sub_1400CB0E0(a1, &v18, a1 + 64);
		*(_DWORD*)(a1 + 396) = *v4;
		*(_DWORD*)(a1 + 400) = v4[1];
		*(_DWORD*)(a1 + 404) = v4[2];
		*(_DWORD*)(a1 + 408) = v4[3];
		*(_BYTE*)(a1 + 29) |= 0x80u;
		v5 = a1;
		do
		{
			if (!*(_DWORD*)(v5 + 392))
				break;
			*(_DWORD*)(v5 + 392) = 0;
			v5 = *(_QWORD*)(v5 + 16);
		} while (v5);
	}
	v6 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 404)), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 408)), _mm_cvtsi32_si128(0))));
	v7 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 396));
	v8 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 400));
	v9 = *(_QWORD*)(a1 + 16);
	v10 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(v7, _mm_cvtsi32_si128(0)), _mm_unpacklo_epi32(v8, _mm_cvtsi32_si128(0))));
	v17 = v6;
	v16 = v10;
	if (v9)
	{
		do
		{
			sub_1400C9960(v9, (float*)&v14, &v21, v15, &v18);
			LODWORD(v20) = 0;
			LODWORD(v19) = v14;
			*((_QWORD*)&v19 + 1) = &v21;
			*((_QWORD*)&v20 + 1) = &v18;
			v25[0] = v19;
			v25[1] = v20;
			sub_1401B0840((int*)v25, (__int64)&v22);
			v9 = *(_QWORD*)(v9 + 16);
			v10 = _mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v22), _mm_mul_ps(_mm_shuffle_ps(v10, v10, 85), v23)),
				v24);
			v6 = _mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), v22), _mm_mul_ps(_mm_shuffle_ps(v6, v6, 85), v23)),
				v24);
		} while (v9);
		v17 = v6;
		v16 = v10;
	}
	v11 = (int)v16.m128_f32[1];
	v12 = (int)v17.m128_f32[0];
	result = a2;
	*a2 = (int)v16.m128_f32[0];
	a2[1] = v11;
	a2[2] = v12;
	a2[3] = (int)v17.m128_f32[1];
	return result;
}
// 1400CB470: using guessed type float var_14C[3];

