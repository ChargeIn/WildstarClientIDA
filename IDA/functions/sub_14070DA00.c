//----- (000000014070DA00) ----------------------------------------------------
__int64 __fastcall sub_14070DA00(_QWORD* a1)
{
	int v2; // eax
	__int64 v3; // rbx
	int v5; // eax
	__int64 v6; // rcx
	__int64 v7; // [rsp+30h] [rbp-28h] BYREF
	__int64 v8; // [rsp+38h] [rbp-20h]
	__int64 v9; // [rsp+40h] [rbp-18h]

	v2 = sub_140056D60(a1, 1u);
	v3 = sub_1405E2300(qword_140C65898 + 26680, v2);
	if (v3)
	{
		v5 = sub_140056D60(a1, 2u);
		v7 = 0i64;
		v8 = 0i64;
		v9 = 0i64;
		v6 = *(_QWORD*)(v3 + 184);
		LODWORD(v9) = v5;
		v7 = v6;
		v8 = *(_QWORD*)(v3 + 192);
		sub_1403F4740(qword_140C65898, 0x3C1u, (__int64)&v7);
	}
	else
	{
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipResult", byte_1409EA994, 0i64, 0);
	}
	return 0i64;
}
// 1409EA994: using guessed type _BYTE byte_1409EA994[56];
// 140C65898: using guessed type __int64 qword_140C65898;

