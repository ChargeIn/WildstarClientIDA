//----- (000000014013DA10) ----------------------------------------------------
_QWORD* __fastcall sub_14013DA10(_QWORD* a1, char a2)
{
	__int64 v4; // rcx
	__int64 v5; // rcx

	*a1 = &off_140B58150;
	v4 = a1[4];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[4] = 0i64;
	}
	v5 = a1[1];
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		a1[1] = 0i64;
	}
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B58150: using guessed type __int64 (__fastcall *off_140B58150)();

