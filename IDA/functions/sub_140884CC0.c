#include "../winhttp.h"

//----- (0000000140884CC0) ----------------------------------------------------
__int64 __fastcall sub_140884CC0(_DWORD* lpParameter, __int64 a2, int a3)
{
	int v4; // ecx
	int v7; // eax

	v4 = *(_DWORD*)(a2 + 20);
	if (!v4
		|| *(_DWORD*)(a2 + 8) && *(float*)(a2 + 40) < 0.0
		|| (*(_BYTE*)(a2 + 24) & 2) != 0 && (unsigned int)(*(_DWORD*)(a2 + 44) - 1) > 0x3FF)
	{
		return 31i64;
	}
	lpParameter[66] = v4;
	lpParameter[67] = *(_DWORD*)(a2 + 40);
	v7 = *(_DWORD*)(a2 + 44);
	lpParameter[68] = a3;
	lpParameter[2] = v7;
	if ((unsigned int)sub_1408898C0((__int64)(lpParameter + 42), a2) == 1)
		return sub_1408892A0(lpParameter, (int*)(a2 + 28));
	else
		return 2i64;
}

