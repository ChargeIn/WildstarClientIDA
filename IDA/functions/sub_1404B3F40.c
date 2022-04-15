#include "../winhttp.h"

//----- (00000001404B3F40) ----------------------------------------------------
void __fastcall sub_1404B3F40(__int64* a1, __int64 a2)
{
	__int64 v2; // rax
	unsigned __int64 v3; // rsi
	unsigned __int64 v5; // rbx
	__int64 v6; // rax
	unsigned __int64 v7; // rax
	__m128i si128; // xmm1
	__m128i v9; // xmm0
	__int64 v10; // rsi
	int* v11; // rax
	__int64 v12; // rsi
	__int64* v13; // rcx
	__int64 v14[3]; // [rsp+20h] [rbp-28h] BYREF
	__int64* v15; // [rsp+38h] [rbp-10h]

	v2 = *a1;
	v3 = a1[1];
	v14[1] = a2;
	v14[0] = v2;
	v5 = 0i64;
	v14[2] = 0i64;
	v6 = 8 * v3;
	if (!is_mul_ok(v3, 8ui64))
		v6 = -1i64;
	v15 = (__int64*)sub_14018B280(v6, 0);
	v7 = 0i64;
	if (v3)
	{
		if (v3 >= 2)
		{
			si128 = _mm_load_si128((const __m128i*) & xmmword_140B7A630);
			do
			{
				v9 = (__m128i)v7;
				v7 += 2i64;
				*(__m128i*)& v15[v7 - 2] = _mm_add_epi64(_mm_unpacklo_epi64(v9, v9), si128);
			} while (v7 < v3 - (v3 & 1));
		}
		for (; v7 < v3; ++v7)
			v15[v7] = v7;
	}
	sub_14001FEC0((__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_14004F5F0, v15, v3, (__int64)v14);
	v10 = a1[1];
	if (v10)
	{
		v11 = sub_14018B280(8 * v10 + 16, 0);
		if (v11)
		{
			*((_QWORD*)v11 + 1) = v10;
			v12 = (__int64)(v11 + 4);
			*(_QWORD*)v11 = off_140B55060;
		}
		else
		{
			v12 = 16i64;
		}
	}
	else
	{
		v12 = 0i64;
	}
	if (a1[1])
	{
		do
		{
			++v5;
			*(_QWORD*)(v12 + 8 * v5 - 8) = *(_QWORD*)(*a1 + 8 * v15[v5 - 1]);
		} while (v5 < a1[1]);
	}
	if (*a1)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
	v13 = v15;
	*a1 = v12;
	sub_14018B900((__int64)v13, 0);
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B7A630: using guessed type __int128 xmmword_140B7A630;

