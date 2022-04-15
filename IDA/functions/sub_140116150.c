//----- (0000000140116150) ----------------------------------------------------
char __fastcall sub_140116150(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	int** v5; // rax
	__int64 v7; // [rsp+30h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 688);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*(_QWORD*)(a1 + 688) = 0i64;
	}
	sub_140141100(a1 + 1024, (float)(*(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 716)));
	v5 = (int**)sub_14018D540(&v7, (__int64)L"<MLDoc>%s</MLDoc>", a2);
	sub_1401A7A60(a1 + 1048, *v5, -1i64);
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
	sub_1401411C0(a1 + 1024);
	return sub_140116010(a1);
}
// 140A238F8: using guessed type wchar_t aMldocSMldoc[18];

