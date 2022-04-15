#include "../winhttp.h"

//----- (00000001402B8380) ----------------------------------------------------
_BOOL8 __fastcall sub_1402B8380(__int64 a1, __int64 a2)
{
	__int64 v2; // rcx
	unsigned __int16* v3; // rdx
	_BOOL8 result; // rax

	result = 0;
	if (*(_DWORD*)(a1 + 8) == *(_DWORD*)(a2 + 8)
		&& *(float*)(a2 + 12) == *(float*)(a1 + 12)
		&& *(_DWORD*)(a1 + 16) == *(_DWORD*)(a2 + 16))
	{
		v2 = *(_QWORD*)a1;
		v3 = *(unsigned __int16**)a2;
		if ((unsigned __int16*)v2 == v3 || !(unsigned int)sub_14018E2C0(v2, v3))
			return 1;
	}
	return result;
}

