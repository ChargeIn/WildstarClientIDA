//----- (000000014088BDB0) ----------------------------------------------------
__int64 __fastcall sub_14088BDB0(__int64 a1, char a2)
{
	_QWORD* v3; // rcx

	v3 = (_QWORD*)(a1 + 544);
	*(v3 - 68) = off_1409A81C0;
	*(v3 - 66) = &off_1409A48A0;
	*v3 = off_1409A8248;
	sub_14088E7D0(v3);
	sub_14085D300(a1);
	if ((a2 & 1) != 0)
		sub_140001E60(a1);
	return a1;
}
// 1409A48A0: using guessed type __int64 (__fastcall *off_1409A48A0)();
// 1409A81C0: using guessed type __int64 (__fastcall *off_1409A81C0[29])();
// 1409A8248: using guessed type __int64 (__fastcall *off_1409A8248[12])();

