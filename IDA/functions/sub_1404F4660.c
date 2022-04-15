#include "../winhttp.h"

//----- (00000001404F4660) ----------------------------------------------------
void __fastcall sub_1404F4660(__int64* a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rax
	unsigned __int64 v4; // rsi
	__int64 v6; // rax
	unsigned __int64 v7; // rbx
	unsigned __int64 v8; // rax
	__m128i si128; // xmm1
	__m128i v10; // xmm0
	__int64 v11; // rsi
	int* v12; // rax
	__int64 v13; // rsi
	__int64* v14; // rcx
	__int64 v15[3]; // [rsp+20h] [rbp-28h] BYREF
	__int64* v16; // [rsp+38h] [rbp-10h]

	v3 = *a1;
	v4 = a1[1];
	v15[1] = a2;
	v15[0] = v3;
	v15[2] = a3;
	v6 = 8 * v4;
	if (!is_mul_ok(v4, 8ui64))
		v6 = -1i64;
	v7 = 0i64;
	v16 = (__int64*)sub_14018B280(v6, 0);
	v8 = 0i64;
	if (v4)
	{
		if (v4 >= 2)
		{
			si128 = _mm_load_si128((const __m128i*) & xmmword_140B7A630);
			do
			{
				v10 = (__m128i)v8;
				v8 += 2i64;
				*(__m128i*)& v16[v8 - 2] = _mm_add_epi64(_mm_unpacklo_epi64(v10, v10), si128);
			} while (v8 < v4 - (v4 & 1));
		}
		for (; v8 < v4; ++v8)
			v16[v8] = v8;
	}
	sub_14001FEC0((__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_14004F5F0, v16, v4, (__int64)v15);
	v11 = a1[1];
	if (v11)
	{
		v12 = sub_14018B280(8 * v11 + 16, 0);
		if (v12)
		{
			*((_QWORD*)v12 + 1) = v11;
			v13 = (__int64)(v12 + 4);
			*(_QWORD*)v12 = off_140B55060;
		}
		else
		{
			v13 = 16i64;
		}
	}
	else
	{
		v13 = 0i64;
	}
	if (a1[1])
	{
		do
		{
			++v7;
			*(_QWORD*)(v13 + 8 * v7 - 8) = *(_QWORD*)(*a1 + 8 * v16[v7 - 1]);
		} while (v7 < a1[1]);
	}
	if (*a1)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
	v14 = v16;
	*a1 = v13;
	sub_14018B900((__int64)v14, 0);
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B7A630: using guessed type __int128 xmmword_140B7A630;

