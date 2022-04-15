#include "../winhttp.h"

//----- (00000001407A96A0) ----------------------------------------------------
int* __fastcall sub_1407A96A0(__int64 a1, int* a2, int a3)
{
	int* result; // rax
	int v5; // r8d
	struct tagRECT Rect; // [rsp+20h] [rbp-18h] BYREF

	if (*(_DWORD*)(a1 + 436340))
	{
		GetClientRect(*(HWND*)(a1 + 16), &Rect);
		result = a2;
		v5 = (Rect.right + Rect.left) >> 1;
		a2[1] = (Rect.bottom + Rect.top) >> 1;
		*a2 = v5;
	}
	else
	{
		*a2 = (__int16)a3;
		a2[1] = SHIWORD(a3);
		return a2;
	}
	return result;
}

