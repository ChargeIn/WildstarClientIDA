//----- (00000001401417D0) ----------------------------------------------------
__int64 __fastcall sub_1401417D0(__int64 a1, __int64 a2)
{
	int** v3; // rax
	__int64 v5; // [rsp+30h] [rbp+8h] BYREF

	v3 = (int**)sub_14018D540(&v5, (__int64)L"<MLDoc>%s</MLDoc>", a2);
	sub_1401A7A60(a1 + 24, *v3, -1i64);
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	return sub_1401411C0(a1);
}
// 140A238F8: using guessed type wchar_t aMldocSMldoc[18];

