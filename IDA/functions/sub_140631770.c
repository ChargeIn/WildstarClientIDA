#include "../winhttp.h"

//----- (0000000140631770) ----------------------------------------------------
void __fastcall sub_140631770(__int64* a1)
{
	__int64 v1; // r10
	__int64 v2; // r11
	__int64 v3; // rbx
	__int64 v4; // rdi
	__int64 v5; // rax
	__int64 v6; // r8
	__int64 v7; // r9
	__int64 v9[4]; // [rsp+20h] [rbp-48h] BYREF
	__int64 v10[5]; // [rsp+40h] [rbp-28h] BYREF

	v1 = a1[7];
	v2 = a1[8];
	v3 = a1[9];
	v4 = a1[10];
	v5 = a1[3];
	v6 = a1[5];
	v7 = a1[6];
	v10[1] = a1[4];
	v9[0] = v1;
	v9[1] = v2;
	v9[2] = v3;
	v9[3] = v4;
	v10[0] = v5;
	v10[2] = v6;
	v10[3] = v7;
	sub_140633270(v10, v9);
	sub_14033E040(a1);
}

