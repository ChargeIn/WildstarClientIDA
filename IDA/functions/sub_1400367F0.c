#include "../winhttp.h"

//----- (00000001400367F0) ----------------------------------------------------
__int64 __fastcall sub_1400367F0(__int64 a1)
{
	_QWORD* v1; // rbx
	__int64 v3; // rcx
	int* v4; // rdx
	int* v5; // rdx
	int* v6; // rdx
	int* v7; // rdx
	int* v8; // rdx
	int* v9; // rdx
	int* v10; // rdx
	int* v11; // rdx
	int* v12; // rdx
	int* v13; // rdx
	int v15; // [rsp+20h] [rbp-38h] BYREF
	int v16; // [rsp+24h] [rbp-34h] BYREF
	int v17; // [rsp+28h] [rbp-30h] BYREF
	int v18; // [rsp+2Ch] [rbp-2Ch] BYREF
	int v19; // [rsp+30h] [rbp-28h] BYREF
	int v20[9]; // [rsp+34h] [rbp-24h] BYREF
	int v21; // [rsp+60h] [rbp+8h] BYREF
	int v22; // [rsp+68h] [rbp+10h] BYREF
	int v23; // [rsp+70h] [rbp+18h] BYREF
	int v24; // [rsp+78h] [rbp+20h] BYREF

	v1 = (_QWORD*)(a1 + 200);
	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)(a1 + 56) = 0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_DWORD*)(a1 + 40) = 0;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 152) = 0i64;
	*(_QWORD*)(a1 + 160) = 0i64;
	v3 = a1 + 256;
	*(_QWORD*)(v3 - 256) = off_140B55770;
	*(_QWORD*)(v3 - 80) = 0i64;
	*(_QWORD*)(v3 - 72) = 0i64;
	*(_QWORD*)(v3 - 64) = 0i64;
	v1[1] = 0i64;
	v1[2] = 0i64;
	v1[3] = 0i64;
	*(_QWORD*)(v3 - 24) = 0i64;
	*(_QWORD*)(v3 - 16) = 0i64;
	*(_QWORD*)v3 = 0i64;
	*(_QWORD*)(v3 - 8) = &qword_140C66E30;
	*(_QWORD*)v3 = qword_140C66E30;
	qword_140C66E30 = a1;
	if (*(_QWORD*)v3)
		*(_QWORD*)(*(_QWORD*)v3 + 248i64) = v3;
	v4 = (int*)v1[2];
	v21 = 0;
	if (v4 == (int*)v1[3])
	{
		sub_14001A500(v1, v4, &v21);
	}
	else
	{
		if (v4)
			*v4 = 0;
		v1[2] += 4i64;
	}
	v5 = (int*)v1[2];
	v22 = 1;
	if (v5 == (int*)v1[3])
	{
		sub_14001A500(v1, v5, &v22);
	}
	else
	{
		if (v5)
			*v5 = 1;
		v1[2] += 4i64;
	}
	v6 = (int*)v1[2];
	v23 = 2;
	if (v6 == (int*)v1[3])
	{
		sub_14001A500(v1, v6, &v23);
	}
	else
	{
		if (v6)
			*v6 = 2;
		v1[2] += 4i64;
	}
	v7 = (int*)v1[2];
	v24 = 3;
	if (v7 == (int*)v1[3])
	{
		sub_14001A500(v1, v7, &v24);
	}
	else
	{
		if (v7)
			*v7 = 3;
		v1[2] += 4i64;
	}
	v8 = (int*)v1[2];
	v15 = 4;
	if (v8 == (int*)v1[3])
	{
		sub_14001A500(v1, v8, &v15);
	}
	else
	{
		if (v8)
			*v8 = 4;
		v1[2] += 4i64;
	}
	v9 = (int*)v1[2];
	v16 = 5;
	if (v9 == (int*)v1[3])
	{
		sub_14001A500(v1, v9, &v16);
	}
	else
	{
		if (v9)
			*v9 = 5;
		v1[2] += 4i64;
	}
	v10 = (int*)v1[2];
	v17 = 6;
	if (v10 == (int*)v1[3])
	{
		sub_14001A500(v1, v10, &v17);
	}
	else
	{
		if (v10)
			*v10 = 6;
		v1[2] += 4i64;
	}
	v11 = (int*)v1[2];
	v18 = 7;
	if (v11 == (int*)v1[3])
	{
		sub_14001A500(v1, v11, &v18);
	}
	else
	{
		if (v11)
			*v11 = 7;
		v1[2] += 4i64;
	}
	v12 = (int*)v1[2];
	v19 = 8;
	if (v12 == (int*)v1[3])
	{
		sub_14001A500(v1, v12, &v19);
	}
	else
	{
		if (v12)
			*v12 = 8;
		v1[2] += 4i64;
	}
	v13 = (int*)v1[2];
	v20[0] = 9;
	if (v13 == (int*)v1[3])
	{
		sub_14001A500(v1, v13, v20);
		return a1;
	}
	else
	{
		if (v13)
			*v13 = 9;
		v1[2] += 4i64;
		return a1;
	}
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B55770: using guessed type __int64 (__fastcall *off_140B55770[9])();
// 140C66E30: using guessed type __int64 qword_140C66E30;
// 1400367F0: using guessed type int var_24[9];

