#include "../winhttp.h"

//----- (00000001400225E0) ----------------------------------------------------
__int64 __fastcall sub_1400225E0(__int64 a1, __int64 a2)
{
	int v2; // eax
	float v5; // xmm6_4
	unsigned __int64 v6; // rcx
	double v7; // xmm0_8
	unsigned __int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rcx
	struct _FILETIME SystemTimeAsFileTime; // [rsp+40h] [rbp+8h] BYREF

	v2 = *(_DWORD*)(a2 + 4);
	*(_DWORD*)(a1 + 540) = v2;
	if (v2)
		sub_1400EA3E0(*(_QWORD*)(a1 + 72), "SubscriptionExpired", &unk_1409D0181);
	v5 = *(float*)(a2 + 8);
	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	v6 = 0i64;
	v7 = v5 * 3.6e10;
	if (v7 >= 9.223372036854776e18)
	{
		v7 = v7 - 9.223372036854776e18;
		if (v7 < 9.223372036854776e18)
			v6 = 0x8000000000000000ui64;
	}
	v8 = v6 + (unsigned int)(int)v7;
	v9 = *(_QWORD*)(a1 + 72);
	*(_QWORD*)(a1 + 544) = *(_QWORD*)&SystemTimeAsFileTime + v8;
	sub_1400EA3E0(v9, "GameTimeHoursRemaining", &unk_1409D0182);
	v10 = *(_QWORD*)(a1 + 72);
	*(_DWORD*)(a1 + 532) = *(_DWORD*)a2;
	sub_1400EA3E0(v10, "RealmTransferFlags", byte_1409D0183);
	return 0i64;
}
// 1409D0183: using guessed type _BYTE byte_1409D0183[3];

