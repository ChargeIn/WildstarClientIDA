//----- (00000001405DE4D0) ----------------------------------------------------
void __fastcall sub_1405DE4D0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _WORD* lpv)
{
	int v8; // [rsp+20h] [rbp-38h]
	__int64 v9[5]; // [rsp+30h] [rbp-28h] BYREF

	if ((unsigned int)sub_1403E1170(lpv, 0xCu))
	{
		v9[0] = a2;
		v9[1] = a3;
		v9[3] = (__int64)lpv;
		v9[2] = a4;
		sub_1403F4740(qword_140C65898, 0x3B4u, (__int64)v9);
	}
	else
	{
		v8 = 10;
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipResult", byte_1409EA994, 0i64, v8);
	}
}
// 1409EA994: using guessed type _BYTE byte_1409EA994[56];
// 140C65898: using guessed type __int64 qword_140C65898;

