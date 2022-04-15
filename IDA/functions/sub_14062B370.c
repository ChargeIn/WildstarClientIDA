#include "../winhttp.h"

//----- (000000014062B370) ----------------------------------------------------
void __fastcall sub_14062B370(__int64* a1)
{
	unsigned __int64 v1; // rsi
	unsigned __int64 v3; // rbx
	__int64 v4; // rax
	unsigned __int64 v5; // rax
	__m128i si128; // xmm1
	__m128i v7; // xmm0
	__int64 v8; // rsi
	int* v9; // rax
	__int64 v10; // rsi
	__int64* v11; // rcx
	__int64 v12[3]; // [rsp+20h] [rbp-28h] BYREF
	__int64* v13; // [rsp+38h] [rbp-10h]

	v1 = a1[1];
	if (v1 > 1)
	{
		v12[0] = *a1;
		v3 = 0i64;
		v12[1] = (__int64)sub_140629A50;
		v12[2] = 0i64;
		v4 = 8 * v1;
		if (!is_mul_ok(v1, 8ui64))
			v4 = -1i64;
		v13 = (__int64*)sub_14018B280(v4, 0);
		v5 = 0i64;
		si128 = _mm_load_si128((const __m128i*) & xmmword_140B7A630);
		do
		{
			v7 = (__m128i)v5;
			v5 += 2i64;
			*(__m128i*)& v13[v5 - 2] = _mm_add_epi64(_mm_unpacklo_epi64(v7, v7), si128);
		} while (v5 < v1 - (v1 & 1));
		for (; v5 < v1; ++v5)
			v13[v5] = v5;
		sub_14001FEC0((__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_14004F5F0, v13, v1, (__int64)v12);
		v8 = a1[1];
		if (v8)
		{
			v9 = sub_14018B280(8 * v8 + 16, 0);
			if (v9)
			{
				*((_QWORD*)v9 + 1) = v8;
				v10 = (__int64)(v9 + 4);
				*(_QWORD*)v9 = off_140B55060;
			}
			else
			{
				v10 = 16i64;
			}
		}
		else
		{
			v10 = 0i64;
		}
		if (a1[1])
		{
			do
			{
				++v3;
				*(_QWORD*)(v10 + 8 * v3 - 8) = *(_QWORD*)(*a1 + 8 * v13[v3 - 1]);
			} while (v3 < a1[1]);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		v11 = v13;
		*a1 = v10;
		sub_14018B900((__int64)v11, 0);
	}
}
// 14062B3D2: conditional instruction was optimized away because rsi.8>=2u
// 14062B3D8: conditional instruction was optimized away because rsi.8>=2u
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B7A630: using guessed type __int128 xmmword_140B7A630;

