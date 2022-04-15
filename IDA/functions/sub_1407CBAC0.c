//----- (00000001407CBAC0) ----------------------------------------------------
__int64 __fastcall sub_1407CBAC0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
	int v9; // [rsp+30h] [rbp-28h] BYREF
	__int64 v10; // [rsp+38h] [rbp-20h]
	int v11; // [rsp+44h] [rbp-14h]

	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 504i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
	if (!a4)
		a4 = a1[822];
	v10 = a4;
	v9 = 1;
	v11 = 0;
	(*(void(__fastcall**)(__int64, int*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v9,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
		qword_140C65670,
		&unk_140C3FE88,
		1i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 632i64))(qword_140C65670, 3i64);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 0i64);
	(*(void(__fastcall**)(_QWORD*, __int64, __int64))(*a1 + 120i64))(a1, a2, a3);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
}
// 140C65670: using guessed type __int64 qword_140C65670;

