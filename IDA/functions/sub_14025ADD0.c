#include "../winhttp.h"

//----- (000000014025ADD0) ----------------------------------------------------
__int64 __fastcall sub_14025ADD0(__int64 a1, __m128** a2)
{
	__int64 v3; // r8
	__int64 result; // rax
	__int64 v5; // rax
	__m128 v6; // xmm0
	__m128 v7; // xmm4
	__m128 v8; // xmm2
	__m128 v9; // xmm3
	__m128 v10; // xmm5
	__m128 v11; // xmm3
	__m128 v12; // xmm1
	__m128 v13; // xmm4
	__m128 v14[4]; // [rsp+40h] [rbp-A8h] BYREF
	__m128* v15[10]; // [rsp+80h] [rbp-68h] BYREF

	v15[0] = *a2;
	v15[1] = (__m128*)(a1 + 160);
	sub_1401AFB10(v15, v14);
	result = sub_14025FA40(
		(__m128*)a1,
		*(int**)(*(_QWORD*)(v3 + 24) + 8i64),
		**(unsigned int**)(v3 + 24),
		*(__m128**)(*(_QWORD*)(v3 + 16) + 8i64),
		**(unsigned int**)(v3 + 16),
		v14);
	if ((_DWORD)result)
	{
		if (*(_DWORD*)(a1 + 148) != 3)
		{
			v5 = *(_QWORD*)a1;
			*(_DWORD*)(a1 + 148) = 3;
			(*(void(__fastcall**)(__int64))(v5 + 72))(a1);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 80i64))(a1);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 0i64);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 0i64);
			(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 424i64))(
				qword_140C65670,
				128i64,
				128i64,
				128i64);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int))(*(_QWORD*)qword_140C65670 + 432i64))(
				qword_140C65670,
				0i64,
				0i64,
				5i64,
				7);
			(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 320i64))(
				qword_140C65670,
				*(_QWORD*)(a1 + 2112),
				3i64);
			v6 = *(__m128*)(a1 + 304);
			v7 = *(__m128*)(a1 + 320);
			v8 = *(__m128*)(a1 + 336);
			v9 = *(__m128*)(a1 + 288);
			v10 = _mm_unpackhi_ps(v9, v6);
			v11 = _mm_unpacklo_ps(v9, v6);
			v12 = _mm_unpacklo_ps(v7, v8);
			v13 = _mm_unpackhi_ps(v7, v8);
			v14[0] = _mm_shuffle_ps(v11, v12, 68);
			v14[1] = _mm_shuffle_ps(v11, v12, 238);
			v14[2] = _mm_shuffle_ps(v10, v13, 68);
			v14[3] = _mm_shuffle_ps(v10, v13, 238);
			(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65670 + 328i64))(
				qword_140C65670,
				64i64,
				v14);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
				qword_140C65670,
				*(_QWORD*)(a1 + 2128),
				0i64);
		}
		return sub_140260520(a1);
	}
	return result;
}
// 14025AE31: variable 'v3' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;

