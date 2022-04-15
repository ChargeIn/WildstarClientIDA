#include "../winhttp.h"

//----- (0000000140450AB0) ----------------------------------------------------
__int64 __fastcall sub_140450AB0(__int64 a1, __int64 a2)
{
	unsigned int v2; // ecx
	unsigned int v3; // edx

	v2 = *(_DWORD*)(*(_QWORD*)a1 + 8i64);
	v3 = *(_DWORD*)(*(_QWORD*)a2 + 8i64);
	if (v2 >= v3)
		return v2 > v3;
	else
		return 0xFFFFFFFFi64;
}

