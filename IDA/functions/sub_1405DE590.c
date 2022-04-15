#include "../winhttp.h"

//----- (00000001405DE590) ----------------------------------------------------
void __fastcall sub_1405DE590(__int64 a1, __int64* a2, int a3, _WORD* a4)
{
	__int64 v7; // rax
	__int64 v8; // rax
	int v9; // [rsp+20h] [rbp-38h]
	__int64 v10; // [rsp+30h] [rbp-28h] BYREF
	__int64 v11; // [rsp+38h] [rbp-20h]
	__int64 v12; // [rsp+40h] [rbp-18h]
	_WORD* v13; // [rsp+48h] [rbp-10h]

	if ((unsigned int)sub_1403E1170(a4, 0xCu))
	{
		v10 = 0i64;
		v11 = 0i64;
		v12 = 0i64;
		v13 = 0i64;
		v7 = *a2;
		LODWORD(v12) = a3;
		v10 = v7;
		v8 = a2[1];
		v13 = a4;
		v11 = v8;
		sub_1403F4740(qword_140C65898, 0x3B3u, (__int64)&v10);
	}
	else
	{
		v9 = 10;
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipResult", byte_1409EA994, 0i64, v9);
	}
}
// 1409EA994: using guessed type _BYTE byte_1409EA994[56];
// 140C65898: using guessed type __int64 qword_140C65898;

