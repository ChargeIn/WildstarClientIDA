#include "../winhttp.h"

//----- (00000001402D9EE0) ----------------------------------------------------
__int64 __fastcall sub_1402D9EE0(__int64* a1, unsigned int* a2, __m128* a3, int a4)
{
	__m128 v4; // xmm4
	__m128 v7; // xmm3
	unsigned int v8; // esi
	__m128 v9; // xmm4
	__m128 v10; // xmm3
	__int64 v11; // rax
	int v13[4]; // [rsp+20h] [rbp-28h] BYREF
	__m128 v14; // [rsp+30h] [rbp-18h] BYREF
	__int64* v15; // [rsp+58h] [rbp+10h] BYREF

	v4 = (__m128) * a2;
	if (v4.m128_f32[0] < *(float*)&dword_140C79CB0
		|| v4.m128_f32[0] >= *(float*)&dword_140C79CC0
		|| (v7 = (__m128)a2[1], v7.m128_f32[0] < *(float*)&dword_140C79CB4)
		|| v7.m128_f32[0] >= *(float*)&dword_140C79CC4)
	{
		sub_1402D9E20((__int64)a3, a4);
		return 0i64;
	}
	else
	{
		v8 = 0;
		v15 = 0i64;
		v7.m128_f32[0] = (float)((float)(v7.m128_f32[0] * *(float*)&dword_140C41B98) + 0.5) * 2048.0;
		v4.m128_f32[0] = (float)((float)(v4.m128_f32[0] * *(float*)&dword_140C41B98) + 0.5) * 2048.0;
		v9 = _mm_unpacklo_ps(_mm_unpacklo_ps(v4, (__m128)0i64), _mm_unpacklo_ps(v7, (__m128)0i64));
		v10 = _mm_shuffle_ps(v9, v9, 85);
		v13[0] = (int)v9.m128_f32[0];
		v13[1] = (int)v10.m128_f32[0];
		v11 = *a1;
		v9.m128_f32[0] = v9.m128_f32[0] - (float)(int)v9.m128_f32[0];
		v10.m128_f32[0] = v10.m128_f32[0] - (float)(int)v10.m128_f32[0];
		v14 = _mm_unpacklo_ps(_mm_unpacklo_ps(v9, (__m128)0i64), _mm_unpacklo_ps(v10, (__m128)0i64));
		if ((*(int(__fastcall**)(__int64*, int*, __int64**))(v11 + 144))(a1, v13, &v15) >= 0)
		{
			sub_1402DA040(v15, (unsigned __int64)&v14, a3, a4);
			v8 = 1;
		}
		else
		{
			sub_1402D9E20((__int64)a3, a4);
		}
		if (v15)
			(*(void(__fastcall**)(__int64*))(*v15 + 8))(v15);
		return v8;
	}
}
// 140C41B98: using guessed type int dword_140C41B98;
// 140C79CB0: using guessed type int dword_140C79CB0;
// 140C79CB4: using guessed type int dword_140C79CB4;
// 140C79CC0: using guessed type int dword_140C79CC0;
// 140C79CC4: using guessed type int dword_140C79CC4;
// 1402D9EE0: using guessed type __m128 var_18;

