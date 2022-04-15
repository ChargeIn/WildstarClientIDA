#include "../winhttp.h"

//----- (000000014015EE90) ----------------------------------------------------
char __fastcall sub_14015EE90(__int64 a1, int a2, int a3)
{
	if ((*(_BYTE*)(a1 + 664) & 8) != 0)
	{
		if (*(_DWORD*)(a1 + 1040) == a2)
			return 1;
	}
	else if (*(_DWORD*)(a1 + 1040) == a2 && *(_DWORD*)(a1 + 1044) == a3)
	{
		return 1;
	}
	return 0;
}

