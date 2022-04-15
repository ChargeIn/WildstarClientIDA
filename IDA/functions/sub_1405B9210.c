#include "../winhttp.h"

//----- (00000001405B9210) ----------------------------------------------------
void __fastcall sub_1405B9210(_DWORD* a1, int a2, int a3)
{
	bool v3; // zf
	int v4; // [rsp+20h] [rbp-28h] BYREF
	_DWORD* v5; // [rsp+28h] [rbp-20h]
	void(__fastcall * v6)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v7; // [rsp+38h] [rbp-10h]

	v3 = a1[956] == 0;
	a1[937] = a2;
	if (v3)
	{
		a1[957] = a1[1088];
		a1[958] = a1[1089];
		a1[959] = a1[1090];
	}
	a1[956] = 1;
	if (a3 == -1)
	{
		sub_140195D70((__int64)(a1 + 1418));
	}
	else
	{
		v5 = a1;
		v4 = 0;
		v7 = 0i64;
		v6 = sub_1405B92B0;
		sub_140195960((__int64)(a1 + 1418), a3, (__int64)&v4, 4);
	}
}

