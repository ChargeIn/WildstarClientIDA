#include "../winhttp.h"

//----- (0000000140837D60) ----------------------------------------------------
_QWORD* __fastcall sub_140837D60(int* a1, __m128i* a2)
{
	int* v3; // rdi
	__int64* v4; // rax
	_QWORD* result; // rax
	_QWORD* v6; // rcx
	__m128i v7; // [rsp+20h] [rbp-18h]
	__m128i v8; // [rsp+20h] [rbp-18h]

	v7 = *a2;
	v3 = &a1[2 * ((_mm_srli_si128(*a2, 8).m128i_u64[0] + (unsigned int)_mm_cvtsi128_si32(*a2)) % 0xC1)];
	v4 = (__int64*)*((_QWORD*)v3 + 1);
	if (!v4)
		goto LABEL_7;
	while (*((_DWORD*)v4 + 2) != v7.m128i_i32[0] || v4[2] != v7.m128i_i64[1])
	{
		v4 = (__int64*)*v4;
		if (!v4)
			goto LABEL_7;
	}
	result = v4 + 3;
	if (!result)
	{
	LABEL_7:
		v8 = *a2;
		result = (_QWORD*)sub_1408819F0(*a1, 32i64);
		v6 = result;
		if (result)
		{
			*result = *((_QWORD*)v3 + 1);
			result += 3;
			*(__m128i*)(v6 + 1) = v8;
			*((_QWORD*)v3 + 1) = v6;
			++a1[388];
		}
	}
	return result;
}
// 140837D60: using guessed type __m128i var_18;

