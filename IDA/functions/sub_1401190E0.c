//----- (00000001401190E0) ----------------------------------------------------
__int64 __fastcall sub_1401190E0(_QWORD* a1)
{
	__m128 v2; // xmm6
	__m128 v3; // xmm7
	double v4; // xmm0_8
	_DWORD* v5; // rax
	__m128 v6; // xmm8
	double v7; // xmm0_8
	__m128 v8; // xmm1
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // r9
	__int64 v13; // [rsp+20h] [rbp-48h] BYREF
	int v14; // [rsp+28h] [rbp-40h]

	v2 = 0i64;
	v2.m128_f32[0] = sub_140056C40(a1, 1u);
	v3 = 0i64;
	v3.m128_f32[0] = sub_140056C40(a1, 2u);
	v4 = sub_140056C40(a1, 3u);
	v6 = 0i64;
	v5 = (_DWORD*)(a1[3] + 48i64);
	v6.m128_f32[0] = v4;
	if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 56i64) <= 0)
		v7 = 1.0;
	else
		v7 = sub_140056C40(a1, 4u);
	v8 = 0i64;
	v8.m128_f32[0] = v7;
	*(__m128*)sub_140059170(a1, 0x10ui64) = _mm_unpacklo_ps(_mm_unpacklo_ps(v2, v6), _mm_unpacklo_ps(v3, v8));
	v9 = a1[4];
	v10 = sub_140062650((__int64)a1, (unsigned __int64*)"CColor", 6ui64);
	v11 = a1[2];
	v13 = v10;
	v14 = 4;
	sub_14005E8E0((__int64)a1, v9 + 160, (int*)&v13, v11);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

