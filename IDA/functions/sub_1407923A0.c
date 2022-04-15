#include "../winhttp.h"

//----- (00000001407923A0) ----------------------------------------------------
__int64 __fastcall sub_1407923A0(_QWORD* a1)
{
	__int64 v2; // rsi
	unsigned __int64 v3; // rbx
	unsigned __int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // r9
	__int64 v7; // rsi
	__int64 v8; // rax
	unsigned int* v9; // r9
	__int64 v11; // [rsp+20h] [rbp-18h] BYREF
	int v12; // [rsp+28h] [rbp-10h]

	sub_140057020(a1, aString, &off_140B50A50);
	v2 = a1[2];
	v3 = -1i64;
	v4 = -1i64;
	do
		++v4;
	while (aGmatch[v4]);
	v5 = sub_140062650((__int64)a1, (unsigned __int64*)aGmatch, v4);
	v6 = a1[2];
	v11 = v5;
	v12 = 4;
	sub_14005E8E0((__int64)a1, v2 - 16, (int*)&v11, v6);
	a1[2] += 16i64;
	v7 = a1[2];
	do
		++v3;
	while (aGfind[v3]);
	v8 = sub_140062650((__int64)a1, (unsigned __int64*)aGfind, v3);
	v9 = (unsigned int*)(a1[2] - 16i64);
	v11 = v8;
	v12 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v7 - 32), (int*)&v11, v9);
	a1[2] -= 16i64;
	sub_140792280((__int64)a1);
	return 1i64;
}
// 140B50A50: using guessed type char *off_140B50A50;

