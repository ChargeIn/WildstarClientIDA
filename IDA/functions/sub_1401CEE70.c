//----- (00000001401CEE70) ----------------------------------------------------
void __fastcall sub_1401CEE70(__int64 a1)
{
	__int64 v2; // rcx
	void* v3; // rcx
	__int64 v4; // rdx
	__m128i* v5; // rcx
	__int16 v6; // ax
	__m128i* i; // rax
	__int16 v8; // cx
	HANDLE FileW; // rax
	void* v10; // rcx
	struct _BY_HANDLE_FILE_INFORMATION FileInformation; // [rsp+40h] [rbp-268h] BYREF
	__m128i FileName[33]; // [rsp+80h] [rbp-228h] BYREF

	v2 = *(_QWORD*)(a1 + 1096);
	if (v2 != -1)
	{
		sub_1401C35A0(v2, a1 + 1136);
		CloseHandle(*(HANDLE*)(a1 + 1096));
		*(_QWORD*)(a1 + 1096) = -1i64;
	}
	v3 = *(void**)(a1 + 1088);
	if (v3 != (void*)-1i64)
	{
		CloseHandle(v3);
		*(_QWORD*)(a1 + 1088) = -1i64;
	}
	v4 = 260i64;
	v5 = FileName;
	while (v4 != -2147483386)
	{
		v6 = *(__int16*)((char*)v5->m128i_i16 + a1 + 8 - (_QWORD)FileName);
		if (!v6)
			break;
		v5->m128i_i16[0] = v6;
		v5 = (__m128i*)((char*)v5 + 2);
		if (!--v4)
		{
			v5 = (__m128i*)((char*)v5 - 2);
			break;
		}
	}
	v5->m128i_i16[0] = 0;
	for (i = (__m128i*)sub_1407DD8D8(FileName, 0x5Cu); i; i = (__m128i*)sub_1407DD8D8(FileName, 0x5Cu))
	{
		if (i == FileName)
			break;
		v8 = i[-1].m128i_i16[7];
		if (v8 == 58 || v8 == 92)
			break;
		i->m128i_i16[0] = 0;
		FileW = CreateFileW((LPCWSTR)FileName, 0x81u, 7u, 0i64, 3u, 0x42000000u, 0i64);
		*(_QWORD*)(a1 + 1088) = FileW;
		if (FileW != (HANDLE)-1i64)
		{
			if (GetFileInformationByHandle(FileW, &FileInformation) && (FileInformation.dwFileAttributes & 0x10) != 0)
			{
				CreateIoCompletionPort(*(HANDLE*)(a1 + 1088), *(HANDLE*)(*(_QWORD*)a1 + 80i64), 1ui64, 0);
				break;
			}
			CloseHandle(*(HANDLE*)(a1 + 1088));
			*(_QWORD*)(a1 + 1088) = -1i64;
		}
	}
	if (*(_QWORD*)(a1 + 1088) != -1i64)
	{
		*(_QWORD*)(a1 + 1104) = 0i64;
		*(_QWORD*)(a1 + 1112) = 0i64;
		*(_QWORD*)(a1 + 1120) = 0i64;
		*(_QWORD*)(a1 + 1128) = 0i64;
		v10 = *(void**)(a1 + 1088);
		*(_QWORD*)(a1 + 1120) = a1;
		if (!ReadDirectoryChangesW(v10, 0i64, 0, 0, 2u, 0i64, (LPOVERLAPPED)(a1 + 1104), 0i64))
		{
			CloseHandle(*(HANDLE*)(a1 + 1088));
			*(_QWORD*)(a1 + 1088) = -1i64;
		}
	}
	sub_1401CF0C0(a1);
}
// 1401CEF27: conditional instruction was optimized away because rdx.8!=0
// 1401CEE70: using guessed type __m128i FileName[33];

