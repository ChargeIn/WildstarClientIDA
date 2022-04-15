//----- (0000000140532D90) ----------------------------------------------------
void __fastcall sub_140532D90(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx

	v2 = a1[23];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[23] = 0i64;
	}
	v3 = a1[26];
	if (v3)
		sub_14018B900(v3, 0);
	v4 = a1[17];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[17] = 0i64;
	}
	v5 = a1[20];
	if (v5)
		sub_14018B900(v5, 0);
	v6 = a1[6];
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		a1[6] = 0i64;
	}
	v7 = a1[9];
	if (v7)
		sub_14018B900(v7, 0);
	if (*a1)
	{
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
		*a1 = 0i64;
	}
	v8 = a1[3];
	if (v8)
		sub_14018B900(v8, 0);
}

