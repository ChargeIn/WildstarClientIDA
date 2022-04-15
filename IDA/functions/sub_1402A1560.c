#include "../winhttp.h"

//----- (00000001402A1560) ----------------------------------------------------
__int64 __fastcall sub_1402A1560(__int64 a1)
{
	__int64 v1; // rdi
	int v3; // r8d
	__int64 v4; // rax
	int v5; // eax
	unsigned __int64 v6; // rcx
	__m128i v7; // xmm1
	int v8; // eax
	int v9; // eax
	int v10; // eax
	int* v11; // rax
	int* v12; // rbx
	__int64 v13; // rcx
	__int64 v15; // [rsp+20h] [rbp-68h] BYREF
	__m128 v16; // [rsp+30h] [rbp-58h]
	int v17[3]; // [rsp+40h] [rbp-48h] BYREF
	__int64 v18; // [rsp+4Ch] [rbp-3Ch]
	int v19; // [rsp+54h] [rbp-34h]
	int v20; // [rsp+58h] [rbp-30h]
	__m128 v21; // [rsp+5Ch] [rbp-2Ch]
	int v22; // [rsp+6Ch] [rbp-1Ch]
	int v23; // [rsp+70h] [rbp-18h]

	v1 = a1 + 176;
	if (*(_QWORD*)(a1 + 176))
		return *(_QWORD*)v1;
	v3 = dword_140AE64C0[*(int*)(a1 + 48)];
	v4 = *(int*)(a1 + 56);
	if (v3)
		v5 = dword_140AE7E40[v4];
	else
		v5 = dword_140AE7E20[v4];
	v6 = *(unsigned int*)(a1 + 60);
	v7 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 64));
	v17[0] = v5;
	v8 = dword_140AE7E60[v6 & 3];
	v18 = 3i64;
	v19 = 16;
	v17[1] = v8;
	v9 = dword_140AE7E60[(v6 >> 2) & 3];
	v22 = 0;
	v23 = 2139095039;
	v21 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(_mm_unpacklo_epi8(_mm_shuffle_epi32(v7, 0), (__m128i)0i64), (__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v16 = v21;
	v17[2] = v9;
	v15 = 0i64;
	v10 = 1;
	if (v3)
		v10 = 4;
	v20 = v10;
	if ((*(int(__fastcall**)(_QWORD, int*, __int64*))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6336i64) + 184i64))(
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6336i64),
		v17,
		&v15) >= 0
		&& v1)
	{
		v11 = sub_14018B280(24i64, 0);
		v12 = v11;
		if (v11)
		{
			*(_QWORD*)v11 = off_140B55048;
			v11[2] = 1;
			*(_QWORD*)v11 = off_140B61188;
			*((_QWORD*)v11 + 2) = v15;
			v13 = v15;
			if (v15)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
				v13 = v15;
				*(_QWORD*)v1 = v12;
				goto LABEL_15;
			}
		}
		else
		{
			v13 = v15;
			v12 = 0i64;
		}
		*(_QWORD*)v1 = v12;
	}
	else
	{
		v13 = v15;
	}
LABEL_15:
	if (v13)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 16i64))(v13);
	return *(_QWORD*)v1;
}
// 140AE64C0: using guessed type int dword_140AE64C0[56];
// 140AE7E20: using guessed type int dword_140AE7E20[8];
// 140AE7E40: using guessed type int dword_140AE7E40[8];
// 140AE7E60: using guessed type int dword_140AE7E60[4];
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B61188: using guessed type __int64 (__fastcall *off_140B61188[3])();
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;

