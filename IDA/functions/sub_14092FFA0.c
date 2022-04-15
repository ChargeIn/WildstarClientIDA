#include "../winhttp.h"

//----- (000000014092FFA0) ----------------------------------------------------
__int64 __fastcall sub_14092FFA0(
	_QWORD* a1,
	__int64(__fastcall* a2)(_QWORD*, _QWORD, __int64, __int64),
	__int64 a3,
	__int64 a4)
{
	__int64 v5[4]; // [rsp+20h] [rbp-8038h] BYREF
	char v6[32768]; // [rsp+40h] [rbp-8018h] BYREF
	__int64 v7[3]; // [rsp+8040h] [rbp-18h] BYREF

	v5[0] = (__int64)v6;
	v5[1] = (__int64)v6;
	v5[2] = (__int64)v7;
	v5[3] = (__int64)v7;
	*a1 = v5;
	return a2(a1, a2, a3, a4);
}

