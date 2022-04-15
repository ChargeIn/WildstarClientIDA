#include "../winhttp.h"

//----- (0000000140118C50) ----------------------------------------------------
__int64 __fastcall sub_140118C50(_QWORD* a1)
{
	__m128* v2; // rbx
	__m128 v3; // xmm6
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // r9
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	int v9; // [rsp+28h] [rbp-20h]

	v2 = (__m128*)sub_140056AB0(a1, 1u);
	v3 = _mm_add_ps(*(__m128*)sub_140056AB0(a1, 2u), *v2);
	*(__m128*)sub_140059170(a1, 0x10ui64) = v3;
	v4 = a1[4];
	v5 = sub_140062650((__int64)a1, (unsigned __int64*)"CColor", 6ui64);
	v6 = a1[2];
	v8 = v5;
	v9 = 4;
	sub_14005E8E0((__int64)a1, v4 + 160, (int*)&v8, v6);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}

