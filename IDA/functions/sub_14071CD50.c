#include "../winhttp.h"

//----- (000000014071CD50) ----------------------------------------------------
__int64 __fastcall sub_14071CD50(__m128* a1)
{
	unsigned __int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rsi
	__int64* v5; // rax
	__int64 v6; // rdi
	__int64 v7; // rax
	unsigned __int64 v8; // rcx
	__int64 v9; // rax
	unsigned __int64 v10; // rcx
	__m128 v11; // [rsp+30h] [rbp-18h] BYREF

	v2 = a1[14].m128_u64[0];
	v11.m128_i32[0] = 0;
	result = (*(__int64(__fastcall**)(unsigned __int64, __m128*, _QWORD))(*(_QWORD*)v2 + 16i64))(v2, &v11, 0i64);
	if ((_DWORD)result && !a1[14].m128_i32[2])
	{
		v4 = (*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 128))(a1);
		v5 = (__int64*)(*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 144))(a1);
		v6 = (__int64)v5;
		if (!v5)
		{
			if (!v4)
				return (*(__int64(__fastcall**)(__m128*, _QWORD))(a1->m128_u64[0] + 80))(a1, 0i64);
			if (!a1[35].m128_i32[1])
			{
				sub_1400035B0();
				return (*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 80))(a1);
			}
		LABEL_12:
			sub_1400035B0();
			return (*(__int64(__fastcall**)(__m128*, _QWORD))(a1->m128_u64[0] + 80))(a1, 0i64);
		}
		v7 = *v5;
		v11.m128_i32[0] = 0;
		result = (*(__int64(__fastcall**)(__int64, __m128*, _QWORD))(v7 + 16))(v6, &v11, 0i64);
		if (!(_DWORD)result)
			return result;
		v8 = a1[14].m128_u64[0];
		a1[14].m128_i32[2] = 1;
		(*(void(__fastcall**)(unsigned __int64, __int64, __int64))(*(_QWORD*)v8 + 728i64))(v8, 61i64, 1i64);
		(*(void(__fastcall**)(unsigned __int64, __int64, __int64))(*(_QWORD*)a1[14].m128_u64[0] + 728i64))(
			a1[14].m128_u64[0],
			62i64,
			1i64);
		(*(void(__fastcall**)(unsigned __int64, __int64, __int64))(*(_QWORD*)a1[14].m128_u64[0] + 728i64))(
			a1[14].m128_u64[0],
			63i64,
			1i64);
		(*(void(__fastcall**)(unsigned __int64, __int64, __int64))(*(_QWORD*)a1[14].m128_u64[0] + 728i64))(
			a1[14].m128_u64[0],
			64i64,
			1i64);
		if (!(*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v6 + 848i64))(v6, a1[35].m128_u32[3]))
		{
			v9 = *(_QWORD*)v6;
			if (a1[35].m128_i32[1])
			{
				(*(void(__fastcall**)(__int64))(v9 + 48))(v6);
				sub_1400035B0();
				return (*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 80))(a1);
			}
			(*(void(__fastcall**)(__int64))(v9 + 48))(v6);
			goto LABEL_12;
		}
		sub_14071CFE0(a1, v4, v6);
		(*(void(__fastcall**)(__int64, _QWORD, unsigned __int64))(*(_QWORD*)v6 + 896i64))(
			v6,
			a1[35].m128_u32[3],
			a1[14].m128_u64[0]);
		sub_14071C4E0((__int64)a1);
		(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)a1[14].m128_u64[0] + 112i64))(a1[14].m128_u64[0]);
		v10 = a1[14].m128_u64[0];
		v11 = _mm_mul_ps(
			_mm_cvtepi32_ps(
				_mm_shuffle_epi32(
					_mm_unpacklo_epi16(
						_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(a1[21].m128_u32[0]), 0), (__m128i)0i64),
						(__m128i)0i64),
					198)),
			(__m128)xmmword_140B7AB70);
		return (*(__int64(__fastcall**)(unsigned __int64, __m128*))(*(_QWORD*)v10 + 1136i64))(v10, &v11);
	}
	return result;
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 14071CD50: using guessed type __m128 var_18;

