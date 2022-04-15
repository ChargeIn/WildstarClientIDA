//----- (000000014079B5D0) ----------------------------------------------------
_QWORD* __fastcall sub_14079B5D0(_QWORD* a1, char a2)
{
	__int64 v4; // rcx

	*a1 = &off_140B78258;
	a1[2] = 0i64;
	v4 = a1[1];
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B78258: using guessed type __int64 (__fastcall *off_140B78258)();

