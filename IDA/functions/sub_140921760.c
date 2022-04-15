#include "../winhttp.h"

//----- (0000000140921760) ----------------------------------------------------
void __fastcall sub_140921760(__int64 a1, _QWORD* a2)
{
	__int16* v4; // rdx
	__int64 v5; // rax
	__int64 v6[4]; // [rsp+20h] [rbp-48h] BYREF
	__int16* v7; // [rsp+40h] [rbp-28h]
	__int64 v8; // [rsp+48h] [rbp-20h]
	__int64 v9; // [rsp+50h] [rbp-18h]
	__int64 v10; // [rsp+58h] [rbp-10h]

	a2[2] = 0i64;
	a2[3] = 0i64;
	a2[1] = 0i64;
	v4 = (__int16*)a2[4];
	if ((unsigned __int16)v4[1] <= 0x7Au)
	{
		v7 = 0i64;
		v10 = 0i64;
		memset(v6, 0, sizeof(v6));
		v8 = 0i64;
		v9 = 0i64;
		v5 = a2[5];
		v7 = v4;
		v10 = v5;
		sub_14091D1B0(a1, v4, (__int64)v6, 0);
	}
	else
	{
		sub_14091F420(a1, v4, (__int64)a2);
		sub_14091E340(a1, a2[2]);
	}
}

