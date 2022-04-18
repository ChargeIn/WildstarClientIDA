#include "../winhttp.h"

//----- (00000001405DE650) ----------------------------------------------------
void __fastcall sub_1405DE650(__int64 a1, __int64 a2, __int64 a3, _WORD* a4)
{
	int v7; // [rsp+20h] [rbp-38h]
	__int64 v8[5]; // [rsp+30h] [rbp-28h] BYREF

	if ((unsigned int)sub_1403E1170(a4, 0xCu))
	{
		v8[0] = a2;
		v8[1] = a3;
		v8[2] = (__int64)a4;
		sub_1403F4740(qword_140C65898, 0x3C8u, (__int64)v8);
	}
	else
	{
		v7 = 10;
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipResult", byte_1409EA994, 0i64, v7);
	}
}
// 1409EA994: using guessed type _BYTE byte_1409EA994[56];
// 140C65898: using guessed type __int64 qword_140C65898;

