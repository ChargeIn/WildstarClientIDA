//----- (00000001405DE700) ----------------------------------------------------
void __fastcall sub_1405DE700(__int64 a1, __int64* a2, _WORD* a3)
{
	__int64 v5; // rax
	int v6; // [rsp+20h] [rbp-38h]
	__int64 v7; // [rsp+30h] [rbp-28h] BYREF
	__int64 v8; // [rsp+38h] [rbp-20h]
	_WORD* v9; // [rsp+40h] [rbp-18h]

	if ((unsigned int)sub_1403E1170(a3, 0xCu))
	{
		v7 = 0i64;
		v8 = 0i64;
		v9 = 0i64;
		v5 = *a2;
		v9 = a3;
		v7 = v5;
		v8 = a2[1];
		sub_1403F4740(qword_140C65898, 0x3C7u, (__int64)&v7);
	}
	else
	{
		v6 = 10;
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipResult", byte_1409EA994, 0i64, v6);
	}
}
// 1409EA994: using guessed type _BYTE byte_1409EA994[56];
// 140C65898: using guessed type __int64 qword_140C65898;

