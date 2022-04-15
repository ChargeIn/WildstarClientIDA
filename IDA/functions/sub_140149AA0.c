#include "../winhttp.h"

//----- (0000000140149AA0) ----------------------------------------------------
__int64 __fastcall sub_140149AA0(_QWORD* a1)
{
	__m128* v2; // rbx
	__m128* v3; // rax
	int v4; // edx
	__m128 v5; // xmm7
	__m128 v6; // xmm6
	int v7; // eax
	_DWORD* v8; // rcx
	_OWORD* v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // r9
	__int128 v14[2]; // [rsp+20h] [rbp-48h] BYREF

	v2 = (__m128*)sub_140056AB0(a1, 1u);
	v3 = (__m128*)sub_140056AB0(a1, 2u);
	v4 = 0;
	v5 = _mm_min_ps(v2[1], v3[1]);
	v6 = _mm_max_ps(*v2, *v3);
	if (v6.m128_f32[0] >= v5.m128_f32[0]
		|| _mm_shuffle_ps(v6, v6, 85).m128_f32[0] >= _mm_shuffle_ps(v5, v5, 85).m128_f32[0])
	{
		v5 = (__m128)v14[1];
		v6 = (__m128)v14[0];
		v7 = 0;
	}
	else
	{
		v7 = 1;
	}
	v8 = (_DWORD*)a1[2];
	LOBYTE(v4) = v7 != 0;
	v8[2] = 1;
	*v8 = v4;
	a1[2] += 16i64;
	if (!v7)
		return 1i64;
	v10 = (_OWORD*)sub_140059170(a1, 0x20ui64);
	*v10 = v6;
	v10[1] = v5;
	v11 = a1[4];
	v12 = sub_140062650((__int64)a1, (unsigned __int64*)"AaRect", 6ui64);
	v13 = a1[2];
	*(_QWORD*)&v14[0] = v12;
	DWORD2(v14[0]) = 4;
	sub_14005E8E0((__int64)a1, v11 + 160, (int*)v14, v13);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 2i64;
}

