#include "../winhttp.h"

//----- (0000000140333CE0) ----------------------------------------------------
signed int __fastcall sub_140333CE0(__int64 a1)
{
	int v1; // ebx
	signed int result; // eax
	__int64 v4; // rdx
	int v5; // eax
	const char* v6; // [rsp+30h] [rbp-38h] BYREF
	int v7; // [rsp+38h] [rbp-30h]
	int v8; // [rsp+3Ch] [rbp-2Ch]
	__int64 v9; // [rsp+40h] [rbp-28h]
	__int64(__fastcall * v10)(_DWORD*); // [rsp+48h] [rbp-20h]
	__int64 v11; // [rsp+50h] [rbp-18h]
	int v12; // [rsp+58h] [rbp-10h]

	v1 = 0;
	*(_DWORD*)(a1 + 20) = 5000;
	*(_DWORD*)(a1 + 24) = 5000;
	result = sub_1401A1070((__int64*)a1, 1, 0, 0i64, 0);
	if (result >= 0)
	{
		v6 = "Ping";
		v7 = 2;
		v8 = 1;
		v9 = a1;
		v11 = 0i64;
		v10 = sub_140333D70;
		v12 = 1;
		v5 = sub_1401A0EB0((__int64)&v6, v4, (__int64*)(a1 + 8));
		if (v5 < 0)
			return v5;
		return v1;
	}
	return result;
}
// 140333D56: variable 'v4' is possibly undefined

