//----- (000000014088C1E0) ----------------------------------------------------
_QWORD* __fastcall sub_14088C1E0(_QWORD* a1, char a2)
{
	*a1 = off_1409A8280;
	a1[3] = off_1409A8330;
	a1[5] = &off_1409A93A0;
	sub_14088B3B0(a1);
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1409A8280: using guessed type __int64 (__fastcall *off_1409A8280[5])();
// 1409A8330: using guessed type __int64 (__fastcall *off_1409A8330[3])();
// 1409A93A0: using guessed type __int64 (__fastcall *off_1409A93A0)();

