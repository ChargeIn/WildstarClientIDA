//----- (00000001401770F0) ----------------------------------------------------
void __fastcall sub_1401770F0(_QWORD* a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx

	*a1 = off_140B5D650;
	v3 = a1[128];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1[128] = 0i64;
	}
	v4 = a1[129];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[129] = 0i64;
	}
	v5 = a1[130];
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		a1[130] = 0i64;
	}
	v6 = a1[133];
	if (v6)
		sub_14018B900(v6, 0);
	sub_1400C6030((__int64)a1, a2);
}
// 140177175: variable 'a2' is possibly undefined
// 140B5D650: using guessed type __int64 (__fastcall *off_140B5D650[25])();

