#include "../winhttp.h"

//----- (000000014070F530) ----------------------------------------------------
__int64 __fastcall sub_14070F530(_QWORD* a1)
{
	int v1; // eax
	__int64 v2; // rax
	int v4; // [rsp+20h] [rbp-38h]
	__int64 v5; // [rsp+30h] [rbp-28h] BYREF
	__int64 v6; // [rsp+38h] [rbp-20h]
	__int64 v7; // [rsp+40h] [rbp-18h]

	v1 = sub_140056D60(a1, 1u);
	v2 = sub_1405E2300(qword_140C65898 + 26680, v1);
	if (v2)
	{
		v5 = 0i64;
		v6 = 0i64;
		v7 = 0i64;
		v5 = *(_QWORD*)(v2 + 184);
		v6 = *(_QWORD*)(v2 + 192);
		sub_1403F4740(qword_140C65898, 0x512u, (__int64)&v5);
		return 1i64;
	}
	else
	{
		v4 = 0;
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipResult", byte_1409EA994, 0i64, v4);
		return 0i64;
	}
}
// 1409EA994: using guessed type _BYTE byte_1409EA994[56];
// 140C65898: using guessed type __int64 qword_140C65898;

