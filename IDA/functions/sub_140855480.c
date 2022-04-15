#include "../winhttp.h"

//----- (0000000140855480) ----------------------------------------------------
char __fastcall sub_140855480(__int64 a1, float a2, __int64 a3)
{
	__int64 v4; // rdx
	__int64 v5; // r8

	v4 = *(_QWORD*)(a3 + 388);
	v5 = __PAIR64__(*(_DWORD*)(a3 + 392), LODWORD(a2));
	if (*(_BYTE*)(a1 + 26))
		return sub_140851130((__int64*)a1, v4, v5, a3);
	else
		return sub_140850F60((__int64*)a1, v4, v5, a3);
}

