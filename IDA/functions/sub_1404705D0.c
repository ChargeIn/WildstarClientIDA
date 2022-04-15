#include "../winhttp.h"

//----- (00000001404705D0) ----------------------------------------------------
__int64 __fastcall sub_1404705D0(_DWORD* a1, int a2, int a3, _DWORD* a4)
{
	int v7; // edi
	int v8; // ebx
	int v9; // eax

	v7 = a1[110] == 10 || a1[111] == 10;
	v8 = a1[1058];
	v9 = sub_14047BBA0(a1);
	return sub_1401DB470(a2, v8, v9, a3, v7, a4);
}

