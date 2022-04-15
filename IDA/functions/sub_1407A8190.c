#include "../winhttp.h"

//----- (00000001407A8190) ----------------------------------------------------
SHORT __fastcall sub_1407A8190(__int64 a1)
{
	int v2; // ebx
	SHORT result; // ax
	int v4; // ebx

	v2 = 0;
	if (GetAsyncKeyState(18) < 0)
		v2 = 4;
	if ((GetAsyncKeyState(17) & 0x8000) != 0)
		v2 |= 2u;
	result = GetAsyncKeyState(16);
	if ((result & 0x8000) != 0)
		v2 |= 1u;
	v4 = *(_DWORD*)(a1 + 100) & v2;
	if (*(_DWORD*)(a1 + 96) != v4)
		*(_DWORD*)(a1 + 96) = v4;
	return result;
}

