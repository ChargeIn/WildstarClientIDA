#include "../winhttp.h"

//----- (00000001408A1C70) ----------------------------------------------------
__int64 __fastcall sub_1408A1C70(__int64 a1, _DWORD* a2, char a3, int a4)
{
	__int64 result; // rax

	*(_BYTE*)(a1 + 108) = a3;
	*(_DWORD*)(a1 + 72) = *a2;
	*(_DWORD*)(a1 + 76) = a2[1];
	*(_DWORD*)(a1 + 80) = a2[2];
	*(_DWORD*)(a1 + 84) = a2[3];
	*(_DWORD*)(a1 + 88) = a2[4];
	result = (unsigned int)a2[5];
	*(_DWORD*)(a1 + 100) = a4;
	*(_DWORD*)(a1 + 92) = result;
	if (!*(_BYTE*)(a1 + 84))
		*(_DWORD*)(a1 + 72) = 0;
	if (a3)
		*(_DWORD*)(a1 + 76) = 1065353216;
	return result;
}

