//----- (0000000140862140) ----------------------------------------------------
_QWORD* __fastcall sub_140862140(_QWORD* a1, char a2)
{
	__int64 v3; // rcx

	v3 = (__int64)(a1 + 2);
	*(_QWORD*)(v3 - 16) = off_1409A46F0;
	sub_140862060(v3);
	*a1 = &off_1409A4480;
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1409A4480: using guessed type __int64 (__fastcall *off_1409A4480)();
// 1409A46F0: using guessed type __int64 (__fastcall *off_1409A46F0[19])();

