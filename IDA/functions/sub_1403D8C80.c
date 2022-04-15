#include "../winhttp.h"

//----- (00000001403D8C80) ----------------------------------------------------
_BOOL8 __fastcall sub_1403D8C80(__int64 a1)
{
	int v1; // eax
	_BOOL8 result; // rax

	result = 0;
	if (*(_QWORD*)a1)
	{
		v1 = *(_DWORD*)(a1 + 8);
		if (v1 < 15 || v1 == 15 && (*(_DWORD*)(a1 + 16) || *(_DWORD*)(a1 + 12) == 1 || *(_DWORD*)(a1 + 20)))
			return 1;
	}
	return result;
}

