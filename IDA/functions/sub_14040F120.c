#include "../winhttp.h"

//----- (000000014040F120) ----------------------------------------------------
_BOOL8 __fastcall sub_14040F120(unsigned int a1)
{
	__int64 v1; // rax
	int v2; // ecx

	v1 = sub_1402479C0(a1);
	if (v1 && (v2 = *(_DWORD*)(v1 + 36), (v2 & 4) != 0) && (v2 & 0x200) != 0)
		return (*(_BYTE*)(v1 + 48) & 0x7F) != 0;
	else
		return 0i64;
}

