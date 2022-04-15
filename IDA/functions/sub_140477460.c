#include "../winhttp.h"

//----- (0000000140477460) ----------------------------------------------------
_BOOL8 __fastcall sub_140477460(__int64* a1, unsigned int a2, __m128* a3)
{
	int v4; // eax
	__m128* v8; // rsi
	__int64 v9; // rax
	float v10; // xmm3_4
	__m128 v11; // xmm4
	__m128 v12; // xmm2
	__m128 v13; // xmm1
	__m128* v14; // rcx
	__m128 v15; // xmm2
	__m128 v16; // xmm1
	__int64 v17; // rcx
	__int64 v18; // rcx
	int v19[6]; // [rsp+20h] [rbp-18h] BYREF

	v4 = dword_140C477D0;
	if (*(_DWORD*)qword_140C63750 < dword_140C477D0)
		v4 = *(_DWORD*)qword_140C63750;
	if (!byte_140C477E0[v4])
		return 0i64;
	v8 = *(__m128**)(qword_140C65898 + 25744);
	if (!v8)
		return 0i64;
	v9 = *a1;
	v19[0] = 0;
	if (!(*(unsigned int(__fastcall**)(__int64*, int*, _QWORD))(v9 + 16))(a1, v19, 0i64)
		|| a2 && !(*(unsigned int(__fastcall**)(__int64*, _QWORD))(*a1 + 848))(a1, a2))
	{
		return 0i64;
	}
	if ((dword_140DC3060 & 1) != 0)
	{
		v10 = *(float*)&dword_140DC3064;
	}
	else
	{
		v10 = 2500.0;
		dword_140DC3064 = 1159479296;
		dword_140DC3060 |= 1u;
	}
	v11 = a3[286];
	v12 = _mm_sub_ps(v8[286], v11);
	v13 = _mm_mul_ps(v12, v12);
	if ((float)((float)(v13.m128_f32[0] + _mm_shuffle_ps(v13, v13, 85).m128_f32[0])
		+ _mm_shuffle_ps(v13, v13, 170).m128_f32[0]) > v10)
	{
		v14 = *(__m128**)(qword_140C65898 + 29096);
		if (!v14)
			v14 = *(__m128**)(qword_140C65898 + 29088);
		v15 = _mm_sub_ps(v14[2], v11);
		v16 = _mm_mul_ps(v15, v15);
		if ((float)((float)(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0])
			+ _mm_shuffle_ps(v16, v16, 170).m128_f32[0]) > v10)
			return 0i64;
	}
	v17 = *(_QWORD*)(qword_140C65898 + 29096);
	return !v17 || !*(_DWORD*)(v17 + 696) || (v18 = *(_QWORD*)(qword_140C65898 + 29080)) == 0 || !*(_DWORD*)(v18 + 52);
}
// 140C477D0: using guessed type int dword_140C477D0;
// 140C477E0: using guessed type _BYTE byte_140C477E0[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC3060: using guessed type int dword_140DC3060;
// 140DC3064: using guessed type int dword_140DC3064;
// 140477460: using guessed type int var_18[6];

