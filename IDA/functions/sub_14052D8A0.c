#include "../winhttp.h"

//----- (000000014052D8A0) ----------------------------------------------------
void __fastcall sub_14052D8A0(__int64 a1)
{
	_DWORD* v2; // rbp
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // rsi
	__int64(__fastcall * **v6)(_QWORD); // rcx
	__int64 v7; // rdx
	int* v8; // rax
	__int64 v9; // rdx
	__m128 v10; // [rsp+30h] [rbp-38h] BYREF
	int v11; // [rsp+44h] [rbp-24h]
	int v12; // [rsp+70h] [rbp+8h] BYREF
	__int64 v13; // [rsp+78h] [rbp+10h] BYREF

	if (*(_QWORD*)(a1 + 1456) && *(_QWORD*)(a1 + 1448))
	{
		(*(void (**)(void))(*(_QWORD*)qword_140C65670 + 504i64))();
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
		v10.m128_u64[1] = *(_QWORD*)(a1 + 1448);
		v10.m128_i32[0] = 1;
		v11 = 0;
		(*(void(__fastcall**)(__int64, __m128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
			qword_140C65670,
			&v10,
			&unk_140C3FE88,
			&unk_140C3FE88,
			&unk_140C3FE88);
		(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
			qword_140C65670,
			&unk_140C3FE88,
			1i64);
		v10 = _mm_mul_ps(
			_mm_cvtepi32_ps(
				_mm_shuffle_epi32(
					_mm_unpacklo_epi16(
						_mm_unpacklo_epi8(
							_mm_shuffle_epi32(_mm_cvtsi32_si128((*(_DWORD*)(a1 + 1408) << 16) + 0x20000), 0),
							(__m128i)0i64),
						(__m128i)0i64),
					198)),
			(__m128)xmmword_140B7AB70);
		(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65670 + 624i64))(
			qword_140C65670,
			1i64,
			&v10);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
			qword_140C65670,
			*(_QWORD*)(a1 + 1456),
			0i64);
		v2 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1152) + 88i64))(*(_QWORD*)(a1 + 1152));
		LODWORD(v3) = 0;
		v4 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 224i64))(
			qword_140C65670,
			(unsigned int)(28 * (v2[2] - *v2) * (v2[3] - v2[1])),
			0i64,
			0i64);
		v5 = v4;
		if (v4)
		{
			v6 = *(__int64(__fastcall****)(_QWORD))(a1 + 1152);
			v7 = v4;
			v13 = v4;
			if (v6)
			{
				v12 = (**v6)(v6);
				v8 = sub_140538120(a1 + 1376, &v12);
				sub_140772C80((__int64)v8, &v13, v2);
				v7 = v13;
			}
			v9 = (unsigned __int128)((v7 - v5) * (__int128)0x4924924924924925i64) >> 64;
			v3 = ((unsigned __int64)v9 >> 63) + (v9 >> 3);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 232i64))(qword_140C65670);
		}
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD*)qword_140C65670 + 648i64))(
			qword_140C65670,
			0i64,
			0i64,
			(unsigned int)v3,
			1);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
		*(_DWORD*)(a1 + 1568) = 0;
	}
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140C65670: using guessed type __int64 qword_140C65670;
// 14052D8A0: using guessed type __m128 var_38;

