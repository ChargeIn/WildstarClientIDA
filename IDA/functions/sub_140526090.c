#include "../winhttp.h"

//----- (0000000140526090) ----------------------------------------------------
void __fastcall sub_140526090(__int64 a1)
{
	unsigned __int64 v1; // rdx
	__int64 v2; // r8
	unsigned int v3; // esi
	unsigned int v4; // ebp
	unsigned int v5; // edi
	unsigned int v6; // r14d
	__int64 v8; // r10
	__int64 v9; // r9
	int v10; // r11d
	__m128* v11; // rcx
	float v12; // xmm6_4
	float v13; // xmm0_4
	__int64 v14; // rcx
	__int64 v15; // rdx
	float v16; // xmm0_4
	__int64 v17; // rax
	float v18; // xmm9_4
	__m128i v19; // xmm2
	float v20; // xmm6_4
	__m128 v21; // xmm8
	__m128 v22; // xmm7
	__int64 v23; // rdx
	__int64 v24; // rdx
	__m128 v25; // [rsp+20h] [rbp-88h] BYREF
	__int128 v26; // [rsp+30h] [rbp-78h] BYREF
	__m128 v27; // [rsp+40h] [rbp-68h] BYREF
	__m128 v28; // [rsp+50h] [rbp-58h]

	v1 = *(unsigned int*)(a1 + 712);
	v2 = qword_140C63678;
	v3 = *(_DWORD*)(a1 + 716);
	v4 = *(_DWORD*)(a1 + 720);
	v5 = *(_DWORD*)(a1 + 724);
	v6 = *(_DWORD*)(a1 + 728);
	if (v1 >= *(_QWORD*)(qword_140C63678 + 48))
		goto LABEL_6;
	v8 = *(_QWORD*)(qword_140C63678 + 40);
	v9 = 32i64 * (unsigned int)v1;
	v10 = *(_DWORD*)(v9 + v8 + 16);
	if ((unsigned int)(v10 - 1) <= 0xFFFFFFFD)
		*(_DWORD*)(v9 + v8 + 16) = v10 + 1;
	if (v1 >= *(_QWORD*)(v2 + 48))
		LABEL_6:
	v11 = *(__m128**)(v2 + 40);
	else
		v11 = (__m128*)(*(_QWORD*)(v2 + 40) + 32 * v1);
	v25 = *v11;
	sub_1401429A0(v2, v1);
	v12 = sub_1400C9D10((_QWORD*)a1).m128_f32[0];
	v13 = sub_1400C9C30(a1);
	v14 = *(_QWORD*)(a1 + 1472);
	v25.m128_f32[3] = v25.m128_f32[3] * (float)(v12 * v13);
	if (!v14 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v14 + 40i64))(v14))
	{
		v16 = sub_1405257A0(a1);
		v17 = *(_QWORD*)qword_140C65680;
		v18 = v16;
		if (v16 >= 1.0)
		{
			(*(void(__fastcall**)(__int64, __int64))(v17 + 64))(qword_140C65680, 16i64);
			v26 = xmmword_140B7B260;
			(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)qword_140C65680 + 176i64))(qword_140C65680, &v26);
		}
		else
		{
			(*(void(__fastcall**)(__int64, __int64))(v17 + 64))(qword_140C65680, 26i64);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 160i64))(qword_140C65680);
			v26 = xmmword_140B7B190;
			(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)qword_140C65680 + 176i64))(qword_140C65680, &v26);
			v19 = _mm_cvtsi32_si128(0);
			v20 = (float)(int)(v5 - v3) * v18;
			v21 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), v19),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v6), v19)));
			v28 = v21;
			v22 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), v19),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v4), v19)));
			v27 = v22;
			v27.m128_f32[0] = v22.m128_f32[0] + v20;
			(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 104i64))(qword_140C65680, &v27);
			sub_140525E10(a1, v23, &v25);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
			v27 = v22;
			v28 = v21;
			v27.m128_i32[0] = v22.m128_i32[0];
			v28.m128_f32[0] = v20 + v22.m128_f32[0];
			(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 104i64))(qword_140C65680, &v27);
		}
		sub_140525E10(a1, v24, &v25);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	}
	else
	{
		sub_140525E10(a1, v15, &v25);
	}
}
// 14052616C: variable 'v15' is possibly undefined
// 140526271: variable 'v23' is possibly undefined
// 1405262CA: variable 'v24' is possibly undefined
// 140B7B190: using guessed type __int128 xmmword_140B7B190;
// 140B7B260: using guessed type __int128 xmmword_140B7B260;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;

