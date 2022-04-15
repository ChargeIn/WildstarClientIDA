#include "../winhttp.h"

//----- (00000001401D0CE0) ----------------------------------------------------
__int64 __fastcall sub_1401D0CE0(__int64 a1, int** a2)
{
	unsigned __int64 v5; // rbx
	int* v6; // rax
	unsigned __int64 v7; // rsi
	__int64 v8; // r14
	unsigned __int64 v9; // rax
	__m128i si128; // xmm1
	__int64 v11; // rcx
	__m128i v12; // xmm0
	unsigned __int64 v13; // rdi
	unsigned __int64 v14; // rdx
	_QWORD* v15; // r8
	__int64 v16; // rcx
	__int64 v17; // r9
	__int64 v18; // r10
	int* v19; // rbx
	int* v20; // rax
	int* v21; // rdx
	int* v22; // rbp
	__int64 v23; // rcx
	__int64 v24; // r9
	__int64 v25; // rcx
	__int64 v26; // r8
	__int64 v27; // rdx

	if (!a2)
		return 2147942487i64;
	v5 = *(_QWORD*)(a1 + 32);
	if (v5)
	{
		v6 = sub_14018B280(8 * v5 + 16, 0);
		v7 = 0i64;
		if (v6)
		{
			v8 = (__int64)(v6 + 4);
			*(_QWORD*)v6 = &off_140B5F110;
		}
		else
		{
			v8 = 16i64;
		}
	}
	else
	{
		v7 = 0i64;
		v8 = 0i64;
	}
	v9 = 0i64;
	if (v5)
	{
		if (v5 >= 2)
		{
			si128 = _mm_load_si128((const __m128i*) & xmmword_140B7A630);
			v11 = v8;
			do
			{
				v12 = (__m128i)v9;
				v9 += 2i64;
				v11 += 16i64;
				*(__m128i*)(v11 - 16) = _mm_add_epi64(_mm_unpacklo_epi64(v12, v12), si128);
			} while (v9 < v5 - (v5 & 1));
		}
		for (; v9 < v5; ++v9)
			*(_QWORD*)(v8 + 8 * v9) = v9;
	}
	sub_14001FEC0((__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_1401D19E0, (__int64*)v8, v5, a1);
	v13 = 0i64;
	if (v5)
	{
		v14 = 1i64;
		if (v5 > 1)
		{
			v15 = (_QWORD*)v8;
			do
			{
				v16 = *(_QWORD*)(a1 + 24);
				v17 = 56i64 * *v15;
				v18 = 56i64 * *(_QWORD*)(v8 + 8 * v14);
				if (*(_QWORD*)(v17 + v16 + 32) != *(_QWORD*)(v18 + v16 + 32)
					|| *(_QWORD*)(v17 + v16 + 40) != *(_QWORD*)(v18 + v16 + 40)
					|| *(_DWORD*)(v17 + v16 + 48) != *(_DWORD*)(v18 + v16 + 48))
				{
					++v13;
					v15 = (_QWORD*)(v8 + 8 * v13);
					*v15 = *(_QWORD*)(v8 + 8 * v14);
				}
				++v14;
			} while (v14 < v5);
		}
		++v13;
	}
	v19 = sub_14018B280(32i64, 0);
	if (v19)
	{
		*(_QWORD*)v19 = off_140B5F348;
		*((_QWORD*)v19 + 2) = 0i64;
		*((_QWORD*)v19 + 1) = 0i64;
		v19[6] = 1;
	}
	else
	{
		v19 = 0i64;
	}
	if (*((_QWORD*)v19 + 2) <= v13)
	{
		v20 = sub_14018DB00(*((_QWORD*)v19 + 1), v13, 20i64);
		v21 = (int*)*((_QWORD*)v19 + 1);
		v22 = v20;
		if (v21 != v20)
		{
			sub_1407DB590(v20, v21, 20i64 * *((_QWORD*)v19 + 2));
			v23 = *((_QWORD*)v19 + 1);
			if (v23)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v23 - 16) + 8i64))(v23 - 16);
			*((_QWORD*)v19 + 1) = v22;
		}
	}
	*((_QWORD*)v19 + 2) = v13;
	if (v13)
	{
		v24 = 0i64;
		do
		{
			v25 = *(_QWORD*)(a1 + 24);
			v26 = *((_QWORD*)v19 + 1);
			v27 = 56i64 * *(_QWORD*)(v8 + 8 * v7++);
			v24 += 20i64;
			*(_QWORD*)(v26 + v24 - 20) = *(_QWORD*)(v27 + v25 + 32);
			*(_QWORD*)(v26 + v24 - 12) = *(_QWORD*)(v27 + v25 + 40);
			*(_DWORD*)(v26 + v24 - 4) = *(_DWORD*)(v27 + v25 + 48);
		} while (v7 < v13);
	}
	*a2 = v19;
	if (v8)
		(**(void(__fastcall***)(__int64))(v8 - 16))(v8 - 16);
	return 0i64;
}
// 140B5F110: using guessed type __int64 (__fastcall *off_140B5F110)();
// 140B5F348: using guessed type __int64 (__fastcall *off_140B5F348[6])();
// 140B7A630: using guessed type __int128 xmmword_140B7A630;

