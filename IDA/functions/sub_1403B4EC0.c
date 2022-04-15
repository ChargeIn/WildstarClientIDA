#include "../winhttp.h"

//----- (00000001403B4EC0) ----------------------------------------------------
_BOOL8 __fastcall sub_1403B4EC0(__int64 a1)
{
	_DWORD* v1; // rax
	unsigned int v2; // ecx
	int v3; // edx
	_BOOL8 result; // rax

	v1 = *(_DWORD**)(a1 + 112);
	v2 = v1[31];
	result = v2 <= 7 && (v3 = 133, _bittest(&v3, v2)) || v1[6] == 3 && !v1[39] && ((v2 - 4) & 0xFFFFFFFB) == 0;
	return result;
}

