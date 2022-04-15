//----- (00000001408788A0) ----------------------------------------------------
__int64 __fastcall sub_1408788A0(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rdx

	(*(void(__fastcall**)(_QWORD*))(*a1 + 104i64))(a1);
	v2 = a1[6];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 144i64))(v2);
		a1[6] = 0i64;
	}
	v3 = a1[5];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 16i64))(v3);
		a1[5] = 0i64;
	}
	v4 = a1[8];
	if (v4)
	{
		sub_140881720(dword_140C10F28, v4);
		a1[8] = 0i64;
	}
	return sub_14085CE40((__int64)a1);
}
// 140C10F28: using guessed type int dword_140C10F28;

