//----- (0000000140180E60) ----------------------------------------------------
void __fastcall sub_140180E60(_QWORD* a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx

	*a1 = off_140B5DF50;
	v3 = a1[148];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1[148] = 0i64;
	}
	v4 = a1[136];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[136] = 0i64;
	}
	v5 = a1[139];
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		a1[139] = 0i64;
	}
	v6 = a1[142];
	if (v6)
		sub_14018B900(v6, 0);
	v7 = a1[129];
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		a1[129] = 0i64;
	}
	v8 = a1[132];
	if (v8)
		sub_14018B900(v8, 0);
	sub_1400C6030((__int64)a1, a2);
}
// 140180F10: variable 'a2' is possibly undefined
// 140B5DF50: using guessed type __int64 (__fastcall *off_140B5DF50[25])();

