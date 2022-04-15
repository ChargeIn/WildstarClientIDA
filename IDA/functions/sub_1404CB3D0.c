#include "../winhttp.h"

//----- (00000001404CB3D0) ----------------------------------------------------
int* __fastcall sub_1404CB3D0(__int64 a1, unsigned __int64* a2)
{
	__int64 v2; // r10
	int* v3; // r8
	int* v4; // rax
	unsigned __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF
	int* v7; // [rsp+40h] [rbp+8h] BYREF
	int* v8; // [rsp+50h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v3 = *(int**)(v2 + 8);
	v4 = (int*)v2;
	while (v3)
	{
		if (*((_QWORD*)v3 + 4) < *a2)
		{
			v3 = (int*)*((_QWORD*)v3 + 3);
		}
		else
		{
			v4 = v3;
			v3 = (int*)*((_QWORD*)v3 + 2);
		}
	}
	if (v4 == (int*)v2 || *a2 < *((_QWORD*)v4 + 4))
	{
		v6[0] = *a2;
		v6[1] = 0i64;
		v7 = v4;
		sub_1400EDD00(a1, &v8, (_QWORD**)&v7, v6);
		v4 = v8;
	}
	return v4 + 10;
}

