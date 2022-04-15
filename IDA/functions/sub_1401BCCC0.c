#include "../winhttp.h"

//----- (00000001401BCCC0) ----------------------------------------------------
__int64 __fastcall sub_1401BCCC0(__int64 a1, __int64 a2, __int64 a3)
{
	HANDLE FirstFileW; // rsi
	signed int LastError; // eax
	unsigned int v6; // ebx
	unsigned __int64 v7; // rcx
	struct _WIN32_FIND_DATAW FindFileData; // [rsp+40h] [rbp-488h] BYREF
	WCHAR FileName[264]; // [rsp+290h] [rbp-238h] BYREF

	sub_14001B370(FileName, 260i64, L"%s\\%s", a1 + 8, a2);
	FirstFileW = FindFirstFileW(FileName, &FindFileData);
	if (FirstFileW == (HANDLE)-1i64)
	{
		LastError = GetLastError();
		v6 = LastError;
		if (LastError > 0)
			v6 = (unsigned __int16)LastError | 0x80070000;
	}
	else if ((FindFileData.dwFileAttributes & 0x10) != 0)
	{
		v6 = -2147024629;
	}
	else
	{
		v6 = 0;
		if (a3)
		{
			*(FILETIME*)a3 = FindFileData.ftLastWriteTime;
			v7 = __PAIR64__(FindFileData.nFileSizeHigh, FindFileData.nFileSizeLow);
			*(_QWORD*)(a3 + 16) = __PAIR64__(FindFileData.nFileSizeHigh, FindFileData.nFileSizeLow);
			*(_QWORD*)(a3 + 8) = v7;
			*(_QWORD*)(a3 + 24) = 0i64;
			*(_QWORD*)(a3 + 32) = 0i64;
			*(_QWORD*)(a3 + 40) = 0i64;
		}
	}
	FindClose(FirstFileW);
	return v6;
}
// 140A47588: using guessed type wchar_t aSS_13[6];

