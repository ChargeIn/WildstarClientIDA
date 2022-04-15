#include "../winhttp.h"

//----- (000000014083F680) ----------------------------------------------------
__int64 __fastcall sub_14083F680(__int64 a1, __int64 a2)
{
	__int128 v2; // xmm0
	__int128 v3; // xmm1
	__int64 v5; // rbp
	unsigned int v7; // edi
	unsigned int v8; // eax
	unsigned int v9; // esi
	_QWORD* v10; // r8
	__int32 v11; // ecx
	__int64 v12; // rdi
	__m128i v14; // [rsp+30h] [rbp-68h] BYREF
	_OWORD v15[3]; // [rsp+40h] [rbp-58h] BYREF
	__int64 v16; // [rsp+70h] [rbp-28h]
	__int64 v17; // [rsp+A8h] [rbp+10h] BYREF

	v2 = *(_OWORD*)a2;
	v3 = *(_OWORD*)(a2 + 16);
	v5 = 0i64;
	v7 = 1;
	v17 = 0i64;
	v15[0] = v2;
	v15[1] = v3;
	*(_QWORD*)&v3 = *(_QWORD*)(a2 + 48);
	v15[2] = *(_OWORD*)(a2 + 32);
	v16 = v3;
	v8 = sub_14083F1F0(a1, (__int64)v15, &v17, 0, 0);
	v9 = v8;
	if (v8 == 69)
	{
		v9 = 1;
		v7 = 69;
	}
	else if (v8 == 1)
	{
		v10 = (_QWORD*)v17;
		v11 = 0;
		*(_BYTE*)(v17 + 120) |= 1u;
		if (*(_DWORD*)a2 <= 1u || (unsigned int)(*(_DWORD*)a2 - 6) <= 1)
			v11 = *(_DWORD*)(a2 + 32);
		if (*(_DWORD*)(a2 + 24) == 1)
			v5 = *(_QWORD*)(a2 + 40);
		v14.m128i_i32[0] = v11;
		v14.m128i_i64[1] = v5;
		sub_140868E00(a1 + 1776, &v14, v10);
	}
	else
	{
		v12 = v17;
		if (v17)
		{
			sub_1408425E0(v17);
			sub_140841FE0(v12, 1);
		}
		v7 = v9;
	}
	sub_14083FEA0(a1, a2, v7);
	return v9;
}

