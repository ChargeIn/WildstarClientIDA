#include "../winhttp.h"

//----- (00000001406D1C40) ----------------------------------------------------
__int64 __fastcall sub_1406D1C40(__int64** a1, __int64** a2, _QWORD* a3)
{
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 result; // rax
	int v9; // eax
	__int64 v10; // r8
	__int64 v11; // r8
	unsigned int v12; // [rsp+50h] [rbp+8h] BYREF

	v4 = **a1;
	v5 = **a2;
	if (v4 == v5)
		return 0i64;
	if (v4)
	{
		if (!v5)
			return 0xFFFFFFFFi64;
	}
	else if (v5)
	{
		return 1i64;
	}
	if (a3 && a3[255] && a3[256])
	{
		v9 = sub_1400D45B0((__int64)a3);
		v11 = sub_14013A390(v10 + 2496, v9);
		if (!v11)
			v11 = *(_QWORD*)(a3[4] + 2528i64);
		result = 0i64;
		v12 = 0;
		if (v11)
		{
			sub_1400F2AD0(
				a3[255],
				(__int64)"BagWindowItemCompare",
				(LARGE_INTEGER)v11,
				(__int64)(a3 + 257),
				"OO>i",
				**a1,
				**a2,
				&v12);
			return v12;
		}
	}
	else
	{
		result = 1i64;
		if (*((_DWORD*)*a1 + 4) < *((_DWORD*)*a2 + 4))
			return 0xFFFFFFFFi64;
	}
	return result;
}
// 1406D1C9B: conditional instruction was optimized away because r8.8!=0
// 1406D1CE8: variable 'v10' is possibly undefined

