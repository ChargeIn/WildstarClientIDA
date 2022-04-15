//----- (0000000140115500) ----------------------------------------------------
__int64 __fastcall sub_140115500(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rcx
	__int64 v4; // rdi
	unsigned int v5; // eax
	__int64 v6; // rcx
	__m128i v7; // xmm0
	__int64 result; // rax
	__int128 v9; // [rsp+20h] [rbp-18h] BYREF
	int v10; // [rsp+40h] [rbp+8h] BYREF
	int v11; // [rsp+44h] [rbp+Ch]

	v2 = sub_140114A30(a1);
	v3 = (_DWORD*)(a1[3] + 16i64);
	v4 = v2;
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64) != 5)
	{
		v9 = *(_OWORD*)sub_140056AB0(a1, 2u);
	}
	else
	{
		sub_1400F0A10((__int64)a1, 2, (__int64)"x", (float*)&v9);
		sub_1400F0A10((__int64)a1, 2, (__int64)"y", (float*)&v9 + 1);
	}
	v10 = (int)*(float*)&v9;
	v11 = (int)*((float*)&v9 + 1);
	v5 = sub_140112240(v4, (__int64)&v10);
	v6 = a1[2];
	v7 = _mm_cvtsi32_si128(v5);
	*(_DWORD*)(v6 + 8) = 3;
	result = 1i64;
	*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v7);
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

