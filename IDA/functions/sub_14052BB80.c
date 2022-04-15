#include "../winhttp.h"

//----- (000000014052BB80) ----------------------------------------------------
char __fastcall sub_14052BB80(__int64 a1)
{
	__int64 v1; // rax
	__int64 i; // rbx
	__int64 v3; // rcx
	_DWORD* v4; // rax
	__int64 v5; // rax
	__m128* v6; // rax
	int v8; // [rsp+20h] [rbp-58h]
	int v9; // [rsp+24h] [rbp-54h]
	int v10; // [rsp+28h] [rbp-50h]
	int v11; // [rsp+2Ch] [rbp-4Ch]
	__m128 v12[4]; // [rsp+30h] [rbp-48h] BYREF

	v1 = *(_QWORD*)(a1 + 16);
	for (i = a1; v1; v1 = *(_QWORD*)(v1 + 16))
		a1 = v1;
	if (*(float*)(a1 + 648) <= 0.0 || (v3 = *(_QWORD*)(a1 + 16)) != 0 && (LOBYTE(v1) = sub_1400D1A60(v3), !(_BYTE)v1))
	{
		if (*(char*)(i + 29) >= 0)
		{
			v4 = sub_1400CB0E0(i, v12, i + 64);
			*(_DWORD*)(i + 396) = *v4;
			*(_DWORD*)(i + 400) = v4[1];
			*(_DWORD*)(i + 404) = v4[2];
			*(_DWORD*)(i + 408) = v4[3];
			*(_BYTE*)(i + 29) |= 0x80u;
			v5 = i;
			do
			{
				if (!*(_DWORD*)(v5 + 392))
					break;
				*(_DWORD*)(v5 + 392) = 0;
				v5 = *(_QWORD*)(v5 + 16);
			} while (v5);
		}
		v8 = *(_DWORD*)(i + 396);
		v9 = *(_DWORD*)(i + 400);
		v10 = *(_DWORD*)(i + 404);
		v11 = *(_DWORD*)(i + 408);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65680 + 144i64))(
			qword_140C65680,
			(unsigned int)(2 * *(_DWORD*)(i + 672)));
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 23i64);
		v6 = sub_1400C95C0(i, v12);
		(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 88i64))(qword_140C65680, v6);
		v12[1] = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v10 - v8), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v11 - v9), _mm_cvtsi32_si128(0))));
		v12[0] = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(qword_140C77760), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(qword_140C77760)), _mm_cvtsi32_si128(0))));
		(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 104i64))(qword_140C65680, v12);
		*(_DWORD*)(i + 1224) = 0;
		sub_14052E160(i);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)i + 232i64))(i);
		LOBYTE(v1) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	}
	return v1;
}
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C77760: using guessed type __int64 qword_140C77760;

