//----- (00000001401CF0C0) ----------------------------------------------------
void __fastcall sub_1401CF0C0(__int64 a1)
{
	HANDLE FileW; // rax
	void* v3; // rdx
	void* v4; // rcx
	struct _BY_HANDLE_FILE_INFORMATION FileInformation; // [rsp+40h] [rbp-48h] BYREF

	if (*(_QWORD*)(a1 + 1096) == -1i64)
	{
		FileW = CreateFileW((LPCWSTR)(a1 + 8), 0x81u, 7u, 0i64, 3u, 0x42000000u, 0i64);
		*(_QWORD*)(a1 + 1096) = FileW;
		if (FileW != (HANDLE)-1i64)
		{
			if (GetFileInformationByHandle(FileW, &FileInformation) && (FileInformation.dwFileAttributes & 0x10) != 0)
			{
				CreateIoCompletionPort(*(HANDLE*)(a1 + 1096), *(HANDLE*)(*(_QWORD*)a1 + 80i64), 1ui64, 0);
			}
			else
			{
				CloseHandle(*(HANDLE*)(a1 + 1096));
				*(_QWORD*)(a1 + 1096) = -1i64;
			}
		}
	}
	if (*(_QWORD*)(a1 + 1096) != -1i64)
	{
		*(_QWORD*)(a1 + 1136) = 0i64;
		*(_QWORD*)(a1 + 1144) = 0i64;
		*(_QWORD*)(a1 + 1152) = 0i64;
		*(_QWORD*)(a1 + 1160) = 0i64;
		v3 = *(void**)(a1 + 1080);
		v4 = *(void**)(a1 + 1096);
		*(_QWORD*)(a1 + 1152) = a1;
		if (!ReadDirectoryChangesW(v4, v3, 0xFFF0u, 1, 0x1Bu, 0i64, (LPOVERLAPPED)(a1 + 1136), 0i64))
		{
			CloseHandle(*(HANDLE*)(a1 + 1096));
			*(_QWORD*)(a1 + 1096) = -1i64;
		}
	}
}

