#include "../winhttp.h"

//----- (00000001401E4360) ----------------------------------------------------
int* __fastcall sub_1401E4360(__int64 a1, int* a2)
{
	__int64 v2; // r10
	__int64 v3; // r8
	int* v4; // rax
	int v6[4]; // [rsp+20h] [rbp-98h] BYREF
	__int64 v7; // [rsp+30h] [rbp-88h]
	int v8; // [rsp+38h] [rbp-80h]
	__int128 v9; // [rsp+40h] [rbp-78h]
	__int64 v10; // [rsp+50h] [rbp-68h]
	int v11; // [rsp+58h] [rbp-60h]
	__int128 v12; // [rsp+60h] [rbp-58h]
	__int64 v13; // [rsp+90h] [rbp-28h]
	int v14; // [rsp+98h] [rbp-20h]
	int* v15; // [rsp+C0h] [rbp+8h] BYREF
	int* v16; // [rsp+D0h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v3 = *(_QWORD*)(v2 + 8);
	v4 = (int*)v2;
	while (v3)
	{
		if (*(_DWORD*)(v3 + 32) < *a2)
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
		else
		{
			v4 = (int*)v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
	}
	if (v4 == (int*)v2 || *a2 < v4[8])
	{
		v6[0] = *a2;
		v13 = 0i64;
		v9 = 0i64;
		v12 = 0i64;
		v10 = 0i64;
		v14 = 0;
		v7 = 0i64;
		v8 = 0;
		v11 = 0;
		v15 = v4;
		sub_1401E4570(a1, &v16, (__int64*)&v15, v6);
		v4 = v16;
	}
	return v4 + 12;
}
// 1401E4360: using guessed type int var_98[4];

