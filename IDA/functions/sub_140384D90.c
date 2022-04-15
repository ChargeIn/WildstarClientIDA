#include "../winhttp.h"

//----- (0000000140384D90) ----------------------------------------------------
__int64 __fastcall sub_140384D90(__int64* a1)
{
	_OWORD* v2; // r15
	__int64 v3; // r10
	int v4; // eax
	__int128 v5; // xmm0
	__m128 v6; // xmm1
	unsigned int v7; // ebx
	__int64* v8; // r14
	_OWORD* v9; // rbp
	__int64 v10; // rsi
	__int64 v11; // rdi
	__int64 v12; // rax
	__int128 v13; // xmm1
	_QWORD* v14; // rax
	__m128 v15; // xmm1
	__m128 v16; // xmm1
	__int128 v18; // [rsp+30h] [rbp-48h] BYREF
	__m128 v19; // [rsp+40h] [rbp-38h] BYREF

	v2 = (_OWORD*)(*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670
		+ 272i64))(
			qword_140C65670,
			240i64,
			1i64,
			5i64,
			0);
	if (v2)
	{
		v3 = *a1;
		v4 = *(_DWORD*)(*a1 + 132);
		if ((v4 & 0x9023) != 0)
		{
			v5 = xmmword_140B7B240;
			v6 = 0i64;
			v18 = xmmword_140B7B240;
			v19 = 0i64;
			if ((v4 & 0x20) != 0 && (*(_QWORD*)(v3 + 664) || *(_QWORD*)(v3 + 672)))
			{
				(*(void(__fastcall**)(_QWORD, __int64, __int128*, __m128*))(v3 + 672))(
					*(_QWORD*)(v3 + 664),
					a1[2],
					&v18,
					&v19);
				v5 = v18;
				v6 = v19;
			}
			v2[10] = v5;
			v2[11] = v6;
		}
		v7 = 0;
		v8 = a1 + 141;
		v9 = v2;
		v10 = 0i64;
		do
		{
			v11 = *v8;
			v12 = *(_QWORD*)qword_140C65670;
			if (*v8)
			{
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v12 + 352))(
					qword_140C65670,
					v7,
					*(_QWORD*)(v11 + 80),
					0i64,
					0i64);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					v7 + 4,
					*(_QWORD*)(v11 + 88),
					0i64,
					0i64);
				*v9 = *(_OWORD*)(v11 + 128);
				v9[1] = *(_OWORD*)(v11 + 144);
				v19.m128_i32[v10] = *(_DWORD*)(v11 + 76);
				*(_DWORD*)((char*)&v18 + v10 * 4) = *(_DWORD*)(v11 + 72);
			}
			else
			{
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v12 + 352))(
					qword_140C65670,
					v7,
					0i64,
					0i64,
					0i64);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					v7 + 4,
					0i64,
					0i64,
					0i64);
				v19.m128_i32[v10] = 0;
				*v9 = 0i64;
				*(_DWORD*)((char*)&v18 + v10 * 4) = 0;
				v9[1] = 0i64;
			}
			++v7;
			v9 += 2;
			++v8;
			++v10;
		} while (v7 < 4);
		v13 = v18;
		v2[8] = v19;
		v2[9] = v13;
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			8i64,
			*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1[145] + 32) + 16i64) + 32i64));
		v2[12] = *(_OWORD*)(*(_QWORD*)(a1[145] + 32) + 32i64);
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			9i64,
			*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1[146] + 32) + 16i64) + 32i64));
		v2[13] = *(_OWORD*)(*(_QWORD*)(a1[146] + 32) + 32i64);
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			15i64,
			*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1[147] + 32) + 16i64) + 32i64));
		v2[14] = *(_OWORD*)(*(_QWORD*)(a1[147] + 32) + 32i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	v14 = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 224i64))(
		qword_140C65670,
		8i64,
		18i64,
		1i64);
	if (v14)
	{
		v15 = _mm_mul_ps(
			_mm_sub_ps(
				_mm_div_ps(
					_mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(*((_DWORD*)a1 + 2)), _mm_cvtsi32_si128(0)),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(*((_DWORD*)a1 + 3)), _mm_cvtsi32_si128(0)))),
					(__m128)xmmword_140B7B490),
				(__m128)xmmword_140B7AC50),
			(__m128)xmmword_140B7B4B0);
		v16 = _mm_unpacklo_ps(_mm_unpacklo_ps(v15, _mm_shuffle_ps(v15, v15, 85)), (__m128)0i64);
		v19 = _mm_shuffle_ps(v16, v16, 136);
		*v14 = v19.m128_u64[0];
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 232i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 648i64))(qword_140C65670, 4i64, 0i64);
	return 0i64;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140B7B4B0: using guessed type __int128 xmmword_140B7B4B0;
// 140C65670: using guessed type __int64 qword_140C65670;

