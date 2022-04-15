#include "../winhttp.h"

//----- (00000001404CF930) ----------------------------------------------------
void __fastcall sub_1404CF930(__int64 a1)
{
	int v2; // edx
	int v3; // [rsp+20h] [rbp-28h] BYREF
	__int64 v4; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v5)(_DWORD*); // [rsp+30h] [rbp-18h]
	__int64 v6; // [rsp+38h] [rbp-10h]

	if (*(_QWORD*)(a1 + 96))
		sub_140195D70(a1 + 80);
	if (!*(_QWORD*)(a1 + 24))
	{
		v2 = *(_DWORD*)(a1 + 152);
		v3 = 0;
		v6 = 0i64;
		v4 = a1;
		v5 = sub_1404CF990;
		sub_140195960(a1 + 8, v2, (__int64)&v3, 4);
	}
}

