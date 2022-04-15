//----- (00000001401C3B70) ----------------------------------------------------
signed int __fastcall sub_1401C3B70(HINTERNET* a1, const WCHAR* a2, __int64 a3, DWORD_PTR a4, __int64 a5)
{
	void* v7; // rax
	void* v8; // rdi
	signed int result; // eax
	int v10; // ebx
	signed int LastError; // eax
	signed int v12; // eax
	__int64 v13; // [rsp+40h] [rbp-108h] BYREF
	DWORD_PTR dwContext[3]; // [rsp+50h] [rbp-F8h] BYREF
	HANDLE hHandle; // [rsp+68h] [rbp-E0h]
	__int64 v16; // [rsp+70h] [rbp-D8h]
	__int64 v17; // [rsp+78h] [rbp-D0h]
	__int64 v18; // [rsp+80h] [rbp-C8h]
	__int64 v19; // [rsp+88h] [rbp-C0h]
	int szHeaders[32]; // [rsp+90h] [rbp-B8h] BYREF

	if (!a2 || !a4 || !a5)
		return -2147024809;
	v7 = WinHttpOpenRequest(*a1, 0i64, a2, 0i64, 0i64, &off_140C58730, 0);
	v8 = v7;
	if (!v7)
	{
		result = GetLastError();
		if (result > 0)
			return (unsigned __int16)result | 0x80070000;
		return result;
	}
	if (WinHttpSetStatusCallback(v7, (WINHTTP_STATUS_CALLBACK)sub_1401C40C0, 0xFFFFFFFF, 0i64) == (WINHTTP_STATUS_CALLBACK)-1i64)
		goto LABEL_10;
	v10 = sub_1401A3210(szHeaders, 0x40ui64, &v13, 0i64, 0, L"Range:bytes=%I64u-%I64u", a3, a3 + a5 - 1);
	if (v10 < 0)
	{
	LABEL_12:
		WinHttpCloseHandle(v8);
		return v10;
	}
	dwContext[0] = 0i64;
	dwContext[1] = 0i64;
	hHandle = 0i64;
	v16 = 0i64;
	v17 = 0i64;
	v18 = 0i64;
	v19 = 0i64;
	dwContext[2] = a4;
	hHandle = CreateEventW(0i64, 1, 0, 0i64);
	if (!hHandle)
	{
	LABEL_10:
		LastError = GetLastError();
		v10 = LastError;
		if (LastError > 0)
			v10 = (unsigned __int16)LastError | 0x80070000;
		goto LABEL_12;
	}
	if (WinHttpSendRequest(v8, (LPCWSTR)szHeaders, (v13 - (__int64)szHeaders) >> 1, 0i64, 0, 0, (DWORD_PTR)dwContext))
	{
		WaitForSingleObject(hHandle, 0xFFFFFFFF);
		CloseHandle(hHandle);
		return HIDWORD(v19);
	}
	else
	{
		v12 = GetLastError();
		if (v12 > 0)
			v12 = (unsigned __int16)v12 | 0x80070000;
		HIDWORD(v19) = v12;
		WinHttpCloseHandle(v8);
		CloseHandle(hHandle);
		return HIDWORD(v19);
	}
}
// 140A47858: using guessed type wchar_t aRangeBytesI64u[24];
// 1401C3B70: using guessed type int szHeaders[32];

