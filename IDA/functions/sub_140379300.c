#include "../winhttp.h"

//----- (0000000140379300) ----------------------------------------------------
__int64 __fastcall sub_140379300(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
	unsigned int v6; // edx
	__int64 result; // rax

	if (!a4)
	{
		v6 = 0;
		if (*(_DWORD*)(*(_QWORD*)(a6 + 16) + 880i64) - a5 >= 0)
			v6 = *(_DWORD*)(*(_QWORD*)(a6 + 16) + 880i64) - a5;
		return sub_140379330(a6, v6);
	}
	return result;
}

