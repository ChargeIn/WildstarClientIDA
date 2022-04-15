#include "../winhttp.h"

//----- (0000000140776360) ----------------------------------------------------
void __fastcall sub_140776360(__int64* a1)
{
	unsigned __int64 v1; // rdi
	unsigned __int64 v3; // rbx
	__int64 v4; // rax
	unsigned __int64 v5; // rax
	__m128i si128; // xmm1
	__m128i v7; // xmm0
	__int64 v8; // rdi
	int* v9; // rax
	__int64 v10; // rdi
	__int64 v11; // r8
	_DWORD* v12; // rcx
	__int64* v13; // rcx
	__int64 v14[3]; // [rsp+20h] [rbp-28h] BYREF
	__int64* v15; // [rsp+38h] [rbp-10h]

	v1 = a1[1];
	v14[0] = *a1;
	v3 = 0i64;
	v14[1] = (__int64)sub_14076F0C0;
	v14[2] = 0i64;
	v4 = 8 * v1;
	if (!is_mul_ok(v1, 8ui64))
		v4 = -1i64;
	v15 = (__int64*)sub_14018B280(v4, 0);
	v5 = 0i64;
	if (v1)
	{
		if (v1 >= 2)
		{
			si128 = _mm_load_si128((const __m128i*) & xmmword_140B7A630);
			do
			{
				v7 = (__m128i)v5;
				v5 += 2i64;
				*(__m128i*)& v15[v5 - 2] = _mm_add_epi64(_mm_unpacklo_epi64(v7, v7), si128);
			} while (v5 < v1 - (v1 & 1));
		}
		for (; v5 < v1; ++v5)
			v15[v5] = v5;
	}
	sub_14001FEC0((__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_140776D60, v15, v1, (__int64)v14);
	v8 = a1[1];
	if (v8)
	{
		v9 = sub_14018B280(12 * v8 + 16, 0);
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
		v11 = v10;
		do
		{
			++v3;
			v11 += 12i64;
			v12 = (_DWORD*)(*a1 + 12 * v15[v3 - 1]);
			*(_DWORD*)(v11 - 12) = *v12;
			*(_DWORD*)(v11 - 8) = v12[1];
			*(_DWORD*)(v11 - 4) = v12[2];
		} while (v3 < a1[1]);
	}
	if (*a1)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
	v13 = v15;
	*a1 = v10;
	sub_14018B900((__int64)v13, 0);
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B7A630: using guessed type __int128 xmmword_140B7A630;

