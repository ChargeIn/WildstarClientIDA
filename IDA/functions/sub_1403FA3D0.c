//----- (00000001403FA3D0) ----------------------------------------------------
void __fastcall sub_1403FA3D0(__int64 a1)
{
	__int64 v2; // [rsp+20h] [rbp-28h] BYREF
	__int64 v3; // [rsp+28h] [rbp-20h]
	__int64 v4; // [rsp+30h] [rbp-18h]
	__int64 v5; // [rsp+38h] [rbp-10h]
	int v6; // [rsp+58h] [rbp+10h] BYREF

	if (qword_140C65A48 && *(_QWORD*)(qword_140C65A48 + 24))
	{
		sub_1404D5AE0(qword_140C65A48);
		v3 = 0i64;
		v4 = 0i64;
		v5 = 0i64;
		v6 = 205;
		sub_14001A500(&v2, 0i64, &v6);
		(*(void(__fastcall**)(_QWORD, __int64*))(**(_QWORD**)(qword_140C65898 + 30088) + 120i64))(
			*(_QWORD*)(qword_140C65898 + 30088),
			&v2);
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(qword_140C65898 + 30088) + 160i64))(
			*(_QWORD*)(qword_140C65898 + 30088),
			1i64);
		sub_140400B00((__int64*)(a1 + 72), *(_QWORD*)(qword_140C635F0 + 5792));
		if (v3)
			sub_14018B900(v3, 0);
	}
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A48: using guessed type __int64 qword_140C65A48;

