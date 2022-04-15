#include "../winhttp.h"

//----- (000000014010FFB0) ----------------------------------------------------
void __fastcall sub_14010FFB0(__int64 a1)
{
	int v2; // eax
	__m128i v3; // xmm2
	__int64* v4; // r14
	__int64 v5; // rdx
	__m128i v6; // xmm1
	__m128i v7; // xmm3
	__int64 v8; // r15
	__int64 v9; // rdi
	__int64 v10; // rbx
	__int64 v11; // rcx
	__int128 v12; // [rsp+50h] [rbp-48h] BYREF
	__int128 v13[2]; // [rsp+60h] [rbp-38h] BYREF

	if (!*(_BYTE*)(a1 + 1232))
	{
		v2 = *(_DWORD*)(a1 + 704);
		v3 = _mm_cvtsi32_si128(0);
		v4 = (__int64*)(a1 + 1240);
		v5 = *(_QWORD*)(a1 + 1080);
		v6 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 720));
		v7 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 716));
		v13[1] = (__int128)_mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 724)), v3),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 728)), v3)));
		v13[0] = (__int128)_mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(v7, v3), _mm_unpacklo_epi32(v6, v3)));
		v12 = xmmword_140B7B240;
		(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __int128*, int, __int128*, int, __int64))(*(_QWORD*)qword_140C65680 + 280i64))(
			qword_140C65680,
			v5,
			0i64,
			-1i64,
			v13,
			v2 | 0x400,
			&v12,
			1,
			a1 + 1240);
		v8 = *(_QWORD*)(a1 + 1248);
		if ((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 72i64))(*(_QWORD*)(a1 + 1080)))
		{
			v9 = *(_QWORD*)(a1 + 1080);
			v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 72i64))(v9);
			if (*(_WORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 64i64))(v9) + 2 * v10 - 2) == 10
				&& *(_QWORD*)(*v4 + 24 * v8 - 16) > *(_QWORD*)(*v4 + 24 * v8 - 24))
			{
				sub_140115D60(v4, v8 + 1);
				v11 = *(_QWORD*)(*v4 + 24 * v8 - 16);
				*(_QWORD*)(*v4 + 24 * v8) = v11;
				*(_QWORD*)(*v4 + 24 * v8 + 8) = v11;
				*(_DWORD*)(*v4 + 24 * v8 + 16) = 0;
			}
		}
		*(_BYTE*)(a1 + 1232) = 0;
	}
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65680: using guessed type __int64 qword_140C65680;

