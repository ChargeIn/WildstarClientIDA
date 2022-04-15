//----- (0000000140584840) ----------------------------------------------------
__int64 __fastcall sub_140584840(__int64 a1, __int64 a2)
{
	__int128 v4; // [rsp+20h] [rbp-38h] BYREF
	__int128 v5; // [rsp+30h] [rbp-28h] BYREF
	__int64 (*v6)(); // [rsp+40h] [rbp-18h]
	__int64 v7; // [rsp+48h] [rbp-10h]

	if (qword_140C7DEC8)
		return 0i64;
	*((_QWORD*)&v5 + 1) = &qword_140C7DDE0;
	LODWORD(v5) = 0;
	v7 = 0i64;
	v6 = sub_140584810;
	sub_140195960((__int64)&dword_140C7DEB8, 1000, (__int64)&v5, 4);
	*((_QWORD*)&v5 + 1) = a2;
	v4 = 0ui64;
	LODWORD(v5) = *(_DWORD*)(qword_140C635F0 + 5760);
	v4 = v5;
	sub_1403F4740(qword_140C65898, 0x76Eu, (__int64)&v4);
	return 1i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DDE0: using guessed type __int64 qword_140C7DDE0;
// 140C7DEB8: using guessed type int dword_140C7DEB8;
// 140C7DEC8: using guessed type __int64 qword_140C7DEC8;

