//----- (00000001401B5020) ----------------------------------------------------
__int64 __fastcall sub_1401B5020(__int64 a1, WCHAR* a2, __int64 a3, const WCHAR* a4)
{
	WCHAR v4; // ax
	WCHAR* v8; // r8
	const WCHAR* v9; // rcx
	__int64 v10; // rax
	LPWSTR FilePart; // [rsp+30h] [rbp-248h] BYREF
	char v13[528]; // [rsp+40h] [rbp-238h] BYREF

	v4 = *a4;
	if (*a4 == 92 || v4 && a4[1] == 58)
	{
		v8 = a2;
		v9 = a4;
		return GetFullPathNameW(v9, 0x104u, v8, &FilePart);
	}
	if (v4 == 46 && *(_QWORD*)(a1 + 1592))
	{
		sub_14001B370(v13, 260i64, L"%s\\%s", a1 + 1072, a4);
		v8 = a2;
		v9 = (const WCHAR*)v13;
		return GetFullPathNameW(v9, 0x104u, v8, &FilePart);
	}
	sub_14001B370(a2, 260i64, L"%s\\%s", a1 + 1600, a4);
	v10 = 0i64;
	if (*a4)
	{
		do
			++v10;
		while (a4[v10]);
	}
	return *(_QWORD*)(a1 + 2120) + 1i64 + v10;
}
// 140A47358: using guessed type wchar_t aSS_11[6];
// 140A473C0: using guessed type wchar_t aSS_10[6];

