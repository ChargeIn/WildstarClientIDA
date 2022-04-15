//----- (0000000140782580) ----------------------------------------------------
_QWORD* __fastcall sub_140782580(_QWORD* a1, char a2)
{
	__int64 v4; // rcx

	*a1 = off_140B77D38;
	v4 = a1[7];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[7] = 0i64;
	}
	sub_140713A20(a1);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B77D38: using guessed type __int64 (__fastcall *off_140B77D38[8])();

