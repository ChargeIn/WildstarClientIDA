//----- (00000001407BE6E0) ----------------------------------------------------
void __fastcall sub_1407BE6E0(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx

	*a1 = off_140B79650;
	v2 = a1[2];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[2] = 0i64;
	}
	v3 = a1[5];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1[5] = 0i64;
	}
	sub_14018B900(a1[7], 0);
	sub_14018B900(a1[8], 0);
}
// 140B79650: using guessed type __int64 (__fastcall *off_140B79650[12])();

