#include "../winhttp.h"

//----- (00000001400F91C0) ----------------------------------------------------
__int64 __fastcall sub_1400F91C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v8[7]; // [rsp+30h] [rbp-38h] BYREF
	__int64 v9; // [rsp+70h] [rbp+8h] BYREF
	__int64 v10; // [rsp+78h] [rbp+10h] BYREF
	void* v11; // [rsp+80h] [rbp+18h] BYREF
	__int64 v12; // [rsp+88h] [rbp+20h] BYREF

	v12 = a2;
	v9 = a4;
	v10 = a1;
	v11 = &unk_1409D440C;
	sub_1400F9350(v8, &v12, &v10, &v9, &v11);
	if (v8[0] == a1)
		return a2;
	else
		return v8[0] - 2 * ((a4 - (__int64)&unk_1409D440C) >> 1);
}
// 1400F91C0: using guessed type __int64 var_38[7];

