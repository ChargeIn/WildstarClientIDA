#include "../winhttp.h"

//----- (00000001403A2550) ----------------------------------------------------
void __fastcall sub_1403A2550(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3[2]; // [rsp+30h] [rbp-28h] BYREF
	int v4; // [rsp+40h] [rbp-18h]

	v2 = *(_QWORD*)(a1 + 25744);
	if (*(_DWORD*)(v2 + 460))
	{
		v4 = 0;
		v3[0] = 0i64;
		v3[1] = 0i64;
		sub_1404739B0(v2, 0, 0, 0, 0, 0);
		sub_1403F4900(a1, 0x37Eu, (__int64)v3);
	}
}

