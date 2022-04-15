//----- (000000014014B200) ----------------------------------------------------
__int64 __fastcall sub_14014B200(_QWORD* a1)
{
	unsigned int* v2; // rax
	__m128 v3; // xmm6
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // r9
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	int v9; // [rsp+28h] [rbp-20h]

	v2 = (unsigned int*)sub_140056AB0(a1, 1u);
	v3 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(_mm_xor_ps((__m128) * v2, (__m128)0x80000000), _mm_xor_ps((__m128)v2[2], (__m128)0x80000000)),
		_mm_unpacklo_ps(_mm_xor_ps((__m128)v2[1], (__m128)0x80000000), (__m128)v2[3]));
	*(__m128*)sub_140059170(a1, 0x10ui64) = v3;
	v4 = a1[4];
	v5 = sub_140062650((__int64)a1, (unsigned __int64*)"Quaternion", 0xAui64);
	v6 = a1[2];
	v8 = v5;
	v9 = 4;
	sub_14005E8E0((__int64)a1, v4 + 160, (int*)&v8, v6);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

