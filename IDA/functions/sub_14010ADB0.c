#include "../winhttp.h"

//----- (000000014010ADB0) ----------------------------------------------------
__int64 __fastcall sub_14010ADB0(__int64 a1, int* a2, unsigned int a3)
{
	__int64 v4; // rbx
	int v6[100]; // [rsp+20h] [rbp-1A8h] BYREF

	v4 = sub_1401A6C70(a1, a2);
	sub_1401A4C20(v6, 0xC8ui64, (__int64)L"%d", a3);
	return sub_1401A4C50(v4 + 32, v6);
}
// 1409E41F4: using guessed type wchar_t aD_19[3];
// 14010ADB0: using guessed type int var_1A8[100];

