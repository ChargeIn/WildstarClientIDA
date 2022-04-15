#include "../winhttp.h"

//----- (00000001400E13C0) ----------------------------------------------------
_DWORD* __fastcall sub_1400E13C0(__int64 a1, _DWORD* a2)
{
	int v4; // ebp
	int v5; // r14d
	int v6; // esi
	int v7; // eax

	if (*(_BYTE*)(a1 + 992))
		v4 = *(_DWORD*)(a1 + 996);
	else
		v4 = sub_14010D1C0(a1);
	if (*(_BYTE*)(a1 + 992))
		v5 = *(_DWORD*)(a1 + 1008);
	else
		v5 = sub_14010D2F0(a1);
	if (*(_BYTE*)(a1 + 992))
		v6 = *(_DWORD*)(a1 + 1000);
	else
		v6 = sub_14010CF80(a1);
	if (*(_BYTE*)(a1 + 992))
		v7 = *(_DWORD*)(a1 + 1004);
	else
		v7 = sub_14010D0A0(a1);
	*a2 = v6 + v7;
	a2[1] = v5 + v4;
	return a2;
}

