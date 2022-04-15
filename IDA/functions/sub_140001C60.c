#include "../winhttp.h"

//----- (0000000140001C60) ----------------------------------------------------
char __fastcall sub_140001C60(__int64 a1, char a2)
{
	__int64 v2; // rax

	*(_BYTE*)(a1 + 28) &= ~8u;
	v2 = *(_QWORD*)(a1 + 32);
	*(_BYTE*)(a1 + 28) |= 8 * (a2 & 1);
	if (v2 && *(_QWORD*)(v2 + 2880) == a1)
		LOBYTE(v2) = sub_1400E8BF0(v2);
	return v2;
}

