#include "../winhttp.h"

//----- (0000000140824350) ----------------------------------------------------
HMODULE __fastcall sub_140824350(_WORD* a1, int a2)
{
	HMODULE Library; // [rsp+20h] [rbp-18h]
	WCHAR* lpLibFileName; // [rsp+28h] [rbp-10h]

	Library = 0i64;
	SetLastError(0);
	if ((unsigned int)sub_1408251D0(a1))
	{
		SetLastError(0xA0u);
	}
	else
	{
		lpLibFileName = sub_140824FE0(a1);
		if (!a1 || lpLibFileName)
			Library = LoadLibraryExW(lpLibFileName, 0i64, a2 & 0xFFFFE0F7);
		LocalFree(lpLibFileName);
	}
	return Library;
}

