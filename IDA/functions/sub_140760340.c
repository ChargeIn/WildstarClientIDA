#include "../winhttp.h"

//----- (0000000140760340) ----------------------------------------------------
__int64 __fastcall sub_140760340(_QWORD* a1)
{
	__int64 result; // rax
	int v3[2]; // [rsp+20h] [rbp-48h] BYREF
	__int64 v4; // [rsp+28h] [rbp-40h]
	__int64 v5; // [rsp+30h] [rbp-38h]
	__int64 v6; // [rsp+38h] [rbp-30h]
	__int64 v7; // [rsp+40h] [rbp-28h]
	__int64 v8; // [rsp+48h] [rbp-20h]
	__int64 v9; // [rsp+50h] [rbp-18h]

	v3[1] = 0;
	v4 = 0i64;
	v5 = 0i64;
	v6 = 0i64;
	v7 = 0i64;
	v8 = 0i64;
	v9 = 0i64;
	result = sub_140056D60(a1, 1u);
	v3[0] = result;
	if ((_DWORD)result)
		return sub_14075FD90(a1, (__int64)v3);
	return result;
}

