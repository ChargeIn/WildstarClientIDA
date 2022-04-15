#include "../winhttp.h"

//----- (00000001401D48F0) ----------------------------------------------------
__int64 __fastcall sub_1401D48F0(__int64 a1, unsigned __int64* a2, __int64 a3)
{
	HANDLE FirstFileW; // rsi
	signed int LastError; // eax
	unsigned int v7; // ebx
	unsigned __int64 v8; // rax
	struct _WIN32_FIND_DATAW FindFileData; // [rsp+30h] [rbp-478h] BYREF
	int FileName[132]; // [rsp+280h] [rbp-228h] BYREF

	sub_1401C0D10(*(_QWORD*)(a1 + 8), FileName, a3, a1 + 16);
	FirstFileW = FindFirstFileW((LPCWSTR)FileName, &FindFileData);
	if (FirstFileW == (HANDLE)-1i64)
	{
		LastError = GetLastError();
		v7 = LastError;
		if (LastError > 0)
			v7 = (unsigned __int16)LastError | 0x80070000;
	}
	else if ((FindFileData.dwFileAttributes & 0x10) != 0)
	{
		v7 = -2147024629;
	}
	else
	{
		v8 = __PAIR64__(FindFileData.nFileSizeHigh, FindFileData.nFileSizeLow);
		*(_QWORD*)(a1 + 40) = __PAIR64__(FindFileData.nFileSizeHigh, FindFileData.nFileSizeLow);
		if (a2)
			*a2 = v8;
		v7 = 0;
	}
	FindClose(FirstFileW);
	return v7;
}
// 1401D48F0: using guessed type int FileName[132];

