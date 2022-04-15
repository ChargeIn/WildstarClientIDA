#include "../winhttp.h"

//----- (00000001406D4E40) ----------------------------------------------------
char __fastcall sub_1406D4E40(__int64 a1, char a2, int* a3, __int64* a4, __m128i* a5, __int64 a6, __int64 a7)
{
	__int64 v7; // rbp
	__int64 v8; // rsi
	int v11; // edi
	__int64 v14; // rax
	__int64 v15; // r9
	unsigned int v16; // edx
	__int64 v17; // r8
	__int64 v18; // rcx
	__int64 v19; // rax
	__int64 v20; // rdx
	_DWORD* v21; // rax
	const __m128i* v22; // r8
	int v23; // ecx
	_DWORD* v24; // r9
	__int64 v25; // rax
	const __m128i* v26; // rax
	_QWORD* v27; // rcx
	unsigned int v28; // eax
	__int64 v29; // rsi
	__int64 v30; // rbp
	unsigned __int64 v31; // rbx
	__int64 v32; // rcx
	unsigned int* v33; // rdi
	__int64 v34; // r8
	__int64 v35; // rdx
	int v36; // r9d
	__int64 v37; // rcx
	int v39[4]; // [rsp+40h] [rbp-48h] BYREF
	__m128 v40; // [rsp+50h] [rbp-38h] BYREF

	v7 = a6;
	v8 = qword_140C65898;
	v11 = (unsigned __int8)a6;
	v39[0] = BYTE1(a6);
	v39[1] = (unsigned __int8)a6;
	v14 = sub_1403AC780(qword_140C65898 + 160, v39);
	v15 = v14;
	if (v14)
	{
		v16 = v11 | (LOBYTE(v39[0]) << 8);
		v17 = *(_QWORD*)(v8 + 29656);
		v18 = v17;
		v19 = *(_QWORD*)(v17 + 8);
		while (v19)
		{
			if (*(_DWORD*)(v19 + 32) < v16)
			{
				v19 = *(_QWORD*)(v19 + 24);
			}
			else
			{
				v18 = v19;
				v19 = *(_QWORD*)(v19 + 16);
			}
		}
		if (v18 == v17 || (a6 = v18, v16 < *(_DWORD*)(v18 + 32)))
			a6 = v17;
		if (a6 == v17 || (LOBYTE(v14) = *(_DWORD*)(a6 + 36) != 0, !*(_DWORD*)(a6 + 36)))
		{
			v20 = *(_QWORD*)(v15 + 64);
			v21 = *(_DWORD**)(v15 + 72);
			v22 = 0i64;
			v23 = *(_DWORD*)(v20 + 344);
			v24 = v21;
			if (!v21)
				v24 = (_DWORD*)(v20 + 8);
			if (v24)
			{
				if (!v21)
					v21 = (_DWORD*)(v20 + 8);
				v23 = *v21;
			}
			if ((unsigned int)(v23 - 1) <= 6)
			{
				v25 = *(_QWORD*)(a1 + 48i64 * v23 + 2944);
				if (v25)
				{
					v26 = *(const __m128i**)(v25 + 32);
					v22 = (const __m128i*) & word_140B7B704;
					if (v26)
						v22 = v26;
				}
			}
			v27 = *(_QWORD**)(a1 + 32);
			if (a2)
				sub_1400E9900(v27, a1, a3, a4, a5, v7, v22);
			else
				sub_1400E9680(v27, a1, a3, a4, a5, v7, v22);
			v40 = _mm_mul_ps(
				_mm_cvtepi32_ps(
					_mm_shuffle_epi32(
						_mm_unpacklo_epi16(
							_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B6F0), (__m128i)0i64),
							(__m128i)0i64),
						198)),
				(__m128)xmmword_140B7AB70);
			v28 = sub_140141F10(qword_140C63678, &v40);
			v29 = *(_QWORD*)(a1 + 32);
			v30 = *(_QWORD*)(a1 + 696);
			v31 = v28;
			v32 = *(_QWORD*)(v29 + 3472);
			if (v32)
			{
				(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v32 + 56i64))(v32, a7, -1i64);
				(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v29 + 3472) + 40i64))(
					*(_QWORD*)(v29 + 3472),
					*(_QWORD*)(v30 + 96));
			}
			else
			{
				(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD*)qword_140C65680 + 40i64))(
					qword_140C65680,
					*(_QWORD*)(v30 + 96),
					a7,
					-1i64,
					v29 + 3472);
			}
			v33 = (unsigned int*)(v29 + 3464);
			if ((__int64*)(v29 + 3464) == &a6)
			{
				v34 = qword_140C63678;
			}
			else
			{
				sub_1401429A0(qword_140C63678, *v33);
				v34 = qword_140C63678;
				*v33 = v31;
				if (v31 < *(_QWORD*)(v34 + 48))
				{
					v35 = *(_QWORD*)(v34 + 40);
					v36 = *(_DWORD*)(32 * v31 + v35 + 16);
					if ((unsigned int)(v36 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(32 * v31 + v35 + 16) = v36 + 1;
				}
			}
			*(_DWORD*)(v29 + 3480) = 10;
			sub_1401429A0(v34, v31);
			LOBYTE(v14) = (unsigned __int8)sub_14053BAB0(v37, (__int64)v39);
		}
	}
	return v14;
}
// 1406D4EB1: conditional instruction was optimized away because ebx.4<100u
// 1406D50C6: variable 'v37' is possibly undefined
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B6F0: using guessed type __int128 xmmword_140B7B6F0;
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C65898: using guessed type __int64 qword_140C65898;

