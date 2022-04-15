#include "../winhttp.h"

//----- (00000001400C9960) ----------------------------------------------------
void __fastcall sub_1400C9960(__int64 a1, float* a2, __m128* a3, float* a4, __m128* a5)
{
	_DWORD* v9; // rax
	__int64 v10; // rax
	unsigned int v11; // r9d
	unsigned int v12; // r8d
	__m128* v13; // rax
	bool v14; // zf
	double(__fastcall * **v15)(__int64); // rdi
	__m128 v16; // xmm9
	float v17; // xmm0_4
	int v18; // eax
	double v19; // xmm0_8
	__m128 v20; // xmm3
	unsigned int v21; // [rsp+20h] [rbp-78h]
	unsigned int v22; // [rsp+24h] [rbp-74h]
	int v23; // [rsp+28h] [rbp-70h]
	int v24; // [rsp+2Ch] [rbp-6Ch]
	__int128 v25; // [rsp+30h] [rbp-68h] BYREF

	if (*(char*)(a1 + 29) >= 0)
	{
		v9 = sub_1400CB0E0(a1, &v25, a1 + 64);
		*(_DWORD*)(a1 + 396) = *v9;
		*(_DWORD*)(a1 + 400) = v9[1];
		*(_DWORD*)(a1 + 404) = v9[2];
		*(_DWORD*)(a1 + 408) = v9[3];
		*(_BYTE*)(a1 + 29) |= 0x80u;
		v10 = a1;
		do
		{
			if (!*(_DWORD*)(v10 + 392))
				break;
			*(_DWORD*)(v10 + 392) = 0;
			v10 = *(_QWORD*)(v10 + 16);
		} while (v10);
	}
	v11 = *(_DWORD*)(a1 + 396);
	v12 = *(_DWORD*)(a1 + 400);
	v23 = *(_DWORD*)(a1 + 404);
	v24 = *(_DWORD*)(a1 + 408);
	*a2 = *(float*)(a1 + 616);
	v21 = v11;
	v22 = v12;
	*a3 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v23 - v11), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v24 - v12), _mm_cvtsi32_si128(0)))),
		(__m128)xmmword_140B7AC50);
	*a4 = *(float*)(a1 + 620);
	*a5 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(0))));
	v13 = *(__m128**)(a1 + 448);
	if (v13)
	{
		v14 = (v13[4].m128_i8[8] & 2) == 0;
		v25 = 0i64;
		if (!v14)
			*a5 = _mm_add_ps(*a5, v13[6]);
	}
	v15 = (double(__fastcall***)(__int64))(a1 + 624);
	v16 = (__m128)0x3F800000u;
	if ((**(float(__fastcall***)(__int64))(a1 + 624))(a1 + 624) < 1.0)
	{
		v17 = (**v15)(a1 + 624);
		if (v17 > 0.0 && (*(_DWORD*)(a1 + 656) & 0x80000000) != 0)
		{
			(**v15)(a1 + 624);
			v18 = dword_140C3C160;
			if (*(_DWORD*)qword_140C63750 < dword_140C3C160)
				v18 = *(_DWORD*)qword_140C63750;
			*a2 = (float)((float)(*(float*)(a1 + 616) - (float)(*(float*)(a1 + 616) * 0.5)) * v17)
				+ (float)(*(float*)(a1 + 616) * 0.5);
			if (byte_140C3C170[v18])
				*a4 = (float)(1.0 - (float)(**v15)(a1 + 624)) * *(float*)&dword_140C3BFF4;
			v19 = (**v15)(a1 + 624);
			v20 = (__m128)0x3F800000u;
			v16.m128_f32[0] = (float)((float)(1.0 - *(float*)&v19) * (float)(int)(v24 - v22)) * 0.25;
			v20.m128_f32[0] = (float)((float)(1.0 - (float)(**v15)(a1 + 624)) * (float)(int)(v23 - v21)) * 0.25;
			*a5 = _mm_add_ps(*a5, _mm_unpacklo_ps(_mm_unpacklo_ps(v20, (__m128)0i64), _mm_unpacklo_ps(v16, (__m128)0i64)));
		}
	}
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C3BFF4: using guessed type int dword_140C3BFF4;
// 140C3C160: using guessed type int dword_140C3C160;
// 140C3C170: using guessed type _BYTE byte_140C3C170[32];
// 140C63750: using guessed type __int64 qword_140C63750;

