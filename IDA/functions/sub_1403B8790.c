#include "../winhttp.h"

//----- (00000001403B8790) ----------------------------------------------------
__int64 __fastcall sub_1403B8790(__int64 a1, __int64 a2)
{
	unsigned int v3; // edx
	__int64 v4; // r8
	int v5; // r9d
	int v7; // edx
	__int64 result; // rax
	__int64 v9; // [rsp+78h] [rbp-50h]
	__int64 v10[6]; // [rsp+88h] [rbp-40h] BYREF

	v3 = *(_DWORD*)(a2 + 124);
	v4 = *(_QWORD*)(a2 + 112);
	v5 = *(_DWORD*)(a2 + 8);
	v10[1] = *(unsigned int*)(a2 + 120);
	v10[2] = 0i64;
	v9 = v3;
	v7 = *(_DWORD*)a2;
	v10[0] = *(_QWORD*)(a2 + 104);
	v10[3] = v4;
	v10[4] = v9;
	v10[5] = 0i64;
	result = sub_1403B8A60(
		a1,
		v7,
		*(_DWORD*)(a2 + 4),
		v5,
		*(_QWORD*)(a2 + 16),
		*(_DWORD*)(a2 + 24),
		*(_QWORD*)(a2 + 32),
		*(_DWORD*)(a2 + 48),
		(int*)(a2 + 52),
		(int*)(a2 + 72),
		*(_QWORD*)(a2 + 40),
		v10,
		*(_DWORD*)(a2 + 128));
	if ((int)result >= 0)
	{
		Apollo_LUAEvent(*(_QWORD*)(a1 + 29504), "BuybackItemsUpdated", byte_1409D0D87);
		return 0i64;
	}
	return result;
}
// 1409D0D87: using guessed type _BYTE byte_1409D0D87[28];

