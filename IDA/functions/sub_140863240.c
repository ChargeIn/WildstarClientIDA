#include "../winhttp.h"

//----- (0000000140863240) ----------------------------------------------------
char __fastcall sub_140863240(__int64 a1)
{
	__int64 v1; // rax

	v1 = *(_QWORD*)(a1 + 1056);
	if (v1)
		LOBYTE(v1) = (*(_BYTE*)(v1 + 91) & 4) != 0;
	return v1;
}

