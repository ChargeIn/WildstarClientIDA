//----- (0000000140523FA0) ----------------------------------------------------
_QWORD* __fastcall sub_140523FA0(_QWORD* a1, char a2)
{
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx

	*a1 = off_140B6A9C0;
	v4 = a1[5];
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	v5 = a1[3];
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	v6 = a1[2];
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
	*a1 = &off_140B6B770;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B6A9C0: using guessed type __int64 (__fastcall *off_140B6A9C0[301])();
// 140B6B770: using guessed type __int64 (__fastcall *off_140B6B770)();

