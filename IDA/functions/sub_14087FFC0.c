//----- (000000014087FFC0) ----------------------------------------------------
_QWORD* __fastcall sub_14087FFC0(_QWORD* a1, char a2)
{
	_QWORD* v3; // rcx

	v3 = a1 + 8;
	*(v3 - 8) = off_1409A7600;
	nullsub_1(v3);
	*a1 = off_1409A2F80;
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 1409A2F80: using guessed type __int64 (__fastcall *off_1409A2F80[2])();
// 1409A7600: using guessed type __int64 (__fastcall *off_1409A7600[8])();

