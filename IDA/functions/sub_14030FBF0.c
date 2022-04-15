#include "../winhttp.h"

//----- (000000014030FBF0) ----------------------------------------------------
__int64 __fastcall sub_14030FBF0(__int64 a1)
{
	__int64 result; // rax
	unsigned int v3; // r10d
	__int64 v4; // r8
	__int64 v5; // r9
	__int64 v6; // rcx
	__int64 v7; // rdx
	__int16* v8; // rcx
	__m128i v9; // xmm3
	unsigned __int8* v10; // rax
	unsigned __int8* v11; // rax
	unsigned __int8* v12; // rax
	__int16 v13; // dx

	result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 160) + 56i64))(
		*(_QWORD*)(a1 + 160),
		0i64,
		0i64,
		2i64);
	if (result)
	{
		v3 = 0;
		if (*(_DWORD*)(*(_QWORD*)(a1 + 64) + 24i64))
		{
			v4 = result + 16;
			do
			{
				v5 = v3;
				if (*(_DWORD*)(a1 + 392) == 1)
				{
					v6 = *(_QWORD*)(a1 + 216);
					v7 = *(_QWORD*)(a1 + 304) * v3;
					*(_DWORD*)(v4 - 16) = *(_DWORD*)(v7 + v6);
					*(_DWORD*)(v4 - 12) = *(_DWORD*)(v7 + v6 + 4);
					*(_DWORD*)(v4 - 8) = *(_DWORD*)(v7 + v6 + 8);
				}
				else
				{
					v8 = (__int16*)(*(_QWORD*)(a1 + 216) + *(_QWORD*)(a1 + 304) * v3);
					v9 = (__m128i)_mm_mul_ps(
						_mm_unpacklo_ps(
							_mm_unpacklo_ps(
								(__m128)COERCE_UNSIGNED_INT((float)*v8),
								(__m128)COERCE_UNSIGNED_INT((float)v8[2])),
							_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v8[1]), (__m128)0i64)),
						(__m128)xmmword_140B7AB30);
					*(_DWORD*)(v4 - 16) = _mm_cvtsi128_si32(v9);
					*(_DWORD*)(v4 - 12) = _mm_cvtsi128_si32(_mm_srli_si128(v9, 4));
					*(_DWORD*)(v4 - 8) = _mm_cvtsi128_si32(_mm_srli_si128(v9, 8));
				}
				++v3;
				v4 += 48i64;
				v10 = (unsigned __int8*)(*(_QWORD*)(a1 + 224) + *(_QWORD*)(a1 + 312) * v5);
				*(_DWORD*)(v4 - 52) = (*v10 << 16) + ((unsigned __int8)((unsigned __int16)(*v10 + (v10[1] << 8)) >> 8) << 8);
				v11 = (unsigned __int8*)(*(_QWORD*)(a1 + 232) + *(_QWORD*)(a1 + 320) * v5);
				*(_DWORD*)(v4 - 48) = (*v11 << 16) + ((unsigned __int8)((unsigned __int16)(*v11 + (v11[1] << 8)) >> 8) << 8);
				v12 = (unsigned __int8*)(*(_QWORD*)(a1 + 240) + v5 * *(_QWORD*)(a1 + 328));
				v13 = *v12 + (v12[1] << 8);
				*(_DWORD*)(v4 - 44) = ((unsigned __int8)v13 << 16) + (HIBYTE(v13) << 8);
				*(_DWORD*)(v4 - 40) = *(_DWORD*)(*(_QWORD*)(a1 + 336) * v5 + *(_QWORD*)(a1 + 248));
				*(_DWORD*)(v4 - 36) = *(_DWORD*)(*(_QWORD*)(a1 + 344) * v5 + *(_QWORD*)(a1 + 256));
				*(_DWORD*)(v4 - 32) = *(_DWORD*)(*(_QWORD*)(a1 + 352) * v5 + *(_QWORD*)(a1 + 264));
				*(_DWORD*)(v4 - 28) = *(_DWORD*)(*(_QWORD*)(a1 + 360) * v5 + *(_QWORD*)(a1 + 272));
				*(_DWORD*)(v4 - 24) = *(_DWORD*)(*(_QWORD*)(a1 + 368) * v5 + *(_QWORD*)(a1 + 280));
				*(_DWORD*)(v4 - 20) = *(_DWORD*)(*(_QWORD*)(a1 + 376) * v5 + *(_QWORD*)(a1 + 288));
			} while (v3 < *(_DWORD*)(*(_QWORD*)(a1 + 64) + 24i64));
		}
		return (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 160) + 64i64))(*(_QWORD*)(a1 + 160));
	}
	return result;
}
// 140B7AB30: using guessed type __int128 xmmword_140B7AB30;

