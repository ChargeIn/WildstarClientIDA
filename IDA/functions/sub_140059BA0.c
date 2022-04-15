#include "../winhttp.h"

//----- (0000000140059BA0) ----------------------------------------------------
__int64 __fastcall sub_140059BA0(__int64 a1, __int64 a2)
{
	int v3; // edx
	char* v4; // rax

	if (*(_BYTE*)(a2 + 10))
	{
		*(_QWORD*)(a1 + 48) = -1i64;
		*(_QWORD*)(a1 + 32) = aC;
		*(_QWORD*)(a1 + 24) = aC_0;
	}
	else
	{
		*(_QWORD*)(a1 + 32) = *(_QWORD*)(*(_QWORD*)(a2 + 32) + 64i64) + 32i64;
		v3 = *(_DWORD*)(*(_QWORD*)(a2 + 32) + 96i64);
		*(_DWORD*)(a1 + 48) = v3;
		v4 = aLua;
		*(_DWORD*)(a1 + 52) = *(_DWORD*)(*(_QWORD*)(a2 + 32) + 100i64);
		if (!v3)
			v4 = aMain;
		*(_QWORD*)(a1 + 24) = v4;
	}
	return sub_14005B160((_BYTE*)(a1 + 56), *(char**)(a1 + 32), 0x3Cui64);
}

