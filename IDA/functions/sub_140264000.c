//----- (0000000140264000) ----------------------------------------------------
__m128i* __fastcall sub_140264000(int* a1, unsigned __int64 a2, __m128i* a3, int a4)
{
	__int64 v5; // rbp
	const __m128i* v7; // rax
	__int64 v8; // rsi
	bool v9; // sf
	__m128i* result; // rax
	int* v11[3]; // [rsp+40h] [rbp-18h] BYREF
	unsigned __int64 v12; // [rsp+68h] [rbp+10h] BYREF

	v12 = a2;
	v5 = a4;
	v7 = sub_1407DD8D8(a3, 0x2Eu);
	v8 = (__int64)v7;
	if (!v7)
		return a3;
	v11[0] = a1;
	v12 = 260i64;
	if ((int)sub_140265FD0(a1, 260i64, a3->m128i_i8, ((char*)v7 - (char*)a3) >> 1, v11, &v12) < 0)
		return a3;
	if ((int)sub_1401A3210(v11[0], v12, (__int64*)v11, &v12, 0, L".%s", off_140AE5AD8[v5]) < 0)
		return a3;
	v9 = (int)sub_14001B2D0((_WORD*)v11[0], v12, v8) < 0;
	result = (__m128i*)a1;
	if (v9)
		return a3;
	return result;
}
// 140AE4CF8: using guessed type wchar_t aS_33[4];
// 140AE5AD8: using guessed type wchar_t *off_140AE5AD8[4];

