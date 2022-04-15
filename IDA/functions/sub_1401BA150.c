#include "../winhttp.h"

//----- (00000001401BA150) ----------------------------------------------------
__int64 __fastcall sub_1401BA150(__int64 a1)
{
	_DWORD* v3; // rbx
	unsigned __int64 v4; // rsi
	signed int v5; // ebx
	DWORD v6; // r8d
	signed int LastError; // eax
	DWORD NumberOfBytesWritten; // [rsp+50h] [rbp+8h] BYREF

	if ((*(_BYTE*)(a1 + 16) & 2) == 0)
		return 2147942405i64;
	v3 = (_DWORD*)(a1 + 56);
	sub_1407E4830((int*)(a1 + 56), 0i64, 0x230ui64);
	*v3 = 1346454347;
	*(_DWORD*)(a1 + 60) = 1;
	*(_QWORD*)(a1 + 576) = 568i64;
	sub_1401BC800((__int64*)(a1 + 616), 0i64);
	sub_140008410(a1 + 632);
	*(_DWORD*)(a1 + 664) = 1;
	v4 = 560i64;
	if (!v3)
	{
		v5 = -2147024809;
	LABEL_15:
		CloseHandle(*(HANDLE*)(a1 + 32));
		*(_QWORD*)(a1 + 32) = -1i64;
		return (unsigned int)v5;
	}
	if (SetFilePointerEx(*(HANDLE*)(a1 + 32), 0i64, 0i64, 0))
	{
		while (1)
		{
			v6 = 0x80000000;
			if (v4 < 0x80000000)
				v6 = v4;
			if (!WriteFile(*(HANDLE*)(a1 + 32), v3, v6, &NumberOfBytesWritten, 0i64))
				break;
			v3 = (_DWORD*)((char*)v3 + NumberOfBytesWritten);
			v4 -= NumberOfBytesWritten;
			if (!v4)
				goto LABEL_10;
		}
	}
	LastError = GetLastError();
	v5 = LastError;
	if (LastError > 0)
		v5 = (unsigned __int16)LastError | 0x80070000;
	if (v5 < 0)
		goto LABEL_15;
LABEL_10:
	SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)560i64, 0i64, 0);
	SetEndOfFile(*(HANDLE*)(a1 + 32));
	return 0i64;
}

