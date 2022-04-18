#include "../winhttp.h"

//----- (0000000140601A50) ----------------------------------------------------
__int64 __fastcall sub_140601A50(__int64* a1)
{
	__int64 result; // rax
	__int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

	result = *a1;
	if (*a1)
	{
		v3[1] = 0i64;
		v3[0] = result;
		sub_1403F4900(qword_140C65898, 0x41Au, (__int64)v3);
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "Group_DeclineInvite", &unk_1409D0E43);
		sub_1406070A0((__int64)a1);
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

