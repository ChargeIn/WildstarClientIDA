#include "../winhttp.h"

//----- (0000000140504780) ----------------------------------------------------
__int64 __fastcall sub_140504780(__int64 a1, __int64 a2, unsigned __int64 a3, char a4, __m128* a5, int* a6, int a7)
{
	__int64 v7; // rdi
	int* v12; // rax
	__int64 v13; // rax
	bool v14; // zf
	int* v15; // rcx
	int* v16; // rbp
	unsigned __int64 v17; // r8
	unsigned __int64 v18; // rbx
	unsigned __int64 v19; // rbx
	__int64 v20; // rax
	__int64 v21; // rax
	wchar_t* v22; // rdx
	__int64 v23; // rax
	__int64 v24; // rax
	__int64 v25; // rax
	__m128i v26; // xmm1
	__m128i v27; // xmm1
	_QWORD* v28; // rax
	__int64 v29; // rax
	__int64 i; // rax
	__int64 v31; // rax
	__int64 v32; // rax
	__int64 v33; // rax
	__int64 v34; // rax
	_QWORD* v35; // rax
	__int64 v36; // rax
	__int64 v38; // [rsp+20h] [rbp-48h] BYREF
	__int64 v39; // [rsp+28h] [rbp-40h]

	v7 = 0i64;
	*(_QWORD*)(a2 + 8) = 0i64;
	*(_QWORD*)(a2 + 16) = 0i64;
	*(_QWORD*)(a2 + 24) = 0i64;
	v12 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a2 + 8) = v12;
	*(_QWORD*)(a2 + 16) = v12;
	*(_QWORD*)(a2 + 24) = v12 + 4;
	if (v12)
		*(_WORD*)v12 = 0;
	v13 = 0i64;
	do
		v14 = aDoc[++v13] == 0;
	while (!v14);
	v15 = *(int**)(a2 + 8);
	v16 = (int*)&aDoc[v13];
	v17 = (__int64)(*(_QWORD*)(a2 + 16) - (_QWORD)v15) >> 1;
	v18 = (2 * v13) >> 1;
	if (v18 > v17)
	{
		sub_1407DB590(v15, (int*)L"<Doc>", 2 * v17);
		sub_14001C310((_QWORD*)a2, (int*)&aDoc[(__int64)(*(_QWORD*)(a2 + 16) - *(_QWORD*)(a2 + 8)) >> 1], v16);
	}
	else
	{
		v19 = 2 * v18;
		sub_1407DB590(v15, (int*)L"<Doc>", v19);
		sub_14001C2B0(a2, (int*)(v19 + *(_QWORD*)(a2 + 8)), *(int**)(a2 + 16));
	}
	v20 = 0i64;
	do
		v14 = aPAlign[++v20] == 0;
	while (!v14);
	sub_14001C310((_QWORD*)a2, (int*)L"<P Align=\"", (int*)&aPAlign[v20]);
	v21 = 0i64;
	if (a7 == 1)
	{
		v22 = L"Center";
		do
			v14 = aCenter_0[++v21] == 0;
		while (!v14);
	}
	else if (a7 == 2)
	{
		v22 = L"Right";
		do
			v14 = aRight_0[++v21] == 0;
		while (!v14);
	}
	else
	{
		v22 = L"Left";
		do
			v14 = aLeft_3[++v21] == 0;
		while (!v14);
	}
	sub_14001C310((_QWORD*)a2, (int*)v22, (int*)&v22[v21]);
	v23 = 0i64;
	do
		v14 = *((_WORD*)&unk_1409F100C + ++v23) == 0;
	while (!v14);
	sub_14001C310((_QWORD*)a2, (int*)&unk_1409F100C, (int*)((char*)&unk_1409F100C + 2 * v23));
	v24 = 0i64;
	do
		++v24;
	while (word_140A31AB8[v24]);
	sub_14001C310((_QWORD*)a2, (int*)word_140A31AB8, (int*)&word_140A31AB8[v24]);
	v25 = 0i64;
	do
		v14 = asc_140B10154[++v25] == 0;
	while (!v14);
	sub_14001C310((_QWORD*)a2, (int*)L"=\"", (int*)&asc_140B10154[v25]);
	v26 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, *a5), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v27 = _mm_packus_epi16(v26, v26);
	v28 = sub_14018EFA0(&v38, (__int64)L"%x", (unsigned int)_mm_cvtsi128_si32(_mm_packus_epi16(v27, v27)));
	sub_14001C310((_QWORD*)a2, (int*)v28[1], (int*)v28[2]);
	if (v39)
		sub_14018B900(v39, 0);
	v29 = 0i64;
	do
		v14 = asc_140B1015C[++v29] == 0;
	while (!v14);
	sub_14001C310((_QWORD*)a2, (int*)L"\" ", (int*)&asc_140B1015C[v29]);
	if (a6)
	{
		for (i = 0i64; aFont[i]; ++i)
			;
		sub_14001C310((_QWORD*)a2, (int*)L"Font", (int*)&aFont[i]);
		v31 = 0i64;
		do
			v14 = asc_140B10140[++v31] == 0;
		while (!v14);
		sub_14001C310((_QWORD*)a2, (int*)L"=\"", (int*)&asc_140B10140[v31]);
		v32 = 0i64;
		if (*(_WORD*)a6)
		{
			do
				++v32;
			while (*((_WORD*)a6 + v32));
		}
		sub_14001C310((_QWORD*)a2, a6, (int*)((char*)a6 + 2 * v32));
		v33 = 0i64;
		do
			v14 = asc_140B10138[++v33] == 0;
		while (!v14);
		sub_14001C310((_QWORD*)a2, (int*)L"\" ", (int*)&asc_140B10138[v33]);
	}
	v34 = 0i64;
	do
		v14 = *((_WORD*)&unk_1409F0FD4 + ++v34) == 0;
	while (!v14);
	sub_14001C310((_QWORD*)a2, (int*)&unk_1409F0FD4, (int*)((char*)&unk_1409F0FD4 + 2 * v34));
	v35 = sub_1405043E0(a1, &v38, a3, a4);
	sub_14001C310((_QWORD*)a2, (int*)v35[1], (int*)v35[2]);
	if (v39)
		sub_14018B900(v39, 0);
	v36 = 0i64;
	do
		v14 = aP_0[++v36] == 0;
	while (!v14);
	sub_14001C310((_QWORD*)a2, (int*)L"</P>", (int*)&aP_0[v36]);
	do
		v14 = aDoc_0[++v7] == 0;
	while (!v14);
	sub_14001C310((_QWORD*)a2, (int*)L"</Doc>", (int*)&aDoc_0[v7]);
	return a2;
}
// 140A31AA8: using guessed type wchar_t aFont[5];
// 140A31AB8: using guessed type __int16 word_140A31AB8[];
// 140B10008: using guessed type wchar_t aCenter_0[7];
// 140B10018: using guessed type wchar_t aPAlign[11];
// 140B10030: using guessed type wchar_t aLeft_3[5];
// 140B10040: using guessed type wchar_t aRight_0[6];
// 140B10060: using guessed type wchar_t aDoc[6];
// 140B10100: using guessed type wchar_t aDoc_0[7];
// 140B10138: using guessed type wchar_t asc_140B10138[3];
// 140B10140: using guessed type wchar_t asc_140B10140[3];
// 140B10148: using guessed type wchar_t aP_0[5];
// 140B10154: using guessed type wchar_t asc_140B10154[3];
// 140B1015C: using guessed type wchar_t asc_140B1015C[3];
// 140B10164: using guessed type wchar_t asc_140B10164[3];
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;

