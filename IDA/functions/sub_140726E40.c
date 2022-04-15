//----- (0000000140726E40) ----------------------------------------------------
_QWORD* __fastcall sub_140726E40(_QWORD* a1)
{
	__int64 v2; // rcx
	_QWORD* v3; // rcx
	__int64 v4; // rcx

	*a1 = off_140B78010;
	v2 = a1[7];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[7] = 0i64;
	}
	*a1 = off_140B781F0;
	v3 = (_QWORD*)a1[1];
	if (v3)
		*v3 = a1[2];
	v4 = a1[2];
	if (v4)
		*(_QWORD*)(v4 + 8) = a1[1];
	a1[1] = 0i64;
	a1[2] = 0i64;
	sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B78010: using guessed type __int64 (__fastcall *off_140B78010[74])();
// 140B781F0: using guessed type __int64 (__fastcall *off_140B781F0[14])();

