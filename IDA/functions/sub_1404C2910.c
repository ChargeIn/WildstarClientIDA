#include "../winhttp.h"

//----- (00000001404C2910) ----------------------------------------------------
void __fastcall sub_1404C2910(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
	int v6; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+28h] [rbp-20h]
	void(__fastcall * v8)(_QWORD*); // [rsp+30h] [rbp-18h]
	__int64 v9; // [rsp+38h] [rbp-10h]

	if (a6)
	{
		v7 = a6;
		v6 = 0;
		v8 = sub_1404C21C0;
		v9 = 0i64;
		sub_140195960(a6 + 768, 0, (__int64)&v6, 4);
	}
}

