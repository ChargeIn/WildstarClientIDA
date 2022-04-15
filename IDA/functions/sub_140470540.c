#include "../winhttp.h"

//----- (0000000140470540) ----------------------------------------------------
__int64 __fastcall sub_140470540(_DWORD* a1, int a2)
{
	int v4; // ebp
	int v5; // edi
	int v6; // ebx
	int v7; // eax

	v4 = a1[110] == 10 || a1[111] == 10;
	v5 = a1[1058];
	v6 = sub_140467E40((__int64)a1);
	v7 = sub_14047BBA0(a1);
	return sub_1401DB470(a2, v5, v7, v6, v4, 0i64);
}

