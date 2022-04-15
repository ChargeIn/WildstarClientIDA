#include "../winhttp.h"

//----- (0000000140616B80) ----------------------------------------------------
__int64 __fastcall sub_140616B80(__int64 a1)
{
	_DWORD* v1; // r11
	unsigned int v3; // ebx
	int v5; // eax

	v1 = *(_DWORD**)(a1 + 152);
	v3 = v1[1];
	if (v3 == 4 && *(_DWORD*)a1 == 1)
		return (unsigned int)v1[5];
	if (v3 <= 8)
	{
		v5 = 332;
		if (_bittest(&v5, v3))
			return (unsigned int)v1[3];
	}
	if ((unsigned int)sub_140616CF0(a1) == *(_DWORD*)(a1 + 144) && (v3 & 0xFFFFFFFA) == 0 && v3 != 4)
		return (unsigned int)v1[3];
	if (*(_DWORD*)a1 == 2)
		return (unsigned int)v1[6];
	return (unsigned int)v1[2];
}
// 140616BC0: variable 'v1' is possibly undefined

