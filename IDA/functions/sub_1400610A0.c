#include "../winhttp.h"

//----- (00000001400610A0) ----------------------------------------------------
__int64 __fastcall sub_1400610A0(__int64 a1, void(__fastcall* a2)(__int64, __int64), __int64 a3)
{
	__int64 v7; // [rsp+40h] [rbp-138h] BYREF
	char v8[256]; // [rsp+50h] [rbp-128h] BYREF
	unsigned int v9; // [rsp+150h] [rbp-28h]

	v9 = 0;
	v7 = *(_QWORD*)(a1 + 168);
	*(_QWORD*)(a1 + 168) = &v7;
	if (!(unsigned int)sub_140933DB0((__int64)v8))
		a2(a1, a3);
	*(_QWORD*)(a1 + 168) = v7;
	return v9;
}
// 1400610A0: using guessed type char var_128[256];

