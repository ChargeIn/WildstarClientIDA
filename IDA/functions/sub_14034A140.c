#include "../winhttp.h"

//----- (000000014034A140) ----------------------------------------------------
__int64 __fastcall sub_14034A140(__int64 a1, _QWORD* a2)
{
	unsigned int v3; // edx

	if (!a2 || !*a2)
		return 2147942487i64;
	sub_140349890(a2, (_QWORD*)(a1 + 24));
	v3 = *(_DWORD*)(a1 + 8);
	if (v3 != -2147483638)
		sub_140349B20((__int64*)(a1 + 24), v3);
	return 0i64;
}

