//----- (0000000140173610) ----------------------------------------------------
void __fastcall sub_140173610(_QWORD* a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx

	*a1 = off_140B5D1C0;
	v3 = a1[130];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1[130] = 0i64;
	}
	v4 = a1[128];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[128] = 0i64;
	}
	v5 = a1[129];
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		a1[129] = 0i64;
	}
	sub_1400C6030((__int64)a1, a2);
}
// 140173682: variable 'a2' is possibly undefined
// 140B5D1C0: using guessed type __int64 (__fastcall *off_140B5D1C0[25])();

