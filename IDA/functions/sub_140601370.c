//----- (0000000140601370) ----------------------------------------------------
_QWORD* __fastcall sub_140601370(_QWORD* a1, char a2)
{
	__int64 v4; // rcx
	__int64 v5; // rcx

	*a1 = off_140B6F2F8;
	v4 = a1[36];
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	v5 = a1[32];
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B6F2F8: using guessed type __int64 (__fastcall *off_140B6F2F8[270])();

