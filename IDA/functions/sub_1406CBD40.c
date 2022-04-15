//----- (00000001406CBD40) ----------------------------------------------------
__int64 __fastcall sub_1406CBD40(__int64 a1, __int64 a2, __int64 a3, __m128i* a4, _QWORD* a5, _OWORD* a6)
{
	unsigned int* v8; // rdi
	int* v9; // rcx
	int* v10; // rcx
	int* v11; // rcx
	int* v12; // rcx
	bool v13; // zf
	_DWORD* v14; // rax
	__int64 v15; // rax
	int v16; // ecx
	int v17; // eax
	__int64 v18; // rdx
	__int32 v19; // eax
	__int64 v20; // rsi
	__m128 v22; // [rsp+48h] [rbp-79h] BYREF
	__int64 v23; // [rsp+58h] [rbp-69h] BYREF
	char v24; // [rsp+60h] [rbp-61h]
	__int128 v25; // [rsp+68h] [rbp-59h]
	__int128 v26; // [rsp+78h] [rbp-49h]
	__int128 v27; // [rsp+88h] [rbp-39h]
	__int64 v28; // [rsp+98h] [rbp-29h]
	__int64 v29[2]; // [rsp+A8h] [rbp-19h] BYREF
	int v30; // [rsp+B8h] [rbp-9h]
	int v31; // [rsp+BCh] [rbp-5h]

	sub_1400C5920(a1, a2, a3, a5, a6, 0i64, 0i64);
	*(_QWORD*)a1 = off_140B70C00;
	sub_1400C35F0(a1 + 1024);
	v8 = (unsigned int*)(a1 + 1440);
	*(_QWORD*)(a1 + 1440) = 0i64;
	*(_QWORD*)(a1 + 1448) = 0i64;
	*(_QWORD*)(a1 + 1456) = 0i64;
	*(_QWORD*)(a1 + 1472) = 0i64;
	*(_QWORD*)(a1 + 1480) = 0i64;
	*(_QWORD*)(a1 + 1488) = 0i64;
	v9 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 1472) = v9;
	*(_QWORD*)(a1 + 1480) = v9;
	*(_QWORD*)(a1 + 1488) = v9 + 4;
	if (v9)
		*(_WORD*)v9 = 0;
	*(_QWORD*)(a1 + 1504) = 0i64;
	*(_QWORD*)(a1 + 1512) = 0i64;
	*(_QWORD*)(a1 + 1520) = 0i64;
	v10 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 1504) = v10;
	*(_QWORD*)(a1 + 1512) = v10;
	*(_QWORD*)(a1 + 1520) = v10 + 4;
	if (v10)
		*(_WORD*)v10 = 0;
	*(_QWORD*)(a1 + 1536) = 0i64;
	*(_QWORD*)(a1 + 1544) = 0i64;
	*(_QWORD*)(a1 + 1552) = 0i64;
	v11 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 1536) = v11;
	*(_QWORD*)(a1 + 1544) = v11;
	*(_QWORD*)(a1 + 1552) = v11 + 4;
	if (v11)
		*(_WORD*)v11 = 0;
	*(_QWORD*)(a1 + 1568) = 0i64;
	*(_QWORD*)(a1 + 1576) = 0i64;
	*(_QWORD*)(a1 + 1584) = 0i64;
	v12 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 1568) = v12;
	*(_QWORD*)(a1 + 1576) = v12;
	*(_QWORD*)(a1 + 1584) = v12 + 4;
	if (v12)
		*(_WORD*)v12 = 0;
	*(_QWORD*)(a1 + 1600) = 0i64;
	*(_QWORD*)(a1 + 1592) = 0i64;
	*(_QWORD*)(a1 + 432) |= 0x10000000000ui64;
	v13 = *(_BYTE*)(a1 + 29) >= 0;
	v29[0] = -2039584i64;
	v29[1] = -2039584i64;
	v30 = -8355712;
	v31 = -2039584;
	if (v13)
	{
		v14 = sub_1400CB0E0(a1, &v22, a1 + 64);
		*(_DWORD*)(a1 + 396) = *v14;
		*(_DWORD*)(a1 + 400) = v14[1];
		*(_DWORD*)(a1 + 404) = v14[2];
		*(_DWORD*)(a1 + 408) = v14[3];
		*(_BYTE*)(a1 + 29) |= 0x80u;
		v15 = a1;
		do
		{
			if (!*(_DWORD*)(v15 + 392))
				break;
			*(_DWORD*)(v15 + 392) = 0;
			v15 = *(_QWORD*)(v15 + 16);
		} while (v15);
	}
	v16 = *(_DWORD*)(a1 + 408);
	v17 = *(_DWORD*)(a1 + 404);
	v18 = *(_QWORD*)(a1 + 32);
	v25 = 0i64;
	v26 = 0i64;
	v27 = 0i64;
	v19 = v17 - *(_DWORD*)(a1 + 396);
	v22.m128_i32[3] = v16 - *(_DWORD*)(a1 + 400);
	v22.m128_i32[2] = v19;
	v22.m128_u64[0] = 0i64;
	v23 = 0i64;
	v24 = 0;
	v28 = 0i64;
	sub_14010B330(&v23, v18, a4, 0i64);
	sub_1400C3730(a1 + 1024, (__int64)&v23);
	sub_1400C3AD0(a1 + 1024, &v22);
	v20 = 6i64;
	do
	{
		sub_1401429A0(qword_140C63678, *v8);
		v22 = _mm_mul_ps(
			_mm_cvtepi32_ps(
				_mm_shuffle_epi32(
					_mm_unpacklo_epi16(
						_mm_unpacklo_epi8(
							_mm_shuffle_epi32(_mm_cvtsi32_si128(*(unsigned int*)((char*)v8++ + (_QWORD)v29 - a1 - 1440)), 0),
							(__m128i)0i64),
						(__m128i)0i64),
					198)),
			(__m128)xmmword_140B7AB70);
		*(v8 - 1) = sub_140141F10(qword_140C63678, &v22);
		--v20;
	} while (v20);
	*(_QWORD*)(a1 + 1624) = 0i64;
	*(_QWORD*)(a1 + 1616) = 0i64;
	*(_DWORD*)(a1 + 1608) = 2;
	return a1;
}
// 140B70C00: using guessed type __int64 (__fastcall *off_140B70C00[25])();
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140C63678: using guessed type __int64 qword_140C63678;

