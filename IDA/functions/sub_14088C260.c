#include "../winhttp.h"

//----- (000000014088C260) ----------------------------------------------------
__int64 __fastcall sub_14088C260(__int64 a1, __int64* a2)
{
	__int64 v3; // rbx
	char v5[264]; // [rsp+20h] [rbp-138h] BYREF
	__int64 v6; // [rsp+128h] [rbp-30h]

	sub_140890370((__int64)v5, a1, 1);
	if (v6)
	{
		v3 = sub_1408906B0((__int64)v5, a2);
	}
	else
	{
		v3 = 0i64;
		if (a2)
			*a2 = 0i64;
	}
	nullsub_1(v5);
	return v3;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);

