//----- (0000000140508DD0) ----------------------------------------------------
_QWORD* __fastcall sub_140508DD0(_QWORD* a1, char a2)
{
	_QWORD* v3; // rcx
	__int64 v5; // rdx

	v3 = a1 + 144;
	*(v3 - 144) = off_140B6A440;
	sub_140001F70(v3);
	sub_140182970(a1, v5);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140508DFC: variable 'v5' is possibly undefined
// 140B6A440: using guessed type __int64 (__fastcall *off_140B6A440[25])();

