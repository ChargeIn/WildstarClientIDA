#include "../winhttp.h"

//----- (0000000140792D40) ----------------------------------------------------
__int64 __fastcall sub_140792D40(__int64 a1)
{
	__int64 v2; // r8
	__int64 result; // rax

	sub_140792BA0((_QWORD*)a1, 1);
	v2 = *(_QWORD*)(a1 + 16);
	if (*(_DWORD*)(v2 - 8) == 6 && *(_BYTE*)(*(_QWORD*)(v2 - 16) + 10i64))
	{
		result = 1i64;
		*(_QWORD*)v2 = *(_QWORD*)(a1 + 120);
		*(_DWORD*)(v2 + 8) = *(_DWORD*)(a1 + 128);
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		sub_1400589C0(a1, -1);
		return 1i64;
	}
	return result;
}

