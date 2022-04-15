//----- (0000000140895240) ----------------------------------------------------
_QWORD* __fastcall sub_140895240(_QWORD* a1, char a2)
{
	__int64 v4; // rcx

	*a1 = off_1409A92C0;
	a1[3] = off_1409A9390;
	a1[5] = &off_1409A93A0;
	v4 = a1[19];
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
	sub_14088F940(a1);
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1409A92C0: using guessed type __int64 (__fastcall *off_1409A92C0[5])();
// 1409A9390: using guessed type __int64 (__fastcall *off_1409A9390[3])();
// 1409A93A0: using guessed type __int64 (__fastcall *off_1409A93A0)();

