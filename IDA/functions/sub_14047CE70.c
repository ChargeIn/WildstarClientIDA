#include "../winhttp.h"

//----- (000000014047CE70) ----------------------------------------------------
void __fastcall sub_14047CE70(__int64 a1)
{
	int v2; // eax
	int v3; // [rsp+20h] [rbp-28h] BYREF
	__int64 v4; // [rsp+28h] [rbp-20h]
	unsigned __int64(__fastcall * v5)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v6; // [rsp+38h] [rbp-10h]

	v2 = sub_1401AE6F0(*(_DWORD*)(a1 + 5356), *(_DWORD*)(a1 + 5360));
	v5 = sub_14047CD20;
	v3 = 0;
	v6 = 0i64;
	v4 = a1;
	sub_140195960(a1 + 5440, v2, (__int64)&v3, 4);
}

