#include "../winhttp.h"

//----- (00000001403D2710) ----------------------------------------------------
int* __fastcall sub_1403D2710(__int64 a1, _DWORD* a2)
{
	int* v2; // rax
	__int64 v3; // rcx
	__int64 v5; // [rsp+30h] [rbp+8h] BYREF
	int* v6; // [rsp+40h] [rbp+18h] BYREF
	int* v7; // [rsp+48h] [rbp+20h] BYREF

	v5 = a1;
	v2 = (int*)qword_140DC22E8;
	v3 = *(_QWORD*)(qword_140DC22E8 + 8);
	while (v3)
	{
		if (*(_DWORD*)(v3 + 32) < *a2)
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
		else
		{
			v2 = (int*)v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
	}
	if (v2 == (int*)qword_140DC22E8 || *a2 < v2[8])
	{
		v5 = (unsigned int)*a2;
		v6 = v2;
		sub_1403D3E70((__int64)&unk_140DC22E0, &v7, (__int64*)&v6, &v5);
		v2 = v7;
	}
	return v2 + 9;
}
// 140DC22E8: using guessed type __int64 qword_140DC22E8;

