#include "../winhttp.h"

//----- (000000014088CAC0) ----------------------------------------------------
void __fastcall sub_14088CAC0(__int64 a1, int a2)
{
	__int64 v2; // rax

	v2 = *(_QWORD*)(a1 + 24);
	if (v2 && (*(_BYTE*)(v2 + 98) & 1) != 0 && (*(_BYTE*)(a1 + 60) & 4) == 0)
		sub_14088E200(a1, a2 - *(_DWORD*)(a1 + 8));
	else
		sub_14088D540(a1);
}

