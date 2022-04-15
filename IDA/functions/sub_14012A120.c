#include "../winhttp.h"

//----- (000000014012A120) ----------------------------------------------------
void __fastcall sub_14012A120(__int64 a1)
{
	unsigned int v2; // eax
	int v3; // [rsp+20h] [rbp-28h] BYREF
	__int64 v4; // [rsp+28h] [rbp-20h]
	void(__fastcall * v5)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v6; // [rsp+38h] [rbp-10h]

	v2 = sub_1401A7C70(a1 + 16, *(_QWORD*)(a1 + 752));
	sub_14012A060(a1, v2);
	v3 = 0;
	v6 = 0i64;
	v4 = a1;
	v5 = sub_14012A180;
	sub_140195960(a1 + 784, 0, (__int64)&v3, 2);
}

