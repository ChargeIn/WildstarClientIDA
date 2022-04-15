#include "../winhttp.h"

//----- (000000014077FD20) ----------------------------------------------------
void __fastcall sub_14077FD20(_DWORD* a1, unsigned int a2)
{
	unsigned int v4; // edx

	v4 = *(_DWORD*)(qword_140C65898 + 32624);
	if (v4 != a1[80])
		sub_1405C7AD0((__int64)a1, v4, 0);
	sub_1405C9B90(a1, a2);
}
// 140C65898: using guessed type __int64 qword_140C65898;

