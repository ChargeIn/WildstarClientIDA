#include "../winhttp.h"

//----- (00000001400D2840) ----------------------------------------------------
bool __fastcall sub_1400D2840(__int64 a1, int* a2)
{
	_QWORD* v3; // rcx
	char* v4; // rax
	__int64 v5; // r9
	__int64 v6; // rcx
	char* v7; // r8
	int v9; // [rsp+20h] [rbp-38h]
	int v10; // [rsp+28h] [rbp-30h]
	int v11; // [rsp+40h] [rbp-18h]
	int v12; // [rsp+60h] [rbp+8h] BYREF

	v3 = *(_QWORD**)(a1 + 32);
	v12 = 0;
	v4 = (char*)v3[430];
	v5 = v3[436];
	v6 = v3[423];
	v7 = &byte_140B7B700;
	if (v4)
		v7 = v4;
	v11 = v5;
	v10 = a2[1];
	v9 = *a2;
	sub_1400D4070(a1, 0x16u, (char*)a1, "iiWsi>b", v9, v10, v6, v7, v11, &v12);
	return v12 != 0;
}
// 140B7B700: using guessed type char byte_140B7B700;

