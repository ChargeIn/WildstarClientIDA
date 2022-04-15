#include "../winhttp.h"

//----- (0000000140760400) ----------------------------------------------------
__int64 __fastcall sub_140760400(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // [rsp+20h] [rbp-48h] BYREF
	int v4; // [rsp+28h] [rbp-40h]
	int v5; // [rsp+2Ch] [rbp-3Ch]
	__int64 v6; // [rsp+30h] [rbp-38h]
	__int64 v7; // [rsp+38h] [rbp-30h]
	__int64 v8; // [rsp+40h] [rbp-28h]
	__int64 v9; // [rsp+48h] [rbp-20h]
	__int64 v10; // [rsp+50h] [rbp-18h]

	v3 = 0i64;
	v5 = 0;
	v6 = 0i64;
	v7 = 0i64;
	v8 = 0i64;
	v9 = 0i64;
	v10 = 0i64;
	result = sub_140056D60(a1, 1u);
	v4 = result;
	if ((_DWORD)result)
		return sub_14075FD90(a1, (__int64)&v3);
	return result;
}

