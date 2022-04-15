//----- (0000000140780660) ----------------------------------------------------
_QWORD* __fastcall sub_140780660(_QWORD* a1, char a2)
{
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx

	*a1 = off_140B78440;
	v4 = a1[4];
	if (v4)
		sub_14018B900(v4, 0);
	v5 = a1[3];
	if (v5)
		sub_14018B900(v5, 0);
	v6 = a1[15];
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B78440: using guessed type __int64 (__fastcall *off_140B78440[5])();

