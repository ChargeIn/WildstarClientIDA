//----- (000000014012F720) ----------------------------------------------------
__int64 __fastcall sub_14012F720(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	__int64 a4,
	int a5,
	int a6,
	int a7,
	_QWORD* a8,
	_OWORD* a9,
	__int64 a10)
{
	int* v12; // rax
	int* v13; // rax
	unsigned int* v14; // rsi
	_DWORD* v15; // rax
	__int64 v16; // rax
	int v17; // edx
	int v18; // eax
	__int64 v19; // rbp
	unsigned int v20; // ebx
	__m128 v22; // [rsp+40h] [rbp-48h] BYREF

	sub_1400C5920(a1, a2, a3, a8, a9, a10, 0i64);
	*(_QWORD*)a1 = off_140B57C60;
	sub_1400C35F0(a1 + 1024);
	*(_BYTE*)(a1 + 1444) = 0;
	*(_QWORD*)(a1 + 1448) = 0i64;
	*(_QWORD*)(a1 + 1472) = 0i64;
	*(_QWORD*)(a1 + 1480) = 0i64;
	*(_QWORD*)(a1 + 1488) = 0i64;
	v12 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 1472) = v12;
	*(_QWORD*)(a1 + 1480) = v12;
	*(_QWORD*)(a1 + 1488) = v12 + 4;
	if (v12)
		*(_WORD*)v12 = 0;
	*(_DWORD*)(a1 + 1496) = 0;
	*(_QWORD*)(a1 + 1512) = 0i64;
	*(_QWORD*)(a1 + 1520) = 0i64;
	*(_QWORD*)(a1 + 1528) = 0i64;
	v13 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 1512) = v13;
	*(_QWORD*)(a1 + 1520) = v13;
	*(_QWORD*)(a1 + 1528) = v13 + 4;
	if (v13)
		*(_WORD*)v13 = 0;
	v14 = (unsigned int*)(a1 + 1536);
	*(_QWORD*)(a1 + 1536) = 0i64;
	*(_QWORD*)(a1 + 1544) = 0i64;
	*(_QWORD*)(a1 + 1552) = 0i64;
	*(_QWORD*)(a1 + 432) |= 2ui64;
	*(_QWORD*)(a1 + 1560) = 0i64;
	*(_QWORD*)(a1 + 1456) = 0i64;
	if (!a4)
	{
		if (a8)
		{
			a4 = (__int64)(a8 + 81);
			if (a5 == 1 && (*(_BYTE*)(a1 + 664) & 1) != 0)
				a4 = (__int64)(a8 + 99);
		}
	}
	sub_1400C3880(a1 + 1024, a4, a5, *(_BYTE*)(a1 + 664) & 1, (*(_BYTE*)(a1 + 664) & 2) != 0);
	*(_QWORD*)(a1 + 656) &= 0xFFFFFFFFFFFFFFF1ui64;
	if (*(char*)(a1 + 29) >= 0)
	{
		v15 = sub_1400CB0E0(a1, &v22, a1 + 64);
		*(_DWORD*)(a1 + 396) = *v15;
		*(_DWORD*)(a1 + 400) = v15[1];
		*(_DWORD*)(a1 + 404) = v15[2];
		*(_DWORD*)(a1 + 408) = v15[3];
		*(_BYTE*)(a1 + 29) |= 0x80u;
		v16 = a1;
		do
		{
			if (!*(_DWORD*)(v16 + 392))
				break;
			*(_DWORD*)(v16 + 392) = 0;
			v16 = *(_QWORD*)(v16 + 16);
		} while (v16);
	}
	v17 = *(_DWORD*)(a1 + 408) - *(_DWORD*)(a1 + 400);
	v18 = *(_DWORD*)(a1 + 404) - *(_DWORD*)(a1 + 396);
	v22.m128_u64[0] = 0i64;
	v22.m128_u64[1] = __PAIR64__(v17, v18);
	sub_1400C3AD0(a1 + 1024, &v22);
	v19 = 6i64;
	do
	{
		v20 = *(unsigned int*)((char*)v14 + (_QWORD)&unk_140C2C8E8 - a1 - 1536);
		sub_1401429A0(qword_140C63678, *v14);
		v22 = _mm_mul_ps(
			_mm_cvtepi32_ps(
				_mm_shuffle_epi32(
					_mm_unpacklo_epi16(
						_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(v20), 0), (__m128i)0i64),
						(__m128i)0i64),
					198)),
			(__m128)xmmword_140B7AB70);
		*v14++ = sub_140141F10(qword_140C63678, &v22);
		--v19;
	} while (v19);
	return a1;
}
// 140B57C60: using guessed type __int64 (__fastcall *off_140B57C60[25])();
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140C63678: using guessed type __int64 qword_140C63678;

