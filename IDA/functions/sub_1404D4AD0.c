//----- (00000001404D4AD0) ----------------------------------------------------
__int64 __fastcall sub_1404D4AD0(__int64 a1, char a2)
{
	__int64* v3; // rcx

	v3 = (__int64*)(a1 + 64);
	*(v3 - 8) = (__int64)off_140B69038;
	sub_1404D4EC0(v3);
	sub_1404D4EC0((__int64*)(a1 + 32));
	if ((a2 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}
// 140B69038: using guessed type __int64 (__fastcall *off_140B69038[20])();

