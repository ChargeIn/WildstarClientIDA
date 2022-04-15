//----- (00000001401C1390) ----------------------------------------------------
void __fastcall sub_1401C1390(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx

	v2 = (__int64)(a1 + 13);
	*(_QWORD*)(v2 - 104) = off_140B5F3F0;
	sub_140008410(v2);
	sub_14018B900(a1[14], 0);
	v3 = a1[12];
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
	v4 = a1[11];
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	v5 = a1[9];
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	v6 = a1[7];
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	v7 = a1[3];
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
	v8 = a1[1];
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
}
// 140B5F3F0: using guessed type __int64 (__fastcall *off_140B5F3F0[7])();

