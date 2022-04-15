//----- (000000014014A750) ----------------------------------------------------
__int64 __fastcall sub_14014A750(_QWORD* a1)
{
	__m128* v2; // rax
	__m128 v3; // xmm7
	__m128 v4; // xmm6
	_OWORD* v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 v8; // r9
	__int64 v10; // [rsp+20h] [rbp-38h] BYREF
	int v11; // [rsp+28h] [rbp-30h]

	v2 = (__m128*)sub_140056AB0(a1, 1u);
	v3 = _mm_sub_ps((__m128)0i64, *v2);
	v4 = _mm_sub_ps((__m128)0i64, v2[1]);
	v5 = (_OWORD*)sub_140059170(a1, 0x20ui64);
	*v5 = v3;
	v5[1] = v4;
	v6 = a1[4];
	v7 = sub_140062650((__int64)a1, (unsigned __int64*)"AaRect", 6ui64);
	v8 = a1[2];
	v10 = v7;
	v11 = 4;
	sub_14005E8E0((__int64)a1, v6 + 160, (int*)&v10, v8);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}

