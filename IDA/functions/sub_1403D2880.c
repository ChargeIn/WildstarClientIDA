#include "../winhttp.h"

//----- (00000001403D2880) ----------------------------------------------------
int* __fastcall sub_1403D2880(__int64 a1, int* a2)
{
	__int64 v2; // r10
	__int64 v3; // r8
	int* v4; // rax
	int v6[16]; // [rsp+50h] [rbp+17h] BYREF
	int* v7; // [rsp+A0h] [rbp+67h] BYREF
	int* v8; // [rsp+B0h] [rbp+77h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v3 = *(_QWORD*)(v2 + 8);
	v4 = (int*)v2;
	while (v3)
	{
		if (*(_DWORD*)(v3 + 32) < (unsigned int)*a2)
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
		else
		{
			v4 = (int*)v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
	}
	if (v4 == (int*)v2 || *a2 < (unsigned int)v4[8])
	{
		memset(&v6[1], 0, 48);
		v6[0] = *a2;
		v7 = v4;
		sub_1403D5240(a1, &v8, (__int64*)&v7, v6);
		v4 = v8;
	}
	return v4 + 9;
}

