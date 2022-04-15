#include "../winhttp.h"

//----- (0000000140112240) ----------------------------------------------------
__int64 __fastcall sub_140112240(__int64 a1, __int64 a2)
{
	__int64 v4; // rdx
	__int64 v5; // rax
	unsigned int v6; // ecx
	float* v7; // rdx
	__int64 v8; // rax
	__m128 v9; // xmm4
	__m128i v10; // xmm1
	__int64 v11; // rcx
	int v12; // eax
	__int64 result; // rax
	__int64 v14; // rbx
	__int64 v15; // rdx
	__int64 v16; // rdx
	unsigned __int64 v17; // rcx
	int v18; // eax
	__int64* v19; // rbx
	__int64 v20; // rdi
	__int64 v21; // rax
	__m128 v22; // [rsp+20h] [rbp-38h]
	int v23; // [rsp+60h] [rbp+8h] BYREF
	unsigned __int64 v24; // [rsp+70h] [rbp+18h] BYREF

	sub_14010FFB0(a1);
	if ((*(_BYTE*)(a1 + 664) & 1) != 0)
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 696) + 96i64) + 24i64))(*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64));
		v5 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 696) + 96i64) + 32i64))(*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64));
		v6 = 0;
		v7 = (float*)v5;
		v8 = *(_QWORD*)(a1 + 472);
		v9 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 716)), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 720)), _mm_cvtsi32_si128(0))));
		if (v8)
			v6 = *(_DWORD*)(v8 + 1300);
		v10 = _mm_cvtsi32_si128(v6);
		v11 = *(_QWORD*)(a1 + 1080);
		v22 = _mm_sub_ps(v9, _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(_mm_cvtepi32_ps(v10), (__m128)0i64)));
		v12 = (int)(float)((float)((float)*(int*)(a2 + 4) - _mm_shuffle_ps(v22, v22, 85).m128_f32[0]) / *v7);
		if ((unsigned __int64)v12 < *(_QWORD*)(a1 + 1248))
		{
			v14 = 3i64 * v12;
			v15 = *(_QWORD*)(a1 + 1240);
			v23 = 0;
			(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v11 + 168i64))(
				v11,
				*(_QWORD*)(v15 + 24i64 * v12),
				&v23);
			(*(void(__fastcall**)(_QWORD, __int64, unsigned __int64*))(**(_QWORD**)(a1 + 1080) + 176i64))(
				*(_QWORD*)(a1 + 1080),
				v16,
				&v24);
			v17 = *(_QWORD*)(*(_QWORD*)(a1 + 1240) + 8 * v14 + 8);
			result = v24;
			if (v24 > v17)
				return v17 - 1;
		}
		else
		{
			return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 72i64))(v11);
		}
	}
	else
	{
		v18 = *(_DWORD*)(a1 + 704);
		if ((v18 & 2) != 0 || (v18 & 1) != 0)
		{
			v19 = *(__int64**)(a1 + 1080);
			v23 = 0;
			v20 = *v19;
			v21 = (*(__int64(__fastcall**)(__int64*))(*v19 + 72))(v19);
			(*(void(__fastcall**)(__int64*, __int64, int*))(v20 + 168))(v19, v21, &v23);
		}
		(*(void(__fastcall**)(_QWORD, __int64, unsigned __int64*))(**(_QWORD**)(a1 + 1080) + 176i64))(
			*(_QWORD*)(a1 + 1080),
			v4,
			&v24);
		return v24;
	}
	return result;
}
// 14011238B: variable 'v16' is possibly undefined
// 140112548: variable 'v4' is possibly undefined

