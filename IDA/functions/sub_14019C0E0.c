#include "../winhttp.h"

//----- (000000014019C0E0) ----------------------------------------------------
__int64 __fastcall sub_14019C0E0(__int64 a1, unsigned __int8* a2)
{
	unsigned __int8 v2; // r8
	unsigned __int8 v3; // r11
	unsigned __int8 v4; // r10
	unsigned __int8 v5; // cl
	__int64 result; // rax

	v2 = *(_BYTE*)(a1 + 38);
	v3 = *(_BYTE*)(a1 + 37);
	v4 = *a2;
	v5 = v3;
	if (v2 < *a2)
		v4 = v2;
	result = v4;
	if (v3 < v4)
		v5 = v4;
	*a2 = v5;
	return result;
}

