//----- (00000001407DC810) ----------------------------------------------------
__int64* __fastcall sub_1407DC810(unsigned int a1, const CHAR* a2)
{
	WCHAR WideCharStr[136]; // [rsp+30h] [rbp-128h] BYREF

	if (a1 <= 5 && a2 && MultiByteToWideChar(0, 0, a2, -1, WideCharStr, 131))
		return sub_1407DCCF8(a1, WideCharStr);
	else
		return 0i64;
}

