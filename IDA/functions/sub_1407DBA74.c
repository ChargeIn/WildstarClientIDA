//----- (00000001407DBA74) ----------------------------------------------------
__int64 __fastcall sub_1407DBA74(LPCCH lpMultiByteStr, LPVOID* a2)
{
	UINT v2; // edi
	int v6; // eax
	int cchWideChar; // ebp
	int LastError; // eax
	WCHAR* lpWideCharStr; // rax
	int v10; // eax

	v2 = 0;
	if (!lpMultiByteStr || !a2)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 22i64;
	}
	if (!(unsigned int)sub_1407E26C0() && !AreFileApisANSI())
		v2 = 1;
	*a2 = 0i64;
	v6 = MultiByteToWideChar(v2, 0, lpMultiByteStr, -1, 0i64, 0);
	cchWideChar = v6;
	if (!v6)
	{
		LastError = GetLastError();
		sub_1407DE160(LastError);
		return 0i64;
	}
	lpWideCharStr = (WCHAR*)sub_1407E2C30(2i64 * v6);
	*a2 = lpWideCharStr;
	if (!lpWideCharStr)
		return 0i64;
	if (!MultiByteToWideChar(v2, 0, lpMultiByteStr, -1, lpWideCharStr, cchWideChar))
	{
		v10 = GetLastError();
		sub_1407DE160(v10);
		sub_1407E14C0(*a2);
		*a2 = 0i64;
		return 0i64;
	}
	return 1i64;
}

