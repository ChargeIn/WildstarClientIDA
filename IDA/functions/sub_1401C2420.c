#include "../winhttp.h"

//----- (00000001401C2420) ----------------------------------------------------
__int64 __fastcall sub_1401C2420(__int64 a1, unsigned __int64* a2)
{
	HANDLE FileW; // rax
	void* v5; // rdi
	char v7[24]; // [rsp+40h] [rbp-18h] BYREF
	DWORD NumberOfBytesWritten; // [rsp+60h] [rbp+8h] BYREF
	LARGE_INTEGER FileSize; // [rsp+70h] [rbp+18h] BYREF

	if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 96) + 24i64))(
		*(_QWORD*)(a1 + 96),
		0xFFFFFFFFi64))
	{
		sub_1401C3020(a1 + 104, (__int64)v7, a2);
		if (v7[8])
		{
			FileW = CreateFileW(*(LPCWSTR*)(a1 + 88), 0xC0000000, 0, 0i64, 4u, 0x80u, 0i64);
			v5 = FileW;
			if (FileW != (HANDLE)-1i64)
			{
				GetFileSizeEx(FileW, &FileSize);
				FileSize.QuadPart = 20 * (FileSize.QuadPart / 0x14ui64);
				if (SetFilePointerEx(v5, FileSize, 0i64, 0))
					WriteFile(v5, a2, 0x14u, &NumberOfBytesWritten, 0i64);
				CloseHandle(v5);
			}
		}
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 96) + 32i64))(*(_QWORD*)(a1 + 96));
	}
	return 0i64;
}

