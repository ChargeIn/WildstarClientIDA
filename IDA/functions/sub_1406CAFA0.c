#include "../winhttp.h"

//----- (00000001406CAFA0) ----------------------------------------------------
__int64 __fastcall sub_1406CAFA0(__int64 a1, __int64 a2, __int64 a3, __m128i* a4, _QWORD* a5, _OWORD* a6)
{
	unsigned int* v8; // rbx
	bool v9; // zf
	_DWORD* v10; // rax
	__int64 v11; // rax
	int v12; // ecx
	int v13; // eax
	__int64 v14; // rdx
	__int32 v15; // eax
	__int64 v16; // rsi
	__m128 v18; // [rsp+48h] [rbp-79h] BYREF
	__int64 v19; // [rsp+58h] [rbp-69h] BYREF
	char v20; // [rsp+60h] [rbp-61h]
	__int128 v21; // [rsp+68h] [rbp-59h]
	__int128 v22; // [rsp+78h] [rbp-49h]
	__int128 v23; // [rsp+88h] [rbp-39h]
	__int64 v24; // [rsp+98h] [rbp-29h]
	__int64 v25[2]; // [rsp+A8h] [rbp-19h] BYREF
	int v26; // [rsp+B8h] [rbp-9h]
	int v27; // [rsp+BCh] [rbp-5h]

	sub_1400C5920(a1, a2, a3, a5, a6, 0i64, 0i64);
	*(_QWORD*)a1 = off_140B709C0;
	sub_1400C35F0(a1 + 1024);
	v8 = (unsigned int*)(a1 + 1440);
	*(_QWORD*)(a1 + 1440) = 0i64;
	*(_QWORD*)(a1 + 1448) = 0i64;
	*(_QWORD*)(a1 + 1456) = 0i64;
	v25[0] = -2039584i64;
	v25[1] = -2039584i64;
	*(_QWORD*)(a1 + 432) |= 0x8000000000ui64;
	v9 = *(_BYTE*)(a1 + 29) >= 0;
	v26 = -8355712;
	v27 = -2039584;
	if (v9)
	{
		v10 = sub_1400CB0E0(a1, &v18, a1 + 64);
		*(_DWORD*)(a1 + 396) = *v10;
		*(_DWORD*)(a1 + 400) = v10[1];
		*(_DWORD*)(a1 + 404) = v10[2];
		*(_DWORD*)(a1 + 408) = v10[3];
		*(_BYTE*)(a1 + 29) |= 0x80u;
		v11 = a1;
		do
		{
			if (!*(_DWORD*)(v11 + 392))
				break;
			*(_DWORD*)(v11 + 392) = 0;
			v11 = *(_QWORD*)(v11 + 16);
		} while (v11);
	}
	v12 = *(_DWORD*)(a1 + 408);
	v13 = *(_DWORD*)(a1 + 404);
	v14 = *(_QWORD*)(a1 + 32);
	v21 = 0i64;
	v22 = 0i64;
	v23 = 0i64;
	v15 = v13 - *(_DWORD*)(a1 + 396);
	v18.m128_i32[3] = v12 - *(_DWORD*)(a1 + 400);
	v18.m128_i32[2] = v15;
	v18.m128_u64[0] = 0i64;
	v19 = 0i64;
	v20 = 0;
	v24 = 0i64;
	sub_14010B330(&v19, v14, a4, 0i64);
	sub_1400C3730(a1 + 1024, (__int64)&v19);
	sub_1400C3AD0(a1 + 1024, &v18);
	v16 = 6i64;
	do
	{
		sub_1401429A0(qword_140C63678, *v8);
		v18 = _mm_mul_ps(
			_mm_cvtepi32_ps(
				_mm_shuffle_epi32(
					_mm_unpacklo_epi16(
						_mm_unpacklo_epi8(
							_mm_shuffle_epi32(_mm_cvtsi32_si128(*(unsigned int*)((char*)v8++ + (_QWORD)v25 - a1 - 1440)), 0),
							(__m128i)0i64),
						(__m128i)0i64),
					198)),
			(__m128)xmmword_140B7AB70);
		*(v8 - 1) = sub_140141F10(qword_140C63678, &v18);
		--v16;
	} while (v16);
	return a1;
}
// 140B709C0: using guessed type __int64 (__fastcall *off_140B709C0[25])();
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140C63678: using guessed type __int64 qword_140C63678;

