#include "../winhttp.h"

//----- (0000000140394340) ----------------------------------------------------
__m128* __fastcall sub_140394340(__int64 a1, __m128* a2, __m128* a3, __int64 a4, int a5)
{
	__int64 v9; // rax
	float v10; // xmm4_4
	unsigned int* v11; // rsi
	unsigned int* v12; // rdx
	unsigned __int64 i; // rax
	__m128 v14; // xmm1
	__m128 v15; // xmm2
	float v16; // xmm2_4
	_DWORD* v17; // rcx

	v9 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 32i64))(*(_QWORD*)(a1 + 24));
	v10 = *(float*)&dword_140C44698;
	v11 = (unsigned int*)v9;
	v12 = (unsigned int*)v9;
	for (i = v9 + 72i64 * *(unsigned int*)(*(_QWORD*)(a1 + 32) + 68i64); (unsigned __int64)v12 < i; v12 += 18)
	{
		v14 = _mm_sub_ps(
			*a3,
			_mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * v12, (__m128)v12[2]),
				_mm_unpacklo_ps((__m128)v12[1], (__m128)0i64)));
		v15 = _mm_mul_ps(v14, v14);
		v16 = (float)(v15.m128_f32[0] + _mm_shuffle_ps(v15, v15, 85).m128_f32[0])
			+ _mm_shuffle_ps(v15, v15, 170).m128_f32[0];
		if (v10 > v16)
		{
			v10 = v16;
			v11 = v12;
		}
	}
	*a2 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128) * v11, (__m128)v11[2]), _mm_unpacklo_ps((__m128)v11[1], (__m128)0i64));
	if (!a4)
		return a2;
	if ((a5 & 0x8003F) != 0)
		sub_140386280(*(_QWORD*)(a1 + 16), a3->m128_f32, a4, a5, 0i64);
	if ((a5 & 0x1FC0) != 0)
	{
		if ((a5 & 0x40) != 0)
			*(_DWORD*)(a4 + 144) = a2->m128_i32[1];
		if ((a5 & 0x80u) != 0)
			*(__m128*)(a4 + 64) = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128)v11[3], (__m128)v11[5]),
				_mm_unpacklo_ps((__m128)v11[4], (__m128)0i64));
		if ((a5 & 0x100) != 0)
			*(_DWORD*)(a4 + 148) = **(_DWORD**)(a1 + 32);
		if ((a5 & 0x200) != 0)
		{
			v17 = *(_DWORD**)(a1 + 32);
			*(_DWORD*)(a4 + 152) = v17[1];
			*(_DWORD*)(a4 + 156) = v17[2];
			*(_DWORD*)(a4 + 160) = v17[3];
			*(_DWORD*)(a4 + 164) = v17[4];
		}
		if ((a5 & 0x400) != 0)
		{
			*(float*)(a4 + 80) = (float)*((unsigned __int8*)v11 + 68) * 0.0039215689;
			*(float*)(a4 + 84) = (float)*((unsigned __int8*)v11 + 69) * 0.0039215689;
			*(float*)(a4 + 88) = (float)*((unsigned __int8*)v11 + 70) * 0.0039215689;
			*(float*)(a4 + 92) = (float)*((unsigned __int8*)v11 + 71) * 0.0039215689;
		}
		if ((a5 & 0x800) != 0)
		{
			*(_OWORD*)(a4 + 96) = xmmword_140C77860;
			*(_OWORD*)(a4 + 112) = xmmword_140C77870;
		}
		if ((a5 & 0x1000) != 0)
			*(_OWORD*)(a4 + 128) = 0i64;
	}
	if ((a5 & 0x7E000) != 0)
		sub_140388A30(*(_QWORD*)(a1 + 16), a2, a4, a5);
	return a2;
}
// 140C44698: using guessed type int dword_140C44698;
// 140C77860: using guessed type __int128 xmmword_140C77860;
// 140C77870: using guessed type __int128 xmmword_140C77870;

