#include "../winhttp.h"

//----- (0000000140552930) ----------------------------------------------------
_BOOL8 __fastcall sub_140552930(__int64 a1)
{
	unsigned int* v2; // rcx
	int v3; // eax
	_BOOL8 result; // rax

	result = 0;
	if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(a1 + 8)) == 4
		|| (v2 = *(unsigned int**)(a1 + 8), (v2[3] & 0x4000) == 0)
		&& ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, *v2) != 2
			|| (*(_DWORD*)(*(_QWORD*)(a1 + 8) + 12i64) & 0x8000) == 0))
	{
		v3 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(a1 + 8));
		if (((v3 - 1) & 0xFFFFFFFC) == 0 && v3 != 3)
			return 1;
	}
	return result;
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

