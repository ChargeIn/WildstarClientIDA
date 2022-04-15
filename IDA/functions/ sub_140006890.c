#include "../winhttp.h"

//----- (0000000140006890) ----------------------------------------------------
void __fastcall sub_140006890(__int64 a1)
{
	int v2; // [rsp+20h] [rbp-28h] BYREF
	__int64 v3; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v4)(); // [rsp+30h] [rbp-18h]
	__int64 v5; // [rsp+38h] [rbp-10h]

	++* (_DWORD*)(a1 + 384);
	++* (_DWORD*)(a1 + 388);
	sub_140006FC0(a1);
	v2 = 0;
	v5 = 0i64;
	v3 = a1;
	v4 = sub_140006890;
	sub_140195960(a1 + 400, 86400000, (__int64)&v2, 4);
}

