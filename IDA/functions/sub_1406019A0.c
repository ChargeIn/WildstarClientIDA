#include "../winhttp.h"

//----- (00000001406019A0) ----------------------------------------------------
__int64 __fastcall sub_1406019A0(__int64* a1, int a2)
{
	__int64 result; // rax
	__int64 v4; // rbx
	__int64 v5; // [rsp+20h] [rbp-18h] BYREF
	int v6; // [rsp+28h] [rbp-10h]
	int v7; // [rsp+2Ch] [rbp-Ch]

	result = *a1;
	if (*a1)
	{
		v7 = a2;
		v5 = result;
		v6 = 1;
		sub_1403F4900(qword_140C65898, 0x41Au, (__int64)&v5);
		v4 = *(_QWORD*)(qword_140C65898 + 29504);
		Apollo_LUAEvent(v4, "HideInstanceGameModeDialog", byte_1409E8FBC, 1i64);
		Apollo_LUAEvent(v4, "Group_AcceptInvite", byte_1409D0E6B);
		sub_1406070A0((__int64)a1);
		return 1i64;
	}
	return result;
}
// 1409D0E6B: using guessed type _BYTE byte_1409D0E6B[3];
// 1409E8FBC: using guessed type _BYTE byte_1409E8FBC[48];
// 140C65898: using guessed type __int64 qword_140C65898;

