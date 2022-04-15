#include "../winhttp.h"

//----- (0000000140824550) ----------------------------------------------------
HMODULE __fastcall sub_140824550(const WCHAR* a1, int a2, int a3)
{
	DWORD LastError; // eax
	HMODULE Library; // [rsp+20h] [rbp-28h]
	WCHAR* lpLibFileName; // [rsp+28h] [rbp-20h]
	int v7; // [rsp+30h] [rbp-18h]
	int v8; // [rsp+34h] [rbp-14h] BYREF
	int* v9; // [rsp+38h] [rbp-10h]

	Library = 0i64;
	SetLastError(0);
	lpLibFileName = sub_1408259C0(a1, a2);
	if (lpLibFileName)
	{
		v8 = 0;
		if (a3)
			v9 = &v8;
		else
			v9 = 0i64;
		v7 = sub_140825B80(lpLibFileName, v9);
		if (v7 && a3 && !v8)
		{
			SetLastError(0x80092009);
			v7 = 0;
		}
		if (v7 || (LastError = GetLastError(), (unsigned int)sub_1408267D0(lpLibFileName, LastError)))
			Library = LoadLibraryExW(lpLibFileName, 0i64, a2 & 0xFFFFE0F7);
		LocalFree(lpLibFileName);
	}
	else
	{
		SetLastError(0x7Eu);
	}
	return Library;
}

