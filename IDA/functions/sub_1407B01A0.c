#include "../winhttp.h"

//----- (00000001407B01A0) ----------------------------------------------------
__int64 __fastcall sub_1407B01A0(__int64 a1, __int64 a2)
{
	const char* v3; // [rsp+20h] [rbp-38h] BYREF
	int v4; // [rsp+28h] [rbp-30h]
	int v5; // [rsp+2Ch] [rbp-2Ch]
	__int64 v6; // [rsp+30h] [rbp-28h]
	__int64(__fastcall * v7)(__int64, __int64); // [rsp+38h] [rbp-20h]
	__int64 v8; // [rsp+40h] [rbp-18h]
	int v9; // [rsp+48h] [rbp-10h]

	v6 = a1;
	v3 = "Asset Download";
	v4 = 2;
	v5 = 4;
	v8 = a2;
	v7 = sub_1407AFBD0;
	v9 = 1;
	return sub_1401A0EB0((__int64)&v3, a2, 0i64);
}

