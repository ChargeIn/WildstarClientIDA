//----- (0000000140518AE0) ----------------------------------------------------
_QWORD* __fastcall sub_140518AE0(_QWORD* a1, char a2)
{
	__int64 v4; // rcx

	*a1 = &off_140B6B440;
	v4 = a1[3];
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	*a1 = &off_140B6B770;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B6B440: using guessed type __int64 (__fastcall *off_140B6B440)();
// 140B6B770: using guessed type __int64 (__fastcall *off_140B6B770)();
