//----- (00000001401B7AF0) ----------------------------------------------------
__int64 __fastcall sub_1401B7AF0(__int64 a1, _QWORD* a2)
{
	unsigned int v2; // ebp
	bool v4; // zf
	const WCHAR* v6; // rcx
	HANDLE FileW; // rax
	HANDLE v8; // rax
	HANDLE v9; // rax
	signed int LastError; // eax
	signed int v11; // edi
	void* v12; // rcx
	void* v13; // rcx
	unsigned __int64 v15; // r9
	LARGE_INTEGER FileSize; // [rsp+40h] [rbp-28h] BYREF

	v2 = 0;
	v4 = *(_QWORD*)(a1 + 24) == 0i64;
	v6 = *(const WCHAR**)(a1 + 8);
	if (v4)
	{
		FileW = CreateFileW(v6, 0x80000000, 1u, 0i64, 3u, 0x10000000u, 0i64);
		*(_QWORD*)(a1 + 32) = FileW;
		if (FileW == (HANDLE)-1i64)
			goto LABEL_8;
	}
	else
	{
		v8 = CreateFileW(v6, 0x80000000, 1u, 0i64, 3u, 0x50000000u, 0i64);
		*(_QWORD*)(a1 + 32) = v8;
		if (v8 == (HANDLE)-1i64
			|| (v9 = CreateFileW(*(LPCWSTR*)(a1 + 8), 0x80000000, 1u, 0i64, 3u, 0x50000000u, 0i64),
				*(_QWORD*)(a1 + 40) = v9,
				v9 == (HANDLE)-1i64))
		{
		LABEL_8:
			LastError = GetLastError();
			v11 = LastError;
			if (LastError > 0)
				v11 = (unsigned __int16)LastError | 0x80070000;
			goto LABEL_10;
		}
		CreateIoCompletionPort(v9, *(HANDLE*)(a1 + 24), 1ui64, 0);
	}
	if (!GetFileSizeEx(*(HANDLE*)(a1 + 32), &FileSize))
		goto LABEL_8;
	v11 = sub_1401BA2A0(a1, a2, FileSize.QuadPart);
	if (v11 >= 0)
	{
		if (FileSize.QuadPart >= 0x230ui64)
		{
			v11 = sub_1401BC1A0(a1, 0i64, (int*)(a1 + 56), 0x230ui64);
			if (v11 >= 0)
			{
				v11 = sub_1401BA550(a1);
				if (v11 >= 0)
				{
					if (*(_QWORD*)(a1 + 576) <= FileSize.QuadPart)
					{
						sub_1401BC800((__int64*)(a1 + 616), *(unsigned int*)(a1 + 600));
						v15 = 16i64 * *(unsigned int*)(a1 + 600);
						if (!v15 || (v11 = sub_1401BC1A0(a1, *(LARGE_INTEGER*)(a1 + 592), *(int**)(a1 + 616), v15), v11 >= 0))
						{
							v11 = sub_1401BA600((_QWORD*)a1);
							if (v11 >= 0)
								return 0i64;
						}
					}
					else
					{
						v11 = -1610416127;
					}
				}
			}
		}
		else
		{
			v11 = FileSize.QuadPart != 0 ? 0xA0030001 : 0;
		}
	}
LABEL_10:
	v12 = *(void**)(a1 + 32);
	if (v12 != (void*)-1i64)
	{
		CloseHandle(v12);
		*(_QWORD*)(a1 + 32) = -1i64;
	}
	v13 = *(void**)(a1 + 40);
	if (v13 != (void*)-1i64)
	{
		CloseHandle(v13);
		*(_QWORD*)(a1 + 40) = -1i64;
	}
	sub_1407E4830((int*)(a1 + 56), 0i64, 0x230ui64);
	*(_DWORD*)(a1 + 56) = 1346454347;
	*(_DWORD*)(a1 + 60) = 1;
	*(_QWORD*)(a1 + 576) = 568i64;
	sub_1401BC800((__int64*)(a1 + 616), 0i64);
	if (a2)
		return (unsigned int)v11;
	return v2;
}

