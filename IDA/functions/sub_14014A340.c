#include "../winhttp.h"

//----- (000000014014A340) ----------------------------------------------------
__int64 __fastcall sub_14014A340(_QWORD* a1)
{
	__m128* v2; // rbx
	__m128* v3; // rax
	__m128 v4; // xmm7
	__m128 v5; // xmm6
	_OWORD* v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // r9
	__int64 v11; // [rsp+20h] [rbp-38h] BYREF
	int v12; // [rsp+28h] [rbp-30h]

	v2 = (__m128*)sub_140056AB0(a1, 1u);
	v3 = (__m128*)sub_140056AB0(a1, 2u);
	v4 = _mm_add_ps(v2[1], *v3);
	v5 = _mm_add_ps(*v2, *v3);
	v6 = (_OWORD*)sub_140059170(a1, 0x20ui64);
	*v6 = v5;
	v6[1] = v4;
	v7 = a1[4];
	v8 = sub_140062650((__int64)a1, (unsigned __int64*)"AaRect", 6ui64);
	v9 = a1[2];
	v11 = v8;
	v12 = 4;
	sub_14005E8E0((__int64)a1, v7 + 160, (int*)&v11, v9);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}

