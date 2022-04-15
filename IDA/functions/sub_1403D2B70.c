#include "../winhttp.h"

//----- (00000001403D2B70) ----------------------------------------------------
void __fastcall sub_1403D2B70(__int64* a1)
{
	unsigned __int64 v1; // rsi
	unsigned __int64 v3; // rbx
	__int64 v4; // rax
	unsigned __int64 v5; // rax
	__m128i si128; // xmm1
	__m128i v7; // xmm0
	__int64* v8; // r8
	unsigned __int64 v9; // rdx
	__int64 v10; // r9
	__int64 v11; // r10
	__int64 v12; // rsi
	unsigned int v13; // r11d
	unsigned int v14; // eax
	unsigned __int64 v15; // rsi
	int* v16; // rax
	__int64 v17; // r14
	__int64 v18; // rcx
	__int64 v19[3]; // [rsp+20h] [rbp-28h] BYREF
	__int64* v20; // [rsp+38h] [rbp-10h]

	v1 = a1[1];
	if (v1 > 1)
	{
		v3 = 0i64;
		v19[0] = *a1;
		v19[1] = (__int64)sub_1403D33B0;
		v19[2] = 0i64;
		v4 = 8 * v1;
		if (!is_mul_ok(v1, 8ui64))
			v4 = -1i64;
		v20 = (__int64*)sub_14018B280(v4, 0);
		v5 = 0i64;
		si128 = _mm_load_si128((const __m128i*) & xmmword_140B7A630);
		do
		{
			v7 = (__m128i)v5;
			v5 += 2i64;
			*(__m128i*)& v20[v5 - 2] = _mm_add_epi64(_mm_unpacklo_epi64(v7, v7), si128);
		} while (v5 < v1 - (v1 & 1));
		for (; v5 < v1; ++v5)
			v20[v5] = v5;
		sub_14001FEC0((__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_140029DF0, v20, v1, (__int64)v19);
		v8 = v20;
		v9 = 1i64;
		v10 = 0i64;
		if ((unsigned __int64)a1[1] > 1)
		{
			v11 = 0i64;
			do
			{
				v12 = v8[v9];
				v13 = *(_DWORD*)(*a1 + 4 * v8[v11]);
				v14 = *(_DWORD*)(*a1 + 4 * v12);
				if (v13 < v14 || v14 < v13)
				{
					v11 = ++v10;
					v8[v10] = v12;
					v8 = v20;
				}
				++v9;
			} while (v9 < a1[1]);
		}
		v15 = v10 + 1;
		if (v10 == -1)
		{
			v17 = 0i64;
		}
		else
		{
			v16 = sub_14018B280(4 * v15 + 16, 0);
			if (v16)
			{
				*((_QWORD*)v16 + 1) = v15;
				v17 = (__int64)(v16 + 4);
				*(_QWORD*)v16 = off_140B55060;
				v8 = v20;
			}
			else
			{
				v8 = v20;
				v17 = 16i64;
			}
		}
		if (v15)
		{
			do
			{
				v18 = v8[v3++];
				*(_DWORD*)(v17 + 4 * v3 - 4) = *(_DWORD*)(*a1 + 4 * v18);
				v8 = v20;
			} while (v3 < v15);
		}
		if (*a1)
		{
			(*(void(__fastcall**)(__int64, unsigned __int64, __int64*))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v9, v8);
			v8 = v20;
		}
		a1[1] = v15;
		*a1 = v17;
		sub_14018B900((__int64)v8, 0);
	}
}
// 1403D2BD7: conditional instruction was optimized away because rsi.8>=2u
// 1403D2BDD: conditional instruction was optimized away because rsi.8>=2u
// 1403D2D31: variable 'v9' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B7A630: using guessed type __int128 xmmword_140B7A630;

