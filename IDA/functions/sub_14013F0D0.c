#include "../winhttp.h"

//----- (000000014013F0D0) ----------------------------------------------------
unsigned int* __fastcall sub_14013F0D0(__int64 a1, unsigned int* a2, __int64 a3)
{
	__int64 v6; // rax
	int* v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rdi
	__int64 v11; // rax
	int* v12; // rax
	__int64 v13; // rcx
	__m128* v14; // rbx
	unsigned __int64 v15; // rax
	__m128* v16; // rax
	__m128i v17; // xmm1
	__m128i v18; // xmm1
	unsigned int* v19; // rbx
	unsigned __int64 v20; // rax
	__int64 v21; // r8
	__int64 v22; // rdx
	__int64 v23; // rcx
	int v24; // r9d
	__int64 v25; // rax
	unsigned __int16* v26; // rax
	unsigned __int16* v27; // r9
	__int64 v28; // r8
	int v29; // edx
	int v30; // eax
	int v31; // edx
	int v32; // eax
	__m128 v34; // [rsp+20h] [rbp-18h] BYREF
	unsigned int v35; // [rsp+40h] [rbp+8h] BYREF

	sub_14013D990((__int64)a2, (int*)(*(_QWORD*)(a1 + 24) + 704i64));
	v6 = sub_1401A6B80(a3, L"Font");
	if (v6)
	{
		v7 = (int*)sub_1401A4F40(v6 + 32);
		if (v7)
		{
			v8 = *(_QWORD*)(a1 + 8);
			if (v8)
			{
				v9 = *(_QWORD*)(v8 + 16);
				if (v9)
					*((_QWORD*)a2 + 5) = sub_1400E58C0(v9, v7);
			}
		}
	}
	v10 = 0i64;
	if (!*(_BYTE*)(*(_QWORD*)(a1 + 24) + 826i64))
	{
		v11 = sub_1401A6B80(a3, L"Link");
		if (v11)
		{
			v12 = (int*)sub_1401A4F40(v11 + 32);
			if (v12)
			{
				v13 = 0i64;
				if (*(_WORD*)v12)
				{
					do
						++v13;
					while (*((_WORD*)v12 + v13));
				}
				sub_14001C480((__int64)(a2 + 2), v12, (int*)((char*)v12 + 2 * v13));
				v14 = sub_14018ECC0(&v34, off_140C2C940[0]);
				sub_1401429A0(qword_140C63678, *a2);
				*a2 = sub_140141F10(qword_140C63678, v14);
			}
		}
	}
	v15 = *a2;
	if (v15 >= *(_QWORD*)(qword_140C63678 + 48))
		v16 = *(__m128**)(qword_140C63678 + 40);
	else
		v16 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v15);
	v17 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, *v16), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v18 = _mm_packus_epi16(v17, v17);
	v19 = sub_1400F66F0(&v35, a3, &word_140A31AB8, _mm_cvtsi128_si32(_mm_packus_epi16(v18, v18)));
	if (a2 == v19)
	{
		v21 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *a2);
		v20 = *v19;
		v21 = qword_140C63678;
		*a2 = v20;
		if (v20 < *(_QWORD*)(v21 + 48))
		{
			v22 = *(_QWORD*)(v21 + 40);
			v23 = 32i64 * (unsigned int)v20;
			v24 = *(_DWORD*)(v23 + v22 + 16);
			if ((unsigned int)(v24 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v23 + v22 + 16) = v24 + 1;
		}
	}
	sub_1401429A0(v21, v35);
	v25 = sub_1401A6B80(a3, L"Align");
	if (v25)
	{
		v26 = (unsigned __int16*)sub_1401A4F40(v25 + 32);
		v27 = v26;
		if (v26)
		{
			a2[12] = 0;
			v28 = 0i64;
			if (*v26 == 82)
			{
				LOWORD(v29) = 82;
				while ((_WORD)v29)
				{
					v29 = v27[v28 + 1];
					v30 = (unsigned __int16)word_140A31DD2[v28++];
					if (v29 != v30)
						goto LABEL_28;
				}
				a2[12] = 2;
			}
		LABEL_28:
			v31 = *v27;
			if (v31 == 67)
			{
				while ((_WORD)v31)
				{
					v31 = v27[v10 + 1];
					v32 = (unsigned __int16)word_140A31DC2[v10++];
					if (v31 != v32)
						return a2;
				}
				a2[12] = 1;
			}
		}
	}
	return a2;
}
// 140A31AA8: using guessed type wchar_t aFont[5];
// 140A31AB8: using guessed type __int16 word_140A31AB8;
// 140A31D30: using guessed type wchar_t aLink_0[5];
// 140A31DB0: using guessed type wchar_t aAlign[6];
// 140A31DC2: using guessed type __int16 word_140A31DC2[];
// 140A31DD2: using guessed type __int16 word_140A31DD2[];
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C2C940: using guessed type wchar_t *off_140C2C940[14];
// 140C63678: using guessed type __int64 qword_140C63678;
// 14013F0D0: using guessed type __m128 var_18;

