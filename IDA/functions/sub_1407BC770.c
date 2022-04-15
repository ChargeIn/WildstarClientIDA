#include "../winhttp.h"

//----- (00000001407BC770) ----------------------------------------------------
__int64 __fastcall sub_1407BC770(__m128* a1)
{
	unsigned __int64 v2; // r8
	__int64 v3; // rbp
	unsigned __int64 v4; // rbx
	__int64 v5; // rdi
	unsigned __int32 v6; // ebx
	int* v7; // rax
	unsigned __int32 v8; // ebx
	__int64 result; // rax
	__int64 v10; // rcx
	__int64 v11; // rdx
	__m128 v12; // xmm1
	__m128i v13; // xmm2

	sub_1402626B0((__int64*)&a1[76], 0i64);
	v2 = qword_140C7F898;
	v3 = 0i64;
	v4 = 0i64;
	if (qword_140C7F898)
	{
		v5 = 0i64;
		do
		{
			if (*(_DWORD*)(v5 + qword_140C7F890 + 48))
			{
				sub_1407BA560(
					a1,
					(__m128*)(v5 + qword_140C7F890),
					(__m128*)(v5 + qword_140C7F890 + 16),
					(__m128*)(v5 + qword_140C7F890 + 32));
				v2 = qword_140C7F898;
			}
			++v4;
			v5 += 64i64;
		} while (v4 < v2);
	}
	v6 = a1[76].m128_u32[2];
	v7 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 224i64))(
		qword_140C65670,
		16 * v6,
		15i64);
	if (v7)
	{
		sub_1407DB590(v7, (int*)a1[76].m128_u64[0], 16i64 * v6);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 232i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, int))(*(_QWORD*)qword_140C65670 + 648i64))(
			qword_140C65670,
			1i64,
			0i64,
			v6,
			1);
	}
	v8 = a1[57].m128_u32[0];
	result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 224i64))(
		qword_140C65670,
		16 * v8,
		15i64);
	v10 = result;
	if (result)
	{
		if (v8)
		{
			v11 = v8;
			do
			{
				v10 += 16i64;
				v3 += 16i64;
				v12 = *(__m128*)(a1[56].m128_u64[1] + v3 - 16);
				v13 = (__m128i)_mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v12, v12, 85), a1[47]),
							_mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), a1[46])),
						_mm_mul_ps(_mm_shuffle_ps(v12, v12, 170), a1[48])),
					a1[49]);
				*(_DWORD*)(v10 - 16) = _mm_cvtsi128_si32(v13);
				*(_DWORD*)(v10 - 12) = _mm_cvtsi128_si32(_mm_srli_si128(v13, 4));
				*(_DWORD*)(v10 - 8) = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
				--v11;
			} while (v11);
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 232i64))(qword_140C65670);
		return (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, int))(*(_QWORD*)qword_140C65670 + 648i64))(
			qword_140C65670,
			3i64,
			0i64,
			v8,
			1);
	}
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C7F890: using guessed type __int64 qword_140C7F890;
// 140C7F898: using guessed type __int64 qword_140C7F898;

