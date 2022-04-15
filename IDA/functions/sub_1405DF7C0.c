#include "../winhttp.h"

//----- (00000001405DF7C0) ----------------------------------------------------
__int64 __fastcall sub_1405DF7C0(__int64 a1)
{
	int v2; // [rsp+20h] [rbp-18h]

	if (*(_QWORD*)(a1 + 776))
		return 0i64;
	if (*(_DWORD*)a1 - dword_140C636A8 + 800 > 0)
	{
		v2 = 30;
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipResult", byte_1409EA994, 0i64, v2);
		return 0i64;
	}
	*(_DWORD*)a1 = dword_140C636A8;
	return 1i64;
}
// 1409EA994: using guessed type _BYTE byte_1409EA994[56];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

