//----- (00000001401C1A60) ----------------------------------------------------
__int64 __fastcall sub_1401C1A60(__int64 a1)
{
	HANDLE FileW; // rax
	void* v3; // rbx
	DWORD NumberOfBytesRead; // [rsp+40h] [rbp-48h] BYREF
	char v6[16]; // [rsp+48h] [rbp-40h] BYREF
	unsigned __int64 Buffer[3]; // [rsp+58h] [rbp-30h] BYREF

	if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 96) + 16i64))(
		*(_QWORD*)(a1 + 96),
		0xFFFFFFFFi64))
	{
		FileW = CreateFileW(*(LPCWSTR*)(a1 + 88), 0x80000000, 1u, 0i64, 3u, 0x80u, 0i64);
		v3 = FileW;
		if (FileW != (HANDLE)-1i64)
		{
			if (ReadFile(FileW, Buffer, 0x14u, &NumberOfBytesRead, 0i64))
			{
				do
				{
					if (NumberOfBytesRead != 20)
						break;
					sub_1401C3020(a1 + 104, (__int64)v6, Buffer);
				} while (ReadFile(v3, Buffer, 0x14u, &NumberOfBytesRead, 0i64));
			}
			CloseHandle(v3);
		}
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 96) + 32i64))(*(_QWORD*)(a1 + 96));
	}
	return 0i64;
}
// 1401C1A60: using guessed type unsigned __int64 Buffer[3];
// 1401C1A60: using guessed type char var_40[16];

