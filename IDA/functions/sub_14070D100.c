//----- (000000014070D100) ----------------------------------------------------
__int64 __fastcall sub_14070D100(__int64 a1, unsigned __int64 a2)
{
	__int64 v2; // rcx
	char v3; // di
	__int64 v4; // rbx
	__int64 v6; // [rsp+30h] [rbp+8h]

	v2 = 0i64;
	if (a2 >= 2)
	{
		v6 = 0i64;
		v4 = 0i64;
		v3 = 2;
	}
	else
	{
		v3 = 1;
		v4 = *(_QWORD*)(qword_140C65898 + 8 * a2 + 25616);
		v6 = v4;
		if (v4)
			(**(void(__fastcall***)(__int64))v4)(v4);
		v2 = v4;
	}
	if ((v3 & 2) != 0)
	{
		v3 &= ~2u;
		if (v2)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
	}
	if ((v3 & 1) != 0 && v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
	return v6;
}
// 140C65898: using guessed type __int64 qword_140C65898;

