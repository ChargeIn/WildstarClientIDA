#include "../winhttp.h"

//----- (0000000140545FF0) ----------------------------------------------------
void __fastcall sub_140545FF0(__int64 a1, __int64* a2)
{
	int v4; // edx
	int v5; // [rsp+20h] [rbp-28h] BYREF
	__int64 v6; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v7)(); // [rsp+30h] [rbp-18h]
	__int64* v8; // [rsp+38h] [rbp-10h]

	sub_1405458E0(a1, *a2);
	v7 = sub_140545FF0;
	v4 = *(_DWORD*)(*a2 + 88);
	v5 = 1;
	v6 = a1;
	v8 = a2;
	sub_140195960((__int64)(a2 + 1), v4, (__int64)&v5, 4);
}

