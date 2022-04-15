//----- (000000014012FA20) ----------------------------------------------------
__int64 __fastcall sub_14012FA20(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	__m128i* a4,
	int a5,
	unsigned __int16* a6,
	char a7,
	_QWORD* a8,
	_OWORD* a9,
	__int64 a10,
	__int64 a11)
{
	int* v15; // rax
	int* v16; // rax
	unsigned __int16* v17; // rbx
	unsigned int* v18; // rsi
	__int64 v19; // rax
	__int64 v20; // rdx
	int** v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rax
	_DWORD* v24; // rax
	__int64 v25; // rax
	int v26; // edx
	int v27; // eax
	__int64 v28; // rbp
	unsigned int v29; // ebx
	__m128 v31; // [rsp+40h] [rbp-58h] BYREF

	sub_1400C5920(a1, a2, a3, a8, a9, a10, a11);
	*(_QWORD*)a1 = off_140B57C60;
	sub_1400C35F0(a1 + 1024);
	*(_DWORD*)(a1 + 1440) = -1;
	*(_BYTE*)(a1 + 1444) = 0;
	*(_QWORD*)(a1 + 1448) = 0i64;
	*(_QWORD*)(a1 + 1472) = 0i64;
	*(_QWORD*)(a1 + 1480) = 0i64;
	*(_QWORD*)(a1 + 1488) = 0i64;
	v15 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 1472) = v15;
	*(_QWORD*)(a1 + 1480) = v15;
	*(_QWORD*)(a1 + 1488) = v15 + 4;
	if (v15)
		*(_WORD*)v15 = 0;
	*(_DWORD*)(a1 + 1496) = 0;
	*(_QWORD*)(a1 + 1512) = 0i64;
	*(_QWORD*)(a1 + 1520) = 0i64;
	*(_QWORD*)(a1 + 1528) = 0i64;
	v16 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 1512) = v16;
	*(_QWORD*)(a1 + 1520) = v16;
	*(_QWORD*)(a1 + 1528) = v16 + 4;
	if (v16)
		*(_WORD*)v16 = 0;
	v17 = a6;
	v18 = (unsigned int*)(a1 + 1536);
	*(_QWORD*)(a1 + 1536) = 0i64;
	*(_QWORD*)(a1 + 1544) = 0i64;
	*(_QWORD*)(a1 + 1552) = 0i64;
	*(_QWORD*)(a1 + 432) |= 2ui64;
	*(_QWORD*)(a1 + 1560) = 0i64;
	*(_QWORD*)(a1 + 1456) = 0i64;
	if (a4 && (a4->m128i_i16[0] || !*(_QWORD*)(a1 + 48)))
	{
		sub_14012FE90(a1, a4, a5);
	}
	else
	{
		v19 = *(_QWORD*)(a1 + 48);
		v20 = v19 + 648;
		if (a5 == 1 && (*(_BYTE*)(a1 + 664) & 1) != 0)
		{
			if (!v17 || (v20 = v19 + 720, !*v17))
				v20 = v19 + 792;
		}
		sub_1400C3880(a1 + 1024, v20, a5, *(_BYTE*)(a1 + 664) & 1, (*(_BYTE*)(a1 + 664) & 2) != 0);
		*(_QWORD*)(a1 + 656) &= 0xFFFFFFFFFFFFFFF1ui64;
	}
	if (v17 && *v17)
	{
		if (a7 || !a3)
		{
			v21 = sub_14018DD50((int**)&a6, v17);
			v22 = a2 + 3552;
		}
		else
		{
			v21 = sub_14018DD50((int**)&a6, v17);
			v22 = *(_QWORD*)(a3 + 528);
		}
		v23 = sub_140151100(v22, *v21);
		sub_140150980(v23, a1);
		if (a6)
			(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)a6 - 2) + 8i64))(a6 - 8);
	}
	if (*(char*)(a1 + 29) >= 0)
	{
		v24 = sub_1400CB0E0(a1, &v31, a1 + 64);
		*(_DWORD*)(a1 + 396) = *v24;
		*(_DWORD*)(a1 + 400) = v24[1];
		*(_DWORD*)(a1 + 404) = v24[2];
		*(_DWORD*)(a1 + 408) = v24[3];
		*(_BYTE*)(a1 + 29) |= 0x80u;
		v25 = a1;
		do
		{
			if (!*(_DWORD*)(v25 + 392))
				break;
			*(_DWORD*)(v25 + 392) = 0;
			v25 = *(_QWORD*)(v25 + 16);
		} while (v25);
	}
	v26 = *(_DWORD*)(a1 + 408) - *(_DWORD*)(a1 + 400);
	v27 = *(_DWORD*)(a1 + 404) - *(_DWORD*)(a1 + 396);
	v31.m128_u64[0] = 0i64;
	v31.m128_u64[1] = __PAIR64__(v26, v27);
	sub_1400C3AD0(a1 + 1024, &v31);
	v28 = 6i64;
	do
	{
		v29 = *(unsigned int*)((char*)v18 + (_QWORD)&unk_140C2C8E8 - a1 - 1536);
		sub_1401429A0(qword_140C63678, *v18);
		v31 = _mm_mul_ps(
			_mm_cvtepi32_ps(
				_mm_shuffle_epi32(
					_mm_unpacklo_epi16(
						_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(v29), 0), (__m128i)0i64),
						(__m128i)0i64),
					198)),
			(__m128)xmmword_140B7AB70);
		*v18++ = sub_140141F10(qword_140C63678, &v31);
		--v28;
	} while (v28);
	return a1;
}
// 140B57C60: using guessed type __int64 (__fastcall *off_140B57C60[25])();
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140C63678: using guessed type __int64 qword_140C63678;

