#include "../winhttp.h"

//----- (00000001400CC7C0) ----------------------------------------------------
void __fastcall sub_1400CC7C0(__int64 a1, int* a2)
{
	char* v3; // r8
	__int64 v4; // rcx
	int v5; // eax
	int v6; // eax
	int v7; // eax
	char v8[16]; // [rsp+20h] [rbp-78h] BYREF
	char v9[32]; // [rsp+30h] [rbp-68h] BYREF
	__int128 v10; // [rsp+50h] [rbp-48h]
	int v11[4]; // [rsp+60h] [rbp-38h]
	int v12; // [rsp+70h] [rbp-28h]

	v3 = v9;
	v12 = 0;
	v4 = 0i64;
	do
	{
		v5 = *(_DWORD*)((char*)&unk_140A14E90 + v4 * 4);
		v11[v4++] = 0;
		*(_DWORD*)&v9[v4 * 4 + 28] = v5;
		*(_QWORD*)v3 = 0i64;
		v3 += 8;
	} while (v4 < 4);
	v6 = *a2;
	v12 |= 0x300u;
	v11[0] = v6;
	v7 = a2[1];
	v10 = 0i64;
	v11[1] = v7;
	v11[2] = a2[2];
	v11[3] = a2[3];
	sub_1400CC680(a1, (__int64)v8);
}
// 1400CC7C0: using guessed type char var_78[16];

