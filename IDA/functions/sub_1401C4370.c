//----- (00000001401C4370) ----------------------------------------------------
signed int __fastcall sub_1401C4370(__int64 a1, const char* a2, const WCHAR* a3)
{
	HANDLE FileW; // rax
	void* v6; // rdi
	signed int result; // eax
	int v8; // ebx
	LARGE_INTEGER i; // rbx
	DWORD LowPart; // r8d
	signed int LastError; // eax
	DWORD NumberOfBytesRead[2]; // [rsp+50h] [rbp-148h] BYREF
	DWORD NumberOfBytesWritten; // [rsp+58h] [rbp-140h] BYREF
	LARGE_INTEGER FileSize; // [rsp+60h] [rbp-138h] BYREF
	unsigned __int64 v15; // [rsp+68h] [rbp-130h] BYREF
	int Buffer[64]; // [rsp+70h] [rbp-128h] BYREF

	FileW = CreateFileW(a3, 0x80000000, 1u, 0i64, 3u, 0x8000000u, 0i64);
	v6 = FileW;
	if (FileW != (HANDLE)-1i64)
	{
		if (GetFileSizeEx(FileW, &FileSize))
		{
			*(_QWORD*)NumberOfBytesRead = Buffer;
			v8 = sub_140193940(
				Buffer,
				0x100ui64,
				(int**)NumberOfBytesRead,
				&v15,
				0,
				"\r\n"
				"--%s\r\n"
				"Content-Disposition: form-data; name=\"%s\"; filename=\"%s\"\r\n"
				"Content-Type: application/octet-stream\r\n"
				"\r\n",
				(const char*)(a1 + 24),
				a2,
				a2);
			if (v8 < 0)
				goto LABEL_15;
			if (WriteFile(
				*(HANDLE*)(a1 + 16),
				Buffer,
				NumberOfBytesRead[0] - (unsigned int)Buffer,
				&NumberOfBytesWritten,
				0i64))
			{
				for (i = FileSize; i.QuadPart; i.QuadPart -= NumberOfBytesWritten)
				{
					LowPart = 4096;
					if (i.QuadPart < 0x1000ui64)
						LowPart = i.LowPart;
					if (!ReadFile(v6, &unk_140C8E180, LowPart, NumberOfBytesRead, 0i64)
						|| !WriteFile(*(HANDLE*)(a1 + 16), &unk_140C8E180, NumberOfBytesRead[0], &NumberOfBytesWritten, 0i64))
					{
						goto LABEL_18;
					}
					if (NumberOfBytesRead[0] != NumberOfBytesWritten)
					{
						v8 = -2147467259;
						goto LABEL_15;
					}
				}
				v8 = 0;
			LABEL_15:
				CloseHandle(v6);
				return v8;
			}
		}
	LABEL_18:
		LastError = GetLastError();
		v8 = LastError;
		if (LastError > 0)
			v8 = (unsigned __int16)LastError | 0x80070000;
		goto LABEL_15;
	}
	result = GetLastError();
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}
// 1401C4370: using guessed type int Buffer[64];

