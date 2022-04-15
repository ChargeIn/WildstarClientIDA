//----- (00000001401B5AB0) ----------------------------------------------------
__int64 __fastcall sub_1401B5AB0(__int64 a1, const WCHAR* a2, __int64 a3)
{
	__int64 v5; // r8
	DWORD FileAttributesW; // eax
	WCHAR FileName[264]; // [rsp+20h] [rbp-438h] BYREF
	char v9[528]; // [rsp+230h] [rbp-228h] BYREF

	if (!a2 || sub_1401B5110(a1, v9, a3, (__int64)a2) && !*(_DWORD*)(a1 + 2160))
		return 0i64;
	sub_1401B5020(a1, FileName, v5, a2);
	FileAttributesW = GetFileAttributesW(FileName);
	if (FileAttributesW == -1)
		return 0i64;
	else
		return (FileAttributesW >> 4) & 1;
}
// 1401B5B03: variable 'v5' is possibly undefined
// 1401B5AB0: using guessed type char var_228[528];

