//----- (00000001401C39A0) ----------------------------------------------------
signed int __fastcall sub_1401C39A0(HINTERNET* a1, const WCHAR* a2, DWORD_PTR a3)
{
	signed int result; // eax
	void* v5; // rax
	void* v6; // rdi
	signed int LastError; // eax
	unsigned int v8; // ebx
	signed int v9; // eax
	signed int v10; // eax
	DWORD_PTR dwContext[3]; // [rsp+40h] [rbp-68h] BYREF
	HANDLE hHandle; // [rsp+58h] [rbp-50h]
	__int64 v13; // [rsp+60h] [rbp-48h]
	__int64 v14; // [rsp+68h] [rbp-40h]
	__int64 v15; // [rsp+70h] [rbp-38h]
	__int64 v16; // [rsp+78h] [rbp-30h]

	if (!a3)
		return -2147024809;
	v5 = WinHttpOpenRequest(*a1, L"HEAD", a2, 0i64, 0i64, &ppwszAcceptTypes, 0);
	v6 = v5;
	if (!v5)
	{
		result = GetLastError();
		if (result > 0)
			return (unsigned __int16)result | 0x80070000;
		return result;
	}
	if (WinHttpSetStatusCallback(v5, (WINHTTP_STATUS_CALLBACK)fnInternetCallback, 0xFFFFFFFF, 0i64) == (WINHTTP_STATUS_CALLBACK)-1i64)
	{
		LastError = GetLastError();
		v8 = LastError;
		if (LastError > 0)
			v8 = (unsigned __int16)LastError | 0x80070000;
	LABEL_9:
		WinHttpCloseHandle(v6);
		return v8;
	}
	dwContext[0] = 0i64;
	dwContext[1] = 0i64;
	v13 = 0i64;
	v14 = 0i64;
	v15 = 0i64;
	v16 = 0i64;
	dwContext[2] = a3;
	hHandle = CreateEventW(0i64, 1, 0, 0i64);
	if (!hHandle)
	{
		v9 = GetLastError();
		v8 = v9;
		if (v9 > 0)
			v8 = (unsigned __int16)v9 | 0x80070000;
		goto LABEL_9;
	}
	if (WinHttpSendRequest(v6, 0i64, 0, 0i64, 0, 0, (DWORD_PTR)dwContext))
	{
		WaitForSingleObject(hHandle, 0xFFFFFFFF);
	}
	else
	{
		v10 = GetLastError();
		if (v10 > 0)
			v10 = (unsigned __int16)v10 | 0x80070000;
		HIDWORD(v16) = v10;
		WinHttpCloseHandle(v6);
	}
	CloseHandle(hHandle);
	return HIDWORD(v16);
}

