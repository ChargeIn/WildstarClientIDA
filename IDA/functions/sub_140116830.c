#include "../winhttp.h"

//----- (0000000140116830) ----------------------------------------------------
_DWORD* __fastcall sub_140116830(__int64 a1, _DWORD* a2, int a3)
{
	float* v6; // rax
	int v7; // ecx
	__int128 v8; // xmm0
	__int128 v9; // xmm1
	int v10; // edx
	__int128 v11; // xmm0
	float v13[4]; // [rsp+20h] [rbp-E8h] BYREF
	__int128 v14[5]; // [rsp+30h] [rbp-D8h] BYREF
	int v15; // [rsp+80h] [rbp-88h]
	__int128 v16; // [rsp+A0h] [rbp-68h]
	__int128 v17; // [rsp+B0h] [rbp-58h]
	__int128 v18; // [rsp+C0h] [rbp-48h]
	__int128 v19; // [rsp+D0h] [rbp-38h]

	v6 = sub_140141910(a1 + 1024, v13);
	*a2 = (int)*v6;
	v7 = a3 + (int)v6[1];
	a2[1] = v7;
	v8 = *(_OWORD*)(a1 + 80);
	v9 = *(_OWORD*)(a1 + 96);
	v10 = *(_DWORD*)(a1 + 144) | 0x300;
	v14[0] = *(_OWORD*)(a1 + 64);
	v15 = v10;
	v16 = v8;
	v17 = v9;
	v14[2] = v9;
	v18 = *(_OWORD*)(a1 + 112);
	v19 = *(_OWORD*)(a1 + 128);
	v11 = *(_OWORD*)(a1 + 80);
	HIDWORD(v19) = v7 + DWORD1(v19);
	v14[1] = v11;
	v14[4] = v19;
	v14[3] = *(_OWORD*)(a1 + 112);
	sub_1400CC680(a1, (__int64)v14);
	return a2;
}
// 140116830: using guessed type float var_E8[4];

