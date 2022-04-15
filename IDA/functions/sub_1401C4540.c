//----- (00000001401C4540) ----------------------------------------------------
int __fastcall sub_1401C4540(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	int result; // eax
	DWORD FileSize; // ebx
	HINTERNET v7; // rax
	DWORD v8; // r8d
	void* v9; // rcx
	DWORD NumberOfBytesWritten[2]; // [rsp+40h] [rbp-C0h] BYREF
	unsigned int v11; // [rsp+48h] [rbp-B8h] BYREF
	DWORD NumberOfBytesRead[2]; // [rsp+50h] [rbp-B0h] BYREF
	DWORD dwBufferLength; // [rsp+58h] [rbp-A8h] BYREF
	unsigned __int64 v14[2]; // [rsp+60h] [rbp-A0h] BYREF
	int Buffer[128]; // [rsp+70h] [rbp-90h] BYREF

	v2 = a1 + 24;
	*(_QWORD*)NumberOfBytesRead = Buffer;
	result = sub_140193940(
		Buffer,
		0x100ui64,
		(int**)NumberOfBytesRead,
		v14,
		0,
		"\r\n--%s--\r\n",
		(const char*)(a1 + 24));
	if (result < 0)
		return result;
	if (!WriteFile(*(HANDLE*)(a1 + 16), Buffer, NumberOfBytesRead[0] - (unsigned int)Buffer, NumberOfBytesWritten, 0i64))
	{
		result = GetLastError();
		if (result > 0)
			return (unsigned __int16)result | 0x80070000;
		return result;
	}
	FileSize = GetFileSize(*(HANDLE*)(a1 + 16), 0i64);
	v7 = WinHttpOpenRequest(*(HINTERNET*)a1, L"POST", *(LPCWSTR*)(a2 + 80), 0i64, 0i64, 0i64, 0);
	*(_QWORD*)(a1 + 8) = v7;
	if (!v7)
		goto LABEL_17;
	*(_QWORD*)NumberOfBytesWritten = Buffer;
	result = sub_1401A3210(
		Buffer,
		0x100ui64,
		(__int64*)NumberOfBytesWritten,
		v14,
		0,
		L"Content-Type: multipart/form-data; boundary=\"%S\"\r\n",
		v2);
	if (result < 0)
		return result;
	if (!WinHttpSendRequest(
		*(HINTERNET*)(a1 + 8),
		(LPCWSTR)Buffer,
		(__int64)(*(_QWORD*)NumberOfBytesWritten - (_QWORD)Buffer) >> 1,
		0i64,
		0,
		FileSize,
		0i64))
		goto LABEL_17;
	SetFilePointer(*(HANDLE*)(a1 + 16), 0, 0i64, 0);
	for (; FileSize; FileSize -= NumberOfBytesWritten[0])
	{
		v8 = 4096;
		if (FileSize < 0x1000)
			v8 = FileSize;
		if (!ReadFile(*(HANDLE*)(a1 + 16), &unk_140C8F180, v8, NumberOfBytesRead, 0i64)
			|| !WinHttpWriteData(*(HINTERNET*)(a1 + 8), &unk_140C8F180, NumberOfBytesRead[0], NumberOfBytesWritten))
		{
			goto LABEL_17;
		}
		if (NumberOfBytesRead[0] != NumberOfBytesWritten[0])
			return -2147467259;
	}
	if (!WinHttpReceiveResponse(*(HINTERNET*)(a1 + 8), 0i64)
		|| (v9 = *(void**)(a1 + 8),
			v11 = 0,
			dwBufferLength = 4,
			!WinHttpQueryHeaders(v9, 0x20000013u, 0i64, &v11, &dwBufferLength, 0i64)))
	{
	LABEL_17:
		result = GetLastError();
		if (result > 0)
			return (unsigned __int16)result | 0x80070000;
		return result;
	}
	if (v11 < 0x12C)
		return 0;
	switch (v11)
	{
	case 0x191u:
	case 0x193u:
		return -2147024891;
	case 0x194u:
		return -2147024894;
	case 0x198u:
		return -2147023436;
	}
	return -2147467259;
}
// 140A479E0: using guessed type wchar_t aContentTypeMul[51];
// 1401C4540: using guessed type int Buffer[128];

