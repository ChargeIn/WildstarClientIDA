#include "../winhttp.h"

//----- (000000014085EAC0) ----------------------------------------------------
__int64 __fastcall sub_14085EAC0(__int64 a1, int* a2)
{
	char v2; // al
	__int64 result; // rax
	char v6; // cl
	char v7; // dl

	v2 = *(_BYTE*)(a1 + 380);
	if ((v2 & 0x10) != 0)
	{
		*a2 = *(unsigned __int8*)(a1 + 379) >> 5;
		return *(_BYTE*)(a1 + 380) & 0xF;
	}
	else
	{
		*(_BYTE*)(a1 + 380) = v2 | 0x10;
		result = sub_14084ECE0(*(_QWORD*)(a1 + 160), a2);
		v6 = *(_BYTE*)a2;
		v7 = *(_BYTE*)(a1 + 379);
		*(_BYTE*)(a1 + 380) &= 0xF0u;
		*(_BYTE*)(a1 + 379) = (32 * v6) | v7 & 0x1F;
		*(_BYTE*)(a1 + 380) |= result & 0xF;
	}
	return result;
}

