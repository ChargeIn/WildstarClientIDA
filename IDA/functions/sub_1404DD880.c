//----- (00000001404DD880) ----------------------------------------------------
_QWORD* __fastcall sub_1404DD880(_QWORD* a1, __int64 a2, __int64 a3, char a4)
{
	__int64 v7; // r8
	__int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF

	sub_1400B6390(a1);
	*a1 = off_140B69300;
	v9[0] = a2;
	v9[1] = 1i64;
	v9[2] = 0i64;
	sub_1404DD8F0((__int64)a1, (__int64)v9, v7, a4);
	return a1;
}
// 1404DD8C9: variable 'v7' is possibly undefined
// 140B69300: using guessed type __int64 (__fastcall *off_140B69300[23])();

