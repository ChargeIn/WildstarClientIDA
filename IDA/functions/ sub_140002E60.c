#include "../winhttp.h"

//----- (0000000140002E60) ----------------------------------------------------
__int64 __fastcall sub_140002E60(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax

	if ((unsigned int)(*(_DWORD*)(a1 + 64) - 3) > 1 || !(unsigned int)sub_140002D40(a1))
		return 0i64;
	v2 = *(_QWORD*)(a1 + 96);
	if (*(_DWORD*)(v2 + 12) != *(_DWORD*)(v2 + 8))
	{
		if (*(_DWORD*)(a1 + 12) && !*(_DWORD*)(a1 + 16))
		{
			BinkSetWillLoop(v2, 1i64);
			*(_DWORD*)(a1 + 16) = 1;
		}
		return 0i64;
	}
	result = 0i64;
	if (*(_DWORD*)(a1 + 12))
		*(_DWORD*)(a1 + 16) = 0;
	else
		*(_DWORD*)(a1 + 64) = 6;
	return result;
}
// 140959BF8: using guessed type __int64 __fastcall BinkSetWillLoop(_QWORD, _QWORD);

