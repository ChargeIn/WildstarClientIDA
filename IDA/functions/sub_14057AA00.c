#include "../winhttp.h"

//----- (000000014057AA00) ----------------------------------------------------
__int64 __fastcall sub_14057AA00(unsigned int* a1)
{
	__int64 v2; // rax
	int v3; // ebx
	int v4; // esi
	__int64 v5; // rax
	int v6; // ebp
	__int64 v7; // rax

	v2 = sub_1401FCF20(a1[1]);
	LOWORD(v3) = 0;
	if (v2)
		v4 = *(_DWORD*)(v2 + 12);
	else
		LOWORD(v4) = 0;
	v5 = sub_1401FCF20(a1[2]);
	if (v5)
		v6 = *(_DWORD*)(v5 + 12);
	else
		LOWORD(v6) = 0;
	v7 = sub_1401FCF20(a1[3]);
	if (v7)
		v3 = *(_DWORD*)(v7 + 12);
	return v4 & 0x3FF | ((v6 & 0x3FF | ((v3 & 0x3FF | 0xFFFFF800) << 10)) << 10);
}

