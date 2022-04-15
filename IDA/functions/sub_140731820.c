#include "../winhttp.h"

//----- (0000000140731820) ----------------------------------------------------
void __fastcall sub_140731820(__int64* a1)
{
	unsigned __int64 v1; // rbx
	__int64 v3; // rax
	unsigned __int64 v4; // rax
	__m128i si128; // xmm1
	__m128i v6; // xmm0
	__int64 v7; // rbx
	int* v8; // rax
	__int64 v9; // rbp
	unsigned __int64 v10; // rdi
	__int64* v11; // rbx
	_QWORD* v12; // rdx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64* v16; // rcx
	_QWORD v17[3]; // [rsp+20h] [rbp-28h] BYREF
	__int64* v18; // [rsp+38h] [rbp-10h]

	v1 = a1[1];
	v17[0] = *a1;
	v17[1] = sub_140731720;
	v17[2] = 0i64;
	v3 = 8 * v1;
	if (!is_mul_ok(v1, 8ui64))
		v3 = -1i64;
	v18 = (__int64*)sub_14018B280(v3, 0);
	v4 = 0i64;
	if (v1)
	{
		if (v1 >= 2)
		{
			si128 = _mm_load_si128((const __m128i*) & xmmword_140B7A630);
			do
			{
				v6 = (__m128i)v4;
				v4 += 2i64;
				*(__m128i*)& v18[v4 - 2] = _mm_add_epi64(_mm_unpacklo_epi64(v6, v6), si128);
			} while (v4 < v1 - (v1 & 1));
		}
		for (; v4 < v1; ++v4)
			v18[v4] = v4;
	}
	sub_14001FEC0((__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_140731A00, v18, v1, (__int64)v17);
	v7 = a1[1];
	if (v7)
	{
		v8 = sub_14018B280(32 * v7 + 16, 0);
		if (v8)
		{
			*((_QWORD*)v8 + 1) = v7;
			v9 = (__int64)(v8 + 4);
			*(_QWORD*)v8 = off_140B55060;
		}
		else
		{
			v9 = 16i64;
		}
	}
	else
	{
		v9 = 0i64;
	}
	v10 = 0i64;
	if (a1[1])
	{
		v11 = (__int64*)(v9 + 16);
		do
		{
			if (v11 != (__int64*)16)
			{
				v12 = (_QWORD*)(*a1 + 32 * v18[v10]);
				*(v11 - 1) = 0i64;
				*v11 = 0i64;
				v11[1] = 0i64;
				*(v11 - 1) = v12[1];
				v12[1] = 0i64;
				v13 = *v11;
				*v11 = v12[2];
				v12[2] = v13;
				v14 = v11[1];
				v11[1] = v12[3];
				v12[3] = v14;
			}
			v15 = *(_QWORD*)(*a1 + 32 * v18[v10] + 8);
			if (v15)
				sub_14018B900(v15, 0);
			++v10;
			v11 += 4;
		} while (v10 < a1[1]);
	}
	if (*a1)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
	v16 = v18;
	*a1 = v9;
	sub_14018B900((__int64)v16, 0);
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B7A630: using guessed type __int128 xmmword_140B7A630;
// 140731820: using guessed type _QWORD var_28[3];

