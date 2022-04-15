#include "../winhttp.h"

//----- (00000001406D8CD0) ----------------------------------------------------
char __fastcall sub_1406D8CD0(__int64 a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rdx
	__int64 v4; // rcx
	int v6; // [rsp+40h] [rbp+8h] BYREF
	int v7; // [rsp+44h] [rbp+Ch]

	v2 = *(_QWORD**)(a1 + 32);
	v3 = v2[430];
	if (v2[431] - v3 == 9 && *(_QWORD*)v3 == 0x6574496761424444i64 && *(_BYTE*)(v3 + 8) == 109)
	{
		v4 = v2[436];
		v6 = BYTE1(v4);
		v7 = (unsigned __int8)v4;
		sub_140399DE0(qword_140C65898, &v6, (int*)(a1 + 1028), 0, 0);
	}
	return 0;
}
// 140C65898: using guessed type __int64 qword_140C65898;

