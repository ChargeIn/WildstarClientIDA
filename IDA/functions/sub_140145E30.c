//----- (0000000140145E30) ----------------------------------------------------
__int64 __fastcall sub_140145E30(_QWORD* a1)
{
	__m128 v2; // xmm6
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // r9
	__int64 v7; // [rsp+20h] [rbp-28h] BYREF
	int v8; // [rsp+28h] [rbp-20h]

	v2 = _mm_sub_ps((__m128)0i64, *(__m128*)sub_140056AB0(a1, 1u));
	*(__m128*)sub_140059170(a1, 0x10ui64) = v2;
	v3 = a1[4];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"Vector2", 7ui64);
	v5 = a1[2];
	v7 = v4;
	v8 = 4;
	sub_14005E8E0((__int64)a1, v3 + 160, (int*)&v7, v5);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}

