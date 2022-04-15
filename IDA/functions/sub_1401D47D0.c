#include "../winhttp.h"

//----- (00000001401D47D0) ----------------------------------------------------
signed int __fastcall sub_1401D47D0(LARGE_INTEGER* a1, LARGE_INTEGER a2)
{
	__int64 v4; // r8
	unsigned int v5; // esi
	HANDLE FileW; // rax
	void* v7; // rbx
	signed int result; // eax
	signed int LastError; // eax
	int FileName[132]; // [rsp+40h] [rbp-238h] BYREF

	SHCreateDirectory(0i64, (PCWSTR)(a1[1].QuadPart + 8));
	sub_1401C0D10(a1[1].QuadPart, FileName, v4, (__int64)&a1[2]);
	v5 = 0;
	FileW = CreateFileW((LPCWSTR)FileName, 0x40000000u, 0, 0i64, 4u, 0x80u, 0i64);
	v7 = FileW;
	if (FileW != (HANDLE)-1i64)
	{
		if (GetFileSizeEx(FileW, a1 + 5))
		{
			if (a1[5].QuadPart == a2.QuadPart)
			{
			LABEL_12:
				CloseHandle(v7);
				return v5;
			}
			if (SetFilePointerEx(v7, a2, 0i64, 0) && SetEndOfFile(v7))
			{
				a1[5] = a2;
				goto LABEL_12;
			}
		}
		LastError = GetLastError();
		if (LastError > 0)
			v5 = (unsigned __int16)LastError | 0x80070000;
		else
			v5 = LastError;
		goto LABEL_12;
	}
	result = GetLastError();
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}
// 1401D4814: variable 'v4' is possibly undefined
// 1401D47D0: using guessed type int FileName[132];

