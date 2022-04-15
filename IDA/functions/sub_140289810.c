#include "../winhttp.h"

//----- (0000000140289810) ----------------------------------------------------
_BOOL8 __fastcall sub_140289810(__int64 a1)
{
	_BOOL8 result; // rax
	HWND v2; // rcx
	WINDOWPLACEMENT wndpl; // [rsp+20h] [rbp-48h] BYREF

	result = 0;
	if (*(int*)(a1 + 64) >= 1)
	{
		v2 = *(HWND*)(a1 + 48);
		if (!v2)
			return 1;
		wndpl.length = 44;
		if (!GetWindowPlacement(v2, &wndpl) || (wndpl.showCmd & 0xFFFFFFFD) != 0)
			return 1;
	}
	return result;
}

