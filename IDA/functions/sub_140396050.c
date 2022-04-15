#include "../winhttp.h"

//----- (0000000140396050) ----------------------------------------------------
__int64 __fastcall sub_140396050(__int64* a1, __int64 a2, int a3)
{
	__int64 v3; // rax
	int v7; // edi
	int v8; // edi
	__int64 result; // rax
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rax
	__m128 v16; // xmm2
	__m128 v17; // xmm1
	int v18[4]; // [rsp+20h] [rbp-28h] BYREF

	v3 = *a1;
	v18[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 40))(a1, v18);
	if (a3)
	{
		v7 = a3 - 1;
		if (v7)
		{
			v8 = v7 - 1;
			if (v8)
			{
				if (v8 == 1)
				{
					result = a2;
					*(_OWORD*)a2 = 0i64;
					*(_DWORD*)(a2 + 16) = 1065353216;
					return result;
				}
			}
			else
			{
				v10 = a1[5];
				if (v10)
				{
					v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 1208i64))(v10);
					*(_OWORD*)a2 = *(_OWORD*)(v11 + 32);
					*(_DWORD*)(a2 + 16) = *(_DWORD*)(v11 + 48);
					return a2;
				}
			}
		}
		else
		{
			v12 = a1[5];
			if (v12)
			{
				v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 1192i64))(v12);
				*(_OWORD*)a2 = *(_OWORD*)(v13 + 32);
				*(_DWORD*)(a2 + 16) = *(_DWORD*)(v13 + 48);
				return a2;
			}
		}
	}
	else
	{
		v14 = a1[5];
		if (v14)
		{
			v15 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 1168i64))(v14);
			*(_OWORD*)a2 = *(_OWORD*)(v15 + 32);
			*(_DWORD*)(a2 + 16) = *(_DWORD*)(v15 + 48);
			return a2;
		}
	}
	result = a2;
	v16 = _mm_sub_ps((__m128)xmmword_140C798B0, (__m128)xmmword_140C798A0);
	v17 = _mm_mul_ps(v16, v16);
	*(__m128*)a2 = _mm_mul_ps(
		_mm_add_ps((__m128)xmmword_140C798A0, (__m128)xmmword_140C798B0),
		(__m128)xmmword_140B7AC50);
	*(float*)(a2 + 16) = fsqrt(
		(float)(v17.m128_f32[0] + _mm_shuffle_ps(v17, v17, 85).m128_f32[0])
		+ _mm_shuffle_ps(v17, v17, 170).m128_f32[0])
		* 0.5;
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C798A0: using guessed type __int128 xmmword_140C798A0;
// 140C798B0: using guessed type __int128 xmmword_140C798B0;
// 140396050: using guessed type int var_28[4];

