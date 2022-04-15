#include "../winhttp.h"

//----- (000000014054DD00) ----------------------------------------------------
int* __fastcall sub_14054DD00(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r10
	__int64 v3; // r8
	int* v4; // rax
	unsigned int v6[2]; // [rsp+20h] [rbp-28h] BYREF
	int v7; // [rsp+28h] [rbp-20h]
	int v8; // [rsp+2Ch] [rbp-1Ch]
	int v9; // [rsp+30h] [rbp-18h]
	int v10; // [rsp+34h] [rbp-14h]
	int v11; // [rsp+38h] [rbp-10h]
	int v12; // [rsp+3Ch] [rbp-Ch]
	int* v13; // [rsp+50h] [rbp+8h] BYREF
	int* v14; // [rsp+60h] [rbp+18h] BYREF

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
		v6[1] = v6[0];
		v13 = v4;
		LOBYTE(v7) = v6[0];
		v8 = v7;
		v9 = v7;
		v10 = v7;
		v11 = v7;
		v12 = v7;
		sub_14054DEB0(a1, &v14, (__int64*)&v13, v6);
		v4 = v14;
	}
	return v4 + 9;
}

