//----- (00000001408CEA10) ----------------------------------------------------
_QWORD* __fastcall sub_1408CEA10(_QWORD* a1, char a2)
{
	_QWORD* v3; // rcx

	v3 = a1 + 9;
	*(v3 - 9) = off_1409B1660;
	nullsub_3(v3);
	*a1 = &off_1409A9900;
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1408AC800: using guessed type __int64 __fastcall nullsub_3(_QWORD);
// 1409A9900: using guessed type __int64 (__fastcall *off_1409A9900)();
// 1409B1660: using guessed type __int64 (__fastcall *off_1409B1660[6])();

