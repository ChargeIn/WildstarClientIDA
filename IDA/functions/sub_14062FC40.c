//----- (000000014062FC40) ----------------------------------------------------
_QWORD* __fastcall sub_14062FC40(_QWORD* a1, char a2)
{
	const void*** v3; // rcx
	__int64 v5; // rcx

	v3 = (const void***)(a1 + 6);
	*(v3 - 6) = (const void**)off_140B6FC30;
	if (*v3)
		sub_1401A4A00(v3);
	v5 = a1[2];
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	*a1 = off_140B55048;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B6FC30: using guessed type __int64 (__fastcall *off_140B6FC30[6])();

