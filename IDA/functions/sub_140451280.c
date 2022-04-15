#include "../winhttp.h"

//----- (0000000140451280) ----------------------------------------------------
int* __fastcall sub_140451280(__int64 a1, int* a2)
{
	__int64 v2; // r10
	__int64 v3; // r8
	int* v4; // rax
	int v6; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+28h] [rbp-20h]
	__int64 v8; // [rsp+30h] [rbp-18h]
	int* v9; // [rsp+50h] [rbp+8h] BYREF
	int* v10; // [rsp+60h] [rbp+18h] BYREF

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
		v6 = *a2;
		v8 = 0i64;
		v7 = 0i64;
		v9 = v4;
		sub_140451770(a1, &v10, (__int64*)&v9, &v6);
		v4 = v10;
	}
	return v4 + 10;
}

