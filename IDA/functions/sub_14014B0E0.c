//----- (000000014014B0E0) ----------------------------------------------------
__int64 __fastcall sub_14014B0E0(_QWORD* a1)
{
	__m128* v2; // rax
	__m128 v3; // xmm1
	__m128 v4; // xmm1
	float v5; // xmm5_4
	__m128 v6; // xmm0
	__m128 v7; // xmm6
	__m128 v8; // xmm6
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // r9
	__int128 v13; // [rsp+20h] [rbp-28h] BYREF

	v2 = (__m128*)sub_140056AB0(a1, 1u);
	v3 = _mm_mul_ps(*v2, *v2);
	v4 = _mm_add_ps(v3, _mm_shuffle_ps(v3, v3, 78));
	v5 = _mm_shuffle_ps(v4, v4, 177).m128_f32[0] + v4.m128_f32[0];
	if (v5 <= *(float*)&dword_140C3DA58)
	{
		v13 = 0ui64;
		v8 = 0ui64;
	}
	else
	{
		v6 = _mm_xor_ps((__m128)v2->m128_u32[2], (__m128)0x80000000);
		v7 = _mm_unpacklo_ps(_mm_xor_ps((__m128)v2->m128_u32[0], (__m128)0x80000000), v6);
		v6.m128_f32[0] = v5;
		v8 = _mm_div_ps(
			_mm_unpacklo_ps(
				v7,
				_mm_unpacklo_ps(_mm_xor_ps((__m128)v2->m128_u32[1], (__m128)0x80000000), (__m128)v2->m128_u32[3])),
			_mm_shuffle_ps(v6, v6, 0));
	}
	*(__m128*)sub_140059170(a1, 0x10ui64) = v8;
	v9 = a1[4];
	v10 = sub_140062650((__int64)a1, (unsigned __int64*)"Quaternion", 0xAui64);
	v11 = a1[2];
	*(_QWORD*)&v13 = v10;
	DWORD2(v13) = 4;
	sub_14005E8E0((__int64)a1, v9 + 160, (int*)&v13, v11);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3DA58: using guessed type int dword_140C3DA58;

