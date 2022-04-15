#include "../winhttp.h"

//----- (00000001402A45D0) ----------------------------------------------------
__int64 __fastcall sub_1402A45D0(__int64 a1)
{
	__int64 v1; // rdi
	int v3; // r8d
	__int64 v4; // rax
	int v5; // eax
	unsigned __int64 v6; // rcx
	__m128i v7; // xmm1
	int v8; // eax
	int v9; // eax
	int* v10; // rax
	int* v11; // rbx
	__int64 v12; // rcx
	__int64 v14; // [rsp+20h] [rbp-68h] BYREF
	__m128 v15; // [rsp+30h] [rbp-58h]
	int v16[7]; // [rsp+40h] [rbp-48h] BYREF
	__m128 v17; // [rsp+5Ch] [rbp-2Ch]
	int v18; // [rsp+6Ch] [rbp-1Ch]
	int v19; // [rsp+70h] [rbp-18h]

	v1 = a1 + 144;
	if (*(_QWORD*)(a1 + 144))
		return *(_QWORD*)v1;
	v3 = dword_140AE64C0[*(int*)(a1 + 48)];
	v4 = *(int*)(a1 + 56);
	if (v3)
		v5 = dword_140AE7E40[v4];
	else
		v5 = dword_140AE7E20[v4];
	v6 = *(unsigned int*)(a1 + 60);
	v7 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 64));
	v16[0] = v5;
	v16[4] = 0;
	v16[5] = 16;
	v8 = dword_140AE7E60[v6 & 3];
	v18 = 0;
	v16[1] = v8;
	v19 = 2139095039;
	v14 = 0i64;
	v17 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(_mm_unpacklo_epi8(_mm_shuffle_epi32(v7, 0), (__m128i)0i64), (__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v15 = v17;
	v16[2] = dword_140AE7E60[((unsigned __int64)(unsigned int)v6 >> 2) & 3];
	v16[3] = dword_140AE7E60[(v6 >> 4) & 3];
	v9 = 1;
	if (v3)
		v9 = 4;
	v16[6] = v9;
	if ((*(int(__fastcall**)(_QWORD, int*, __int64*))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6336i64) + 184i64))(
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6336i64),
		v16,
		&v14) >= 0
		&& v1)
	{
		v10 = sub_14018B280(24i64, 0);
		v11 = v10;
		if (v10)
		{
			*(_QWORD*)v10 = off_140B55048;
			v10[2] = 1;
			*(_QWORD*)v10 = off_140B61188;
			*((_QWORD*)v10 + 2) = v14;
			v12 = v14;
			if (v14)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
				v12 = v14;
				*(_QWORD*)v1 = v11;
				goto LABEL_15;
			}
		}
		else
		{
			v12 = v14;
			v11 = 0i64;
		}
		*(_QWORD*)v1 = v11;
	}
	else
	{
		v12 = v14;
	}
LABEL_15:
	if (v12)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12);
	return *(_QWORD*)v1;
}
// 140AE64C0: using guessed type int dword_140AE64C0[56];
// 140AE7E20: using guessed type int dword_140AE7E20[8];
// 140AE7E40: using guessed type int dword_140AE7E40[8];
// 140AE7E60: using guessed type int dword_140AE7E60[4];
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B61188: using guessed type __int64 (__fastcall *off_140B61188[3])();
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;

