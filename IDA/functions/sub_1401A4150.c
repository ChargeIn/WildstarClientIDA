#include "../winhttp.h"

//----- (00000001401A4150) ----------------------------------------------------
signed int __fastcall sub_1401A4150(__int64 a1)
{
	int v1; // ebx
	signed int result; // eax
	__int64 v4; // rdx
	int v5; // eax
	const char* v6; // [rsp+30h] [rbp-38h] BYREF
	int v7; // [rsp+38h] [rbp-30h]
	int v8; // [rsp+3Ch] [rbp-2Ch]
	__int64 v9; // [rsp+40h] [rbp-28h]
	__int64(__fastcall * v10)(int*); // [rsp+48h] [rbp-20h]
	__int64 v11; // [rsp+50h] [rbp-18h]
	int v12; // [rsp+58h] [rbp-10h]

	v1 = 0;
	*(_DWORD*)(a1 + 264) = 300;
	*(_QWORD*)a1 = 0i64;
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_QWORD*)(a1 + 256) = 0i64;
	result = sub_1401A1070((__int64*)(a1 + 280), 1, 0, 0i64, 0);
	if (result >= 0)
	{
		v6 = "Watchdog";
		v7 = 4;
		v8 = 1;
		v9 = a1;
		v11 = 0i64;
		v10 = sub_1401A4370;
		v12 = 1;
		v5 = sub_1401A0EB0((__int64)&v6, v4, (__int64*)(a1 + 272));
		if (v5 < 0)
			return v5;
		return v1;
	}
	return result;
}
// 1401A41DD: variable 'v4' is possibly undefined

