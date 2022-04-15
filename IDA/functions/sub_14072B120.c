//----- (000000014072B120) ----------------------------------------------------
void __fastcall sub_14072B120(__int64 a1)
{
	__int64 v1; // [rsp+20h] [rbp-28h] BYREF
	__int64 v2; // [rsp+28h] [rbp-20h]
	__int64 v3; // [rsp+30h] [rbp-18h]
	__int64 v4; // [rsp+38h] [rbp-10h]
	int v5; // [rsp+50h] [rbp+8h] BYREF
	int v6; // [rsp+54h] [rbp+Ch]

	v6 = HIDWORD(a1);
	v5 = 205;
	v2 = 0i64;
	v3 = 0i64;
	v4 = 0i64;
	sub_14001A500(&v1, 0i64, &v5);
	(*(void(__fastcall**)(_QWORD, __int64*))(**(_QWORD**)(qword_140C65898 + 30088) + 120i64))(
		*(_QWORD*)(qword_140C65898 + 30088),
		&v1);
	(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(qword_140C65898 + 30088) + 160i64))(
		*(_QWORD*)(qword_140C65898 + 30088),
		1i64);
	if (v2)
		sub_14018B900(v2, 0);
}
// 140C65898: using guessed type __int64 qword_140C65898;

